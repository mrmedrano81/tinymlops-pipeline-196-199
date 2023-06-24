/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/d0faf7e4_nohash_7.wav" \
 * --output_c_file="features_c_files/yes/yes_d0faf7e4_nohash_7.cc" \
 */
#include "yes_d0faf7e4_nohash_7.h"


const int g_yes_d0faf7e4_nohash_7_width = 40;
const int g_yes_d0faf7e4_nohash_7_height = 49;
alignas(16) const signed char g_yes_d0faf7e4_nohash_7_data[] = {
  118, 97, 109, 87, 96, 81, 94, 77, 74, 74, 
  89, 85, 93, 80, 81, 85, 89, 72, 84, 71, 
  60, 50, 64, 60, 64, 64, 60, 60, 80, 72, 
  72, 75, 85, 69, 70, 59, 75, 57, 61, 55, 
  99, 59, 99, 82, 69, 52, 82, 72, 84, 67, 
  68, 54, 58, 49, 74, 57, 74, 31, 44, 44, 
  65, 58, 61, 42, 44, 50, 56, 56, 77, 60, 
  71, 63, 70, 49, 59, 45, 59, 51, 53, 39, 
  96, -128, 28, 21, 75, 46, 72, 49, 72, 67, 
  85, 50, 57, 28, 68, 35, 49, 50, 53, 43, 
  53, 47, 50, 40, 42, 27, 47, 53, 48, 39, 
  80, 53, 65, 48, 55, 39, 44, 55, 44, 25, 
  90, 33, 64, 35, 75, 42, 69, 30, 66, -2, 
  72, 52, 80, 54, 57, 7, 54, 51, 57, 9, 
  52, 12, 61, 43, 48, 35, 64, -1, 48, 49, 
  65, 22, 59, 28, 37, 35, 51, 30, 42, 26, 
  75, -4, 46, 17, 48, -29, 67, 53, 68, 69, 
  93, 56, 87, 68, 89, 60, 70, 7, 46, 47, 
  54, 10, 61, 44, 49, 32, 69, 43, 50, 0, 
  57, -4, 40, 19, 39, 40, 57, 16, 48, 16, 
  69, -77, 29, -43, 60, 43, 59, 40, 67, 53, 
  64, 15, 84, 68, 71, 21, 30, -20, 40, 21, 
  59, 43, 66, 49, 46, 24, 64, 45, 63, 27, 
  49, 17, 41, -20, 54, 25, 25, 12, 50, 28, 
  56, -18, 57, 38, 59, 11, 36, -128, 62, 38, 
  69, 25, 77, 57, 72, 46, 54, 34, 60, 41, 
  58, 23, 23, 35, 42, 31, 58, 44, 77, 51, 
  54, 54, 30, -37, 45, 12, 24, 19, 23, 7, 
  57, -128, 59, 30, 50, -6, 46, 24, 55, -14, 
  79, 54, 62, 29, 76, -60, 66, 43, 57, 16, 
  39, 35, 53, 50, 53, 25, 50, 52, 71, 28, 
  44, -2, 41, 20, 19, -50, 13, -12, 41, -20, 
  14, -128, 32, -1, 54, 11, 22, 0, 51, 42, 
  75, -4, 14, -10, 54, 9, 32, -60, 32, -3, 
  44, 30, 40, 42, 59, 6, 49, 39, 53, -50, 
  37, -50, -7, -128, 1, 9, 34, -7, 16, -33, 
  34, -18, 69, 40, 62, 15, 46, 1, 56, 19, 
  72, 29, 60, -12, 50, -8, 64, 28, 42, -1, 
  5, 2, 29, -8, 28, 1, 20, 4, 33, -128, 
  -7, -43, 16, -29, 38, -29, 38, -20, 36, -7, 
  -128, 9, 51, -14, 57, 37, 11, -128, 54, 59, 
  69, -29, 5, 20, 68, 10, 26, -37, 31, -29, 
  8, -37, 35, -50, -8, -3, 9, -18, 39, -26, 
  -4, -128, 7, -60, 26, -14, 6, -77, 4, -16, 
  -60, -2, 41, -33, 46, -6, 4, -23, 49, 58, 
  77, -2, 24, -60, 24, 22, 36, -43, 27, -77, 
  -8, -128, 15, -128, 13, -33, 37, -50, -16, -128, 
  23, -128, -2, -128, -23, -37, 22, -3, 28, -33, 
  -128, -8, 42, -77, 65, 43, 35, -20, 36, -60, 
  16, -18, 52, -16, -128, -128, -1, -128, 17, -26, 
  24, -128, 0, -37, 22, -77, 11, -128, -77, -128, 
  9, -37, -20, -77, 0, -128, 22, -29, 17, -60, 
  -128, -128, -128, -128, -50, -128, 34, -37, 21, -128, 
  -18, -18, -2, -128, -10, -20, -29, -128, -50, -29, 
  1, -128, 4, -128, -3, -37, -10, -60, -33, -128, 
  -1, -128, -12, -60, -14, -128, 4, -50, -4, -60, 
  -128, -128, -128, -43, 39, -60, 16, -128, 15, -128, 
  -23, -37, 4, -128, -60, -128, -128, -128, 16, -60, 
  -14, -23, 27, -128, 18, -77, -29, -128, -23, -50, 
  -128, -128, -7, -20, 4, -128, 8, -60, 19, -43, 
  -128, -50, -20, -128, -50, -128, 25, -128, -23, -128, 
  -29, -128, -77, -128, -60, -128, -33, -128, 22, -128, 
  -8, -10, 1, -128, 0, -77, -77, -128, -128, -128, 
  -60, -128, -29, -77, 13, -128, -8, -60, 14, -128, 
  -128, -128, 29, -20, -2, -20, 26, -128, 20, -128, 
  -128, 2, 23, -77, -60, -128, -14, -60, 24, -43, 
  11, -77, -50, -128, 21, -77, -50, -128, -37, -33, 
  -20, -128, -16, -77, -4, -128, 4, -77, 4, -60, 
  -128, -128, -128, -128, 36, -2, -7, -77, 37, -128, 
  -26, -37, 36, -60, 17, -128, 29, -128, 19, -128, 
  19, -128, -18, -77, 29, -60, 17, -128, 29, -60, 
  32, -23, 27, 6, 1, -37, -8, -128, -7, -43, 
  7, -8, 14, -23, -3, -33, 12, -33, 45, -43, 
  15, -128, 9, -77, -50, -128, 45, -1, 38, 6, 
  15, -33, 5, -128, 27, -20, 47, 10, 44, -20, 
  29, -128, 36, 44, 19, -33, -26, -23, 17, -60, 
  44, 8, 67, 39, 9, -77, 32, -23, 22, -128, 
  -128, -128, 17, 20, 44, -77, 32, -33, 16, -16, 
  14, -77, 21, -26, -18, -18, 61, 4, 35, 29, 
  59, -37, 43, 29, 24, -4, 11, -60, 17, -8, 
  57, 9, 43, -60, 45, -23, -29, -128, -60, -128, 
  -128, -77, 43, 4, 35, -12, 47, -37, 27, -60, 
  1, -43, 17, -18, 4, -43, 53, 12, 40, 24, 
  34, -6, 55, -10, 29, 1, 19, -43, 14, -14, 
  59, 23, 40, 15, 44, 2, 29, 14, 22, -128, 
  -128, -20, 32, 8, 9, -37, -14, 25, 35, -128, 
  20, 9, 31, -50, 4, 19, 43, -128, 54, 32, 
  35, 4, 16, -6, 29, 2, 31, -16, 16, -18, 
  112, 94, 87, 92, 119, 97, 104, 85, 109, 82, 
  72, 26, 10, 6, 53, 11, 33, 48, 65, 33, 
  74, 76, 85, 35, 72, 76, 80, 56, 75, 50, 
  61, -14, 37, -37, 26, 1, 23, 14, 49, 34, 
  100, 84, 110, 95, 119, 100, 119, 89, 105, 76, 
  76, 44, 28, 45, 56, 52, 69, 71, 71, 65, 
  97, 85, 103, 69, 102, 89, 105, 74, 104, 84, 
  89, 35, 50, -77, 41, 17, 56, 39, 58, 39, 
  87, 87, 103, 74, 112, 92, 113, 92, 104, 75, 
  98, 71, 77, 29, 49, 40, 80, 72, 87, 70, 
  102, 82, 99, 67, 101, 81, 91, 77, 96, 70, 
  82, 18, 29, -7, 41, -10, 61, 45, 65, 35, 
  83, 75, 102, 77, 103, 85, 109, 90, 106, 78, 
  98, 63, 85, 75, 82, 72, 95, 80, 107, 89, 
  101, 84, 93, 72, 104, 74, 85, 76, 98, 78, 
  84, 31, 21, -18, 43, 10, 59, 29, 61, 42, 
  85, 57, 90, 67, 89, 68, 105, 92, 116, 90, 
  104, 69, 85, 82, 104, 75, 97, 81, 96, 81, 
  99, 62, 94, 75, 91, 60, 64, 53, 82, 47, 
  67, -3, 27, -60, 52, 29, 62, 25, 51, 24, 
  77, 61, 86, 53, 80, 52, 98, 77, 102, 81, 
  103, 79, 94, 75, 97, 78, 97, 72, 102, 73, 
  86, 49, 91, 75, 87, 45, 74, 53, 75, 45, 
  74, 20, 35, -60, 51, 40, 67, 20, 52, 40, 
  72, 55, 78, 45, 66, 7, 77, 59, 97, 80, 
  103, 71, 90, 62, 86, 72, 84, 63, 103, 63, 
  66, 43, 84, 57, 64, 15, 58, 27, 72, 49, 
  67, -128, 30, -14, 35, 27, 62, 10, 68, 42, 
  66, 35, 65, 42, 62, 27, 69, 55, 98, 71, 
  96, 58, 83, 73, 96, 65, 99, 79, 87, 57, 
  65, 36, 70, 20, 89, 48, 54, 33, 64, 32, 
  47, -33, 28, 7, 67, 42, 65, 43, 69, 43, 
  65, 21, 57, 32, 45, -14, 65, 47, 94, 65, 
  80, 40, 70, 47, 78, 39, 67, 35, 47, -60, 
  -4, -128, 17, -50, 58, -2, 11, -128, 52, 8, 
  -8, -12, 47, -20, 51, 25, 66, 28, 57, 28, 
  71, 20, 64, 26, 54, 19, 73, 39, 76, 43, 
  72, 11, 65, 49, 76, 37, 85, 52, 74, -2, 
  -7, -128, -8, -8, 52, -128, -128, -128, -128, -128, 
  14, -128, -37, -50, -7, -77, 63, 20, 27, -128, 
  74, 9, 20, -128, 54, 9, 24, -128, -2, -128, 
  9, 19, 59, -128, 19, -12, 40, -60, 11, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -43, 
  70, 31, 72, 48, 87, 69, 84, 25, 58, 33, 
  67, -26, 22, -128, -128, -128, 37, -128, -128, -128, 
  -128, -128, 47, -128, -18, -128, 15, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -77, -128, 
  55, 61, 93, 85, 113, 92, 95, 79, 97, 80, 
  35, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -18, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  41, 45, 83, 70, 88, 61, 95, 81, 95, 80, 
  -10, -128, -77, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, 50, 93, 68, 85, 49, 91, 62, 74, 64, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -7, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  53, -12, 59, 53, 90, 70, 89, 58, 93, 67, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -60, -43, -128, 0, -10, -16, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -23, -128, -8, -128, 
  16, 40, 68, 62, 83, 61, 88, 59, 90, 59, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -14, -128, 20, -29, -23, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 19, -128, 4, -50, 
  36, 31, 80, 58, 89, 50, 79, 54, 69, 52, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -6, 53, -128, -10, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -6, -43, 0, -26, 
  44, 23, 79, 50, 85, 52, 60, 33, 70, 40, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 15, -128, -10, -43, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -26, -128, -128, -43, 
  61, 49, 78, 58, 79, 54, 67, 45, 75, -10, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -29, 16, -128, -23, -8, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -37, 12, -128, 
  24, 51, 75, 53, 71, -1, 53, 4, 50, -37, 
  -128, -128, -128, -128, -128, -128, -60, -60, 22, -29, 
  21, 51, 68, -26, 35, -10, 60, 10, 53, 37, 
  41, 4, 5, -77, -128, -128, -37, -128, 15, -50, 
  -33, -7, 59, -128, -43, -128, -14, -128, -128, -128, 
  -128, -128, 12, -128, -18, -128, -128, -128, -128, -128, 
  4, 4, 64, -33, 4, -128, -128, -128, -29, -128, 
  -128, -50, 16, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -23, 20, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -18, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
