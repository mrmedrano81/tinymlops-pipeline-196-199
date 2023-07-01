/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/6379c6a2_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_6379c6a2_nohash_0.cc" \
 */
#include "yes_6379c6a2_nohash_0.h"


const int g_yes_6379c6a2_nohash_0_width = 40;
const int g_yes_6379c6a2_nohash_0_height = 49;
alignas(16) const signed char g_yes_6379c6a2_nohash_0_data[] = {
  76, 69, 35, 58, 73, 78, 94, 83, 92, 73, 
  72, 67, 68, 72, 87, 75, 84, 79, 89, 71, 
  67, 75, 88, 76, 73, 65, 72, 69, 80, 67, 
  57, 67, 74, 66, 75, 60, 68, 63, 74, 59, 
  55, 60, 77, 58, 63, 46, 81, 75, 96, 65, 
  84, 56, 74, 60, 79, 58, 71, 65, 82, 64, 
  75, 57, 63, 54, 62, 56, 67, 58, 69, 60, 
  76, 50, 62, 49, 62, 59, 67, 54, 61, 52, 
  72, 49, 61, 60, 50, 31, 80, 73, 86, 47, 
  61, 54, 69, 64, 70, 45, 75, 63, 67, 57, 
  75, 56, 74, 41, 68, 50, 67, 50, 65, 53, 
  60, 53, 72, 50, 65, 50, 65, 46, 64, 40, 
  47, 46, 69, 35, 64, 42, 72, 52, 72, 49, 
  42, 40, 79, 44, 52, 36, 62, 41, 51, 50, 
  73, 31, 37, 24, 68, 45, 61, 44, 51, 29, 
  59, 55, 64, 34, 53, 40, 57, 46, 58, 47, 
  51, -16, 54, 33, 48, 21, 64, 49, 62, 31, 
  63, 42, 81, 27, 57, 25, 36, 39, 70, 42, 
  57, 52, 70, 50, 50, 19, 34, -3, 52, 10, 
  66, 29, 60, 45, 62, 31, 60, 34, 57, 40, 
  6, -29, 58, 25, 40, 23, 47, 9, 50, 24, 
  62, 45, 25, -4, 61, 32, 42, -6, 42, -8, 
  39, 18, 71, 45, 63, 45, 56, 17, 39, -8, 
  60, 31, 55, 33, 58, 39, 52, 15, 55, 34, 
  54, -20, 30, -128, 50, 37, 44, -128, 45, 35, 
  21, 11, 73, 37, 39, 30, 52, 39, 51, 27, 
  49, 6, 31, -33, 30, 7, 32, 16, 55, 10, 
  24, -3, 44, 20, 44, 15, 49, 29, 51, 19, 
  35, -8, 45, 5, 58, 43, 49, -14, 44, 17, 
  63, 37, 74, 28, 49, 39, 65, 0, 51, -12, 
  52, 1, 60, -26, 32, 9, 57, 10, 29, 15, 
  47, 25, 40, 19, 38, 11, 50, 24, 46, 5, 
  46, -18, 25, 27, 45, 9, 60, 14, 11, -12, 
  4, 5, 61, 16, 55, -4, 50, -14, 51, 11, 
  49, -6, 24, -37, 49, -10, 4, -77, 40, -2, 
  48, 6, 42, 17, 44, -6, 44, -1, 34, 22, 
  25, -12, -8, -128, -50, -43, 57, 9, -8, 14, 
  42, -60, -23, 20, 60, 38, 48, 20, 57, 17, 
  38, -16, 47, 10, 43, 4, 30, -2, 17, -26, 
  22, -77, 35, -29, 36, -10, 18, -29, 38, -1, 
  54, -18, 57, 40, 19, -50, 26, -26, 25, -29, 
  38, -12, 50, 6, 1, -128, 31, 9, 59, 22, 
  50, -14, 24, 1, 30, -50, 15, -18, 49, -7, 
  23, 5, 13, -50, 31, 0, 23, 5, 37, -10, 
  54, 0, 2, -20, 31, -128, -60, -128, 27, -10, 
  17, 1, 63, 0, 49, -20, 52, -128, 0, -16, 
  47, 11, 17, -2, 24, -43, 38, -3, 25, -77, 
  32, 19, 42, -20, 35, -1, 32, 0, 35, -7, 
  14, -43, -6, -128, 11, -12, 9, -128, 30, -14, 
  19, 30, 61, 34, 55, -33, 49, 11, 55, 16, 
  46, -37, -7, -20, 34, -20, 26, -26, 14, -26, 
  11, -77, 15, -18, 32, -33, 32, -26, 20, -20, 
  4, -77, 39, -12, 4, -60, 52, -50, -60, -77, 
  22, 10, 45, 10, 12, -128, 40, -26, 22, -50, 
  16, -50, 39, 2, 47, -37, 22, -50, 28, 2, 
  -6, -128, -3, -128, 27, -43, 33, -60, 29, -8, 
  16, -8, 9, -43, 55, 8, 29, -77, 4, 29, 
  44, -77, 42, 23, 30, -20, 27, 9, 47, -26, 
  42, -7, 40, 25, 21, -4, 42, -33, -1, -18, 
  25, -60, 10, -29, 19, -37, 19, -60, 10, -26, 
  34, -128, 8, -128, -1, -60, 11, -26, -33, -128, 
  5, -50, 47, 31, 60, 20, 29, -77, 24, -77, 
  35, -26, 31, -4, 24, -50, 30, -3, 23, -14, 
  39, -128, 10, -77, 5, -18, 26, -128, 37, -29, 
  44, -29, 24, 20, 33, 8, 32, -128, -128, -128, 
  -20, -14, 21, -43, 15, -33, 5, -10, 33, -43, 
  42, -16, 4, -128, 4, -128, -16, -26, 29, -50, 
  15, -128, -10, -128, 14, -77, 0, -128, 13, -23, 
  32, 31, 39, -128, -20, -4, 21, -128, 11, -77, 
  13, -77, -1, -43, 25, -20, 41, -128, 14, -33, 
  -1, -43, 44, -10, 26, -60, 30, -10, 25, -12, 
  36, -50, -37, -37, 16, -50, -10, -128, -12, -60, 
  -6, -128, -77, -128, 19, -77, -60, -60, -14, -77, 
  34, -128, -77, -128, 15, -37, 22, -77, 19, -128, 
  -26, -33, 0, -128, -33, -128, 5, -26, 0, -77, 
  17, -20, 23, -50, 13, -37, 11, -43, -3, -29, 
  -37, -2, 35, -37, -23, -128, -128, -128, 37, -23, 
  42, -60, 4, -128, 7, -4, 20, -23, 41, -12, 
  8, -60, 19, -33, 12, -50, 15, -128, -8, -37, 
  38, -37, 10, -50, 22, -23, 5, -37, -14, -20, 
  34, -2, -7, -128, -29, -128, -60, -128, 28, -23, 
  -18, -128, -60, -128, 40, -26, 15, -3, 31, -33, 
  32, -128, -16, -77, 15, -60, -23, -29, 14, -50, 
  -1, -37, -1, -60, -10, -77, 5, -128, -4, -77, 
  -23, -60, 11, -128, -4, -43, 36, -23, 4, 11, 
  41, -50, 32, 19, 45, 25, 34, -77, 28, 4, 
  12, -128, 12, -77, -3, -77, 0, -128, -14, -128, 
  11, -18, 12, -50, 29, -50, 19, -33, 18, -128, 
  42, -7, 25, -128, -7, -128, -43, -128, 11, -29, 
  22, -6, 20, 29, 45, -23, 29, -128, -77, -128, 
  -4, -8, -43, -128, 8, -6, -33, -128, -4, -60, 
  -43, -77, 13, -128, 12, -20, 7, -14, -7, -60, 
  4, -26, 53, -16, -33, -128, -43, -128, -128, -128, 
  -7, -26, 21, -128, 1, -60, 40, -33, 33, -128, 
  7, -128, -20, -33, -1, -128, -12, -128, -6, -20, 
  -1, -26, -18, -128, -18, -77, -16, -128, -18, -128, 
  -33, -128, -77, -128, -50, -128, -128, -128, -23, -128, 
  12, -128, -43, -128, -128, 13, 11, 5, 0, -128, 
  -29, -37, -29, -77, -7, -77, -2, -128, -4, -128, 
  15, -14, 31, -77, -3, -43, -3, -128, -29, -128, 
  -18, -6, 16, -128, -8, -60, 20, -128, -50, -128, 
  25, 8, 32, 37, 47, -128, -128, -128, -10, -60, 
  27, -26, -29, -128, -43, -50, 4, -77, -33, -128, 
  -18, -128, -10, -60, -10, -128, -33, -128, -60, -128, 
  -23, -23, 6, -60, 13, -50, -50, -77, -128, -128, 
  -128, -128, 16, 2, 44, -26, 45, 27, 1, -43, 
  38, -128, 11, -128, -20, -37, -43, -128, -18, -37, 
  24, -77, -12, -43, -18, -77, -29, -77, -6, -128, 
  -60, 14, 52, -43, 8, -60, -33, -128, -77, -50, 
  29, -128, 13, -60, -23, -128, 20, -37, 31, -128, 
  -16, -26, 24, -128, 12, 4, -1, -18, 43, 12, 
  27, -43, 6, -12, 35, 9, 53, 22, 44, 42, 
  -77, -128, 61, 60, 60, 25, 44, -8, 24, -43, 
  24, -43, 13, -128, -16, -50, 23, -128, -12, -77, 
  15, -4, 15, -128, 14, -128, -29, -128, -60, -128, 
  25, -29, -4, -29, -16, -128, 2, -23, 38, -128, 
  -77, -128, -10, -128, -4, -37, -60, -128, -14, -60, 
  -77, -23, 23, -23, 43, -23, 2, -128, -128, -77, 
  34, -29, -37, -77, -23, -128, 30, -50, -128, -128, 
  -60, -128, -7, -77, -43, -128, -43, -128, 17, -128, 
  -77, -128, -128, -128, 1, -128, -128, -128, -37, -128, 
  16, 20, 55, 2, 14, -128, 4, -128, -43, -29, 
  -37, -60, 16, -33, -3, -128, 5, -128, -20, -60, 
  -23, -77, -60, -128, -18, -128, -77, -128, 5, -50, 
  -50, -128, 37, -50, 32, -33, -128, -128, -60, -33, 
  24, 30, 50, -128, -60, -50, 30, -77, -77, -128, 
  35, -14, 21, -33, -12, -128, -128, -128, -23, -128, 
  -6, -50, -20, -60, -3, -128, -37, -128, -4, -128, 
  -8, -50, -10, -128, 13, -77, -60, -128, 14, -33, 
  16, -8, 29, -128, -43, -43, -29, -77, -33, -77, 
  -60, -60, 15, -128, -18, -128, -10, -4, -4, -128, 
  24, -77, 1, -50, 4, -128, -33, -77, -43, -128, 
  1, -77, -37, -37, -8, -128, -10, -29, -7, -77, 
  8, 17, 39, -128, -128, -128, 30, -128, -43, -128, 
  -128, -128, -1, -128, -43, -77, 19, -128, -26, -50, 
  6, -18, -128, -128, -29, -128, -4, -128, -37, -128, 
  8, -128, 4, -128, -12, -128, -50, -20, -3, -128, 
  13, -3, 30, -128, 33, -60, -29, -77, -26, -77, 
  -33, -128, -18, -77, 0, -128, -26, -77, -8, -128, 
  -128, -50, -7, -128, -29, -128, -7, -128, -60, -128, 
  -128, -128, -128, -128, -20, -128, -128, -128, 11, -77, 
  -1, 8, 27, -33, -8, -18, -43, -60, -29, -20, 
  14, -128, -128, -128, -33, -60, -2, -128, -23, -128, 
  -60, -128, -128, -128, -29, -128, -33, -128, -50, -128, 
  -18, -128, 41, -14, -29, -77, -60, -128, -2, -128, 
  13, -50, -37, -128, -26, -3, 4, -18, -12, -128, 
  -77, -128, -18, -128, 2, -50, -33, -128, -33, -128, 
  -128, -60, 19, -128, -26, -128, -37, -128, -33, -128, 
  -4, -128, -128, -128, -26, -128, -16, -3, -6, -50, 
  -18, -29, -50, -128, -23, -60, 33, -77, -50, -37, 
  -26, -128, -128, -128, -20, -128, -77, -60, -20, -128, 
  -7, -77, -77, -128, -60, -128, -77, -128, -37, -128, 
  -128, -128, -60, -43, 4, -7, -60, -43, 4, -128, 
  -128, -128, -26, -128, -3, -128, 10, -26, -50, -128, 
  -60, -128, -23, -77, -14, -128, -60, -128, -128, -128, 
  -18, -128, -128, -128, -50, -128, -50, -128, -16, -128, 
  -60, -128, -128, -43, 19, -60, 6, 14, 4, -23, 
  6, -128, -128, -77, -16, -128, -128, -128, -60, -37, 
  -60, -128, -128, -77, -29, -128, -50, -77, -16, -77, 
  -60, -128, -60, -128, -128, -128, -43, -128, -37, -128, 
  27, -10, -77, -128, -128, -128, -128, -128, -60, -128, 
  0, -128, -128, -128, 0, -18, -37, -128, -128, -128, 
  -77, -60, -77, -128, -50, -128, -43, -43, -43, -128, 
  -33, -128, -23, -128, -128, -128, -128, -128, -128, -128, 
  60, 13, 16, -128, -128, -128, -50, -128, -37, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, -43, -128, -33, -128, -14, -128, 
  -7, -128, -33, -128, -77, -128, -128, -128, -33, -128, 
  103, 90, 110, 88, 110, 83, 71, 34, 40, -1, 
  1, -26, -20, -60, -37, -60, -128, -128, -18, -77, 
  26, 20, 45, 28, 65, 58, 76, 62, 72, 56, 
  33, -18, -26, -60, -23, -128, -128, -128, -60, -128, 
  94, 87, 103, 83, 102, 75, 79, 34, 54, 42, 
  45, -29, -128, -128, 0, -29, 7, -50, -1, -128, 
  52, 59, 72, 56, 83, 63, 82, 69, 84, 69, 
  56, -23, 20, -37, -33, -60, -128, -128, -18, -128, 
  92, 82, 97, 80, 95, 70, 84, 32, 57, 47, 
  46, -14, -50, -43, 28, 10, 2, 15, 25, 17, 
  65, 66, 80, 67, 81, 72, 97, 70, 90, 75, 
  69, 45, 26, -128, 1, -33, -77, -23, -77, -128, 
  85, 74, 97, 77, 99, 69, 93, 54, 67, 61, 
  56, 30, 40, 7, 28, 19, 52, 31, 36, 34, 
  77, 72, 90, 64, 89, 60, 65, 37, 52, 27, 
  45, -3, 9, -128, -7, -128, -29, -12, -128, -128, 
  84, 65, 99, 69, 105, 81, 96, 64, 87, 58, 
  75, 31, 28, 19, 50, 21, 54, 32, 55, 54, 
  85, 72, 92, 67, 93, 63, 80, 52, 63, 37, 
  53, -3, 37, 19, -6, -50, -23, -37, -18, -77, 
  88, 41, 94, 57, 103, 90, 104, 88, 95, 74, 
  92, 65, 77, 61, 77, 57, 79, 61, 80, 71, 
  96, 76, 90, 77, 95, 55, 72, 35, 62, 42, 
  69, 20, 19, 4, 16, -37, 16, -4, 5, -6, 
  86, 19, 84, 44, 85, 67, 106, 92, 94, 70, 
  95, 69, 82, 68, 81, 62, 82, 69, 83, 78, 
  100, 66, 82, 70, 88, 33, 76, 57, 71, 53, 
  64, 9, 29, -60, 5, -29, -33, -128, 19, 29, 
};