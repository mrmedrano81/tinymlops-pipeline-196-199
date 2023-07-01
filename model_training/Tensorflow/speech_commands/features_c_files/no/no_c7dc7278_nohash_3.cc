/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/c7dc7278_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_c7dc7278_nohash_3.cc" \
 */
#include "no_c7dc7278_nohash_3.h"


const int g_no_c7dc7278_nohash_3_width = 40;
const int g_no_c7dc7278_nohash_3_height = 49;
alignas(16) const signed char g_no_c7dc7278_nohash_3_data[] = {
  77, 62, 59, 15, -10, 15, -10, -128, -128, -50, 
  -50, -60, -128, -128, -18, -50, -50, -128, -128, -60, 
  -33, -60, -60, -128, -60, -50, -50, -37, -4, -2, 
  17, -18, -50, -26, -50, 17, 49, 7, -18, -50, 
  56, 12, 19, -43, -37, 7, -1, -2, -26, -29, 
  -37, -14, -50, -50, -60, -128, -37, -50, -60, -128, 
  -60, -128, -128, -60, -60, -60, -128, -128, -50, -50, 
  -60, -50, -60, -77, -128, -77, -50, -128, -37, -50, 
  -128, -128, -77, -50, 8, 4, 7, -37, -50, -128, 
  -60, -128, -128, -128, -128, -77, -60, -128, -128, -128, 
  -128, -60, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -26, 10, -18, -29, -18, -8, -12, -6, -50, 
  -60, -43, -26, -128, -50, -50, -60, -77, -128, -128, 
  -128, -128, -60, -77, -128, -77, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -50, -43, -33, -77, -77, -128, -16, -20, -29, -50, 
  -60, -77, -60, -128, -60, -43, -60, -128, -60, -37, 
  4, 47, 73, 80, 98, 84, 91, 71, 69, 60, 
  74, 63, 64, 69, 81, 74, 90, 72, 84, 78, 
  122, 101, 121, 99, 112, 81, 87, 75, 83, 60, 
  83, 67, 50, 14, 11, -33, -14, 14, 45, 63, 
  85, 79, 103, 88, 110, 90, 96, 80, 91, 79, 
  90, 79, 84, 74, 98, 82, 98, 83, 100, 81, 
  122, 99, 124, 99, 107, 93, 104, 94, 118, 99, 
  114, 92, 104, 86, 88, 58, 87, 57, 38, 23, 
  52, 60, 81, 46, 57, 19, 70, 57, 75, 49, 
  81, 69, 84, 62, 74, 74, 92, 45, 66, 31, 
  114, 90, 110, 90, 113, 81, 108, 92, 114, 93, 
  113, 88, 109, 92, 114, 92, 109, 88, 91, 56, 
  83, 77, 91, 43, 59, 16, 57, 40, 71, -16, 
  39, 65, 86, 15, 55, 77, 99, 44, 47, -1, 
  105, 84, 98, 84, 106, 85, 104, 80, 104, 77, 
  104, 81, 100, 80, 103, 83, 99, 57, 72, 67, 
  92, 74, 92, 54, 57, 24, 47, -4, 42, 23, 
  64, 53, 80, 24, 70, 70, 92, 11, 11, -29, 
  97, 78, 93, 80, 104, 76, 80, 69, 97, 76, 
  97, 70, 97, 67, 83, 55, 76, 52, 77, 68, 
  72, 48, 68, 17, 35, -128, 25, -50, 51, 62, 
  86, 62, 75, 4, 44, 21, 61, 24, 37, -20, 
  90, 74, 88, 81, 116, 97, 114, 86, 104, 81, 
  109, 88, 112, 91, 115, 97, 114, 89, 110, 86, 
  92, 82, 112, 89, 108, 84, 106, 80, 106, 97, 
  119, 86, 102, 86, 107, 82, 108, 87, 110, 92, 
  78, 50, 82, 63, 116, 97, 122, 91, 106, 81, 
  108, 86, 112, 90, 114, 94, 109, 83, 112, 85, 
  108, 86, 109, 85, 105, 81, 114, 99, 115, 99, 
  115, 80, 105, 90, 114, 79, 106, 87, 109, 85, 
  67, 18, 72, 39, 83, 81, 113, 75, 100, 74, 
  97, 80, 108, 84, 110, 81, 81, 79, 92, 77, 
  103, 72, 99, 71, 84, 67, 102, 75, 106, 84, 
  107, 81, 90, 79, 87, 39, 81, 64, 95, 73, 
  62, -8, 49, -8, 71, 73, 96, 64, 97, 72, 
  90, 74, 103, 82, 94, 45, 69, 22, 80, 48, 
  80, 51, 79, 32, 69, 42, 82, 57, 80, 57, 
  92, 75, 75, 39, 46, 22, 82, 59, 54, 27, 
  64, -12, 54, -128, 65, 42, 63, 63, 88, 63, 
  80, 78, 107, 75, 74, -128, 31, -50, 54, 19, 
  65, -2, 65, 27, 54, 2, 63, 48, 59, 28, 
  72, 53, 72, -128, 55, 55, 93, 65, 40, -128, 
  47, -37, 54, 8, 84, 64, 90, 63, 82, 42, 
  87, 82, 95, 43, -1, -128, -77, -77, -6, -128, 
  -1, 4, 65, 12, -26, 12, 74, 32, 54, 11, 
  59, 43, 77, -128, 7, -16, 34, -128, -33, -128, 
  14, -50, 46, 24, 70, 42, 75, 32, 64, 11, 
  87, 70, 83, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 9, -128, 10, -37, 57, -128, -60, -128, 
  40, 11, 72, -128, -128, -128, 11, -128, -128, -128, 
  -60, -128, 0, -128, 75, 45, 67, 29, 58, 49, 
  96, 52, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -10, -77, 9, -128, 40, -128, -128, -128, 
  20, -128, 61, -128, -128, -128, -128, -128, -128, -128, 
  -33, -128, -10, -16, 62, -23, 39, -60, 14, 47, 
  76, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -128, -128, -128, 
  -23, -60, 34, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -6, -128, 27, -128, -128, -128, 1, 4, 
  28, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -60, 21, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -33, -128, -128, -128, -128, -128, 
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