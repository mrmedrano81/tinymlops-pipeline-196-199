/* Copyright 2020 The TensorFlow Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
==============================================================================*/

#include "main.h"
#include "main_functions.h"

#include "no_3efef882_nohash_1.h"
#include "no_beb458a4_nohash_4.h"
#include "no_03401e93_nohash_0.h"
#include "no_a6f2fd71_nohash_2.h"
#include "no_893705bb_nohash_0.h"
#include "no_5c8af87a_nohash_2.h"
#include "no_8c7f81df_nohash_1.h"
#include "no_42beb5eb_nohash_0.h"
#include "no_87070229_nohash_1.h"
#include "no_e0c782d5_nohash_1.h"

//#include "audio_provider.h"
//#include "feature_provider.h"
//#include "recognize_commands.h"
//#include "command_responder.h"

//#include "ds_cnn_quantized_data.h"
//#include "model_settings.h"

#include "micro_features_model.h"
#include "micro_features_micro_model_settings.h"

#include "tensorflow/lite/micro/micro_mutable_op_resolver.h"
//#include "tensorflow/lite/micro/all_ops_resolver.h"
#include "tensorflow/lite/micro/micro_error_reporter.h"
#include "tensorflow/lite/micro/micro_interpreter.h"
#include "tensorflow/lite/schema/schema_generated.h"
#include "tensorflow/lite/version.h"

// Globals, used for compatibility with Arduino-style sketches.
namespace {
tflite::ErrorReporter* error_reporter = nullptr;
const tflite::Model* model = nullptr;
tflite::MicroInterpreter* interpreter = nullptr;
TfLiteTensor* model_input = nullptr;
int8_t loop_number = 0;

const int8_t* features_data_0;
const int8_t* features_data_1;
const int8_t* features_data_2;
const int8_t* features_data_3;
const int8_t* features_data_4;
const int8_t* features_data_5;
const int8_t* features_data_6;
const int8_t* features_data_7;
const int8_t* features_data_8;
const int8_t* features_data_9;

// Create an area of memory to use for input, output, and intermediate arrays.
// The size of this will depend on the model you're using, and may need to be
// determined by experimentation.
constexpr int kTensorArenaSize = 12 * 1024;
__attribute__((aligned(16)))uint8_t tensor_arena[kTensorArenaSize];
int8_t feature_buffer[kFeatureElementCount];
int8_t* model_input_buffer = nullptr;
}  // namespace

void setup() {

  static tflite::MicroErrorReporter micro_error_reporter;
  error_reporter = &micro_error_reporter;

  //model = tflite::GetModel(g_ds_cnn_quantized_data);
  model = tflite::GetModel(g_model);

  if (model->version() != TFLITE_SCHEMA_VERSION) {
    TF_LITE_REPORT_ERROR(error_reporter,
                         "Model provided is schema version %d not equal "
                         "to supported version %d.",
                         model->version(), TFLITE_SCHEMA_VERSION);
    return;
  }

  // MICROSPEECH EXAMPLE NEW
  // MICRO MUTABLE OP RESOLVER
  
  static tflite::MicroMutableOpResolver<4> micro_op_resolver(error_reporter);
  if (micro_op_resolver.AddConv2D() != kTfLiteOk) {
    return;
  }
  if (micro_op_resolver.AddFullyConnected() != kTfLiteOk) {
    return;
  }
  if (micro_op_resolver.AddSoftmax() != kTfLiteOk) {
    return;
  }
  if (micro_op_resolver.AddReshape() != kTfLiteOk) {
    return;
  }
  

  // Build an interpreter to run the model with.
  static tflite::MicroInterpreter static_interpreter(model, micro_op_resolver, tensor_arena, kTensorArenaSize, error_reporter);
  interpreter = &static_interpreter;

  // Allocate memory from the tensor_arena for the model's tensors.
  TfLiteStatus allocate_status = interpreter->AllocateTensors();
  if (allocate_status != kTfLiteOk) {
    TF_LITE_REPORT_ERROR(error_reporter, "AllocateTensors() failed");
    return;
  }

  // Get information about the memory area to use for the model's input.
  model_input = interpreter->input(0);

  if ((model_input->dims->size != 2) || (model_input->dims->data[0] != 1) ||
      (model_input->dims->data[1] !=
       (kFeatureSliceCount * kFeatureSliceSize)) ||
      (model_input->type != kTfLiteInt8)) {
    TF_LITE_REPORT_ERROR(error_reporter, "Bad input tensor parameters in model");

    return;
  }
  
  //TF_LITE_REPORT_ERROR(error_reporter, "model_input->dims->size: %d", model_input->dims->size);
  //TF_LITE_REPORT_ERROR(error_reporter, "model_input->dims->data[0]: %d", model_input->dims->data[0]);
  //TF_LITE_REPORT_ERROR(error_reporter, "model_input->dims->data[1]: %d", model_input->dims->data[1]);
  //TF_LITE_REPORT_ERROR(error_reporter, "(kFeatureSliceCount * kFeatureSliceSize): %d", (kFeatureSliceCount * kFeatureSliceSize));
  //TF_LITE_REPORT_ERROR(error_reporter, "model_input->type: %d", model_input->type);
  TF_LITE_REPORT_ERROR(error_reporter, "<------- Loop ------->");
}

