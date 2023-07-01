/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/cd85758f_nohash_2.wav" \
 * --output_c_file="features_c_files/no/no_cd85758f_nohash_2.cc" \
 */
#include "no_cd85758f_nohash_2.h"


const int g_no_cd85758f_nohash_2_width = 40;
const int g_no_cd85758f_nohash_2_height = 49;
alignas(16) const signed char g_no_cd85758f_nohash_2_data[] = {
  44, 28, 44, 25, 26, 32, 57, 34, 17, 20, 
  26, 46, 64, 58, 62, 63, 58, 60, 66, 60, 
  74, 57, 44, 61, 77, 45, 54, 64, 88, 63, 
  40, 39, 50, 49, 63, 63, 63, 57, 67, 61, 
  30, -12, 36, 13, -20, 56, 77, 69, 58, 10, 
  45, 59, 74, 42, 60, 57, 77, 35, 35, 44, 
  67, 40, 26, 36, 52, 52, 59, 54, 59, 55, 
  58, 46, 49, 19, 32, 47, 47, 35, 45, 45, 
  -1, -4, 46, 22, 7, -18, 59, 64, 53, 18, 
  45, 44, 56, 25, 21, 5, 44, 22, 55, 37, 
  32, 34, 52, 14, 23, -16, 36, 23, 38, 21, 
  29, 20, 55, 35, 1, -8, 31, 36, 50, 33, 
  2, -7, 39, 1, 5, -12, 54, 55, 39, 27, 
  55, 35, 52, -3, 50, 14, 51, -3, 49, 9, 
  29, 32, 55, 37, 24, 26, 39, 14, 28, -33, 
  32, 18, 49, 4, 11, -2, 37, 30, 34, 4, 
  26, 1, -7, -29, -16, -128, 0, -12, 10, -37, 
  40, 45, 45, 4, 29, 18, 15, 20, 38, -7, 
  24, 6, 45, 1, 41, 34, 61, 43, 46, 20, 
  -3, 18, 40, 24, 56, 29, 32, 29, 38, -2, 
  34, 22, 32, -26, 27, -4, 28, 7, 33, 2, 
  25, -77, -12, -77, 2, -33, 39, 37, 68, 40, 
  27, -7, 44, -6, 19, 18, 25, 41, 58, 16, 
  36, 17, 56, 11, 43, 21, 34, 16, 33, -4, 
  -29, -14, 33, 23, 50, 21, 51, 43, 30, -23, 
  55, 28, -3, -37, -14, -77, 19, 18, 47, 4, 
  44, 41, 63, 7, 37, 18, 39, 30, 35, -2, 
  37, 10, 53, -7, 39, 8, 24, -10, 9, -50, 
  -12, 52, 63, 19, 44, 2, 58, 5, 28, 29, 
  39, -12, -18, -37, 11, -50, 40, 40, 46, -7, 
  17, 25, 33, 18, 49, 27, 38, -1, 35, -20, 
  16, -20, 52, -10, 31, -10, -7, -8, 19, -50, 
  -14, 46, 65, 0, -6, -23, 39, -60, 29, -33, 
  15, -77, 34, 14, 57, -18, 9, 49, 53, -20, 
  9, -14, 25, -23, 61, 48, 35, -16, -6, -33, 
  21, -23, 24, -7, 34, -29, -26, -128, 25, -37, 
  39, 33, 19, 19, 44, 14, 27, 24, 42, 4, 
  11, -128, 53, 39, 48, -7, -2, 14, 28, -77, 
  12, -60, 26, -20, 9, -29, 27, -77, -23, -77, 
  -4, -128, -60, -128, -2, -128, -6, -128, 23, -60, 
  -18, -128, -50, -128, -20, -128, -128, -128, 6, 32, 
  4, -128, 37, 15, 34, -12, -16, 5, 42, -128, 
  1, -29, 14, -37, -37, -77, 41, -33, -2, -33, 
  -18, -128, -77, -43, 17, -128, -37, -128, 25, 44, 
  119, 96, 108, 93, 110, 86, 77, -60, 16, 15, 
  19, -29, -6, -23, 15, -7, 1, -128, 10, -50, 
  -43, -26, 23, -6, -26, -50, 39, -77, 14, -8, 
  -10, -128, -128, -37, 24, -128, -60, -128, 26, 36, 
  120, 100, 125, 101, 121, 99, 109, 88, 92, 33, 
  55, 8, 27, 47, 72, 7, 62, 73, 94, 52, 
  68, 70, 96, 70, 62, 45, 57, 10, 32, 31, 
  36, -33, 6, 27, 53, -23, 23, -18, 45, 40, 
  106, 85, 114, 91, 109, 89, 104, 81, 94, 78, 
  71, 37, 58, 59, 74, 41, 80, 94, 120, 93, 
  102, 89, 115, 95, 115, 93, 100, 49, 48, 37, 
  72, 50, 42, 37, 60, 32, 55, 31, 50, 31, 
  105, 74, 105, 86, 99, 82, 103, 73, 92, 83, 
  83, 48, 74, 64, 80, 59, 99, 89, 105, 91, 
  109, 89, 115, 94, 119, 98, 114, 70, 67, 31, 
  96, 73, 53, 37, 56, 35, 51, 34, 56, 29, 
  100, 40, 93, 76, 90, 74, 102, 82, 99, 75, 
  87, 68, 67, 57, 78, 75, 112, 92, 104, 70, 
  100, 82, 106, 85, 110, 86, 101, 88, 85, 63, 
  94, 59, 55, 11, 47, 32, 55, 37, 64, 37, 
  98, 54, 80, 72, 103, 92, 120, 93, 117, 95, 
  116, 91, 109, 95, 120, 102, 124, 95, 112, 93, 
  114, 90, 105, 80, 94, 54, 86, 87, 122, 103, 
  119, 92, 99, 64, 69, 50, 70, 57, 77, 50, 
  87, 18, 66, 47, 96, 81, 101, 90, 115, 89, 
  112, 93, 117, 98, 122, 100, 111, 64, 97, 59, 
  103, 75, 101, 64, 80, 52, 99, 92, 110, 78, 
  100, 64, 73, 45, 69, 51, 71, 54, 102, 86, 
  81, 20, 74, 49, 90, 69, 90, 83, 106, 83, 
  104, 83, 120, 98, 118, 51, 72, 31, 58, 55, 
  88, 63, 88, 60, 70, 45, 77, 65, 95, 67, 
  99, 52, 66, 45, 63, 38, 72, 44, 95, 80, 
  78, 16, 70, 45, 85, 66, 90, 76, 99, 76, 
  105, 87, 112, 77, 60, -7, 50, -128, 43, 41, 
  75, 52, 79, 40, 67, 6, 75, 53, 86, 58, 
  94, 65, 65, 57, 64, 37, 63, 31, 61, 27, 
  67, 9, 68, 24, 84, 55, 83, 74, 89, 63, 
  101, 82, 82, 19, 57, -128, 55, -37, 39, 31, 
  62, 41, 64, -4, 58, 8, 63, 40, 80, 49, 
  81, 61, 60, -2, 60, 25, 56, 35, 32, -60, 
  54, 40, 68, -3, 75, -6, 86, 62, 84, 65, 
  90, 62, 76, -14, 4, -128, 45, -128, -10, -7, 
  34, 30, 62, -37, 53, 4, 64, 34, 74, 40, 
  77, 61, 67, -33, 34, 8, 59, -1, 0, -128, 
  15, 51, 67, -20, 66, -128, 90, 41, 67, 44, 
  96, 62, 40, -128, -128, -128, -23, -128, -128, -128, 
  29, -8, 39, -128, -43, -128, 35, -128, 20, -77, 
  56, 6, 32, -60, 41, -10, 43, -1, -3, -128, 
  -128, 52, 40, -128, 30, -128, 69, -128, 50, 46, 
  71, 50, 19, -128, -128, -128, -77, -128, -128, -128, 
  -60, -128, -43, -128, -128, -128, -128, -128, -128, -33, 
  56, -33, 52, 32, 24, -18, 35, -43, -12, -128, 
  -128, 40, 19, -128, -29, -128, -128, -128, -77, -128, 
  45, -33, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  32, -128, 40, 38, 53, -16, -1, -50, -6, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 12, -43, 18, -43, -10, -128, -4, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -23, -128, 15, -50, -20, -128, 11, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -20, -128, 18, -128, 23, -18, -29, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -3, 0, 44, 2, 26, 35, 47, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 13, -37, -20, -128, 6, -2, 13, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -3, -128, -3, 7, 19, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -10, 11, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -26, -43, 25, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, 19, -37, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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