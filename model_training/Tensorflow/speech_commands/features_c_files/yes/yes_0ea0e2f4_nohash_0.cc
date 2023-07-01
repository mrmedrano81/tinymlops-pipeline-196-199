/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/0ea0e2f4_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_0ea0e2f4_nohash_0.cc" \
 */
#include "yes_0ea0e2f4_nohash_0.h"


const int g_yes_0ea0e2f4_nohash_0_width = 40;
const int g_yes_0ea0e2f4_nohash_0_height = 49;
alignas(16) const signed char g_yes_0ea0e2f4_nohash_0_data[] = {
  99, 79, 88, 72, 75, 55, 84, 72, 55, 65, 
  74, 66, 70, 54, 64, 58, 66, 60, 62, 20, 
  40, 45, 37, 35, 55, 40, 52, 37, 49, 35, 
  31, 34, 45, 41, 23, 32, 44, 28, 33, 23, 
  91, 61, 63, 43, 79, 64, 67, 54, 70, 57, 
  79, 48, 72, 58, 52, 38, 50, 22, 45, 35, 
  52, 49, 53, 41, 55, 30, 27, 35, 56, 25, 
  40, 32, 38, 44, 50, 27, 39, 55, 45, -2, 
  75, 62, 85, 62, 64, 50, 44, 42, 74, 32, 
  53, 54, 60, 31, 39, 37, 56, 35, 49, 43, 
  25, -14, 34, 29, 39, 16, 37, 16, 34, 33, 
  9, 17, 40, 0, 15, 18, 36, 23, 32, -1, 
  82, 60, 74, 50, 16, -29, 35, 9, 65, 45, 
  81, 58, 57, 48, 56, 28, 54, 37, 42, 32, 
  46, 9, 23, 26, 25, 13, 20, -6, 34, 17, 
  29, 5, 30, 9, 43, 23, 37, 11, 36, 10, 
  84, 70, 75, 29, 55, 17, 50, 23, 58, 36, 
  60, 41, 58, 28, 62, 34, 54, 6, 40, 29, 
  38, 24, 38, 0, 31, 11, 21, 1, 30, -6, 
  47, 1, 21, 8, 24, 11, 23, 2, 30, 10, 
  71, 51, 68, 19, 19, 28, 50, 40, 30, 15, 
  58, 39, 60, 2, 51, 4, 43, 19, 45, 9, 
  50, 18, 23, -12, 24, -14, 14, -2, 17, 4, 
  5, -20, 24, -26, 14, -12, 28, -7, 14, -29, 
  59, -14, 55, 47, 62, 53, 74, 45, 69, 14, 
  20, -12, 36, 24, 32, 19, 23, 16, 37, -12, 
  -8, -18, 42, -26, 24, -16, 10, -33, 24, -8, 
  16, -1, 28, -23, 37, -7, 26, -1, 29, -8, 
  70, 31, 55, 25, 33, 25, 59, 0, 37, 41, 
  59, 0, 49, -3, 49, -8, 21, 11, 27, -1, 
  35, -16, 37, 8, 7, -14, 19, -29, 27, -4, 
  11, -26, 30, -14, 7, -37, 17, 11, 27, -23, 
  50, -26, -33, -18, 58, 1, 0, 1, 49, -7, 
  42, -26, 15, 17, 9, -60, 20, -29, 45, 4, 
  21, -16, -37, -33, 30, -37, 17, 4, 9, -26, 
  18, -12, 32, -12, 36, 4, 5, -33, 19, -20, 
  67, 13, 42, -20, 48, 5, 34, 0, 44, -23, 
  50, -2, 24, -8, 21, -20, 20, 4, 49, -1, 
  35, 2, 15, -128, 11, -43, 5, -26, 19, -26, 
  9, -43, 16, -37, 21, -16, 9, -33, 12, -37, 
  62, -12, 28, -26, 48, -12, 6, 19, 21, 9, 
  54, -26, 17, -10, 12, -128, 29, -60, -16, -1, 
  19, -77, 16, -10, -16, -128, -10, -18, 31, -8, 
  10, -60, 7, 0, 1, -77, -1, -26, 11, -77, 
  61, -6, 22, -128, -14, -16, 34, 17, 58, -33, 
  20, 16, 32, -128, 35, -29, 11, -26, 24, -3, 
  -1, -1, 2, -50, 4, -60, -7, -26, 11, -43, 
  -1, -60, 25, -60, -6, -60, 15, -26, 0, -50, 
  50, -20, 53, 38, 22, -128, -26, -14, 44, -50, 
  31, -14, 15, -33, 24, -1, 13, -29, 37, 10, 
  37, -29, 25, -50, 21, -14, 21, -128, -33, -128, 
  4, -37, -8, -23, 23, -50, 13, -50, -16, -18, 
  47, 31, 55, -77, 37, 17, 51, -8, 17, -128, 
  -128, -128, -33, -29, 18, -128, -43, -50, 42, 10, 
  -10, -26, 11, 1, -7, -50, 15, -29, -16, -33, 
  -14, -33, -3, -128, -3, -37, 9, -60, -16, -77, 
  34, -16, 16, -128, 0, -10, 35, -43, 19, -43, 
  43, 11, 26, -77, -3, -7, 34, 4, -12, -77, 
  11, -128, 10, -37, 20, -50, -50, -128, -12, -77, 
  -1, -77, -18, -50, -10, -128, 2, -20, 4, -77, 
  6, -50, 61, 4, 37, 0, -14, 10, 9, -77, 
  34, -14, -20, 1, 28, -77, -50, -29, 13, -43, 
  12, 5, -7, -50, -4, -60, -26, -37, 11, -37, 
  -37, -37, 4, -60, -12, -77, -18, -60, -14, -128, 
  21, -6, 25, 20, 30, -128, -128, -128, 6, 9, 
  52, 30, 11, -77, 16, -29, 9, -128, 24, 0, 
  1, -77, -4, -128, 7, -128, 5, -128, 18, -18, 
  9, -43, 2, -60, -6, -43, 10, -18, 1, -50, 
  31, -128, -50, 2, 39, 24, 1, -128, 2, -3, 
  27, -50, -4, -50, 14, -7, 18, -77, -43, -128, 
  -23, -50, -23, -10, 12, -50, -33, -77, -37, -128, 
  -18, -77, -10, -128, -18, -43, -29, -77, -8, -60, 
  25, -26, -3, -23, 0, -128, -37, -128, -16, -8, 
  50, -14, 16, -77, -1, -77, -77, -128, -33, -18, 
  22, -29, 4, -37, 18, -29, -20, -60, 10, -29, 
  14, -20, -3, -128, -37, -60, 4, -37, -3, -77, 
  11, -128, -33, -128, 50, 7, 32, -43, -26, -128, 
  -128, -128, -77, -77, 20, -128, -16, -128, -12, -43, 
  27, -128, 16, -10, -2, -128, -12, -18, 21, -20, 
  -26, -77, -29, -37, -2, -50, -3, -60, -4, -77, 
  -14, -128, -23, -128, -14, -50, 5, -77, -6, -10, 
  24, -23, -77, -128, -33, -60, -10, -23, -14, -128, 
  18, -77, -60, -128, -26, -29, 9, -128, -43, -128, 
  1, -50, 4, -128, -6, -77, -4, -128, -23, -77, 
  9, -128, -77, -128, 24, -128, 29, -43, 30, -77, 
  -26, -128, -16, -128, -4, -128, -8, -60, -14, -128, 
  23, -18, 19, -77, 16, -37, -12, -128, 12, -33, 
  -8, -128, -33, -128, -20, -128, -37, -128, -12, -128, 
  7, -128, 26, -43, 4, -128, -128, -128, 19, -128, 
  -128, -128, -14, -77, -18, -43, 24, -8, 9, -77, 
  -77, -128, -77, -128, -77, -128, -77, -128, 0, -43, 
  -29, -77, -12, -77, -8, -60, -23, -60, -29, -77, 
  26, -128, 38, 11, -6, -60, 35, -29, 37, -23, 
  14, -128, -43, -16, 13, -77, 0, -43, -8, -128, 
  -12, -77, -23, -128, -33, -43, 11, -60, -20, -128, 
  -37, -60, -20, -128, -18, -43, -7, -128, -23, -128, 
  91, 88, 108, 87, 88, 43, 67, 15, 34, 16, 
  10, -128, -128, -128, -37, -77, -26, -37, 17, 8, 
  75, 64, 47, 17, 62, 62, 57, 36, 74, 65, 
  66, -26, 8, 25, 45, -26, -7, -26, 26, -7, 
  98, 80, 110, 91, 104, 79, 88, 40, 45, 8, 
  12, -77, 39, -128, -50, -14, 50, 29, 60, 59, 
  89, 63, 43, 37, 88, 77, 90, 71, 85, 69, 
  81, 5, 17, 40, 70, 4, 27, -7, 29, -43, 
  94, 72, 101, 84, 115, 93, 97, 80, 83, 57, 
  58, 48, 69, 49, 60, 39, 68, 50, 79, 77, 
  102, 77, 89, 77, 95, 69, 81, 64, 87, 64, 
  66, 13, 27, -60, -7, -50, 6, -77, 10, -33, 
  92, 71, 83, 65, 113, 94, 115, 88, 98, 74, 
  90, 69, 90, 69, 85, 75, 92, 80, 107, 90, 
  104, 74, 98, 86, 104, 74, 95, 77, 98, 72, 
  81, 35, 52, 25, 2, -50, -8, -33, 22, -20, 
  85, 56, 73, 51, 86, 77, 115, 94, 107, 81, 
  94, 76, 98, 79, 97, 78, 102, 90, 113, 83, 
  89, 69, 96, 79, 93, 62, 87, 74, 93, 65, 
  76, 34, 59, 33, 9, 9, 38, -7, 25, 15, 
  78, 46, 64, 27, 65, 59, 99, 91, 106, 85, 
  100, 72, 94, 75, 98, 79, 106, 89, 104, 64, 
  80, 64, 97, 72, 84, 58, 84, 69, 90, 58, 
  61, -10, -1, -77, 4, -60, 4, -60, -43, -77, 
  68, 12, 62, -4, 46, 9, 82, 74, 109, 69, 
  90, 64, 87, 65, 91, 73, 101, 78, 80, 31, 
  69, 50, 88, 60, 72, 36, 72, 43, 72, 19, 
  32, -20, -8, -20, -12, -128, 0, -128, -6, -77, 
  60, 8, 45, -43, 33, -60, 68, 52, 94, 68, 
  74, 43, 69, 42, 72, 53, 95, 59, 50, -77, 
  41, 7, 68, 34, 55, 11, 60, 35, 66, 26, 
  37, -12, 12, -20, 6, -23, 6, -128, -37, -43, 
  49, -10, 37, -128, -37, -77, 40, 30, 81, 30, 
  52, -8, 70, 39, 69, 29, 69, -33, -77, -128, 
  -29, -128, 16, -20, 39, -60, 1, -60, 42, -60, 
  -14, -77, 1, 14, 32, -29, -4, -128, -37, -128, 
  47, -8, 34, -128, -4, -128, 25, -128, 19, 17, 
  52, 6, 60, -26, 32, -16, 46, -128, -128, -128, 
  -128, -128, -128, -128, -33, -128, -128, -128, -128, -128, 
  -128, -60, -43, -77, 22, -60, -23, -128, -60, -128, 
  8, -128, -33, -128, -37, -128, -37, -128, -128, -128, 
  24, -77, -4, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, -128, -33, -128, -20, -128, -128, -128, 
  -20, -128, -23, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -37, -37, -33, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, -60, -77, -37, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -60, 36, 46, 66, 33, 51, 19, 43, -4, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -77, 
  -10, 2, 52, 60, 86, 62, 53, 28, 55, 12, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -50, 
  23, 32, 71, 55, 75, 63, 62, 46, 67, 29, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -12, -10, 
  12, 14, 60, 28, 65, 25, 56, 28, 50, 11, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 0, -77, 
  -29, 26, 64, 51, 65, 29, 25, 22, 47, -33, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  2, 45, 37, -33, 27, -26, 15, -12, 34, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -77, 
  10, 1, 53, 4, 42, -50, 35, -50, 11, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -12, -33, 26, -33, 16, -128, -20, -128, -23, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, 1, 0, -128, 11, -128, -29, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -60, -20, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};