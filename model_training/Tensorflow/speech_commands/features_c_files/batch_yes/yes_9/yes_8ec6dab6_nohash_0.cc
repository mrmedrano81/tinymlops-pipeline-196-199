/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/8ec6dab6_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_8ec6dab6_nohash_0.cc" \
 */
#include "yes_8ec6dab6_nohash_0.h"


const int g_yes_8ec6dab6_nohash_0_width = 40;
const int g_yes_8ec6dab6_nohash_0_height = 49;
alignas(16) const signed char g_yes_8ec6dab6_nohash_0_data[] = {
  97, 77, 85, 89, 99, 59, 62, 70, 68, 64, 
  74, 60, 79, 72, 69, 70, 75, 65, 73, 58, 
  89, 75, 71, 60, 73, 65, 72, 60, 69, 57, 
  74, 58, 58, 63, 69, 54, 72, 59, 65, 53, 
  82, 74, 105, 85, 88, 78, 76, 59, 83, 69, 
  74, 64, 82, 65, 69, 52, 74, 66, 66, 63, 
  75, 57, 67, 47, 59, 44, 65, 40, 64, 50, 
  67, 56, 66, 52, 73, 57, 68, 59, 66, 48, 
  77, 66, 73, -3, 54, 45, 75, 63, 76, 30, 
  48, 67, 79, 50, 61, 22, 57, 57, 79, 53, 
  63, 35, 59, 54, 54, 45, 69, 23, 45, 39, 
  68, 34, 46, 51, 64, 53, 65, 48, 51, 46, 
  61, 41, 75, 40, 79, 47, 71, 47, 74, 50, 
  59, 44, 72, 49, 74, 36, 47, 28, 57, 38, 
  59, 17, 58, 50, 69, 42, 60, 41, 55, 31, 
  39, 29, 60, 42, 49, 26, 59, 39, 49, 23, 
  74, 59, 86, 39, 67, 39, 63, 30, 50, 49, 
  64, 54, 71, 36, 60, 51, 64, 5, 33, 42, 
  59, 32, 59, 38, 13, 14, 31, 27, 55, 35, 
  59, 20, 40, 20, 43, 17, 54, 34, 50, 14, 
  76, 55, 20, 17, 67, 54, 66, 33, 49, 22, 
  66, 20, 48, 36, 57, 24, 52, 22, 44, 17, 
  39, 29, 44, 9, 59, 34, 67, -14, 19, 29, 
  55, 40, 58, 15, 53, 9, 54, 27, 42, 29, 
  57, 22, 45, -37, 40, 45, 56, 16, 55, 41, 
  48, -2, 56, 10, 42, 1, 21, 1, 30, 45, 
  51, -29, 45, 8, 25, 10, 47, 35, 44, -23, 
  54, 18, 46, 21, 50, 11, 34, 0, 33, -2, 
  67, 44, 56, 45, 67, 34, 64, 29, 53, 34, 
  56, 8, 63, 15, 41, -33, 38, -20, 51, 35, 
  54, -18, 49, 22, 32, 2, 49, 1, 37, -29, 
  49, 14, 52, 15, 51, 25, 57, 32, 50, 14, 
  63, -23, 54, -128, 49, -20, 37, -43, 42, -77, 
  32, -20, 22, 4, 37, 27, 35, 9, 25, -4, 
  47, -29, 22, 6, 51, 16, 51, 7, 36, 13, 
  45, -12, 42, -1, 40, 19, 32, 9, 37, -43, 
  55, 47, 46, -128, 51, 24, 53, 23, 39, -14, 
  47, -128, 11, -50, -14, -50, 54, 16, 17, -29, 
  50, -23, 31, -6, 13, -7, 37, 17, 48, 4, 
  45, -37, 11, 4, 46, 1, 35, -10, 37, -1, 
  53, 23, 40, -128, 16, 41, 66, 15, 45, 13, 
  -12, -3, 59, -20, 33, -4, 45, -77, 19, -29, 
  39, -6, 35, -2, -10, -14, 46, 6, 30, -43, 
  30, -33, -7, 5, 37, -7, 37, -12, 27, 4, 
  53, -60, 15, 21, 28, -128, 32, -12, -20, 13, 
  59, 20, 39, -23, 41, 11, 45, 14, 68, -16, 
  46, 8, 53, 4, 15, -50, 17, -33, 23, -18, 
  43, 8, 24, -33, 15, -128, 28, -16, 19, -50, 
  48, -37, 56, 6, 59, 25, 31, -128, 1, -18, 
  47, -60, -2, -50, 24, 14, 48, 10, 48, -6, 
  37, -6, 39, -29, 40, 17, 32, 0, 17, -12, 
  17, -2, 15, 5, 33, -50, 2, -37, 15, -37, 
  21, -7, 40, -128, 12, -128, 43, 39, 31, -128, 
  28, -33, 15, -37, 45, 9, 29, 1, 47, -37, 
  23, -37, -18, -128, 30, -10, 23, -50, 30, -12, 
  34, -12, 34, -43, 4, -50, 25, -50, 16, -29, 
  53, -8, 29, 13, 46, -12, 44, -3, 37, -43, 
  34, -60, 36, -33, 27, -3, 37, -128, 19, -29, 
  37, -7, 40, -128, 28, -60, 16, -26, -6, -26, 
  15, -18, 29, -16, 35, -23, 15, -33, 22, -23, 
  51, -77, 33, -128, 31, 31, 19, -33, 8, -50, 
  0, -26, 53, 16, -10, -50, 29, -128, -7, -6, 
  50, -4, 26, -77, 28, -60, 29, -50, 10, -33, 
  23, -29, 2, -33, 29, -43, 15, -50, 7, -50, 
  27, -128, 21, -128, 39, 11, 55, -60, 11, -77, 
  14, -77, 26, -16, 31, -14, 2, -37, 6, 4, 
  13, -128, -2, -128, 27, -43, 34, -43, 30, -60, 
  4, -60, 21, -20, 21, -16, 39, -12, 39, -20, 
  108, 78, 56, 47, 59, -128, 52, -14, -20, -128, 
  -3, -18, -8, -128, 26, -128, -128, -77, 10, -8, 
  8, -14, 50, -12, 4, -8, 40, -1, 17, -16, 
  24, -3, 15, -60, -26, -60, 22, -33, 17, -77, 
  74, 46, 23, -33, 24, -128, 30, -43, 43, 25, 
  47, -77, 38, -6, 25, -128, -10, -128, 29, -60, 
  -2, -26, 1, -128, 29, 14, 37, 29, 75, 21, 
  17, -18, 11, -60, 24, -2, 2, -37, 20, -37, 
  99, 64, 95, 57, 64, 25, 52, -50, 1, -37, 
  11, -77, -77, -60, 14, -50, 35, -3, 29, -33, 
  9, 39, 61, 62, 80, 28, 59, 61, 81, 49, 
  44, -33, 4, 0, 48, 28, 17, -60, 30, -16, 
  104, 82, 114, 85, 108, 89, 93, 52, 74, 60, 
  78, 36, -4, -128, -6, -128, 54, 46, 70, 46, 
  79, 75, 99, 87, 104, 66, 86, 75, 89, 50, 
  49, -26, 39, 4, 26, 51, 40, -33, 41, 19, 
  102, 70, 104, 78, 107, 94, 109, 92, 99, 74, 
  103, 79, 84, 61, 74, 34, 67, 74, 107, 88, 
  91, 80, 107, 85, 95, 78, 100, 78, 82, 26, 
  36, -37, 39, 15, 35, 57, 56, -10, 40, 0, 
  96, 62, 90, 60, 91, 73, 118, 95, 109, 83, 
  94, 74, 90, 66, 90, 65, 88, 87, 111, 89, 
  97, 85, 110, 88, 100, 80, 110, 87, 92, 49, 
  39, 24, 60, -10, 28, -8, 35, 12, 42, -6, 
  91, 52, 93, 77, 90, 69, 78, 73, 104, 83, 
  100, 83, 92, 74, 98, 76, 96, 87, 109, 89, 
  96, 79, 96, 71, 86, 77, 104, 78, 95, 54, 
  55, 20, 59, -50, 16, 41, 70, -14, 44, -23, 
  77, 46, 92, 74, 73, 56, 79, 80, 104, 84, 
  99, 80, 95, 77, 99, 71, 96, 85, 109, 83, 
  92, 74, 100, 82, 102, 81, 101, 72, 92, 59, 
  59, 52, 49, -29, 52, 54, 86, 55, 60, -18, 
  68, 45, 88, 63, 70, 29, 90, 74, 98, 83, 
  98, 70, 94, 72, 91, 65, 89, 78, 102, 66, 
  80, 72, 100, 78, 94, 79, 101, 77, 87, 32, 
  83, 71, 69, 34, 67, 47, 92, 57, 70, 34, 
  65, 38, 80, 50, 67, 31, 87, 68, 89, 59, 
  87, 55, 75, 63, 84, 47, 91, 75, 94, 41, 
  71, 57, 85, 55, 81, 58, 89, 67, 87, 40, 
  93, 65, 29, 12, 57, 34, 75, 53, 75, 34, 
  58, 41, 69, 6, 40, -77, 85, 48, 100, 67, 
  86, 32, 68, 44, 74, 58, 94, 68, 86, -37, 
  58, 24, 63, 57, 85, 50, 74, 46, 69, 19, 
  61, -128, 11, -33, 32, -16, 47, 39, 62, 6, 
  47, 32, 35, -128, 59, 43, 63, 13, 92, 35, 
  82, 62, 82, 49, 76, 46, 83, 45, 54, -128, 
  42, -50, 4, -128, 57, 20, 41, -128, 64, 54, 
  57, -128, 38, -128, 11, -77, 11, 22, 74, 14, 
  16, -128, -128, -128, -128, -128, 16, -128, 62, 14, 
  18, -128, 22, -37, -29, -128, -2, -128, 9, -128, 
  -128, -128, -128, -128, 15, -128, -128, -128, 12, -77, 
  5, -12, 64, 39, 54, -10, 30, 0, 51, -26, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -14, -128, 35, -128, -128, -128, -50, -128, -128, -128, 
  -50, -128, -128, -128, -33, -128, -128, -128, 55, 53, 
  78, 77, 103, 90, 108, 86, 93, 74, 89, 74, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -6, -128, -26, -128, -43, -128, -128, -128, 
  -23, -128, -128, -128, -128, -128, -128, -128, 34, -10, 
  76, 61, 90, 72, 100, 78, 94, 79, 107, 77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  21, 52, 84, 50, 90, 60, 82, 60, 93, 60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  44, 9, 59, 40, 74, 46, 69, 19, 70, 40, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -60, 
  32, 4, 61, 19, 66, 19, 52, 4, 56, 4, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -37, 
  61, -1, 65, 15, 60, 7, 54, -14, 48, -7, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  38, -43, 50, 19, 53, -43, 53, -14, 40, -37, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  21, -60, 15, 13, 40, -128, -77, -128, -10, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -43, 41, -26, -26, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
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
