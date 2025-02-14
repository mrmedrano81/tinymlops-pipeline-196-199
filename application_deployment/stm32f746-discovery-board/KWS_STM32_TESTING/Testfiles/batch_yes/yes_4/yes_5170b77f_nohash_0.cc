/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/5170b77f_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_5170b77f_nohash_0.cc" \
 */
#include "yes_5170b77f_nohash_0.h"


const int g_yes_5170b77f_nohash_0_width = 40;
const int g_yes_5170b77f_nohash_0_height = 49;
alignas(16) const signed char g_yes_5170b77f_nohash_0_data[] = {
  88, 57, 74, 63, 0, -26, 43, 45, 29, -18, 
  -128, -18, 9, 17, 31, 7, -10, -26, -4, 7, 
  0, -7, 5, -7, -18, -7, 0, -12, 9, -18, 
  -10, -12, -18, -12, -18, -2, -10, -18, -18, -37, 
  84, 57, 60, 62, 70, 52, 58, 55, 55, 42, 
  65, 61, 79, 83, 86, 69, 64, 61, 70, 67, 
  80, 82, 110, 94, 107, 94, 123, 103, 125, 104, 
  125, 101, 121, 101, 124, 103, 125, 103, 125, 102, 
  52, 55, 51, 23, -8, -8, 39, 19, 49, 29, 
  14, 15, 41, 44, 44, 22, 57, 48, 70, 64, 
  78, 53, 65, 46, 85, 72, 60, 14, 68, -6, 
  50, 55, 92, 51, 70, 41, 71, 32, 75, 60, 
  72, 42, 72, 50, 45, 54, 40, -6, 26, 9, 
  45, 9, 2, -128, -50, -16, 54, 40, 35, 35, 
  49, -128, 15, -14, 62, 29, 14, -37, 42, -128, 
  -6, 35, 69, 14, 54, -128, 42, -20, 49, 17, 
  71, 15, 72, 50, 62, 62, 46, -33, 4, -10, 
  20, 22, 4, -128, -7, -77, 49, 19, -23, -128, 
  -43, -128, -60, -128, 38, -37, -128, -128, -60, -128, 
  -128, -128, -14, -128, -77, -128, -10, -128, -18, -128, 
  59, -12, 50, 11, 9, 26, 32, 13, 25, -18, 
  28, -18, -29, -128, -128, -128, 1, -37, -14, -128, 
  -37, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  61, 8, 49, 1, 36, 19, 33, 42, 48, -16, 
  19, -43, -128, -128, -77, -128, -16, -60, 23, -1, 
  -10, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  42, -37, 49, 24, 40, 17, 20, -33, -14, -77, 
  -50, -128, -77, -128, -128, -128, -77, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  64, 12, 43, -20, -12, -26, 11, -128, 4, -29, 
  -12, -128, -60, -128, -60, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  62, 4, 48, 2, -2, -128, -7, -50, -16, -43, 
  -4, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  82, 75, 94, 73, 100, 72, 95, 72, 53, 50, 
  40, -77, -128, -128, -128, -128, -128, -128, -50, -128, 
  -23, -50, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  120, 102, 121, 94, 120, 101, 118, 92, 107, 85, 
  78, 45, -10, -77, -6, -37, -23, -43, 57, 63, 
  92, 47, 58, 36, 48, 37, 19, -128, -128, -128, 
  -128, -128, 60, 37, -128, -128, -128, -128, -128, -128, 
  119, 92, 116, 98, 120, 97, 120, 96, 115, 93, 
  109, 70, 77, 40, 29, 22, 55, 50, 86, 83, 
  103, 74, 92, 72, 95, 75, 34, -128, 4, -60, 
  -2, 49, 79, 59, -128, -128, 56, -23, -128, -128, 
  107, 81, 101, 85, 112, 93, 120, 93, 114, 89, 
  108, 67, 88, 74, 69, 44, 92, 80, 104, 82, 
  102, 74, 89, 82, 94, 54, 32, -128, 20, 39, 
  82, 65, 69, -12, -128, -8, 57, 30, 14, -128, 
  98, 72, 94, 72, 97, 88, 115, 94, 113, 88, 
  113, 84, 94, 82, 85, 65, 74, 82, 118, 95, 
  105, 78, 94, 82, 94, 71, 52, -20, 53, 64, 
  89, 68, 79, -7, -128, 14, 62, 32, 37, -77, 
  90, 65, 87, 63, 87, 75, 100, 89, 108, 80, 
  104, 69, 100, 79, 89, 85, 99, 85, 107, 79, 
  87, 72, 92, 77, 92, 45, 53, -4, 70, 65, 
  81, 65, 80, -128, -128, -10, 53, 20, 57, -43, 
  86, 61, 77, 51, 83, 59, 88, 66, 98, 79, 
  89, 70, 101, 65, 97, 79, 98, 80, 99, 68, 
  89, 73, 96, 69, 95, 67, 63, 36, 58, 25, 
  54, 27, 70, -14, -128, -43, 59, 19, 44, -128, 
  72, 42, 57, -16, 59, -18, 57, -20, 68, 37, 
  53, 57, 84, 26, 79, 59, 98, 64, 64, -1, 
  29, 0, 42, -2, 65, -18, 7, -128, -50, -128, 
  -77, -33, 60, -33, -128, -128, -4, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  8, 31, 55, -37, 52, 27, 78, 58, 60, -128, 
  21, -128, -23, -128, 34, -128, -6, -128, -128, -128, 
  -128, -128, -37, 8, 76, 24, 25, -128, -128, -26, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -60, 11, -128, 7, -3, 57, -128, -20, -128, 
  -128, -128, 11, -128, 41, -43, 47, -50, -37, -18, 
  51, -128, 55, 49, 107, 87, 90, 53, 74, 60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, 2, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -23, -60, 12, -128, -3, -128, 
  -12, -128, 42, 48, 94, 66, 82, 51, 84, 67, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -50, -18, -128, 
  -23, 16, 59, 59, 89, 54, 61, 51, 77, 61, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 16, -26, -128, -60, 
  32, -6, 44, 55, 75, 21, 72, 15, 54, 46, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -20, -128, 
  -16, 31, 81, 59, 76, 34, 45, -26, 47, 24, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 24, -10, 46, -23, 
  39, 18, 53, -6, 4, -128, -37, -128, -29, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 34, -128, -128, -128, -128, -128, -128, -128, 
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
