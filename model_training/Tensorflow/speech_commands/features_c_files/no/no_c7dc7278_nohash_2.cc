/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/c7dc7278_nohash_2.wav" \
 * --output_c_file="features_c_files/no/no_c7dc7278_nohash_2.cc" \
 */
#include "no_c7dc7278_nohash_2.h"


const int g_no_c7dc7278_nohash_2_width = 40;
const int g_no_c7dc7278_nohash_2_height = 49;
alignas(16) const signed char g_no_c7dc7278_nohash_2_data[] = {
  47, 45, 5, 7, 23, -7, -10, -12, -50, -50, 
  -60, -26, -26, -50, -33, -60, -60, -50, -128, -60, 
  -128, -128, -60, -128, -60, -60, -60, -50, -60, -60, 
  -128, -128, -60, -50, -60, -60, -60, -60, -60, -128, 
  -20, 15, 36, 33, 40, 56, 44, -4, -37, -20, 
  -12, -29, -60, -37, -26, -128, -50, -50, -128, -128, 
  -50, -60, -128, -60, -60, -50, -60, -128, -37, -60, 
  -60, -60, -60, -60, -128, -60, -60, -60, -50, -60, 
  -23, -77, -77, -50, -16, -20, -8, -77, -50, -50, 
  -26, -4, -37, -37, -26, -29, -60, -128, -60, -50, 
  -60, -128, -60, -128, -128, -77, -60, -50, -60, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -77, 
  -50, -60, -16, -60, -128, -128, -50, -128, -60, -77, 
  -128, -128, -128, -128, -37, -50, -50, -50, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -77, -128, -128, -128, -128, -128, -60, -77, 
  -50, -77, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -33, -77, -128, -77, -12, -77, -50, -77, -50, -77, 
  -37, -77, -77, -77, -128, -128, -50, -128, -60, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -77, -16, -128, -77, -128, -60, -128, -128, -77, 
  -77, -128, -37, -60, -77, -128, -29, -77, -50, -77, 
  -50, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -23, -6, -128, -43, -77, -77, -128, -128, -128, 
  -128, -128, -77, -128, -77, -128, -29, -60, -50, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  24, 30, 32, -26, -18, -33, -7, -77, -128, -128, 
  -128, -128, -29, -43, -77, -128, -128, -128, -50, -128, 
  -128, -128, -77, -128, -77, -128, -128, -128, -77, -128, 
  -60, -128, -50, -128, -77, -128, -60, -128, -128, -128, 
  -128, -50, 10, -77, -60, -50, -43, -37, -50, -128, 
  -77, -128, -23, -43, -23, -128, -128, -128, -128, -128, 
  -77, -128, -77, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -37, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -77, -128, -128, 
  -77, -50, -33, -77, -77, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -6, -23, -128, -77, -16, -128, -128, -60, -128, -77, 
  -23, -33, -43, -60, -50, -128, -77, -128, -77, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, -77, -128, -128, -128, -128, -128, -77, -128, 
  29, -8, 24, 13, 55, 57, 42, -26, -128, -7, 
  37, -6, 10, -128, -77, -60, -10, -50, -50, -77, 
  -128, -128, -128, -77, -77, -128, -128, -128, -128, -128, 
  -37, -128, -77, -128, -50, -128, -77, -128, -77, -77, 
  -4, -18, 6, -128, -16, -128, -60, -128, -43, -43, 
  20, -29, -43, -77, -128, -128, -43, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -77, -128, -77, -128, 
  -128, -128, -43, -128, -128, -128, -33, -128, -128, -77, 
  -128, -128, -43, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -60, -128, -128, -128, -18, -77, -77, -128, 
  -128, -128, -128, -128, -77, -77, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -12, -128, -33, -128, 2, -77, -128, -128, 
  -128, -128, -60, -128, -128, -128, -60, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, 2, 25, -50, -50, -128, -128, -77, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -10, -77, -14, -43, -128, -128, -77, -77, -43, -128, 
  -60, -128, -128, -128, -77, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -60, -77, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, -128, -77, -77, -128, -128, -128, 
  -23, -128, -33, -77, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -77, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  64, 44, 22, 10, 29, -77, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -43, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  42, 45, 67, 50, 55, -33, -37, -128, -77, -128, 
  -50, -60, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -77, -128, -128, -128, -128, -128, 
  -77, -128, -128, -77, -128, -77, -77, -128, -77, -128, 
  85, 70, 87, 54, 21, -43, -23, -128, -77, -128, 
  -77, -37, -128, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -60, -50, -128, -77, -128, 
  -60, -128, -77, -128, -128, -128, -77, -128, -77, -77, 
  117, 99, 115, 94, 97, 70, 44, 30, 27, 22, 
  -3, -60, -77, -128, -128, -128, -60, -26, -128, -37, 
  -43, -128, -77, -128, -60, -50, -60, -50, -128, -77, 
  -60, -37, -128, -50, -26, -60, -26, -37, -60, -60, 
  121, 97, 122, 99, 120, 97, 112, 91, 112, 93, 
  103, 77, 65, 38, 31, -10, -8, -128, -77, -50, 
  -43, -18, -18, -12, 2, -128, -7, 34, 16, -18, 
  -33, -14, -18, -77, -18, 9, 1, -26, 21, 15, 
  114, 89, 112, 84, 105, 85, 107, 89, 113, 94, 
  106, 81, 98, 84, 99, 76, 78, 27, 27, 10, 
  20, 16, 44, 26, 0, -20, 24, 66, 75, -2, 
  28, 9, 34, 22, 38, 54, 67, 35, 53, 44, 
  105, 77, 102, 77, 100, 75, 99, 72, 102, 83, 
  107, 82, 97, 80, 105, 85, 88, 44, 25, 9, 
  42, 20, 40, 14, 29, 31, 48, 70, 80, 27, 
  10, 9, 35, 5, 37, 77, 90, 47, 65, 47, 
  97, 68, 89, 63, 89, 67, 94, 75, 91, 61, 
  101, 74, 90, 81, 102, 82, 89, 64, 57, 32, 
  40, 59, 58, 50, 73, 71, 85, 73, 86, 64, 
  69, 70, 67, 12, 57, 70, 84, 38, 55, 32, 
  87, 60, 90, 74, 109, 90, 107, 81, 103, 77, 
  94, 82, 105, 82, 92, 80, 114, 96, 99, 80, 
  92, 83, 104, 89, 106, 92, 109, 94, 117, 97, 
  112, 87, 105, 59, 88, 78, 101, 86, 105, 93, 
  81, 51, 69, 40, 85, 89, 115, 76, 100, 77, 
  97, 84, 105, 82, 102, 87, 109, 69, 101, 87, 
  101, 85, 106, 78, 98, 80, 105, 82, 100, 83, 
  117, 89, 85, 88, 110, 85, 110, 91, 110, 87, 
  74, 38, 70, 44, 88, 84, 107, 79, 98, 72, 
  96, 83, 105, 82, 111, 90, 96, 51, 90, 70, 
  90, 79, 99, 64, 92, 58, 89, 78, 95, 80, 
  110, 82, 81, 61, 99, 65, 103, 82, 99, 79, 
  65, 24, 64, 52, 87, 63, 90, 79, 92, 64, 
  95, 72, 104, 88, 110, 76, 53, 19, 87, 64, 
  80, 61, 91, 58, 82, 40, 68, 72, 93, 72, 
  97, 70, 85, 58, 74, 39, 97, 77, 81, 61, 
  57, 4, 60, 44, 87, 63, 94, 74, 87, 64, 
  92, 71, 107, 80, 89, 24, 47, 31, 63, 34, 
  62, 4, 77, 58, 70, 38, 75, 45, 69, 55, 
  77, 60, 90, 35, 76, 1, 80, 60, 68, 24, 
  44, 0, 63, 48, 88, 51, 88, 45, 90, 53, 
  93, 72, 99, 61, 60, -14, 10, -26, 12, -128, 
  28, -128, 53, 30, 61, -2, 67, 26, 47, 32, 
  64, 39, 72, 2, 54, -128, 70, 52, 49, -26, 
  10, -23, 50, 29, 65, 46, 78, 42, 76, 42, 
  82, 72, 92, 13, 20, -128, -128, -128, -128, -128, 
  -128, -128, 16, 9, 47, -7, 55, -1, 5, 23, 
  67, 16, 73, -128, -128, -128, -77, -128, 25, -128, 
  -14, -77, 32, -14, 60, 29, 53, 34, 53, 14, 
  89, 61, 46, -128, -128, -128, -128, -128, -128, -128, 
  -33, -128, 30, 44, 64, 9, 60, 5, 35, -128, 
  -1, 18, 65, -60, -128, -128, -128, -128, -128, -128, 
  -77, -128, -23, -33, 71, 32, 38, -128, 1, 2, 
  88, 39, -43, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, 41, 43, 50, -43, 52, -37, 22, -128, 
  14, 29, 80, -14, -128, -20, 69, 34, -77, -128, 
  2, -128, -23, 9, 50, -128, -4, -128, -3, 16, 
  67, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -7, 27, -128, 29, -77, 4, -128, 
  -128, -14, 73, 9, 9, -60, 62, 37, -37, -128, 
  4, -128, 23, 15, 32, -128, -128, -128, -23, 11, 
  14, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, 12, -128, -29, -128, 
  -128, -128, 56, -29, 72, 29, 60, 21, -128, -128, 
  -128, -128, 1, 1, 9, -128, -128, -128, -33, -128, 
  -33, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -128, -128, -128, 
  -128, -128, 50, -77, 61, -26, 37, -37, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
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
