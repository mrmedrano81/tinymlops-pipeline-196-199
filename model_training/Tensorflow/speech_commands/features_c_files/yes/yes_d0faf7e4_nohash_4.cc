/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/d0faf7e4_nohash_4.wav" \
 * --output_c_file="features_c_files/yes/yes_d0faf7e4_nohash_4.cc" \
 */
#include "yes_d0faf7e4_nohash_4.h"


const int g_yes_d0faf7e4_nohash_4_width = 40;
const int g_yes_d0faf7e4_nohash_4_height = 49;
alignas(16) const signed char g_yes_d0faf7e4_nohash_4_data[] = {
  102, 78, 87, 83, 96, 89, 112, 92, 100, 86, 
  110, 92, 95, 85, 93, 79, 84, 66, 68, 63, 
  71, 62, 57, 50, 54, 65, 48, 53, 62, 48, 
  60, 54, 58, 60, 57, 74, 74, 53, 57, 49, 
  94, 72, 92, 87, 100, 80, 110, 89, 92, 74, 
  91, 70, 88, 69, 78, 60, 71, 59, 59, 52, 
  50, 53, 64, 41, 47, 53, 64, 52, 61, 56, 
  47, 45, 79, 61, 73, 74, 84, 50, 51, 39, 
  78, 77, 90, 72, 100, 66, 87, 60, 77, 63, 
  69, 25, 89, 66, 60, 40, 67, 44, 58, 15, 
  33, 7, 59, 42, 64, 59, 56, 15, 59, 38, 
  55, 45, 58, 36, 55, 73, 88, 49, 42, 41, 
  94, 75, 79, 34, 32, 33, 20, -43, 77, 44, 
  70, 58, 79, 52, 82, 67, 68, 44, 58, 34, 
  27, 40, 49, 26, 40, 59, 73, 14, 38, 15, 
  41, 39, 50, 5, 59, 51, 70, 39, 44, 38, 
  75, 57, 87, 65, 89, 29, 42, 13, 74, 39, 
  63, 44, 65, 19, 46, 35, 55, 44, 38, -1, 
  40, 4, 44, 42, 35, 45, 68, 24, 30, 0, 
  46, 51, 54, 36, 61, -1, 50, 29, 32, 29, 
  75, 54, 79, 67, 84, 35, 32, 10, 58, 47, 
  56, 19, 67, 22, 59, 27, 62, 27, 42, 10, 
  36, -12, 35, 45, 45, -10, 55, 39, 37, 10, 
  49, -14, 33, 16, 39, -128, 34, 34, 46, 20, 
  82, 61, 56, -4, 57, 11, 52, -16, 71, 57, 
  64, 23, 65, 56, 65, -14, 68, 29, 47, -60, 
  39, -4, 24, 5, 49, 14, 53, 32, 14, -8, 
  38, -26, 31, -2, 40, -128, 0, 16, 38, -3, 
  67, 17, 70, -10, 33, -20, 72, 51, 50, 20, 
  54, 15, 72, 56, 72, 47, 57, 29, 34, -16, 
  35, -50, 44, -16, 1, 13, 49, 12, 36, 6, 
  31, -50, 25, 0, 15, -128, -37, -37, 44, -37, 
  53, 25, 59, -33, 33, 15, 65, 25, 80, 40, 
  54, 19, 65, 52, 64, -16, 25, -128, 36, 21, 
  40, -20, 43, 19, 40, 32, 49, 37, 45, 4, 
  16, -29, 28, -12, 19, -128, -43, -60, 19, -33, 
  26, -77, 68, 9, 35, 24, 37, 4, 67, 15, 
  2, -18, 57, -12, 53, 25, -4, -1, 37, -14, 
  29, -8, 7, -77, 2, -23, 29, 15, 26, -20, 
  22, -37, 21, -60, 1, -128, -2, -128, -4, -50, 
  53, 37, 59, -128, 20, -128, -128, -128, 46, 27, 
  62, -23, 28, -50, 43, 21, 33, 8, 29, 9, 
  24, -10, 29, -33, -1, -128, 2, -60, 8, -18, 
  11, -50, -12, -50, 30, -128, -18, -60, 32, -20, 
  58, -12, -60, -128, -60, -37, -7, 32, 87, 47, 
  59, -37, 47, -128, 14, 9, 35, 1, 19, 20, 
  31, -50, 14, -43, 21, -128, 17, -43, 1, -128, 
  -3, -33, -10, -77, 14, -128, -77, -18, 35, -26, 
  -128, -50, 38, -29, 31, -7, -26, -14, 36, -26, 
  44, 15, 47, -12, 38, -16, 42, -18, 47, -37, 
  36, 16, 20, -43, 16, -128, -14, -50, 37, -23, 
  -14, -60, 4, -128, 35, -60, -26, -60, 29, -20, 
  21, -43, 36, -33, 33, -128, -6, -128, 24, -50, 
  52, -29, 46, 2, 37, -128, -128, -128, 27, -77, 
  -3, 18, 34, -33, 14, -77, 21, -23, 41, -29, 
  -20, -77, 18, -60, 52, 4, -16, -7, 44, 11, 
  115, 86, 80, 78, 104, 81, 72, 60, 80, 31, 
  55, -23, 35, -2, 24, 33, 65, 21, 24, -26, 
  64, 71, 84, 41, 82, 74, 87, 60, 90, 68, 
  72, -2, 63, -43, 57, 30, 38, -33, 44, 39, 
  114, 80, 116, 89, 112, 94, 100, 79, 102, 80, 
  75, 35, 48, -2, 40, 8, 68, 42, 75, 64, 
  97, 90, 103, 72, 106, 90, 110, 90, 113, 91, 
  97, 29, 41, -20, 77, 56, 37, 13, 49, 18, 
  92, 85, 83, 79, 112, 94, 107, 78, 100, 71, 
  89, 55, 40, -16, 83, 64, 83, 69, 87, 75, 
  111, 90, 106, 80, 106, 84, 104, 82, 105, 81, 
  95, 26, 60, 10, 67, 47, 37, 4, 44, 8, 
  76, 74, 103, 84, 110, 89, 106, 80, 100, 76, 
  94, 21, 39, 54, 94, 71, 92, 79, 104, 85, 
  109, 82, 100, 82, 105, 81, 99, 80, 100, 79, 
  85, 37, 52, 23, 25, -50, 50, -6, 37, 10, 
  79, 72, 90, 65, 112, 91, 115, 88, 90, 74, 
  87, 67, 84, 77, 105, 82, 96, 77, 105, 84, 
  94, 55, 92, 80, 105, 68, 85, 71, 94, 72, 
  80, 29, 48, 25, 47, -23, 52, 27, 49, 27, 
  78, 67, 89, 64, 96, 72, 114, 92, 95, 85, 
  107, 85, 90, 82, 104, 76, 99, 79, 108, 87, 
  92, 62, 94, 80, 100, 46, 80, 66, 89, 61, 
  39, 11, 60, 48, 55, 4, 66, 53, 62, 41, 
  73, 59, 76, 39, 50, 47, 106, 84, 114, 73, 
  96, 70, 87, 75, 96, 65, 99, 80, 111, 86, 
  79, 37, 91, 75, 81, 38, 74, 60, 80, 8, 
  -2, 14, 51, 37, 60, -1, 59, 40, 73, 43, 
  67, 41, 51, 14, 52, 8, 87, 77, 110, 80, 
  99, 65, 92, 73, 94, 77, 97, 79, 104, 70, 
  71, 46, 92, 62, 78, 27, 67, 57, 85, 28, 
  69, 14, 27, -6, 4, -128, 14, -12, 43, 9, 
  60, 19, 69, 24, 29, -128, 57, 60, 96, 83, 
  96, 53, 92, 63, 90, 72, 99, 77, 97, 59, 
  75, 40, 83, 57, 64, 11, 61, 44, 67, 9, 
  20, -6, 1, -23, 19, -128, 20, -43, 42, -14, 
  53, 16, 22, -77, 56, -77, -128, 50, 84, 45, 
  66, 52, 79, 56, 76, 20, 74, 55, 65, 25, 
  47, -33, 67, 27, 27, -128, -29, -128, 49, 2, 
  20, 16, -8, -60, 5, -128, 29, -20, 35, -16, 
  49, 13, 45, -128, -128, -128, -128, -128, 39, 9, 
  76, 60, 85, 30, 65, -7, 70, 30, 63, -12, 
  11, -128, 30, -26, 52, -128, -128, -128, 10, -128, 
  -26, -29, 27, -50, 23, -128, 39, 36, 11, -50, 
  32, -77, 59, -50, -128, -128, -128, -128, -8, -128, 
  31, 37, 54, -128, 46, -128, -128, -128, -50, -128, 
  -60, -128, -77, -128, -60, -128, -128, -128, -128, -128, 
  4, -77, 14, -50, 13, -128, 29, -43, 15, -37, 
  4, -128, -33, -128, -128, -128, -128, -128, -77, -128, 
  -14, -128, 37, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  76, 54, 94, 84, 95, 60, 67, 62, 66, 19, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 16, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -26, 11, 
  93, 62, 101, 87, 108, 88, 101, 88, 102, 80, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -50, 
  76, 55, 84, 77, 102, 72, 105, 82, 89, 81, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  58, 27, 74, 37, 84, 57, 95, 61, 91, 65, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  34, 48, 78, 41, 87, 60, 82, 58, 90, 55, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  53, 14, 64, 58, 76, 43, 84, 48, 67, 31, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -50, 
  65, 29, 70, 37, 52, 39, 76, 52, 45, 19, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  59, 16, 50, -60, 54, 40, 63, 19, 51, -26, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  46, 0, 49, -128, 35, -12, 51, 9, 17, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -60, 
  50, -26, 39, -128, 27, -29, 34, -128, -10, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -77, 1, -128, -128, -128, -10, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  2, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
