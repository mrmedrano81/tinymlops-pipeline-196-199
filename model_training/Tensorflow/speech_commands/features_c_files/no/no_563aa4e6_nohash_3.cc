/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/563aa4e6_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_563aa4e6_nohash_3.cc" \
 */
#include "no_563aa4e6_nohash_3.h"


const int g_no_563aa4e6_nohash_3_width = 40;
const int g_no_563aa4e6_nohash_3_height = 49;
alignas(16) const signed char g_no_563aa4e6_nohash_3_data[] = {
  23, 44, 47, 64, 86, 70, 68, 53, 50, 54, 
  47, 42, 54, 17, 51, 46, 50, 44, 39, 30, 
  -26, -7, 33, 55, 40, 28, 50, 45, 35, -2, 
  14, 40, 31, 20, 29, 62, 74, 95, 102, -50, 
  -7, 16, 60, 64, 67, 37, 44, 42, 30, 10, 
  28, 34, 46, -10, 30, 29, 49, 54, 47, 46, 
  34, -4, 31, 59, 57, 37, 50, 15, -14, 0, 
  37, 37, 21, 24, 27, 47, 68, 73, 85, -60, 
  -50, -33, 59, 74, 86, 38, 16, 25, 30, 0, 
  24, 18, 34, -8, 20, 43, 48, 13, 7, -3, 
  40, 15, 68, 56, 51, 22, 34, -33, -20, -43, 
  -29, -16, 19, 46, 57, 50, 60, 50, 69, 5, 
  59, 40, 50, 57, 79, 59, 45, -50, 21, 14, 
  2, 0, 37, -6, 21, -3, 19, 39, 19, -14, 
  54, 43, 64, 45, 49, 8, -20, -128, -50, -60, 
  -29, -77, -1, 9, 59, 52, 57, 48, 67, -60, 
  -20, -50, 57, 33, 77, 68, 79, 22, 34, 5, 
  -8, -23, -7, -8, 31, -50, -12, -10, 27, 5, 
  37, 36, 67, 32, 45, -50, -29, -128, -43, -60, 
  -50, -128, -12, 0, 63, 24, 48, 35, 62, -77, 
  20, 12, 25, 51, 82, 53, 1, 6, 8, -18, 
  -20, -128, 0, -50, -7, -33, -8, -77, 27, 19, 
  -3, 0, 4, -77, 16, -128, -128, -128, -128, -128, 
  -77, -128, -7, -3, -33, -18, 39, -4, 43, -128, 
  2, 11, 39, -128, 25, 20, 40, -60, 13, 12, 
  19, 21, 22, 11, -12, -77, -10, -43, -33, -128, 
  -14, -8, -7, -128, -37, -43, -37, -128, -128, -128, 
  -60, -60, 15, -8, -20, -128, 13, -18, 36, -128, 
  30, 46, 46, 1, 64, 22, 43, -50, 19, -23, 
  26, 14, 29, -8, -128, -128, -33, -128, -43, -128, 
  -77, -128, -12, -128, -26, -128, -128, -128, -77, -128, 
  -43, -77, 40, 19, -7, -128, -12, 2, 40, -128, 
  46, 67, 76, -12, 46, -26, 8, -77, 33, 31, 
  17, -77, -29, -128, -43, -43, -12, -128, -43, -128, 
  -16, -23, -77, -128, -37, -50, -12, -60, -128, -128, 
  -128, -128, 19, -26, -128, -128, -16, -128, -128, -128, 
  122, 100, 119, 94, 100, 87, 109, 83, 78, 68, 
  82, 37, 47, 24, 19, -43, 33, -10, 21, -6, 
  41, 72, 96, 78, 64, -43, -37, -128, -77, -60, 
  -60, -43, 17, -128, -33, -128, -77, -128, -128, -50, 
  116, 95, 123, 100, 122, 101, 118, 99, 117, 84, 
  90, 67, 88, 68, 85, 83, 94, 59, 86, 80, 
  107, 97, 120, 98, 113, 81, 55, 53, 52, 59, 
  59, 72, 89, 60, 80, 17, 37, -128, 14, 51, 
  107, 85, 115, 91, 111, 91, 109, 89, 100, 84, 
  89, 75, 102, 86, 117, 97, 108, 87, 107, 87, 
  110, 86, 113, 87, 113, 66, 84, 74, 82, 82, 
  88, 76, 97, 83, 104, 73, 65, -50, 63, 64, 
  102, 69, 106, 85, 108, 92, 120, 98, 121, 102, 
  122, 100, 123, 101, 122, 102, 125, 100, 118, 94, 
  109, 87, 109, 89, 107, 94, 116, 98, 115, 90, 
  101, 82, 100, 82, 99, 72, 97, 56, 80, 72, 
  80, 58, 90, 58, 98, 70, 97, 82, 112, 92, 
  114, 94, 115, 92, 115, 89, 108, 80, 110, 85, 
  102, 72, 89, 65, 77, 54, 110, 87, 109, 65, 
  91, 76, 93, 60, 91, 74, 87, 43, 76, 65, 
  68, 60, 82, 39, 87, 47, 96, 72, 103, 73, 
  110, 85, 104, 89, 111, 79, 87, 57, 87, 57, 
  89, 64, 73, 9, 66, 74, 93, 59, 95, 78, 
  107, 74, 91, 59, 74, 65, 85, 45, 73, 64, 
  61, 58, 75, 16, 84, 32, 95, 62, 97, 64, 
  106, 77, 100, 82, 104, 63, 66, 15, 67, 53, 
  86, 62, 71, -128, 67, 73, 83, 10, 83, 74, 
  101, 78, 94, 69, 80, 39, 79, 46, 70, 60, 
  64, 48, 71, 13, 78, 18, 88, 51, 91, 59, 
  98, 67, 94, 77, 88, 38, 60, 35, 66, 49, 
  84, 60, 69, -128, 29, 48, 75, 29, 67, 48, 
  76, 40, 77, 55, 67, 7, 75, 32, 70, 51, 
  66, 45, 69, 8, 72, 16, 79, 45, 80, 49, 
  95, 67, 89, 67, 70, 2, 42, 36, 69, 30, 
  80, 50, 67, 4, 31, -23, 60, 25, 54, -128, 
  -128, -128, 6, -128, 34, -43, 62, 2, 50, -1, 
  67, 35, 63, -4, 67, -7, 69, 17, 67, 32, 
  81, 55, 76, 37, 49, -77, 25, -50, 53, 14, 
  62, 16, 59, 2, 37, -14, 66, 19, 52, -128, 
  -128, -128, -23, -37, 14, -43, 44, -60, 27, 15, 
  67, 22, 54, -26, 55, -128, 52, -29, 30, -50, 
  64, 16, 50, -128, -18, -128, -128, -128, -23, -128, 
  26, -128, 16, -128, -60, -128, -33, -128, -128, -128, 
  -128, -128, -37, -128, -4, -128, 19, -128, 1, -128, 
  63, -26, 11, -128, -128, -128, -10, -128, -128, -128, 
  -33, -128, -29, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 9, -128, -43, -128, 34, -43, -43, -128, 
  47, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 32, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 14, -128, -128, -128, 
  -8, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -16, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -4, -60, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -23, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -2, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -33, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -2, -33, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 37, 13, -128, -33, 16, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -20, -128, -20, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -3, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, 37, -4, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -2, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
