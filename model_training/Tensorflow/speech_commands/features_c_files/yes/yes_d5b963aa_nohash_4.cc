/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/d5b963aa_nohash_4.wav" \
 * --output_c_file="features_c_files/yes/yes_d5b963aa_nohash_4.cc" \
 */
#include "yes_d5b963aa_nohash_4.h"


const int g_yes_d5b963aa_nohash_4_width = 40;
const int g_yes_d5b963aa_nohash_4_height = 49;
alignas(16) const signed char g_yes_d5b963aa_nohash_4_data[] = {
  5, 11, -18, -50, -60, -37, -26, 11, 14, -50, 
  -60, -37, -26, -37, -18, -37, -33, -26, -33, -128, 
  -33, -26, -50, -60, -60, -128, -33, -50, -18, -12, 
  -10, -18, -18, -12, 5, -2, -18, -50, -33, -60, 
  -12, -16, -37, -7, -6, -20, -6, -16, -20, -37, 
  -26, -20, -50, -50, -26, -60, -37, -77, -128, -37, 
  -18, -50, -60, -60, -60, -50, -128, -60, -50, -77, 
  -12, -37, -26, -20, 4, -10, -12, -37, -18, -50, 
  -2, -3, -26, -128, -60, -50, -60, -128, -29, -37, 
  -60, -77, -18, -37, -60, -77, -26, -77, -60, -128, 
  -37, -50, -50, -20, -12, -20, -50, -50, -50, -37, 
  -2, -23, -7, -10, 11, -7, -12, -8, -37, -128, 
  -8, -77, -128, -128, -128, -77, -37, -128, -37, -43, 
  -128, -77, -14, -50, -128, -128, -60, -128, -50, -37, 
  -50, -128, -50, -77, -37, -29, -60, -77, -29, -77, 
  -20, -43, -14, -60, -37, -20, -20, -18, -37, -77, 
  41, -16, -29, -43, -37, -33, -29, -128, -128, -43, 
  -20, -60, -29, -43, -37, -50, -50, -128, -50, -50, 
  -77, -33, -7, -77, -37, -128, -37, -50, -37, -60, 
  -29, -26, -20, -77, -29, -37, -37, -60, -50, -77, 
  114, 93, 93, 62, 68, 61, 61, 57, 54, 26, 
  31, 8, 28, 11, 11, -33, 14, -2, 11, 29, 
  6, -26, 2, 1, -29, 22, 20, 5, 44, 14, 
  35, 20, -4, -20, 47, 47, 32, 9, 1, -23, 
  125, 102, 124, 101, 119, 95, 106, 80, 87, 58, 
  90, 73, 76, 64, 84, 59, 69, 60, 76, 76, 
  76, 69, 58, 64, 70, 54, 65, 70, 85, 74, 
  87, 73, 78, 73, 94, 74, 79, 69, 72, 64, 
  109, 93, 112, 92, 109, 89, 107, 79, 101, 88, 
  94, 72, 92, 72, 64, 59, 90, 79, 89, 81, 
  108, 89, 92, 80, 104, 86, 96, 79, 98, 83, 
  90, 84, 87, 70, 89, 77, 87, 66, 82, 61, 
  84, 87, 112, 89, 117, 90, 110, 80, 88, 72, 
  98, 79, 85, 65, 84, 66, 76, 82, 103, 90, 
  118, 97, 105, 81, 109, 87, 95, 73, 105, 90, 
  99, 80, 114, 87, 87, 88, 107, 87, 104, 79, 
  93, 82, 100, 86, 113, 87, 104, 82, 93, 69, 
  87, 46, 87, 72, 88, 74, 97, 77, 97, 88, 
  111, 87, 109, 90, 113, 86, 100, 81, 109, 85, 
  99, 69, 96, 79, 92, 79, 102, 74, 97, 74, 
  83, 73, 99, 91, 115, 83, 102, 84, 107, 81, 
  96, 88, 100, 79, 100, 82, 98, 65, 104, 90, 
  110, 76, 103, 87, 110, 80, 85, 80, 102, 71, 
  90, 67, 101, 81, 97, 82, 99, 76, 102, 61, 
  84, 55, 90, 82, 104, 95, 116, 85, 107, 82, 
  106, 85, 105, 76, 107, 84, 103, 85, 110, 90, 
  103, 54, 94, 73, 82, 53, 85, 87, 109, 70, 
  89, 68, 105, 84, 105, 85, 104, 81, 104, 75, 
  92, 63, 82, 45, 100, 91, 114, 91, 101, 79, 
  99, 78, 102, 75, 97, 74, 107, 84, 111, 77, 
  78, 27, 85, 62, 64, 29, 105, 77, 100, 79, 
  98, 57, 76, 56, 95, 74, 97, 71, 92, 62, 
  88, 54, 77, 29, 82, 60, 109, 87, 100, 73, 
  100, 75, 94, 76, 100, 77, 104, 85, 113, 69, 
  68, 46, 82, 52, 44, 29, 105, 56, 87, 68, 
  90, 65, 80, 54, 82, 56, 89, 61, 92, 64, 
  79, 31, 72, -6, 67, 59, 100, 72, 94, 77, 
  102, 61, 97, 72, 95, 75, 96, 87, 102, 47, 
  64, 41, 85, 63, 59, 62, 100, 54, 72, 59, 
  82, 53, 82, 47, 89, 45, 70, 57, 73, 5, 
  72, 20, 71, 6, 66, 42, 90, 73, 94, 65, 
  90, 57, 91, 66, 85, 60, 92, 73, 89, -16, 
  27, -60, 64, 42, 41, 44, 92, 50, 64, 49, 
  88, 54, 92, 73, 82, 52, 71, 20, 67, 0, 
  66, 7, 69, 12, 72, 45, 79, 43, 89, 67, 
  86, 65, 88, 51, 89, 70, 100, 78, 74, -77, 
  36, -37, 55, 47, 53, 33, 88, 49, 57, 6, 
  68, 37, 69, 41, 65, 20, 67, 17, 51, 11, 
  53, -50, 55, -20, 56, -12, 55, -128, 55, 29, 
  77, 38, 63, 38, 67, 47, 74, 15, 11, -128, 
  -128, -128, 30, -128, -3, -128, 12, -128, -128, -128, 
  -77, -128, -50, -128, 27, -128, -2, -128, 27, 21, 
  -128, -128, -8, -128, -60, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -14, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -29, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -50, 33, -128, -29, -128, -128, -128, 
  -128, -128, 11, -128, 35, -23, 21, -128, -12, -128, 
  44, 30, 47, 1, 16, -128, 51, 7, 54, 38, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  10, -1, -26, -77, 4, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, 15, -128, -128, -128, 23, -128, 
  36, 41, 32, -77, 32, -4, 48, 37, 68, 38, 
  -128, -128, -128, -128, -128, -128, -128, -128, -16, -128, 
  -16, -128, -23, -128, -77, -128, -43, -128, -128, -128, 
  -128, -128, -128, -128, -16, -128, -128, -128, -29, -128, 
  39, -29, 12, -37, 45, 29, 62, 41, 70, 58, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, 20, -128, -128, -128, 8, -50, 
  29, 38, 54, 1, 48, 0, 62, 24, 53, 42, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 17, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -20, -128, -128, -128, -128, -128, 
  33, 36, 44, -37, 52, 11, 61, -33, 56, 27, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -60, -128, -2, -128, -128, -128, 
  -128, -128, -128, -128, -23, -128, -128, -128, -128, -128, 
  63, 1, 8, -26, 57, 35, 51, 5, 42, 41, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -4, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 10, -128, -128, -128, -128, -128, 
  -20, -37, 28, -128, 23, -128, 35, -14, 39, -20, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -20, -128, -37, -128, -7, -128, -60, -128, -60, -128, 
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
