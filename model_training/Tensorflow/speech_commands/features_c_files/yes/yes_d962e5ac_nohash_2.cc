/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/d962e5ac_nohash_2.wav" \
 * --output_c_file="features_c_files/yes/yes_d962e5ac_nohash_2.cc" \
 */
#include "yes_d962e5ac_nohash_2.h"


const int g_yes_d962e5ac_nohash_2_width = 40;
const int g_yes_d962e5ac_nohash_2_height = 49;
alignas(16) const signed char g_yes_d962e5ac_nohash_2_data[] = {
  82, 60, 94, 86, 85, 63, 54, 23, 53, 53, 
  49, 23, 20, 23, 43, 51, 51, 53, 40, 23, 
  29, 42, 64, 44, 43, 41, 33, 30, 37, 11, 
  9, 4, 20, -12, 23, 35, 51, 39, 23, -2, 
  69, 43, 62, 64, 76, 50, 40, 35, 56, 54, 
  61, 34, 60, 19, 26, 51, 62, 42, 37, 6, 
  40, 44, 51, 34, 46, 24, 44, 40, 24, 4, 
  15, 11, 34, 34, 24, 1, 22, 8, 37, 11, 
  65, 27, 62, 55, 69, 41, 14, 33, 38, 44, 
  57, 45, 59, 17, -4, -77, 14, 25, 34, 2, 
  54, 28, 42, 35, 4, -1, 8, -2, 22, 17, 
  30, 8, 32, 30, 19, -10, 30, 21, 31, 8, 
  55, 29, 64, 14, 67, 29, -26, 34, 63, 52, 
  69, 44, 62, 39, 42, -29, 25, 44, 50, 30, 
  67, 35, 36, 36, 39, 9, 39, 39, 54, 53, 
  57, 25, 48, 42, 20, 40, 44, 47, 47, 8, 
  69, 40, 27, 22, 66, 38, 46, 35, 52, 39, 
  54, 29, 51, 43, 62, 11, 52, 44, 64, 51, 
  72, 57, 63, 69, 93, 84, 93, 80, 104, 84, 
  77, 61, 64, 55, 55, 60, 82, 80, 96, 88, 
  74, 42, 21, -128, 11, -50, 37, 48, 69, 42, 
  60, 32, 72, 21, -2, 9, 50, 37, 31, -60, 
  60, 46, 29, -3, 67, 36, 65, 39, 61, 37, 
  50, 34, 8, 28, 43, 22, 32, -6, 62, 44, 
  23, 39, 49, -43, 2, -128, 52, 54, 72, 43, 
  59, 30, 46, 34, 43, -8, 45, 25, 12, -77, 
  56, 26, 44, -26, 30, -77, 61, -8, 1, -128, 
  -3, -18, 28, -43, 26, 0, 9, -128, 42, -10, 
  64, -12, 20, 4, 42, 29, 50, 5, 63, 1, 
  55, 44, 43, -29, 1, -2, 40, 22, 45, 31, 
  65, 42, 6, -60, 19, -60, 45, -128, -6, -29, 
  -4, -43, 22, -16, 33, 1, 19, -128, -14, -29, 
  65, 9, 34, -1, 28, -37, 41, 39, 77, 33, 
  24, 10, 55, 10, 49, 29, 37, -10, 19, -7, 
  49, 8, 10, -128, -29, -128, 32, -128, -23, -128, 
  -128, -128, 37, -4, 15, -50, -60, -128, -37, -128, 
  -12, -23, 34, 29, 46, -128, 36, 12, 45, -3, 
  14, -7, 45, -1, 42, 32, 15, -43, 11, -128, 
  42, -37, -20, -77, -33, -128, 12, -128, -128, -128, 
  -12, -128, 30, -26, 4, -128, -16, -128, -33, -128, 
  45, -43, -43, -128, 32, -8, 49, -128, 41, 0, 
  12, -37, 19, -128, -6, 21, 17, -7, 30, -128, 
  -77, -128, -37, -128, -128, -128, -37, -128, -77, -128, 
  -26, -128, 19, -77, -4, -128, -77, -128, -60, -128, 
  -2, 14, 7, -128, -128, -128, -128, -7, 53, -26, 
  17, -128, -16, -128, -4, -77, -43, -14, 23, -128, 
  -128, -128, -18, -128, -60, -128, -50, -128, -128, -128, 
  -23, -128, 4, -128, -14, -128, -60, -128, -128, -128, 
  27, -128, -77, -128, -60, -128, -8, -128, 12, 19, 
  45, -23, 29, -43, 9, -77, 16, -128, 44, -128, 
  -128, -128, 13, -29, -8, -128, -128, -128, -33, -128, 
  -23, -128, 6, -128, -7, -128, -128, -128, -128, -128, 
  52, -29, 35, -128, -128, -128, 23, -37, -60, -43, 
  18, -128, 31, 19, -20, 6, -7, -128, -10, -128, 
  -50, -128, -128, -16, 32, -128, -128, -128, -128, -128, 
  -77, -128, -29, -128, -12, -128, -77, -128, -128, -128, 
  47, -18, -43, -128, -128, -77, 34, -128, -18, -128, 
  22, -128, -60, -77, 36, 36, 34, -26, 39, -128, 
  -128, -128, -77, -128, -12, -128, -77, -128, -128, -128, 
  -29, -128, -20, -128, -37, -128, -77, -128, -77, -128, 
  49, 13, -16, -128, 14, 44, 61, -128, -77, -50, 
  19, -128, 30, -77, 1, 19, 44, 26, 33, -77, 
  -128, -128, -29, -128, -26, -128, 6, -128, -128, -128, 
  -77, -128, 4, -6, -10, -128, -77, -128, -128, -128, 
  106, 92, 101, 87, 112, 92, 95, 62, 32, 14, 
  9, -18, 32, -60, 2, -60, 26, -3, 71, 68, 
  47, -128, -10, -33, 57, 64, 84, 43, 36, 7, 
  14, 2, 28, 62, 74, -60, -77, -128, -128, -128, 
  110, 98, 124, 97, 123, 102, 117, 88, 88, 58, 
  75, 9, 61, 46, 67, -3, 67, 69, 111, 95, 
  107, 69, 51, 65, 97, 86, 100, 80, 91, 79, 
  63, 40, 77, 84, 99, 51, 0, -50, 10, -128, 
  105, 75, 105, 78, 112, 91, 110, 92, 95, 61, 
  69, 62, 69, 75, 83, 54, 94, 79, 99, 85, 
  97, 70, 79, 65, 102, 84, 89, 67, 93, 80, 
  93, 74, 98, 80, 103, 66, 13, -20, 54, 6, 
  102, 56, 98, 77, 100, 80, 113, 98, 113, 47, 
  101, 83, 105, 74, 92, 71, 91, 91, 105, 86, 
  108, 85, 75, 74, 102, 74, 76, 59, 90, 65, 
  95, 80, 97, 81, 102, 67, 29, 43, 77, 51, 
  97, 50, 99, 81, 89, 75, 105, 94, 119, 90, 
  98, 87, 111, 91, 102, 81, 105, 86, 107, 67, 
  90, 58, 94, 71, 86, 59, 78, 69, 87, 49, 
  99, 79, 90, 59, 86, 60, 87, 59, 74, 50, 
  95, 47, 94, 79, 63, 62, 100, 85, 115, 84, 
  108, 83, 104, 91, 107, 91, 113, 87, 115, 74, 
  96, 84, 104, 87, 90, 59, 64, 47, 79, 53, 
  87, 58, 80, 57, 86, 66, 87, 73, 86, 65, 
  85, 32, 77, 67, 60, 59, 96, 69, 105, 69, 
  93, 79, 101, 88, 106, 85, 113, 84, 97, 80, 
  104, 74, 95, 81, 106, 68, 79, 50, 71, 42, 
  77, 22, 62, 50, 85, 54, 90, 69, 90, 63, 
  79, 21, 57, 47, 54, 56, 92, 72, 102, 70, 
  89, 76, 95, 79, 101, 80, 109, 77, 84, 66, 
  91, 61, 95, 77, 104, 77, 89, 69, 86, 60, 
  74, 41, 54, 46, 74, 60, 86, 66, 91, 57, 
  86, 40, 55, 37, 65, 56, 85, 19, 79, 64, 
  93, 69, 89, 60, 102, 78, 94, 70, 85, 49, 
  74, 64, 93, 72, 84, 54, 85, 79, 98, 65, 
  74, 24, 77, 68, 94, 60, 77, 61, 79, 60, 
  77, 46, 50, -128, 60, 29, 65, -33, 52, 45, 
  73, 53, 80, 36, 85, 41, 61, 8, 42, -128, 
  46, 20, 89, 44, 67, -20, 54, -2, 78, 43, 
  61, 38, 80, 21, 62, 61, 86, 74, 94, 78, 
  -18, -128, 24, -18, -37, -128, 22, -128, -16, 15, 
  55, -128, -26, -128, 53, -33, 35, -128, 22, -128, 
  -4, -50, 72, 26, 51, -128, 52, -60, 71, 58, 
  67, 69, 95, 63, 92, 80, 111, 90, 116, 96, 
  56, -14, -128, -128, -128, -128, -128, -60, 49, -18, 
  -2, -128, -10, -128, 40, -128, 17, -128, -29, -128, 
  -33, -4, 62, -128, -77, -128, -37, -128, 15, -128, 
  34, 17, 66, 0, 66, 57, 87, 67, 95, 77, 
  18, -128, -128, -128, -128, -128, -50, -23, 52, -128, 
  -77, -77, -2, -128, 23, -128, -128, -128, -128, -128, 
  -128, -128, 55, -128, -128, -128, -50, -128, -128, -128, 
  45, 9, 62, 31, 56, 51, 82, 47, 84, 54, 
  -50, -128, -128, -128, -128, -128, -128, -128, 11, -128, 
  -128, -128, -128, -128, 19, -128, -128, -128, -128, -128, 
  -128, -128, 48, -128, -128, -128, -128, -128, -128, -128, 
  31, -23, 62, -14, 41, 57, 79, 62, 86, 54, 
  -128, -128, -128, -128, -128, -128, -128, -128, -18, -128, 
  -37, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -1, -128, -128, -128, -128, -128, -128, -128, 
  19, -33, 65, 7, 52, 31, 84, 42, 71, 62, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  15, 0, 60, 28, 38, -3, 63, 48, 69, 19, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  32, -3, 39, 9, 48, 9, 75, 25, 58, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  40, 23, 54, -60, 14, 16, 70, 7, 54, 22, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -16, -60, 40, -33, 38, 32, 62, -43, 59, 19, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  46, -128, 30, -29, 30, 27, 59, -8, 74, -4, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -6, 46, -14, 36, 38, 42, 34, 61, -26, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  26, -18, 25, -60, 24, 0, 43, -10, 38, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  44, 7, 55, -20, 26, -33, 34, -37, 5, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  9, -77, -43, -128, -128, -60, 41, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
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