// The name of this function is important for Arduino compatibility.
void loop() {

if (loop_number == 0){
  const int8_t* features_data_0 = g_no_87070229_nohash_1_data;
  for (size_t i = 0; i < model_input->bytes; ++i){
      model_input->data.int8[i] = features_data_0[i];
  }
}
if (loop_number == 1){
  const int8_t* features_data_1 = g_no_5c8af87a_nohash_2_data;
  for (size_t i = 0; i < model_input->bytes; ++i){
      model_input->data.int8[i] = features_data_1[i];
  }
}
if (loop_number == 2){
  const int8_t* features_data_2 = g_no_03401e93_nohash_0_data;
  for (size_t i = 0; i < model_input->bytes; ++i){
      model_input->data.int8[i] = features_data_2[i];
  }
}
if (loop_number == 3){
  const int8_t* features_data_3 = g_no_beb458a4_nohash_4_data;
  for (size_t i = 0; i < model_input->bytes; ++i){
      model_input->data.int8[i] = features_data_3[i];
  }
}
if (loop_number == 4){
  const int8_t* features_data_4 = g_no_893705bb_nohash_0_data;
  for (size_t i = 0; i < model_input->bytes; ++i){
      model_input->data.int8[i] = features_data_4[i];
  }
}
if (loop_number == 5){
  const int8_t* features_data_5 = g_no_e0c782d5_nohash_1_data;
  for (size_t i = 0; i < model_input->bytes; ++i){
      model_input->data.int8[i] = features_data_5[i];
  }
}
if (loop_number == 6){
  const int8_t* features_data_6 = g_no_a6f2fd71_nohash_2_data;
  for (size_t i = 0; i < model_input->bytes; ++i){
      model_input->data.int8[i] = features_data_6[i];
  }
}
if (loop_number == 7){
  const int8_t* features_data_7 = g_no_8c7f81df_nohash_1_data;
  for (size_t i = 0; i < model_input->bytes; ++i){
      model_input->data.int8[i] = features_data_7[i];
  }
}
if (loop_number == 8){
  const int8_t* features_data_8 = g_no_3efef882_nohash_1_data;
  for (size_t i = 0; i < model_input->bytes; ++i){
      model_input->data.int8[i] = features_data_8[i];
  }
}
if (loop_number == 9){
  const int8_t* features_data_9 = g_no_42beb5eb_nohash_0_data;
  for (size_t i = 0; i < model_input->bytes; ++i){
      model_input->data.int8[i] = features_data_9[i];
  }
}

   
   // Run the model on this input and make sure it succeeds.
  TfLiteStatus invoke_status = interpreter->Invoke();
  if (invoke_status != kTfLiteOk) {
    TF_LITE_REPORT_ERROR(error_reporter, "Invoke failed");
    return;
  }

  // Get the output from the model
  TfLiteTensor* output = interpreter->output(0);

  // There are four possible classes in the output, each with a score.
  const int kSilenceIndex = 0;
  const int kUnknownIndex = 1;
  const int kYesIndex = 2;
  const int kNoIndex = 3;

  // Make sure that the expected "Yes" score is higher than the other classes.
  uint8_t silence_score = output->data.int8[kSilenceIndex] + 128;
  uint8_t unknown_score = output->data.int8[kUnknownIndex] + 128;
  uint8_t yes_score = output->data.int8[kYesIndex] + 128;
  uint8_t no_score = output->data.int8[kNoIndex] + 128;

  //TF_LITE_REPORT_ERROR(error_reporter, "silence %d", silence_score);
  //TF_LITE_REPORT_ERROR(error_reporter, "unknown %d", unknown_score);
  //TF_LITE_REPORT_ERROR(error_reporter, "yes %d", yes_score);
  //TF_LITE_REPORT_ERROR(error_reporter, "no %d", no_score);
  TF_LITE_REPORT_ERROR(error_reporter, "[%d,%d,%d,%d]", silence_score, unknown_score, yes_score, no_score);
  
  loop_number++;
}