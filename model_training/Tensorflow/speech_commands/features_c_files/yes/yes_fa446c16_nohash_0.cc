/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/fa446c16_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_fa446c16_nohash_0.cc" \
 */
#include "yes_fa446c16_nohash_0.h"


const int g_yes_fa446c16_nohash_0_width = 40;
const int g_yes_fa446c16_nohash_0_height = 49;
alignas(16) const signed char g_yes_fa446c16_nohash_0_data[] = {
  9, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -12, -33, -26, 
  -128, -128, -128, -60, -128, -60, -60, -128, -50, -50, 
  12, -37, -37, -128, -128, -128, -60, -60, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -60, 
  -128, -128, -128, -128, -128, -128, -128, -77, -128, -50, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -37, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -60, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -10, 16, 44, 
  40, -128, 19, 59, 30, -128, -60, -3, 52, 21, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -12, 24, 51, 
  34, -77, 21, 30, -2, -50, -60, -16, 49, 17, 
  -37, -50, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -60, 
  -77, -128, -50, -37, -37, -128, -128, -60, -14, -77, 
  -77, -77, -50, -77, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -43, -77, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, -50, -77, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -10, 32, 
  69, 50, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -50, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  33, 21, 0, -43, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -20, 55, 42, -50, 6, 22, -12, -2, 
  60, 1, -128, -128, -128, -128, -128, -128, -128, -128, 
  122, 100, 117, 100, 121, 96, 103, 79, 75, 57, 
  59, 32, 17, -33, -50, -60, -77, -128, -77, -128, 
  -77, 50, 85, 86, 99, 87, 106, 91, 105, 87, 
  99, 62, -43, -33, 45, 29, -16, -60, -43, -50, 
  113, 88, 104, 95, 118, 85, 109, 88, 94, 83, 
  80, 77, 66, 63, 36, 24, 55, 29, 36, 24, 
  30, 70, 99, 91, 108, 84, 97, 79, 95, 87, 
  106, 84, -12, 17, 94, 69, 65, 44, -6, -18, 
  104, 77, 86, 89, 114, 92, 110, 90, 105, 91, 
  100, 87, 95, 84, 92, 80, 98, 83, 96, 84, 
  100, 92, 110, 85, 110, 90, 109, 85, 100, 84, 
  103, 80, 80, 40, 92, 81, 99, 88, 90, 42, 
  93, 64, 100, 76, 96, 69, 117, 94, 112, 90, 
  109, 88, 101, 80, 105, 85, 105, 88, 105, 89, 
  111, 91, 115, 84, 104, 89, 110, 80, 105, 84, 
  109, 86, 113, 89, 80, 70, 80, 61, 78, 57, 
  84, 43, 101, 55, 64, 88, 117, 91, 116, 82, 
  113, 79, 110, 81, 103, 82, 102, 84, 105, 87, 
  110, 90, 102, 71, 98, 74, 95, 66, 97, 77, 
  97, 72, 101, 78, 60, 21, 54, 34, 72, 72, 
  70, -26, 92, -3, 24, 66, 67, 81, 112, 85, 
  108, 83, 103, 80, 99, 76, 97, 81, 105, 85, 
  110, 65, 80, 49, 77, 48, 75, 42, 78, 56, 
  78, 59, 95, 67, 54, -128, 2, -60, 44, 22, 
  44, -128, 82, -128, 32, 32, 38, 47, 82, 80, 
  99, 74, 99, 64, 83, 62, 92, 62, 85, 63, 
  75, -128, 18, -26, 61, -1, 49, -4, 61, 13, 
  30, -16, 70, 48, 52, -128, -29, -128, -4, -50, 
  9, -128, 58, -128, -10, -77, -20, -26, 57, 38, 
  71, 44, 70, 19, 37, -6, 54, 6, 72, 25, 
  4, -128, -3, -77, 47, -43, -1, -128, -37, -128, 
  -128, -16, 59, 46, 61, -128, -128, -128, -128, -128, 
  -33, -4, 64, -128, -77, -128, -50, -128, 44, -33, 
  51, -26, 40, -2, 53, 6, 63, -29, 54, -43, 
  -37, -128, -60, -128, 36, -50, -77, -128, -128, -128, 
  -128, 16, 59, 44, 83, -128, 42, -77, -128, -128, 
  -60, -128, 19, -128, -128, -128, -128, -128, -77, -128, 
  -3, -128, 0, -128, -6, -128, 9, -128, 21, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -50, 45, 32, 78, -8, 62, 27, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 16, -128, -37, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -50, 20, -128, 50, -77, 52, 38, 80, 65, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, 21, -128, 27, -26, 77, 62, 94, 77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -128, -43, -128, 
  -128, -128, -128, -128, -77, 18, 83, 69, 94, 72, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, 26, 54, 30, 89, 65, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, -128, -128, -43, 61, 37, 73, 71, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -18, -128, -12, 39, 66, 36, 69, 49, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -3, -77, -12, 29, 60, 44, 71, 13, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -43, 38, -33, 54, 45, 41, 12, 74, 46, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, 34, 14, 34, 29, 67, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -8, -128, 48, -50, 29, -2, 21, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -14, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
