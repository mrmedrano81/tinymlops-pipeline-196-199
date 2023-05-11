#include "main.h"
#include <stdio.h>
#include "string.h"

#include "audio_provider.h"

//#include "model_settings.h"
#include "micro_features_micro_model_settings.h"

#include "stm32746g_discovery_audio.h"
#include "stm32746g_discovery_sdram.h"


namespace {
bool g_is_audio_initialized = false;
//constexpr int kAudioCaptureBufferSize = kAudioSampleFrequency * 0.5;
constexpr int kAudioCaptureBufferSize = 8192;
int16_t g_audio_capture_buffer[kAudioCaptureBufferSize];
int16_t g_audio_output_buffer[kMaxAudioSampleSize];
int32_t g_latest_audio_timestamp = 0;

typedef enum {
  BUFFER_OFFSET_NONE = 0,
  BUFFER_OFFSET_HALF = 1,
  BUFFER_OFFSET_FULL = 2,
} BUFFER_StateTypeDef;

#define AUDIO_BLOCK_SIZE ((uint32_t)2048)
#define AUDIO_BUFFER_IN AUDIO_REC_START_ADDR /* In SDRAM */
#define AUDIO_BUFFER_OUT (AUDIO_REC_START_ADDR + (AUDIO_BLOCK_SIZE * 2)) /* In SDRAM */

volatile uint32_t g_audio_rec_buffer_state = BUFFER_OFFSET_NONE;


TfLiteStatus InitAudioRecording(tflite::ErrorReporter* error_reporter) {

  if (BSP_AUDIO_IN_OUT_Init(INPUT_DEVICE_DIGITAL_MICROPHONE_2, OUTPUT_DEVICE_HEADPHONE, 
      DEFAULT_AUDIO_IN_FREQ, DEFAULT_AUDIO_IN_BIT_RESOLUTION, DEFAULT_AUDIO_IN_CHANNEL_NBR) == AUDIO_OK) {
    BSP_LCD_Clear(LCD_COLOR_WHITE);
    BSP_LCD_SetTextColor(LCD_COLOR_BLUE);
    BSP_LCD_FillRect(0, 0, BSP_LCD_GetXSize(), 90);
    BSP_LCD_SetBackColor(LCD_COLOR_WHITE);
    BSP_LCD_SetTextColor(LCD_COLOR_GREEN);
    BSP_LCD_DisplayStringAt(0, BSP_LCD_GetYSize() - 95, (uint8_t *)"  AUDIO RECORD INIT OK  ", CENTER_MODE);
    printf("AUDIO loop from digital micro (U20 & U21 components on board) to headphone (CN10 jack connector)\n");
  }
  else {
    BSP_LCD_SetBackColor(LCD_COLOR_WHITE);
    BSP_LCD_SetTextColor(LCD_COLOR_RED);
    BSP_LCD_DisplayStringAt(0, BSP_LCD_GetYSize() - 95, (uint8_t *)"  AUDIO RECORD INIT FAIL", CENTER_MODE);
    BSP_LCD_DisplayStringAt(0, BSP_LCD_GetYSize() - 80, (uint8_t *)" Try to reset board ", CENTER_MODE);
  }

  /* Initialize SDRAM buffers */
  BSP_SDRAM_Init();
  memset((uint16_t*)AUDIO_BUFFER_IN, 0, AUDIO_BLOCK_SIZE * 2);
  memset((uint16_t*)AUDIO_BUFFER_OUT, 0, AUDIO_BLOCK_SIZE * 2);
  g_audio_rec_buffer_state = BUFFER_OFFSET_NONE;

  BSP_AUDIO_IN_SetVolume(90);

  // Start Recording.
  BSP_AUDIO_IN_Record((uint16_t*)AUDIO_BUFFER_IN, AUDIO_BLOCK_SIZE);

  // Also play results out to headphone jack.
  BSP_AUDIO_OUT_SetAudioFrameSlot(CODEC_AUDIOFRAME_SLOT_02);
  BSP_AUDIO_OUT_Play((uint16_t*)AUDIO_BUFFER_OUT, AUDIO_BLOCK_SIZE * 2);

  return kTfLiteOk;
}

void CaptureSamples(const int16_t* sample_data) {
  
  const int sample_size = AUDIO_BLOCK_SIZE / (sizeof(int16_t) * 2); // 512
  
  const int32_t time_in_ms = g_latest_audio_timestamp + (sample_size / (kAudioSampleFrequency / 1000)); // 32ms diff

  const int32_t start_sample_offset = g_latest_audio_timestamp * (kAudioSampleFrequency / 1000); // 512

  for (int i = 0; i < sample_size; ++i) {
    const int capture_index = (start_sample_offset + i) % kAudioCaptureBufferSize;
    g_audio_capture_buffer[capture_index] = (sample_data[(i * 2) + 0] / 2) + (sample_data[(i * 2) + 1] / 2);
    //g_audio_capture_buffer[capture_index] = (sample_data[i * 2]);
  }
  // This is how we let the outside world know that new audio data has arrived.
  g_latest_audio_timestamp = time_in_ms;
}

}  // namespace

// These callbacks need to be linkable symbols, because they override weak
// default versions.


void BSP_AUDIO_IN_TransferComplete_CallBack(void) {
  g_audio_rec_buffer_state = BUFFER_OFFSET_FULL;

  memcpy((uint16_t*)(AUDIO_BUFFER_OUT + (AUDIO_BLOCK_SIZE)),
         (uint16_t*)(AUDIO_BUFFER_IN + (AUDIO_BLOCK_SIZE)), AUDIO_BLOCK_SIZE);
  CaptureSamples(reinterpret_cast<int16_t*>(AUDIO_BUFFER_IN + AUDIO_BLOCK_SIZE));
  
  return;
}


void BSP_AUDIO_IN_HalfTransfer_CallBack(void) {

  g_audio_rec_buffer_state = BUFFER_OFFSET_HALF;

  memcpy((uint16_t*)(AUDIO_BUFFER_OUT), (uint16_t*)(AUDIO_BUFFER_IN), AUDIO_BLOCK_SIZE);
  CaptureSamples(reinterpret_cast<int16_t*>(AUDIO_BUFFER_IN));
  
  return;
}


// Main entry point for getting audio data.
TfLiteStatus GetAudioSamples(tflite::ErrorReporter* error_reporter,
                             int start_ms, int duration_ms,
                             int* audio_samples_size, int16_t** audio_samples) {
  if (!g_is_audio_initialized) {
    TfLiteStatus init_status = InitAudioRecording(error_reporter);
    if (init_status != kTfLiteOk) {
      return init_status;
    }
    g_is_audio_initialized = true;
  }
  // This should only be called when the main thread notices that the latest
  // audio sample data timestamp has changed, so that there's new data in the
  // capture ring buffer. The ring buffer will eventually wrap around and
  // overwrite the data, but the assumption is that the main thread is checking
  // often enough and the buffer is large enough that this call will be made
  // before that happens.
  const int start_offset = start_ms * (kAudioSampleFrequency / 1000);
  const int duration_sample_count =
      duration_ms * (kAudioSampleFrequency / 1000);
  for (int i = 0; i < duration_sample_count; ++i) {
    const int capture_index = (start_offset + i) % kAudioCaptureBufferSize;
    g_audio_output_buffer[i] = g_audio_capture_buffer[capture_index];
  }

  *audio_samples_size = kMaxAudioSampleSize;
  *audio_samples = g_audio_output_buffer;
  return kTfLiteOk;
}

int32_t LatestAudioTimestamp() { return g_latest_audio_timestamp; }