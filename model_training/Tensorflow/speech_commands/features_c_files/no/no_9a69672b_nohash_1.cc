/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/9a69672b_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_9a69672b_nohash_1.cc" \
 */
#include "no_9a69672b_nohash_1.h"


const int g_no_9a69672b_nohash_1_width = 40;
const int g_no_9a69672b_nohash_1_height = 49;
alignas(16) const signed char g_no_9a69672b_nohash_1_data[] = {
  -60, 4, 26, 48, 66, 69, 56, 56, 60, 42, 
  65, 51, 29, 45, 61, 45, 50, 63, 54, 44, 
  39, 42, 42, 53, 54, 42, 43, 41, 29, 32, 
  40, 39, 43, 40, 31, 7, 20, 4, -18, -26, 
  -18, 15, 29, 37, 80, 59, 45, 17, 31, 24, 
  28, 11, 49, 39, 51, 46, 60, 28, 9, 39, 
  59, 61, 47, 19, 54, 57, 54, 33, 43, 31, 
  49, 26, 31, 26, 34, 8, 15, -10, -18, -37, 
  16, 4, 46, 40, 20, 36, 70, 62, 37, 34, 
  49, 31, 73, 48, 67, 62, 65, 57, 71, 52, 
  42, -7, 37, 25, 57, 55, 48, 48, 49, 33, 
  53, 48, 46, 17, 33, -3, 20, -12, -37, -77, 
  17, -12, 24, -2, 33, 6, 49, 10, 47, 6, 
  45, 59, 67, 42, 67, 62, 73, 68, 67, -7, 
  45, 16, 56, 40, 43, 22, 49, 44, 59, 50, 
  56, 54, 55, 27, 36, 5, -10, -4, 7, -50, 
  0, -50, -60, -50, 24, 1, 45, 19, 16, 46, 
  55, 55, 57, 11, 36, 7, 68, 0, 30, 4, 
  31, 9, 33, 29, 36, 13, 46, 28, 51, 37, 
  53, 44, 60, 39, 14, -14, -12, -29, 1, -77, 
  -16, -16, -1, -77, -33, -128, 38, 4, 43, 46, 
  53, 15, 37, -77, 10, -14, 42, -7, 25, 52, 
  57, 9, 37, 16, 41, 1, 52, 5, 6, -6, 
  50, 34, 59, 6, 6, -12, -7, -33, -23, -128, 
  -2, -8, 9, -128, -18, -128, 39, 36, 56, 15, 
  34, 9, 39, -18, -6, -60, 9, 2, 61, 24, 
  51, -26, 2, -8, 22, -16, 34, 4, 30, -6, 
  16, -77, 20, -20, 19, -14, -20, -43, -23, -60, 
  -7, -1, 8, -43, 37, -10, 58, 35, 56, -16, 
  16, 36, 46, -1, 38, -3, 24, -128, 33, 11, 
  -4, -1, 37, 29, 33, -26, 29, -3, 2, -60, 
  -4, -128, -50, -43, 6, -33, 0, -16, -2, -128, 
  -20, -43, 4, -128, 30, -20, 17, -16, 47, -128, 
  29, 23, 46, -6, 12, -18, 51, 15, 34, 1, 
  25, 11, 33, -2, 22, -18, 14, 4, 51, -29, 
  11, 11, 30, -16, 25, -7, 14, -128, -43, -128, 
  4, -12, 52, 29, 39, -18, 25, -6, -43, -12, 
  52, 38, 57, -6, 28, -77, 21, -29, 43, -29, 
  24, 1, -7, -20, 31, -26, 31, -10, 45, -33, 
  2, -43, 12, -33, 6, -26, 15, -128, -20, -77, 
  6, -10, 52, 45, 46, 10, 40, 17, 1, -128, 
  -37, -128, -29, 42, 58, -50, 0, -29, 33, -33, 
  5, -7, 32, 4, 30, -20, 12, -128, 10, -18, 
  24, -26, 19, -8, 8, -14, 4, -37, -43, -128, 
  19, -37, -60, -128, -60, -77, 67, 49, 69, -20, 
  -18, -128, -12, 41, 66, -4, -10, -3, 46, -128, 
  42, 9, 48, 15, 26, -8, 1, 5, 34, -23, 
  34, 9, 37, 31, 34, -29, 9, -12, -43, -50, 
  -20, -77, -29, -128, -33, 0, 56, 58, 66, 39, 
  30, -77, -23, 18, 42, -10, 4, -128, 9, -128, 
  6, 5, 59, 15, 40, -8, 33, -37, -16, -60, 
  42, -12, 24, -20, 32, -33, -20, -43, -43, -77, 
  26, 15, -7, 4, 20, -37, -7, -128, 25, 32, 
  -16, -128, 2, -128, -18, -128, 48, -14, 20, -60, 
  9, 1, 27, -26, 13, 1, 33, -37, -18, -20, 
  47, -26, 21, -37, 9, -20, -43, -77, -29, -128, 
  -50, -23, 22, 44, 54, -128, -128, -128, 19, -50, 
  28, 2, 32, -18, -10, -60, 25, -128, 0, 5, 
  19, -60, -6, -43, -12, -128, 7, -50, -26, -20, 
  32, -128, -7, -77, -14, -50, -23, -128, -29, -128, 
  31, 1, -10, -128, -128, -128, 0, -128, -29, -128, 
  -33, -50, 7, -77, -3, -60, -29, -128, 4, -128, 
  36, -128, -43, -128, -23, -77, -12, -128, 10, -26, 
  11, -128, -77, -128, -60, -60, -18, -128, -37, -128, 
  84, 74, 94, 64, 60, -26, -128, -128, -20, -77, 
  -20, -128, -4, -128, -26, -128, -16, -26, -16, -128, 
  -1, -128, -14, -128, 24, -37, 15, -128, -43, -43, 
  -37, -128, -14, -128, -18, -128, -60, -50, -37, -77, 
  114, 99, 122, 99, 116, 97, 104, 31, 55, 45, 
  76, -26, -60, -77, -18, -37, -37, -128, -3, -29, 
  10, 13, 23, -3, -2, -6, 31, -29, 31, -10, 
  42, 44, 53, 4, 1, -14, -3, -50, 10, -29, 
  115, 81, 117, 98, 114, 95, 111, 54, 76, 82, 
  89, 63, 53, 25, 44, -128, 26, 9, 37, 11, 
  27, 16, 52, 34, 11, 52, 68, 9, 35, 46, 
  63, 71, 90, 56, 45, -8, 42, 22, 39, 19, 
  109, 63, 105, 89, 101, 83, 110, 80, 97, 94, 
  112, 78, 64, -7, 17, -6, 15, 9, 57, 15, 
  49, 33, 72, 59, 60, 91, 107, 34, 69, 54, 
  82, 87, 111, 68, 66, 31, 56, 43, 65, 33, 
  97, 58, 101, 82, 98, 72, 96, 81, 101, 85, 
  105, 49, 62, 30, 25, -1, 38, -8, 62, 42, 
  40, 50, 77, 62, 81, 87, 106, 59, 61, 43, 
  107, 84, 102, 77, 92, 77, 82, 44, 57, 28, 
  96, 69, 84, 84, 116, 86, 119, 99, 117, 73, 
  103, 78, 102, 84, 98, 99, 123, 103, 123, 95, 
  116, 95, 119, 100, 124, 102, 121, 100, 117, 96, 
  124, 102, 112, 89, 115, 99, 117, 93, 106, 78, 
  80, 31, 70, 35, 68, 82, 106, 95, 122, 84, 
  110, 70, 101, 92, 117, 98, 122, 97, 103, 87, 
  114, 94, 112, 92, 113, 83, 110, 100, 122, 95, 
  103, 70, 103, 97, 119, 94, 118, 95, 114, 85, 
  75, 22, 67, 24, 65, 61, 80, 89, 111, 87, 
  110, 84, 110, 93, 119, 93, 108, 57, 76, 69, 
  86, 81, 106, 76, 96, 64, 88, 77, 114, 80, 
  87, 58, 99, 95, 112, 77, 96, 72, 102, 86, 
  72, 6, 67, 30, 67, 63, 84, 79, 104, 80, 
  105, 72, 114, 94, 115, 72, 71, -10, 64, 35, 
  91, 63, 83, 48, 91, 44, 79, 67, 105, 73, 
  87, 49, 89, 82, 101, 72, 100, 70, 97, 79, 
  77, 36, 69, 35, 72, 66, 90, 76, 100, 72, 
  99, 83, 114, 91, 83, 9, 47, -128, 44, -18, 
  74, 27, 61, -7, 75, 46, 82, 64, 94, 71, 
  87, 39, 86, 69, 91, 64, 98, 79, 99, 34, 
  71, 19, 71, 26, 78, 64, 82, 70, 90, 70, 
  93, 85, 85, 47, 29, -128, -128, -128, -33, -128, 
  16, -128, 5, -128, 70, 57, 68, 26, 66, 50, 
  63, 15, 69, 63, 85, 40, 84, 64, 90, 49, 
  60, 8, 68, 6, 86, 62, 77, 58, 65, 73, 
  84, 85, 70, -128, 18, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -23, 25, 67, 36, 69, 24, 
  47, -6, 61, 41, 85, 46, 65, 56, 84, 40, 
  50, 30, 65, -18, 91, 58, 82, 59, 66, 70, 
  78, 71, 27, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 58, 23, 71, 24, 
  31, -128, 35, -7, 65, 11, 50, 40, 85, 52, 
  34, 40, 60, -60, 87, 39, 82, 40, 59, 45, 
  65, 48, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 55, -43, 51, 6, 
  -77, -128, -43, -128, 19, -128, 6, -77, 49, -23, 
  30, 55, 56, -26, 90, 36, 82, 4, 66, 24, 
  50, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 32, -128, 54, 9, 
  2, -128, -8, -128, -60, -128, 2, -128, 45, -14, 
  25, 35, 11, 21, 84, -16, 67, -128, 71, -33, 
  22, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 27, -128, 5, -12, 
  12, -128, -128, -128, -128, -128, -14, -128, -6, -128, 
  19, 40, -77, 32, 66, -77, 50, -128, 6, -128, 
  -26, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, 24, -60, -20, 9, -128, 7, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
