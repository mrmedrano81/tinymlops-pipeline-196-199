/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/837a0f64_nohash_2.wav" \
 * --output_c_file="features_c_files/yes/yes_837a0f64_nohash_2.cc" \
 */
#include "yes_837a0f64_nohash_2.h"


const int g_yes_837a0f64_nohash_2_width = 40;
const int g_yes_837a0f64_nohash_2_height = 49;
alignas(16) const signed char g_yes_837a0f64_nohash_2_data[] = {
  -18, -26, -60, -37, -50, -60, -33, -26, -26, -50, 
  -60, -128, -50, -50, -50, -60, -128, -128, -60, -60, 
  -60, -50, -60, -128, -128, -60, -50, -128, -128, -60, 
  -128, -128, -128, -128, -60, -60, -60, -60, -128, -128, 
  19, -14, -60, -128, -50, -29, -50, -29, -37, -37, 
  -60, -128, -50, -50, -60, -50, -60, -60, -37, -60, 
  -50, -50, -128, -50, -37, -60, -60, -128, -50, -60, 
  -37, -50, -128, -60, -60, -50, -50, -128, -60, -128, 
  96, 90, 112, 95, 114, 95, 111, 93, 103, 81, 
  74, 22, -37, -128, -26, -50, -60, -50, -26, -37, 
  -50, -128, -128, -128, -37, -8, 36, 67, 85, 82, 
  93, 90, 95, 37, 22, -77, -37, -29, 34, 29, 
  115, 96, 118, 94, 115, 92, 104, 82, 92, 79, 
  79, 61, 59, 4, -12, -16, 9, -23, -12, 8, 
  4, -23, 9, 15, 37, 54, 90, 74, 89, 85, 
  100, 77, 96, 66, 60, -37, 15, 59, 105, 89, 
  122, 102, 120, 105, 127, 100, 122, 93, 112, 94, 
  104, 80, 65, 62, 65, 60, 75, 74, 94, 97, 
  121, 100, 120, 100, 121, 101, 118, 97, 118, 93, 
  117, 93, 116, 90, 82, 69, 77, 82, 115, 95, 
  103, 82, 110, 92, 114, 93, 117, 81, 113, 89, 
  113, 84, 95, 72, 79, 58, 84, 87, 115, 94, 
  107, 90, 105, 87, 108, 81, 106, 86, 109, 84, 
  103, 78, 105, 84, 99, 62, 73, 79, 105, 83, 
  99, 76, 101, 66, 84, 87, 108, 94, 112, 81, 
  109, 88, 95, 73, 91, 66, 92, 84, 111, 95, 
  112, 70, 97, 74, 102, 58, 99, 80, 98, 49, 
  77, 58, 92, 84, 88, 59, 67, 65, 100, 77, 
  84, 62, 87, 47, 69, 49, 98, 91, 99, 66, 
  88, 74, 99, 84, 99, 79, 98, 91, 116, 81, 
  80, 61, 83, 77, 91, 42, 65, 27, 54, 43, 
  82, 41, 91, 68, 75, 42, 66, 18, 80, 57, 
  74, 42, 71, -77, 51, 49, 91, 75, 79, 53, 
  77, 52, 87, 65, 95, 77, 92, 67, 104, 67, 
  37, -8, 64, 35, 72, 15, 38, -77, 18, 16, 
  78, 46, 93, 80, 84, 24, 46, -37, 49, 37, 
  60, -20, 40, -128, -33, -128, 47, -128, 76, 34, 
  56, 2, 66, 6, 71, 44, 71, 35, 46, -128, 
  -2, -128, 4, -128, 31, -128, -128, -128, 21, 8, 
  37, -128, 44, 15, 80, 35, 11, -77, -29, -128, 
  42, -128, -10, -128, -128, -128, -128, -128, 36, -60, 
  25, -14, 45, 20, 52, 10, 62, -128, -128, -128, 
  21, -128, 11, -43, 23, -128, -6, -128, 52, 77, 
  102, 71, 100, 85, 120, 100, 119, 84, 85, 63, 
  -128, -128, -26, -128, -128, -128, -128, -128, -43, -128, 
  -128, -128, 13, -20, 37, -23, 62, -6, -128, -128, 
  -8, -128, -37, -128, 16, -128, 20, 9, 49, 62, 
  90, 68, 94, 83, 114, 93, 112, 83, 99, 81, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -23, -128, -20, -128, 17, -77, -2, -128, -50, -128, 
  -77, -128, -29, -128, -128, -128, 23, -33, -7, 31, 
  77, 54, 90, 74, 107, 83, 100, 72, 95, 72, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -77, 19, 25, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 16, 19, 
  63, 76, 95, 65, 110, 89, 85, 69, 89, 60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, 2, 29, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -8, -18, 
  78, 45, 76, 76, 101, 47, 82, 56, 75, 38, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -26, -12, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, 27, 
  68, 8, 74, 69, 65, 22, 64, 52, 66, 40, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -29, -128, -33, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 15, 19, 
  50, -10, 69, 25, 56, 0, 66, 27, 68, 25, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, 35, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 35, 24, 
  39, 46, 78, 27, 49, -60, 67, 44, 52, 8, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -60, 53, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 20, 27, 
  54, 39, 74, 19, 31, -128, 56, 22, 28, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, 20, 44, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -29, 54, -6, 
  63, 44, 75, -20, -43, -128, 47, -8, 9, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -26, -128, 2, 35, 54, -128, -128, -128, 
  -128, -128, 15, -128, -128, -128, -7, -128, 60, 24, 
  43, 53, 80, -77, -128, -128, 26, -128, 35, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -128, -128, -128, -128, -37, -2, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -23, 43, 24, 
  38, 36, 55, -128, -128, -128, -43, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -7, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -29, 31, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -33, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 23, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -23, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
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
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
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
