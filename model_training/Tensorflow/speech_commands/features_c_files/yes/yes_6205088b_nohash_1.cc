/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/6205088b_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_6205088b_nohash_1.cc" \
 */
#include "yes_6205088b_nohash_1.h"


const int g_yes_6205088b_nohash_1_width = 40;
const int g_yes_6205088b_nohash_1_height = 49;
alignas(16) const signed char g_yes_6205088b_nohash_1_data[] = {
  112, 93, 104, 93, 103, 76, 93, 89, 97, 72, 
  81, 71, 90, 87, 96, 87, 92, 82, 95, 75, 
  90, 75, 90, 77, 72, 66, 85, 74, 88, 82, 
  82, 77, 75, 68, 85, 74, 88, 77, 80, 68, 
  99, 80, 91, 44, 82, 83, 85, 53, 85, 83, 
  97, 81, 102, 79, 82, 56, 81, 64, 83, 75, 
  86, 71, 77, 51, 85, 70, 74, 69, 82, 60, 
  78, 65, 86, 71, 85, 67, 74, 65, 84, 60, 
  64, 56, 89, 69, 87, 62, 79, 69, 87, 76, 
  93, 67, 89, 51, 80, 67, 82, 61, 90, 66, 
  80, 65, 77, 66, 83, 73, 98, 71, 82, 59, 
  83, 60, 67, 59, 78, 58, 77, 65, 80, 62, 
  52, 52, 72, 40, 67, 40, 69, 38, 80, 62, 
  84, 59, 52, -12, 68, 42, 54, 34, 64, 15, 
  58, 41, 78, 57, 64, 44, 67, 29, 62, 40, 
  71, 49, 74, 53, 67, 47, 58, 36, 64, 49, 
  96, 57, 77, -26, 14, -20, 54, 15, 72, 49, 
  73, 26, 52, -12, 71, 34, 59, 42, 55, 37, 
  57, 46, 65, 34, 65, 38, 56, 46, 68, 43, 
  54, 50, 66, 39, 63, 34, 58, 41, 62, 42, 
  84, 19, 72, 24, 52, 40, 73, 20, 52, -2, 
  23, 35, 70, 50, 73, 1, 54, 44, 71, 49, 
  65, 22, 47, 14, 61, 6, 45, 5, 63, 25, 
  57, 10, 64, 45, 60, 46, 66, 28, 62, 30, 
  68, -2, 40, -4, 64, 41, 78, 52, 60, 41, 
  72, 43, 55, 29, 72, 44, 52, 27, 40, 23, 
  41, -6, 63, 22, 48, 39, 70, 44, 61, 31, 
  55, 42, 58, 34, 52, 14, 65, 19, 45, -10, 
  53, 4, 42, 10, 58, 23, 57, 29, 70, 18, 
  64, 34, 1, -10, 68, 16, 63, 10, 45, 7, 
  59, 31, 57, 9, 50, 12, 44, -3, 55, 28, 
  46, 19, 58, 37, 57, 31, 50, -26, 42, 27, 
  82, 39, 59, 36, 73, 30, 66, 47, 53, 19, 
  52, -1, 52, -8, 24, -37, 55, 35, 57, 29, 
  44, 23, 51, 20, 45, -23, 49, 14, 53, 7, 
  61, 31, 44, 9, 45, 36, 65, 32, 53, -23, 
  65, -20, 49, -60, 54, 38, 52, 0, 42, -20, 
  27, 32, 56, -16, -6, -37, 46, 22, 54, 32, 
  52, 24, 59, 26, 54, 24, 59, 21, 56, 29, 
  57, 21, 57, 1, 49, 19, 52, 35, 69, 23, 
  52, 0, -14, -128, 39, 4, 37, -50, 63, -8, 
  40, 15, 57, 11, 40, 21, 54, 16, 37, 29, 
  51, -33, 42, -14, 27, -26, 35, -18, 41, -37, 
  54, -8, 38, -23, 35, 15, 52, 14, 55, -12, 
  54, -77, 45, 17, 55, -77, 63, 52, 44, 4, 
  58, -33, 46, -7, 59, -1, 35, -77, -4, -60, 
  32, -128, 9, -33, 37, 4, 36, -2, 30, -37, 
  47, -60, 19, -12, 37, -50, 51, -1, 40, -12, 
  32, -29, 31, -128, 44, 25, 23, -128, 2, -60, 
  13, -16, 39, 9, 57, 17, 8, -128, 34, -33, 
  34, -43, 43, 16, 46, -23, 23, -14, 30, -29, 
  41, -6, 34, -1, 36, 2, 41, -23, 36, -50, 
  20, -77, 37, -1, -14, -128, 63, 41, 29, -12, 
  55, -3, 34, -60, 1, -43, 44, -128, 4, -2, 
  56, -23, 16, -128, 46, -7, 49, -29, 34, 8, 
  47, -16, 32, -8, 40, -29, 37, 4, 54, 2, 
  -18, -128, 6, -29, 29, -77, 43, -37, 25, -128, 
  39, 21, 29, -16, 17, -60, 19, -33, 44, -10, 
  41, -7, 37, 19, 39, -6, 36, -20, 22, -43, 
  28, -14, 25, 1, 49, -26, 34, -29, 30, -43, 
  45, -50, 38, -50, 9, -60, -29, -50, 63, 10, 
  51, -29, 62, 39, 50, -14, 52, -43, -18, 28, 
  74, 40, 52, -14, 19, -50, -12, -10, 34, -23, 
  28, -37, 14, -43, 27, -23, 39, -33, 11, -37, 
  49, 7, 15, -12, 30, -77, 4, -4, 19, -60, 
  -14, -77, -12, -77, 4, -77, 39, 4, 16, -60, 
  4, 4, 53, 9, 42, -77, 16, -128, 43, -1, 
  35, -60, 23, -50, 13, -50, 8, -50, 33, -16, 
  49, 17, 16, -43, 14, -4, 41, -60, 37, -20, 
  44, -16, 50, 18, 37, 1, 7, -60, 45, -8, 
  49, 26, 39, -18, 39, 14, 35, -33, -14, -77, 
  22, -128, 10, -7, 23, -50, 2, -128, -3, -37, 
  23, -128, -128, -128, -2, -16, 57, 7, 20, -128, 
  -33, -77, 26, -18, 8, -128, 10, -50, 21, -128, 
  -128, 6, 10, -18, 37, -20, 24, -77, 19, -128, 
  0, -128, 25, -128, 4, -128, 6, -77, 19, -50, 
  34, -60, -128, -128, -2, -128, -50, -128, -77, -128, 
  27, -20, 30, -37, -18, -128, -16, -20, 21, -60, 
  32, 6, 29, -128, -12, -77, -7, -128, 21, -20, 
  1, -128, 4, -43, 19, -50, 24, -26, 23, -128, 
  42, -128, 8, -128, 44, -12, 42, -26, 22, -43, 
  -4, -128, -128, -128, 6, -60, 44, -6, 34, -50, 
  -3, -128, 0, 9, 37, -20, 6, -29, 13, -33, 
  32, -43, 13, -60, 22, -33, 7, -37, 31, -14, 
  -77, -26, 45, -43, 30, -3, -23, -128, -6, -128, 
  -16, -26, 14, -128, 16, -128, -23, -26, 34, -77, 
  -50, -20, 12, -128, -37, -128, 7, -77, 15, -128, 
  20, -12, 38, -29, 22, -77, 4, -128, -3, -128, 
  14, 5, 59, -10, 29, 17, 34, -6, -10, -50, 
  15, -128, 40, -18, 11, -77, 34, -128, 10, -29, 
  -2, -77, -3, -128, 4, -128, -33, -128, 4, -43, 
  9, -77, 10, -33, -2, -128, -20, -128, -16, -77, 
  2, -20, 44, 5, 8, -128, -20, -7, 27, -128, 
  1, -128, 10, -77, 21, -128, 7, -128, -7, -128, 
  -23, -50, 25, -128, 20, -128, 12, -60, -8, -60, 
  29, -33, -8, -77, 9, -50, 5, -23, 13, -33, 
  -16, -128, -4, -128, 12, 10, 37, -128, -128, 17, 
  41, -128, -37, -128, -50, -18, 14, -50, 14, -12, 
  52, 7, 4, -33, 12, -77, -20, -7, 4, -60, 
  -10, -128, 22, -128, -7, -60, 4, -43, 26, -128, 
  -18, -128, -26, -77, 32, -12, 50, -43, 25, -60, 
  45, -26, 10, -16, 18, -14, -14, -128, 7, -128, 
  42, -14, 51, -18, -7, -128, -10, -128, 11, -43, 
  22, -128, -1, -128, -1, -60, -1, -60, 8, -128, 
  -128, -33, 27, -128, 19, -128, 9, -128, 16, -128, 
  -60, -128, 29, -26, -33, -128, -6, -23, 7, -128, 
  29, -20, -2, -128, -18, -26, -6, -128, 16, -43, 
  -37, -128, -7, -77, -14, -77, 23, -43, 15, -77, 
  -128, -128, 27, -43, -77, -128, -23, 21, 50, -128, 
  -43, -60, -26, -26, 19, -43, 26, -33, -12, -60, 
  1, -128, -6, -50, -8, -43, -37, -128, -128, -128, 
  17, -77, 5, -128, -8, -60, -12, -128, 0, -128, 
  0, -128, -37, -128, -128, -128, 7, -128, -128, -128, 
  -37, -37, -8, -128, -23, -128, 0, -128, 28, -50, 
  -3, -128, -43, -128, 0, -128, -18, -128, -33, -128, 
  -26, -128, -3, -128, -10, -128, -2, -128, -14, -77, 
  -12, 5, 25, -37, 20, -50, 20, -128, 16, -77, 
  -50, 9, 37, -50, 16, -60, 27, -23, -37, -128, 
  -128, -128, -16, -128, -128, -128, -43, -128, -23, -128, 
  4, -128, -37, -128, -77, -128, -18, -77, -77, -128, 
  29, -60, 32, -60, -6, -60, -33, -128, -128, -128, 
  -128, -128, 24, -128, -128, -128, -29, -60, 0, -128, 
  -128, -128, -77, -128, -1, -77, -128, -128, -60, -128, 
  -43, -128, -77, -128, 2, -128, 2, -60, 29, -60, 
  -14, -128, -128, -50, 24, -4, -18, -128, -33, -128, 
  -16, -128, -128, -128, 15, -43, -20, -128, -37, -77, 
  -29, -128, -50, -77, -7, -128, -50, -128, -29, -128, 
  0, -128, -26, -128, -43, -128, -18, -128, -128, -128, 
  -20, -128, -128, -18, 46, 1, -14, -128, -128, -128, 
  -60, -60, -26, -128, 7, -26, 4, -128, -128, -128, 
  -77, -128, -20, -128, 4, -77, -20, -77, -16, -128, 
  -26, -128, 9, -128, 18, -128, -29, -128, -26, -128, 
  -33, -128, -128, -128, -128, -128, 5, -26, -37, -26, 
  14, -128, -128, -128, -14, -128, -50, -50, -33, -128, 
  4, -128, -50, -50, 4, -33, -29, -128, -128, -128, 
  -6, -33, -43, -128, -18, -128, -6, -128, -6, -43, 
  -16, -128, 9, -60, -7, -128, -128, -128, -128, -128, 
  -60, -128, -60, -128, 11, -12, 21, -128, -77, -29, 
  -128, -128, -12, -128, -14, -33, -33, -50, -37, -77, 
  -29, -128, 0, -10, 19, -43, 21, -77, -14, -128, 
  -77, -77, -3, -128, -128, -128, -128, -128, 4, -77, 
  -128, -37, -50, -128, -50, -50, -7, -128, -128, -128, 
  -128, -128, -12, -128, -43, -23, 20, -50, -14, -128, 
  -10, -128, -43, -60, -43, -128, -16, -60, -16, -50, 
  -33, -23, -12, -128, 13, -128, -128, -128, -128, -128, 
  -128, -128, 34, -128, -77, -60, 28, -77, -18, -128, 
  -128, -128, -128, -128, -60, -128, -60, -77, -50, -128, 
  -43, -77, -8, -128, -33, -128, -6, -128, -33, -128, 
  -128, -128, 0, 21, 31, -128, -60, -128, -7, -128, 
  -43, -43, -18, -50, 25, -128, -77, -60, -26, -128, 
  -10, -128, -77, -60, -26, -128, -29, -128, -10, -128, 
  -60, -128, 1, -23, 4, -128, -37, -128, -77, -128, 
  -37, -3, 35, 40, 4, -128, -128, -77, -6, -43, 
  -10, -128, -12, -77, -60, -128, 14, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -10, -128, -26, -77, 
  -33, -128, -23, -128, -7, -43, -18, -128, -77, -77, 
  67, 86, 107, 67, 6, 34, 51, -128, -50, -128, 
  -128, -128, 4, 24, 14, -60, 9, -128, -37, -60, 
  -77, -128, -8, -77, 9, -50, 4, -37, -16, -3, 
  -16, -128, -33, -128, -23, -128, 0, -128, -26, -60, 
  83, 87, 103, 47, 30, 67, 73, -43, -60, -128, 
  25, -37, -60, -128, -77, -128, -43, -128, -23, -60, 
  -26, -128, -20, -128, -77, -77, -60, -77, 15, 13, 
  35, -23, 12, -43, -10, -60, -60, -60, -3, -33, 
  79, 80, 101, 62, 29, 52, 70, -50, -26, -128, 
  -128, -128, -12, -128, -60, -12, 34, -128, -77, -43, 
  -43, -128, -23, -77, 9, -26, -18, -18, 19, -60, 
  17, -14, 25, -12, 35, 18, 50, 37, 40, -8, 
  67, 68, 96, 63, 50, 57, 79, -60, -60, -60, 
  13, -77, -60, -128, -6, -128, -20, -77, -128, -128, 
  -4, -128, -50, -50, -1, -60, 6, -1, 39, -1, 
  39, 12, -16, -128, -26, -128, 12, -77, -26, -128, 
  19, 37, 89, 70, 75, -29, 67, 41, 13, -60, 
  -128, -128, -43, -50, -33, -128, -77, -128, -16, -128, 
  -20, -128, 1, -18, 17, -77, -12, -4, 32, -2, 
  31, -43, -26, -60, 1, -128, -26, -128, -128, -128, 
  9, 44, 89, 82, 112, 67, 77, 65, 70, -128, 
  -77, -128, 6, -128, -50, -50, -12, -128, -3, -23, 
  -4, -37, 24, -37, 56, -7, 30, 15, 40, -60, 
  24, -1, -37, -128, 17, -60, -16, -77, -20, -128, 
  55, 49, 77, 57, 100, 90, 112, 76, 77, 47, 
  32, -8, 11, -43, 40, -8, -16, 19, 22, 1, 
  22, 42, 74, 70, 91, 51, 61, 43, 44, 40, 
  62, 12, -7, -128, -50, -128, -77, -77, -60, -128, 
  70, 19, 35, -8, 93, 86, 100, 67, 100, 76, 
  87, 85, 67, 47, 54, 49, 57, 56, 64, 62, 
  72, 79, 98, 85, 95, 74, 88, 56, 59, 51, 
  68, 42, 63, -14, -26, -37, -3, -128, -128, -128, 
  74, 44, 57, -50, 81, 62, 72, 69, 110, 85, 
  94, 79, 35, 59, 51, 36, 52, 59, 84, 72, 
  97, 86, 102, 75, 74, 63, 76, 40, 60, 54, 
  75, 44, 68, 16, -60, -128, -14, -77, -77, -128, 
  62, -7, -18, -128, 67, 37, 39, 74, 107, 77, 
  96, 74, 2, 39, 44, 51, 66, 57, 87, 70, 
  102, 88, 102, 23, 87, 44, 66, -18, 38, 54, 
  82, 36, 56, 15, 0, -128, -60, -128, -77, -128, 
};
