/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/e41a903b_nohash_2.wav" \
 * --output_c_file="features_c_files/no/no_e41a903b_nohash_2.cc" \
 */
#include "no_e41a903b_nohash_2.h"


const int g_no_e41a903b_nohash_2_width = 40;
const int g_no_e41a903b_nohash_2_height = 49;
alignas(16) const signed char g_no_e41a903b_nohash_2_data[] = {
  29, 39, 48, 57, 37, -18, 31, 30, 33, 11, 
  14, 4, 14, 11, -4, -12, 9, -7, -4, 17, 
  5, -18, -10, -26, -18, 11, -10, 7, -4, -37, 
  -4, -7, -10, 7, 0, -12, 0, -12, 0, -12, 
  59, 39, 47, 21, 2, -14, 40, 31, 21, 17, 
  36, 20, 27, 11, 16, 5, 15, 15, -6, 7, 
  -6, -20, -12, -14, -1, -10, 9, -1, -1, -20, 
  -37, -29, -37, -10, 16, -29, -1, -20, -18, -37, 
  80, 47, 59, 42, 28, 22, 24, -4, 27, -4, 
  9, 29, 23, 4, 11, -26, 10, -3, -7, -60, 
  -2, -6, -29, -50, -37, -12, -2, -14, 21, -1, 
  -2, -10, -1, -7, 23, 4, -2, -18, -12, -43, 
  124, 102, 122, 99, 117, 96, 108, 87, 98, 71, 
  65, 44, 34, 42, 45, 39, 50, 19, 10, 2, 
  16, 4, 65, 69, 56, 15, 10, -16, -128, -8, 
  6, 17, 41, 9, 24, 21, 23, 14, 36, 37, 
  121, 98, 117, 95, 118, 90, 108, 87, 105, 86, 
  96, 67, 82, 80, 98, 74, 84, 79, 69, -8, 
  42, 76, 111, 94, 90, 32, 45, 24, 37, 11, 
  46, 44, 47, 42, 37, 47, 52, 30, 60, 52, 
  109, 84, 104, 85, 107, 80, 104, 82, 100, 84, 
  100, 67, 95, 85, 102, 71, 94, 80, 80, 59, 
  93, 89, 114, 90, 98, 65, 71, 53, 10, 41, 
  76, 54, 60, 35, 52, 39, 52, 42, 46, 45, 
  101, 75, 104, 92, 119, 101, 119, 92, 113, 92, 
  109, 94, 112, 89, 106, 95, 119, 99, 120, 96, 
  114, 92, 111, 90, 117, 99, 122, 99, 106, 84, 
  107, 87, 91, 60, 78, 59, 74, 71, 75, 62, 
  98, 69, 98, 78, 100, 87, 117, 97, 114, 88, 
  111, 90, 111, 85, 107, 89, 115, 94, 116, 96, 
  116, 88, 99, 78, 110, 90, 107, 72, 105, 85, 
  97, 78, 97, 69, 82, 70, 86, 69, 87, 65, 
  92, 57, 88, 66, 84, 69, 109, 85, 107, 80, 
  108, 84, 104, 76, 102, 82, 109, 84, 100, 75, 
  100, 82, 102, 67, 95, 67, 85, 50, 100, 77, 
  75, 60, 96, 67, 64, 42, 79, 58, 85, 55, 
  85, 50, 82, 54, 71, 64, 97, 75, 98, 71, 
  102, 74, 97, 64, 94, 78, 103, 62, 86, 62, 
  89, 72, 91, 62, 90, 60, 57, 47, 100, 68, 
  69, 44, 89, 61, 70, 58, 77, 60, 87, 57, 
  78, 34, 73, 42, 66, 51, 82, 63, 92, 69, 
  91, 65, 85, 56, 89, 77, 94, 47, 65, 44, 
  77, 57, 85, 51, 84, 49, 35, 50, 90, 49, 
  58, 31, 74, 26, 43, 9, 44, 6, 57, 42, 
  69, 4, 64, 17, 55, 25, 69, 47, 82, 45, 
  70, 40, 74, 49, 83, 60, 66, -50, 36, -37, 
  46, 0, 54, -10, 59, -18, -20, 29, 72, 11, 
  44, 19, 70, 19, 53, -16, 43, -10, 47, 0, 
  64, 17, 68, 20, 65, 34, 74, 52, 78, 55, 
  70, 47, 70, 54, 89, 53, 47, -128, 21, -128, 
  30, -23, 57, -33, 56, -29, -37, 24, 72, -3, 
  -29, -16, 55, 9, 31, -18, 36, -3, 45, -29, 
  55, -43, 51, -10, 49, 14, 59, 14, 59, -10, 
  53, 0, 54, 37, 81, 14, -128, -128, -128, -128, 
  -10, -128, 19, -128, 21, -128, -128, -60, 23, -128, 
  -43, -128, -6, -128, -12, -128, -10, -128, 4, -77, 
  45, -50, 55, -16, 48, 11, 47, -29, 44, -77, 
  47, -10, 59, 50, 77, -128, -128, -128, -128, -128, 
  -77, -128, -7, -128, -33, -128, -128, -128, -37, -128, 
  -2, -128, -16, -128, 22, -4, 32, -37, 19, -50, 
  40, -128, 40, -26, 40, 1, 19, -128, 25, -128, 
  43, -33, 52, 45, 57, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -50, -128, -77, -128, -128, -128, 
  29, -128, 30, -43, 34, -12, 16, -128, -43, -128, 
  -8, -128, 62, -16, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -23, -128, -128, -128, 
  10, -128, -10, -128, -37, -128, -128, -128, -128, -128, 
  -60, -128, 56, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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