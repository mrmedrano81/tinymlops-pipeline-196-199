/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/c7dc7278_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_c7dc7278_nohash_1.cc" \
 */
#include "no_c7dc7278_nohash_1.h"


const int g_no_c7dc7278_nohash_1_width = 40;
const int g_no_c7dc7278_nohash_1_height = 49;
alignas(16) const signed char g_no_c7dc7278_nohash_1_data[] = {
  108, 90, 104, 95, 117, 99, 117, 87, 63, 55, 
  64, 62, 39, 45, 33, -2, -33, -37, -33, -128, 
  -128, -128, -60, -60, -128, -128, -50, -37, -50, -60, 
  -50, -60, -128, -37, -33, -50, -50, -37, -26, -37, 
  109, 87, 96, 65, 107, 92, 109, 85, 94, 54, 
  79, 81, 86, 65, 74, 20, 4, -37, -50, -50, 
  -37, -128, -60, -50, -10, -37, -26, -14, -26, -7, 
  -26, -37, -50, -29, -37, -29, -26, -37, -37, -29, 
  64, 60, 88, 66, 82, 37, 60, 29, 47, -20, 
  -43, -128, 51, 59, 67, 43, 34, -50, -37, -29, 
  -37, -50, -18, -20, -26, -50, -50, -29, -26, -29, 
  -26, -29, -37, -37, -60, -50, -50, -50, -37, -29, 
  69, 53, 87, 78, 86, 30, 63, 15, 31, -128, 
  -128, -128, 29, 19, 29, -33, -4, -77, -60, -37, 
  -60, -37, -20, -43, -50, -77, -37, -77, -60, -50, 
  -37, -50, -26, -43, -50, -43, -20, -33, -50, -50, 
  30, -12, 34, -128, 15, -50, 29, -60, 25, -128, 
  -77, -128, 19, -18, -33, -77, -128, -128, -128, -50, 
  -50, -128, -77, -128, -77, -128, -50, -60, -50, -33, 
  -37, -43, -20, -33, -37, -43, -20, -60, -29, -77, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, -128, -60, -128, -128, -128, -128, -77, 
  -77, -128, -77, -60, -20, -50, -37, -77, -50, -128, 
  -29, -77, -37, -60, -50, -77, -77, -128, -37, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -33, 
  -37, -128, -77, -128, -128, -128, -77, -128, -50, -128, 
  -50, -128, -50, -77, -37, -60, -37, -77, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -29, -128, 
  -77, -128, -37, -77, -50, -60, -50, -128, -77, -128, 
  -29, -128, -128, -128, -37, -60, -29, -77, -37, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -77, -128, -50, -128, 
  -128, -77, -128, -128, -77, -77, -77, -128, -77, -128, 
  -50, -128, -128, -128, -50, -128, -77, -60, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -50, -128, -128, -128, -43, -77, -29, -77, -29, -60, 
  -43, -77, -77, -60, -43, -128, -77, -60, -50, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -60, -77, -77, -128, 
  -128, -60, -77, -77, -128, -128, -128, -128, -77, -128, 
  -50, -128, -128, -128, -50, -128, -77, -128, -77, -77, 
  -128, -128, -6, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -43, -50, 
  -43, -77, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -43, -60, -128, -128, -128, -128, -77, -128, 
  -128, -6, 58, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -50, -60, 
  -50, -128, -77, -128, -77, -128, -128, -128, -50, -128, 
  -128, -128, -50, -77, -33, -77, -43, -60, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -60, -77, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -60, -128, 
  -77, -128, -128, -128, -128, -128, -77, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
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
  -77, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -60, -77, -128, -128, -128, -128, -33, -10, 41, 21, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -33, 
  45, 45, 42, -7, 43, 43, 52, 49, 71, 39, 
  19, 0, -43, -128, -43, -14, -7, -77, 49, 48, 
  56, 62, 46, 18, 24, 29, 72, 59, 93, 75, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -60, -128, -29, 1, -4, -10, -60, -128, 
  -128, -128, -128, -128, -77, -128, -77, -128, -37, -60, 
  -4, -128, -60, -77, -16, -10, 44, 29, 32, -7, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -7, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  124, 103, 123, 100, 98, 52, 72, 88, 115, 97, 
  109, 80, 87, 63, 44, -37, -6, -50, -33, -128, 
  -20, -26, -8, -50, -60, -33, -43, -50, -50, -60, 
  -60, -60, -12, -77, -60, -60, -20, -50, -4, -29, 
  111, 90, 115, 93, 113, 86, 95, 94, 117, 97, 
  114, 94, 112, 94, 111, 87, 80, 23, 10, -6, 
  19, 16, -77, -6, 29, 5, -37, 0, 29, 4, 
  26, 8, -23, -128, 15, 8, 31, 0, 32, 22, 
  105, 80, 108, 80, 104, 83, 82, 82, 105, 83, 
  107, 75, 98, 75, 102, 75, 89, 22, 30, 21, 
  37, 24, 16, 13, -12, 7, 24, 37, 54, 75, 
  99, 79, 50, 0, -14, 37, 78, 30, 44, 4, 
  96, 77, 100, 74, 96, 77, 93, 77, 98, 75, 
  98, 68, 95, 67, 92, 71, 71, 55, 50, 11, 
  32, 25, 54, 31, 29, -20, -29, 37, 54, 67, 
  100, 77, 68, 17, 12, 23, 64, 21, 40, -8, 
  90, 59, 95, 74, 109, 91, 105, 80, 100, 64, 
  97, 86, 111, 85, 101, 93, 115, 96, 109, 81, 
  89, 82, 106, 82, 92, 91, 115, 96, 109, 94, 
  114, 94, 108, 84, 90, 87, 112, 85, 107, 90, 
  84, 44, 77, 62, 106, 93, 114, 78, 103, 79, 
  102, 81, 105, 85, 110, 87, 107, 73, 88, 78, 
  104, 90, 110, 83, 86, 74, 102, 77, 97, 84, 
  109, 94, 115, 95, 113, 84, 102, 90, 110, 89, 
  72, 32, 68, 57, 99, 79, 112, 77, 96, 73, 
  95, 74, 103, 77, 107, 79, 84, 64, 79, 75, 
  97, 82, 104, 71, 80, 58, 73, 38, 87, 74, 
  105, 86, 107, 80, 99, 67, 100, 78, 97, 76, 
  65, 25, 61, 47, 85, 63, 106, 75, 95, 69, 
  91, 77, 102, 79, 95, 57, 61, 5, 64, 63, 
  91, 71, 97, 48, 74, 32, 36, 14, 78, 73, 
  97, 73, 93, 68, 92, 47, 95, 84, 79, 56, 
  53, 7, 55, 38, 81, 59, 98, 65, 88, 61, 
  86, 71, 98, 74, 80, 10, 52, 9, 70, 57, 
  75, 49, 79, 31, 73, 5, 34, -23, 76, 59, 
  79, 62, 89, 53, 75, 68, 96, 78, 79, 4, 
  49, -3, 52, 24, 74, 55, 89, 58, 86, 53, 
  83, 70, 99, 66, 50, -128, 15, 25, 61, 7, 
  62, -2, 49, 6, 59, 11, 4, -77, 72, 58, 
  73, 46, 80, 36, 63, 71, 96, 66, 77, -33, 
  49, 4, 50, 22, 70, 51, 82, 49, 81, 52, 
  90, 78, 95, 45, 0, -128, 21, 15, 72, 28, 
  69, 12, 55, 31, 70, -6, 11, -20, 59, 45, 
  61, 14, 69, 20, 64, 52, 67, 36, 56, -128, 
  34, 5, 43, 20, 60, 44, 73, 37, 75, 43, 
  89, 72, 86, -10, -1, -128, -128, -128, 27, -33, 
  34, -60, 29, 11, 54, 0, 48, 42, 67, 23, 
  63, -29, 59, -77, 32, 4, 30, -60, -4, -128, 
  33, -26, 40, 11, 58, 34, 61, 26, 62, 34, 
  92, 63, 67, -50, -16, -128, -128, -128, -33, -128, 
  -20, -128, 47, 38, 60, 10, 20, -60, 36, -77, 
  62, -50, 62, -43, -16, -8, 22, -128, -128, -128, 
  14, -50, 27, 9, 45, -128, 42, 39, 48, 26, 
  80, 46, 39, -128, -77, -128, -20, -128, -128, -128, 
  -128, -128, -37, -37, 44, -10, -8, -128, -23, -128, 
  59, -8, 25, -128, -77, -128, -128, -128, -128, -128, 
  22, -60, 35, -8, 65, 33, 56, 7, 37, 39, 
  85, -2, -2, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 27, -128, 8, -128, -26, -128, 
  56, 21, 41, -128, -128, -128, -128, -128, -128, -128, 
  -20, -60, 7, -128, 64, 17, 31, -23, 43, 47, 
  78, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 28, -10, 26, -128, -10, -128, 
  -29, -128, -2, -128, -128, -128, -128, -128, -128, -128, 
  41, -16, 6, 17, 61, -128, -128, -128, -23, 6, 
  61, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -18, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -23, -128, -128, -128, -128, -128, 
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