/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/f292725f_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_f292725f_nohash_0.cc" \
 */
#include "no_f292725f_nohash_0.h"


const int g_no_f292725f_nohash_0_width = 40;
const int g_no_f292725f_nohash_0_height = 49;
alignas(16) const signed char g_no_f292725f_nohash_0_data[] = {
  92, 71, 77, 70, 68, 65, 77, 68, 92, 85, 
  90, 76, 87, 74, 85, 60, 64, 69, 84, 79, 
  91, 86, 102, 78, 71, 70, 80, 66, 77, 65, 
  57, 44, 54, 44, 47, 50, 56, 56, 82, 77, 
  87, 74, 84, 65, 77, 62, 70, 69, 67, -26, 
  40, 39, 60, 4, 43, 37, 57, 44, 52, 39, 
  49, -10, 30, -7, 55, 35, 51, 31, 40, 27, 
  37, 32, 45, 35, 54, 34, 52, 32, 31, -43, 
  71, -7, 37, 61, 80, 59, 75, 58, 48, 28, 
  65, 32, 54, 39, 55, 48, 34, -16, 30, 43, 
  63, 52, 72, 11, 42, 35, 65, 49, 50, 22, 
  40, 26, 45, 30, 27, 20, 28, 26, 44, -33, 
  66, 57, 63, 42, 52, 1, 51, 26, 52, -26, 
  9, 27, 59, 45, 47, 17, 43, 32, 31, -77, 
  19, -77, 0, 16, 37, -7, 11, -10, 35, 14, 
  41, 15, 38, 29, 27, 20, 40, 9, 31, -33, 
  74, 57, 35, 51, 65, 51, 59, 11, 42, 20, 
  59, 34, 65, 38, 59, 46, 42, 35, 62, 36, 
  40, 7, 45, 14, 31, 4, 17, 15, 52, 19, 
  37, 23, 31, 2, 27, -10, 40, 18, 63, 47, 
  77, 55, 72, 34, 53, 54, 58, 8, 45, 14, 
  57, 11, 2, 4, 47, 27, 54, 7, 43, 23, 
  54, 14, 36, 19, 31, 20, 34, 26, 64, 9, 
  32, 9, 34, 11, 39, 2, 37, 14, 52, 28, 
  23, 13, 63, 44, 62, 27, 49, -7, 25, -23, 
  32, -20, 12, -128, 2, 6, 36, -12, -20, -50, 
  12, -37, -4, -16, 5, -1, 14, -60, 15, -10, 
  34, 1, 32, -4, 35, 4, 36, -14, 4, -128, 
  47, 6, 60, 23, 39, 13, 54, -29, 25, -77, 
  27, 4, 38, -50, -4, -128, -2, -14, 7, -128, 
  -14, -29, 9, -29, 36, -10, 14, -37, -3, -37, 
  6, -60, 7, -23, 30, 1, 35, -7, -20, -60, 
  37, 6, 63, 14, 39, 7, 45, -128, 17, -23, 
  -18, -43, 24, 16, 26, 7, 42, -128, 24, -77, 
  24, -128, -1, -26, 16, -60, 34, -4, 22, -60, 
  32, -37, 31, -16, 2, -18, 32, 4, 11, -128, 
  42, 11, 66, 11, 51, -16, 19, -8, 53, 24, 
  0, -26, 29, 19, 35, 4, 16, -6, 25, -128, 
  0, -60, -60, -128, 20, -50, 16, -33, -33, -77, 
  -7, -33, 6, -29, 27, 0, 31, -23, 0, -128, 
  55, 40, 48, -50, 43, -4, -7, -128, 29, -2, 
  40, 4, 2, -33, 30, -60, -37, -128, 9, -77, 
  20, -128, -128, -37, 20, -43, 6, -128, 6, -50, 
  12, -6, 22, -23, 10, -8, 34, -50, -16, -128, 
  50, 29, 53, -23, 58, 33, 39, -26, -26, -77, 
  16, -60, 33, -23, 15, -14, 12, -29, -16, -128, 
  -23, -60, 42, -10, 9, -77, 20, -8, 11, -23, 
  28, -60, -3, -37, 21, -50, 4, -26, -4, -128, 
  25, -77, 32, -20, 45, 1, 42, 10, -29, -16, 
  17, 0, 42, -128, -6, -33, 23, 13, 21, -77, 
  -8, -33, -23, -37, 19, -128, -12, -26, 26, 0, 
  11, -77, -4, -50, -18, -33, 16, -43, -8, -77, 
  -10, -128, 15, -12, 40, -128, 19, -16, 12, -128, 
  20, -128, 5, -50, 37, -33, 36, -4, 9, -60, 
  -7, -128, -60, -128, 10, -60, 22, -3, 15, -7, 
  10, -77, -2, -50, 6, -77, 11, -18, -7, -128, 
  55, -23, -6, -60, -4, -60, 27, -128, -33, -128, 
  4, -23, -8, -128, -50, -128, 1, -60, 12, -128, 
  -33, -128, -26, -128, -16, -1, 9, -128, -7, -128, 
  4, -26, -6, -33, 26, -43, -10, -77, -20, -128, 
  -18, -26, 44, -33, 33, -77, 24, -23, 2, -37, 
  47, -23, -16, -60, -4, -128, 7, 7, 5, -77, 
  -50, -128, -128, -50, 1, -77, 17, -26, 4, -60, 
  -3, -18, 13, -43, -18, -128, -12, -60, -18, -128, 
  37, -50, 4, -128, -14, -128, 9, -128, -29, -77, 
  19, -37, 23, -60, 14, -77, -10, -128, -14, -128, 
  -128, -128, -50, -128, -3, -77, -37, -128, -4, -37, 
  -7, -20, 4, -26, -6, -128, -43, -128, -50, -128, 
  45, -16, 36, -128, 41, 16, 23, -7, -12, -23, 
  40, -12, -37, -43, 40, -23, 32, -50, -12, -128, 
  -2, -128, -29, -26, 5, -128, -128, -128, -33, -60, 
  -18, -20, -29, -77, -1, -37, 2, -50, -29, -128, 
  52, 44, 54, -128, 23, -10, -8, -128, -33, -128, 
  -37, -128, -50, -128, -7, -23, -14, -128, 2, -128, 
  2, -77, -128, -128, -77, -33, -6, -50, -29, -128, 
  17, -18, 16, -77, 16, -43, -6, -77, -26, -128, 
  -7, -50, 39, -37, 46, -12, 25, 8, 23, -128, 
  -128, -128, -8, -128, -128, -43, -8, -128, -12, -77, 
  -33, -77, 11, -26, 9, -77, -37, -128, 14, -43, 
  -10, -60, -12, -128, -4, -43, -12, -43, -6, -77, 
  -12, -3, 35, -1, 24, -128, -3, -128, 40, -43, 
  -16, -128, -128, -128, -43, -128, 11, -50, 23, -128, 
  16, -77, -20, -128, -8, -128, -43, -6, -2, -128, 
  -20, -128, -14, -50, 9, -50, -33, -128, -2, -128, 
  25, -29, -128, -43, 33, -43, -26, -3, 43, -77, 
  -128, -128, -128, -128, -50, -60, 9, -128, -60, -128, 
  -128, -128, -128, -77, -14, -128, -12, -128, -128, -128, 
  -23, -128, -12, -128, -16, -128, 12, -60, -43, -128, 
  -4, -128, 26, -6, 27, -4, -26, -18, 26, -26, 
  -77, -77, -8, -43, -20, -43, -10, -128, -43, -60, 
  -20, -128, -12, -23, 6, -128, -33, -77, 4, -77, 
  11, -60, -16, -128, -50, -37, -10, -50, -4, -128, 
  116, 98, 114, 80, 101, 84, 90, 46, 74, 11, 
  24, -4, -3, 14, -29, -128, 6, -128, -29, -128, 
  7, -33, 37, -60, -12, -128, -50, -50, -16, -128, 
  -37, -128, -26, -50, -14, -77, -12, -77, -12, -128, 
  120, 95, 88, 97, 120, 92, 102, 90, 81, 80, 
  82, 67, 80, 74, 79, 53, 58, 56, 57, 74, 
  99, 82, 95, 61, 45, 44, 60, -12, -7, -128, 
  -128, -128, -3, -60, -12, -43, -12, -77, -16, -60, 
  110, 79, 86, 88, 104, 51, 107, 80, 96, 80, 
  79, 71, 76, 65, 69, 41, 46, 53, 77, 76, 
  106, 77, 97, 75, 67, 63, 87, 45, -29, -128, 
  -18, -128, -29, -33, 1, -77, -10, -77, -2, -18, 
  100, 69, 86, 77, 94, 32, 99, 66, 90, 67, 
  74, 59, 79, 54, 62, 25, 60, 38, 76, 70, 
  88, 58, 91, 57, 54, 48, 75, 7, 1, -128, 
  -60, -128, 12, -43, -8, -77, -16, -60, 2, -43, 
  93, 62, 83, 69, 91, 56, 97, 70, 88, 62, 
  81, 62, 80, 57, 68, 37, 53, 62, 95, 72, 
  90, 56, 90, 53, 68, 69, 91, 67, 76, 57, 
  72, 39, -18, -60, -4, -60, 1, -60, -14, -43, 
  85, 52, 78, 65, 85, 65, 103, 77, 108, 87, 
  110, 92, 97, 75, 90, 71, 99, 81, 108, 89, 
  109, 81, 94, 68, 103, 89, 108, 89, 110, 89, 
  89, 55, 30, 4, 6, -60, 0, -20, 4, -37, 
  80, 46, 72, 55, 79, 34, 92, 64, 100, 79, 
  105, 85, 93, 70, 92, 76, 104, 90, 111, 80, 
  93, 54, 70, 51, 91, 67, 77, 68, 90, 76, 
  70, -26, 15, 0, 35, -14, 29, 26, 44, 6, 
  73, 34, 67, 46, 72, 39, 87, 55, 94, 68, 
  101, 77, 89, 65, 101, 82, 105, 81, 94, 59, 
  52, 20, 31, 15, 79, 39, 76, 27, 78, 59, 
  70, -1, 16, -6, 30, -26, 15, -29, 0, 7, 
  66, 19, 64, 37, 66, 37, 81, 47, 87, 59, 
  94, 67, 87, 59, 100, 80, 99, 52, 63, -7, 
  13, 14, 34, -128, 56, 40, 56, 19, 55, 35, 
  59, -23, 10, -37, 8, -60, 19, -16, 5, -43, 
  61, 9, 52, 23, 60, 16, 73, 37, 80, 51, 
  84, 59, 77, 50, 94, 60, 80, -4, 34, -128, 
  -128, -128, -23, -128, 9, 2, 45, -18, 56, 34, 
  66, -4, 18, -77, -12, -128, -43, -77, 0, -128, 
  57, -1, 47, 16, 57, -2, 69, 33, 74, 44, 
  76, 49, 75, 52, 89, 44, 28, -128, -29, -128, 
  -128, -128, -37, -128, -7, -60, 31, -60, 34, -4, 
  57, -43, 9, -128, 2, -128, -77, -77, -29, -128, 
  51, -8, 45, 22, 61, 6, 70, 38, 66, 35, 
  68, 40, 89, 65, 53, -43, -128, -128, -26, -128, 
  -128, -128, -33, -128, -128, -128, -33, -128, -16, -60, 
  50, -77, 15, -128, 21, -77, -18, -77, -10, -128, 
  46, -16, 42, 25, 64, 11, 72, 46, 60, 32, 
  71, 47, 72, 49, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -16, -128, 
  19, -60, -33, -128, -60, -128, -60, -128, -29, -128, 
  39, -33, 44, 25, 64, 20, 72, 44, 64, 35, 
  64, 26, 32, -43, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -26, -128, -128, -128, -33, -50, 4, -26, 
  34, -33, 23, 18, 64, 5, 61, 35, 60, 39, 
  -37, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -33, -128, -77, -128, -29, -128, 
  29, -33, -33, -3, 59, -10, 40, 11, 32, 11, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -37, -128, -60, -128, 
  19, -60, -128, -128, 39, -128, -29, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -29, -128, -128, -128, -128, -128, 
  -1, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
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
  -128, -128, -77, -128, -128, -128, -18, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
