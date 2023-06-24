/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/af7a8296_nohash_2.wav" \
 * --output_c_file="features_c_files/yes/yes_af7a8296_nohash_2.cc" \
 */
#include "yes_af7a8296_nohash_2.h"


const int g_yes_af7a8296_nohash_2_width = 40;
const int g_yes_af7a8296_nohash_2_height = 49;
alignas(16) const signed char g_yes_af7a8296_nohash_2_data[] = {
  121, 100, 118, 99, 114, 95, 115, 98, 108, 94, 
  114, 90, 99, 92, 114, 90, 102, 91, 101, 92, 
  100, 85, 96, 80, 103, 86, 97, 82, 84, 71, 
  87, 74, 82, 67, 78, 69, 71, 65, 74, 42, 
  100, 79, 87, 52, 101, 80, 92, 61, 86, 73, 
  97, 77, 98, 76, 81, 83, 104, 85, 86, 59, 
  89, 63, 71, 75, 84, 69, 89, 70, 82, 63, 
  74, 63, 72, 65, 73, 46, 65, 59, 63, 51, 
  82, 64, 77, 11, 83, 55, 76, 28, 82, 70, 
  84, 64, 82, 67, 82, 70, 91, 73, 83, 67, 
  96, 70, 90, 67, 76, 48, 69, 37, 62, 48, 
  75, 59, 78, 58, 65, 44, 62, 39, 62, 40, 
  59, 6, 79, 55, 89, 71, 83, 52, 79, 61, 
  88, 60, 84, 61, 80, 67, 92, 55, 89, 56, 
  75, 60, 76, 62, 72, 55, 78, 44, 74, 49, 
  73, 46, 58, 44, 65, 40, 64, 53, 62, 28, 
  54, 51, 89, 36, 88, 67, 79, 34, 81, 27, 
  43, 54, 85, 45, 71, 5, 67, 58, 78, 38, 
  61, 46, 67, 47, 73, 28, 43, -4, 54, 32, 
  53, 30, 61, 27, 55, 37, 50, 35, 43, 21, 
  86, 45, 84, 33, 65, 51, 82, 49, 64, 37, 
  53, 34, 71, 48, 67, 39, 78, 45, 62, 41, 
  56, 36, 67, 44, 61, 40, 69, 51, 66, 46, 
  60, 28, 55, 36, 62, 41, 44, 29, 52, 14, 
  79, 46, 64, -4, 70, 52, 82, 48, 76, 57, 
  60, -2, 60, 23, 71, 62, 74, 33, 77, -60, 
  25, -29, 57, 32, 67, 4, 57, 32, 63, 49, 
  68, 43, 72, 33, 58, 37, 50, 18, 53, 22, 
  45, -1, 60, 45, 78, 34, 64, 43, 69, 10, 
  28, 28, 64, -12, 57, 42, 56, 35, 73, 15, 
  57, 17, 60, 25, 39, 18, 34, -12, 34, 36, 
  66, 31, 44, 29, 50, 26, 39, 11, 47, -10, 
  25, 24, 78, 36, 35, -43, 57, -37, 59, 45, 
  73, 33, 37, 4, 51, 6, 57, -60, 52, 36, 
  66, 16, 64, 17, 64, 30, 44, 19, 63, 50, 
  64, 45, 50, -1, 31, -18, 45, 0, 33, -20, 
  8, -128, 61, 19, 50, -37, 52, 19, 65, -128, 
  46, 11, 62, 39, 65, 4, 37, -16, 60, 32, 
  52, -43, 60, 20, 37, -7, 44, -18, 37, -3, 
  45, 20, 38, -29, 5, 2, 48, -14, 45, 11, 
  77, 30, 20, -60, -29, -128, 54, 39, 71, 27, 
  62, 25, 63, -29, 55, 24, 61, -37, 53, 19, 
  60, 34, 58, -6, 49, 28, 59, 27, 46, -7, 
  55, 16, 30, -33, 47, 15, 47, -2, 39, -7, 
  65, 14, 57, 20, 53, -128, 17, -77, 51, -2, 
  60, 7, 50, 32, 44, -20, 42, -3, 49, -26, 
  44, 4, 55, 40, 64, 33, 57, -12, 32, -23, 
  28, -3, 30, -16, -33, -26, 39, -26, 33, -29, 
  27, 9, 62, 65, 83, 4, 42, 9, 68, 32, 
  64, -14, 50, -20, 15, 20, 57, 0, 59, 5, 
  54, -77, 49, -23, 14, -23, 55, 31, 74, 65, 
  80, 54, 71, 44, 43, 22, 58, 39, 50, -4, 
  15, -20, 50, -60, 36, -7, 55, -29, 42, -23, 
  25, -16, 55, 9, 13, 19, 54, 2, 49, -37, 
  1, -50, 47, -10, 54, 10, 50, 4, 51, 9, 
  38, -29, 23, -43, 42, 0, 39, -60, 14, -77, 
  -12, -26, 47, -128, 0, -128, 39, -29, 61, 30, 
  40, -128, -26, -128, 5, -7, 59, 0, 45, 22, 
  58, 39, 58, -50, 35, -1, 42, 44, 70, 48, 
  47, 17, 52, 25, 22, -6, 36, -23, 21, -37, 
  41, -20, 13, -43, 47, -18, 40, -26, 7, -77, 
  20, 18, 20, 4, 51, 13, 57, -128, 31, -3, 
  19, -128, 25, 8, 40, -33, 52, -1, 42, -50, 
  1, -77, 11, -60, 25, -1, 9, -128, 29, -26, 
  26, -77, 46, -77, 10, -128, 27, -33, 31, -128, 
  13, -23, 50, 36, 44, -43, 45, -60, -37, -26, 
  37, 21, 36, -128, 40, -23, 40, -29, 37, -20, 
  38, -128, 9, -37, -12, -128, 4, -128, -1, -18, 
  -1, -128, 35, -29, 8, -2, 45, -60, 14, -23, 
  -7, -50, 5, -77, -16, -43, 38, -18, 10, 15, 
  57, -37, 17, 17, 40, -33, 42, 20, 50, -33, 
  37, -43, 39, -26, 5, -77, 17, -26, 25, -77, 
  -23, -128, 7, -128, 4, -128, 5, 1, 29, -77, 
  22, -77, 28, -128, 31, -20, 4, -128, -18, 16, 
  55, -29, 44, -23, 42, -10, -4, -1, 50, -2, 
  37, -3, 8, -37, 9, -20, 9, -29, 15, -60, 
  33, 19, 45, -128, 14, -6, 40, 9, 52, -16, 
  27, -16, -29, -128, 14, -128, -12, -6, 42, 30, 
  43, -14, 8, -33, 35, -7, 25, -16, 43, -33, 
  18, -77, 17, -60, 18, -128, -12, -77, -1, -77, 
  46, -1, -7, -128, 32, 8, -23, -8, 0, -128, 
  -3, -128, -77, -128, 39, -128, 13, -33, 37, -12, 
  39, -3, 32, -14, 45, -10, -2, -43, 35, -77, 
  30, -128, 19, -50, -6, -128, 11, -60, 14, -128, 
  39, -4, 27, -128, -12, -43, 36, -8, -8, -43, 
  36, -128, 40, -23, 23, -26, 29, -128, 20, -128, 
  12, -128, 24, -50, 17, -12, -20, -128, 17, -77, 
  -4, -128, -23, -128, 25, -128, -16, -60, -23, -128, 
  26, -128, -1, 25, 26, -128, -43, -128, -50, -128, 
  -77, -128, 34, 8, -12, -37, 36, -23, 18, -128, 
  12, -20, -8, -77, 12, -18, 48, 1, 19, -128, 
  0, -128, -20, -128, 5, -23, 15, -128, -128, -128, 
  -50, -128, -43, 2, 29, -128, 18, -50, 4, -128, 
  -43, 4, 32, -128, -77, -128, -12, -128, -20, -128, 
  -60, -128, -2, -128, -6, -128, 9, -128, -7, -128, 
  4, -128, -3, -43, 16, -128, 1, -37, -12, -77, 
  11, 7, 29, -128, -128, -128, -12, -128, -60, -128, 
  27, 28, 21, -37, 40, -10, 27, 0, 24, -128, 
  -128, -128, 15, -43, 18, -128, 32, -60, -128, -128, 
  -20, -50, 15, -77, 14, -128, 19, -60, 10, -128, 
  32, -128, 25, -18, -8, -128, -128, -128, -128, -77, 
  -7, -128, -50, -128, -10, -50, 37, -7, -37, -128, 
  -7, -43, 14, -60, 8, -50, -2, -23, -77, -128, 
  -128, -128, -37, -128, -8, -128, -3, -128, -14, -60, 
  42, -43, 33, -128, -77, -1, 29, -16, 39, -128, 
  -128, -128, -16, -128, -14, -77, -26, -128, -43, -128, 
  -60, -77, 27, -128, 26, -128, 1, -128, -33, -128, 
  -128, -128, 0, -77, -4, -128, -14, -77, -29, -77, 
  -128, -60, 29, -128, -29, -128, -50, -37, 30, -50, 
  4, -16, 40, -128, -1, -18, 21, -43, 31, -29, 
  -6, -128, 4, -77, 13, -20, 0, -60, -43, -128, 
  -18, -7, 7, -77, -18, -77, -4, -60, 26, -128, 
  23, -6, 53, -7, 24, -60, 14, -37, 30, -29, 
  11, -29, -77, -128, 20, -33, 14, -128, -77, -128, 
  -3, -43, -60, -77, -1, -128, -8, -128, -50, -128, 
  15, -50, -128, -128, -77, -128, 4, -128, -29, -128, 
  39, 72, 102, 72, 62, 22, 51, -7, 44, -60, 
  29, 11, -33, -128, 29, -60, -3, -128, -1, -128, 
  -33, -77, -18, -128, -1, 4, -7, -77, -29, 9, 
  64, 16, -8, -128, -7, -60, -18, -128, -1, -77, 
  67, 82, 103, 65, 58, 54, 79, -43, 32, -4, 
  22, -50, 17, -128, -37, -29, 4, -128, -29, -60, 
  -43, -128, -2, -128, 46, 12, 36, -6, 64, 68, 
  84, 62, 75, 31, 26, -77, -4, 9, 45, -14, 
  33, 73, 108, 88, 99, 73, 100, 87, 82, 18, 
  67, 27, -37, -128, -77, -128, -16, -128, 43, -4, 
  37, 37, 71, 81, 103, 89, 108, 92, 109, 84, 
  102, 82, 94, 61, 49, -14, -12, -23, 27, 30, 
  49, 68, 100, 75, 71, 80, 120, 99, 96, 63, 
  78, 59, 91, 65, 77, 65, 67, 59, 79, 59, 
  87, 79, 109, 91, 109, 90, 111, 90, 105, 78, 
  103, 79, 97, 84, 107, 90, 108, 88, 103, 81, 
  67, 67, 84, 21, 5, 91, 112, 87, 105, 99, 
  116, 66, 112, 84, 83, 59, 69, 73, 97, 85, 
  109, 92, 114, 75, 97, 85, 104, 75, 96, 70, 
  95, 79, 105, 85, 107, 85, 105, 82, 101, 79, 
  64, 54, 73, 6, 52, 72, 82, 28, 113, 97, 
  112, 84, 99, 17, 94, 63, 82, 61, 105, 82, 
  106, 89, 99, 72, 101, 75, 100, 73, 97, 68, 
  85, 70, 96, 73, 95, 73, 95, 73, 94, 69, 
  76, 24, 9, -128, 90, 37, 0, 42, 110, 48, 
  92, 97, 95, 63, 83, 55, 79, 51, 81, 69, 
  101, 69, 35, 0, 60, -7, 64, 0, 51, -128, 
  47, 34, 46, -128, -50, -128, -77, -128, 27, -77, 
  46, -128, -60, -8, 82, -128, 10, 32, 74, 54, 
  94, 51, 62, 49, 66, 20, 68, 27, 76, 61, 
  86, 42, 47, -4, 59, 19, 63, 38, 67, -10, 
  68, 42, 34, -128, 14, -128, 14, -50, 25, -128, 
  59, -128, -128, 14, 77, -29, 2, 33, 77, -18, 
  68, 21, 32, -29, 44, -10, 58, -16, 52, 44, 
  62, -77, -8, -128, -43, -128, -12, -77, -77, -128, 
  -18, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  55, -128, -128, -14, 72, -128, -14, -128, -128, -128, 
  -23, -128, -20, -128, -26, -128, -7, -128, -128, -128, 
  -33, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  39, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -128, -128, 
  -14, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -20, -3, 69, 48, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -7, 54, 87, 59, 
  -23, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -16, 45, 49, 85, 72, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -8, 45, 90, 65, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -3, 23, 78, 65, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -10, 20, 52, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 44, -1, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -8, -20, 51, 25, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -128, -18, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -29, -128, -128, -128, 
};
