/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/4c6167ca_nohash_5.wav" \
 * --output_c_file="features_c_files/yes/yes_4c6167ca_nohash_5.cc" \
 */
#include "yes_4c6167ca_nohash_5.h"


const int g_yes_4c6167ca_nohash_5_width = 40;
const int g_yes_4c6167ca_nohash_5_height = 49;
alignas(16) const signed char g_yes_4c6167ca_nohash_5_data[] = {
  113, 97, 101, 66, 48, 42, 9, 53, 75, 74, 
  81, 66, 52, 37, 57, 17, 20, -37, 23, 40, 
  26, 23, 29, -2, 23, -12, -4, 17, 17, -2, 
  -33, 7, -10, -12, 14, 34, 42, 23, 73, 74, 
  99, 68, 97, 79, 83, 56, 55, 40, 70, 40, 
  9, 19, 63, 44, 21, 16, 34, 22, 4, 0, 
  34, 35, 24, 0, -37, -29, 12, 14, 11, 4, 
  -6, -29, 4, -8, 8, 25, 36, 28, 60, 44, 
  59, -43, 79, 66, 45, 15, -1, 26, 45, 11, 
  22, 15, 31, 15, 25, -20, 22, 11, 14, -23, 
  9, 18, -3, -26, -14, -16, 2, 9, -29, -26, 
  -20, -33, -2, -2, 6, -60, -10, -7, 21, 28, 
  35, -128, 42, -20, 65, 47, 31, -29, -77, -77, 
  -8, -37, 34, 14, 34, 0, 7, -23, 4, -8, 
  25, -1, -29, -33, -8, -14, -14, -33, -37, -37, 
  -7, -43, 1, -20, -4, -8, -23, -20, 24, 10, 
  39, -128, 55, 39, 67, 39, 46, -14, -26, -77, 
  1, -8, 9, -1, 44, 13, 37, 12, 17, -50, 
  39, 4, -1, 5, 16, -77, -23, -26, -8, -37, 
  -20, -14, -43, -77, -23, -12, -18, -3, 39, 9, 
  23, -43, 63, 43, 82, 52, 40, 36, 9, -23, 
  18, -128, 35, 28, 38, 16, 37, -29, 1, 5, 
  40, 5, 22, 5, -18, -23, -50, -50, 4, -18, 
  -23, -29, -16, -50, -33, -60, -43, -29, 49, 11, 
  -128, -128, 2, -20, 58, 18, 16, -23, -4, -50, 
  -18, -77, -43, -50, 37, -1, 34, -3, 38, 8, 
  -18, 27, 43, -4, 10, -50, -23, -29, 16, -14, 
  -33, -128, -77, -77, -77, -43, -33, 2, 46, 9, 
  -20, -128, 56, 15, 54, 27, 53, -60, 24, -2, 
  34, 10, 30, -16, 22, 2, -16, -43, 1, -16, 
  9, -6, 32, -1, 20, -33, 6, -16, 20, -43, 
  -50, -50, -33, -77, -12, -60, -26, -4, 58, 43, 
  16, -10, 44, -8, 9, -128, 43, 14, 16, -20, 
  49, -26, 6, -7, 20, -20, 16, -7, 4, 2, 
  25, -33, -1, 8, 10, -43, 1, -29, -10, -23, 
  -33, -60, -33, -77, -26, -50, -16, -33, 49, 28, 
  -128, -128, 11, -10, 27, -33, 17, -60, -43, -128, 
  -4, -6, 35, -128, -43, -50, 19, 8, -14, -77, 
  45, 0, -20, -33, -18, -77, -37, -50, 15, -33, 
  -33, -77, -43, -50, -43, -128, -37, -128, -43, -128, 
  -128, -128, 49, -18, 4, -128, -60, -128, -10, -23, 
  13, -128, -37, -33, -37, -37, -20, -33, 17, -60, 
  28, -50, -20, -77, -50, -77, -43, -77, 14, -77, 
  -18, -37, -33, -77, -43, -128, -37, -50, -60, -128, 
  -26, -8, 47, -23, 0, -128, 15, -20, 11, -37, 
  -14, -43, 4, -128, -29, -77, -128, 0, 22, 7, 
  16, -77, 4, -37, -18, -20, -23, -50, -1, -77, 
  -3, -37, -26, -77, -37, -77, -50, -77, -128, -128, 
  -77, -26, 39, -128, -12, 31, 51, 15, -128, -128, 
  -128, -33, 34, 29, 34, -128, -77, -50, 33, -60, 
  -60, -128, -29, -77, -43, -37, -50, -128, -43, -128, 
  -37, -128, -128, -128, -77, -128, -18, -128, -128, -128, 
  -50, -128, 26, -4, 42, -33, 19, -77, -37, -128, 
  -77, -128, -6, 40, 41, -77, 4, -6, 2, -128, 
  -4, -50, -60, -128, -128, -60, -18, -60, -128, -128, 
  -37, -128, -20, -77, -23, -128, -33, -128, -128, -128, 
  -128, -128, -3, -20, -1, 4, 32, -26, -77, -26, 
  49, -12, 8, 11, 21, 4, -2, -33, 4, -2, 
  -12, -43, -50, -77, -20, -60, 14, -29, -12, -128, 
  -37, -128, -50, -128, -37, -128, -14, -128, -128, -128, 
  -33, 29, 58, -23, 50, 5, 52, 10, 40, 54, 
  83, 64, 75, 69, 95, 71, 75, 39, 72, 52, 
  5, 30, 46, -20, 25, 42, 85, 74, 49, -37, 
  -2, -33, 9, -10, 8, -6, 43, 7, -12, -128, 
  -3, -128, 40, -10, -1, -10, 48, 8, 12, 19, 
  39, 14, 55, 26, 45, 5, 45, -33, -10, -128, 
  -128, -128, -14, -43, 4, -43, -14, -128, -26, -43, 
  -12, -29, -50, -60, -18, -77, -14, -50, -128, -128, 
  -60, -29, 44, -50, 15, -77, 38, 20, 36, -128, 
  2, -128, -128, -128, -128, -128, -14, -77, -43, -128, 
  -77, -128, -29, -77, -77, -128, -128, -128, -128, -128, 
  -60, -77, -128, -128, -43, -128, -128, -128, -128, -128, 
  26, -77, 13, -128, -18, -77, 9, -3, 41, -128, 
  -77, -128, 19, -128, -128, -128, -26, -128, -33, -128, 
  -33, -128, -128, -128, -77, -128, -128, -128, -77, -60, 
  -43, -128, -8, -60, -77, -128, -60, -128, -128, -128, 
  12, -128, -77, -43, 23, 10, 40, -77, -14, -128, 
  -128, -128, 1, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -14, 54, -29, 4, -128, 
  14, -26, 50, -77, -128, -128, -128, -128, -60, -128, 
  -128, -128, 7, -128, -77, -128, -128, -128, -128, -128, 
  -77, -128, -77, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, -29, 15, 53, -50, -29, -128, 
  1, -128, -3, -128, -128, -128, -23, -128, -4, -50, 
  -128, -128, -33, -50, -20, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, -43, -128, -50, -128, -60, -128, 
  -128, -128, -33, -60, -6, -50, 17, -128, -29, -128, 
  -77, -77, -50, -128, -128, -128, -128, -128, -60, -77, 
  -128, -128, -60, -128, -26, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, 13, -43, -77, -128, -4, -128, -43, -128, 
  -7, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  -37, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -77, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -33, -50, -33, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -128, 
  -29, -128, -50, -128, -77, -128, -128, -128, -43, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -14, -128, -77, -128, -43, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -77, -128, -37, -128, -33, -128, -128, -128, 
  71, 5, 49, 30, 58, 32, 24, -26, -12, -50, 
  -37, -77, -128, -128, -128, -128, -128, -128, -77, -128, 
  -37, -60, 14, 18, 10, 2, 1, -77, -43, -128, 
  -77, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  119, 102, 119, 101, 122, 98, 114, 88, 101, 70, 
  80, 45, 55, 40, 48, 40, 55, 62, 75, 75, 
  102, 97, 122, 100, 116, 97, 115, 95, 111, 87, 
  79, 66, 78, 40, 50, 54, 82, 75, 66, 74, 
  116, 94, 112, 93, 119, 101, 117, 95, 117, 95, 
  105, 85, 85, 69, 80, 64, 89, 85, 107, 94, 
  118, 95, 100, 76, 111, 87, 109, 89, 107, 80, 
  76, 50, 67, 55, 57, 64, 97, 82, 82, 82, 
  106, 76, 103, 79, 112, 87, 119, 95, 115, 92, 
  112, 90, 106, 85, 107, 92, 114, 97, 120, 100, 
  119, 85, 102, 85, 111, 86, 107, 87, 110, 82, 
  87, 60, 66, 48, 77, 64, 93, 74, 75, 58, 
  99, 63, 96, 64, 84, 68, 105, 93, 114, 88, 
  109, 89, 110, 86, 109, 89, 114, 93, 117, 90, 
  102, 66, 94, 76, 104, 80, 105, 85, 107, 81, 
  99, 81, 88, 52, 79, 75, 95, 79, 97, 16, 
  89, 53, 92, 47, 67, 48, 98, 80, 110, 84, 
  107, 85, 107, 86, 107, 85, 112, 91, 107, 65, 
  74, 42, 81, 59, 88, 59, 91, 71, 99, 71, 
  95, 78, 98, 67, 89, 74, 91, 62, 90, -20, 
  80, 47, 89, 39, 57, 31, 93, 72, 100, 85, 
  104, 76, 107, 80, 102, 84, 110, 77, 75, 15, 
  62, -7, 61, 24, 70, 39, 69, 45, 89, 65, 
  90, 60, 90, 67, 86, 62, 83, 64, 90, 19, 
  73, 42, 85, 36, 31, -16, 78, 35, 75, 62, 
  92, 63, 88, 59, 93, 67, 93, 37, 26, -128, 
  -128, -128, 30, -128, 9, -77, 42, -33, 44, 27, 
  45, -18, 73, 74, 89, 42, 45, 34, 79, -43, 
  61, -3, 64, -26, 14, -128, 67, 16, 9, 20, 
  81, 27, 53, -50, 42, 23, 58, -128, -128, -128, 
  -128, -128, -128, -128, -7, -128, -128, -128, 9, -43, 
  15, -128, 50, 50, 76, 31, 11, 17, 64, -33, 
  -77, -128, 41, -128, -128, -128, -33, -128, -128, -128, 
  -6, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, 31, -77, 30, -60, -128, -128, -14, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 82, 75, 75, 63, 77, 44, 72, 22, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -14, -128, 
  -8, 29, 87, 91, 107, 79, 94, 70, 86, 59, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 27, -23, 32, -1, 
  71, 73, 107, 77, 100, 73, 97, 62, 90, 78, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, 44, 29, 
  66, 65, 94, 59, 87, 60, 84, 60, 84, 66, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -77, 45, 36, 
  51, 73, 84, 34, 69, 44, 69, 49, 75, 48, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -77, 69, 59, 
  42, 64, 78, 32, 69, 48, 67, 44, 76, 49, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 34, 53, 76, 51, 
  55, 50, 65, 11, 70, 35, 59, 31, 74, 29, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 49, 33, 52, 6, 
  67, 22, 57, -2, 66, 9, 56, 24, 58, 34, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -50, 54, -128, -128, -128, -29, -128, 32, -20, 
  23, -8, 81, 24, 16, -128, 42, -6, 55, 5, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -33, -50, -128, -128, -128, -43, -10, 46, -33, 
  60, 37, 30, -77, 7, -128, -2, -128, 24, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -3, -50, 11, -128, 
  40, -29, -23, -128, -128, -128, -77, -128, -26, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
