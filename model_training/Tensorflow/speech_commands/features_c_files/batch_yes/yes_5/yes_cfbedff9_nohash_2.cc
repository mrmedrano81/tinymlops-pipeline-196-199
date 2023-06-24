/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/cfbedff9_nohash_2.wav" \
 * --output_c_file="features_c_files/yes/yes_cfbedff9_nohash_2.cc" \
 */
#include "yes_cfbedff9_nohash_2.h"


const int g_yes_cfbedff9_nohash_2_width = 40;
const int g_yes_cfbedff9_nohash_2_height = 49;
alignas(16) const signed char g_yes_cfbedff9_nohash_2_data[] = {
  44, 41, 62, 53, 5, 15, 14, 23, 39, 11, 
  26, 7, 14, 15, 0, -2, 40, 17, 31, -2, 
  5, 23, 0, -26, -18, -2, 0, -12, -4, 7, 
  14, 4, 0, 4, -10, -7, 0, 15, -4, -7, 
  44, -26, 4, 29, 44, 32, 15, 26, 58, 56, 
  46, 15, 42, -1, 12, -10, 31, 30, 24, -29, 
  -26, -77, -26, -29, -1, -16, -18, -16, 4, 25, 
  11, -10, 4, 4, -1, -16, 4, -6, -18, 18, 
  45, 30, 46, 24, 22, 5, 25, 8, 54, 35, 
  15, 30, 16, 4, 20, -7, 15, 8, 9, 2, 
  7, -43, -7, -23, 4, -7, -2, 6, 24, -60, 
  2, -26, 21, -8, 11, -12, -14, -33, 8, -4, 
  29, 25, 24, -128, 23, 1, -4, 16, 48, 39, 
  33, -43, 7, -23, -10, -43, 22, 1, -6, 4, 
  -29, -128, -77, -43, -37, -43, -14, -10, 13, -50, 
  -4, -26, 9, -16, -20, -20, -8, -37, -14, -29, 
  27, -60, -3, -29, 26, 13, 37, 29, 62, 52, 
  47, -7, 9, 17, 8, -29, 4, -23, 19, 4, 
  9, 7, -14, -14, -29, -128, -37, -37, -6, -37, 
  -50, -23, -6, -60, -10, -16, -10, -7, -23, -50, 
  4, 9, 34, 4, 10, 7, 23, -37, 23, 18, 
  14, -29, 8, -43, 10, -23, -16, -33, 0, -77, 
  -16, -23, -8, -60, -77, -128, -43, -60, -18, -50, 
  -16, -29, -18, -128, -10, -50, 4, -20, 0, -6, 
  -20, 25, 35, 4, 41, 11, 6, -3, 50, 11, 
  6, -77, 13, 7, 20, -50, 6, -60, -29, -33, 
  20, -33, 26, -7, -23, -60, -1, -14, -43, -77, 
  -18, -33, -26, -50, 2, -6, 10, -33, -6, -60, 
  122, 100, 120, 99, 115, 94, 101, 70, 72, 34, 
  38, 13, -12, -18, -20, -60, -3, -23, 2, -23, 
  24, 4, 24, 41, 54, 24, 17, 36, 48, 19, 
  -3, -20, 15, -33, -7, -12, 9, -2, 22, 5, 
  120, 100, 124, 98, 119, 90, 110, 91, 90, 55, 
  59, 15, 35, 9, 18, 9, 19, -43, 1, 34, 
  63, 70, 68, 77, 97, 78, 74, 74, 95, 72, 
  64, 24, 52, 37, 54, 44, 52, 33, 46, 59, 
  115, 92, 116, 94, 117, 90, 112, 93, 105, 75, 
  82, 25, 16, 39, 54, 51, 43, -6, 43, 47, 
  82, 70, 84, 75, 102, 84, 93, 87, 112, 90, 
  102, 78, 76, 51, 66, 55, 74, 43, 67, 65, 
  96, 88, 102, 91, 112, 87, 111, 84, 108, 77, 
  90, 69, 42, -8, 42, 49, 59, 45, 58, 60, 
  99, 86, 102, 87, 109, 82, 90, 82, 104, 75, 
  94, 81, 90, 50, 67, 51, 65, 55, 65, 65, 
  93, 55, 97, 79, 109, 82, 95, 67, 88, 57, 
  86, 60, 63, 50, 54, 56, 70, 41, 65, 73, 
  98, 85, 103, 86, 103, 73, 75, 45, 82, 66, 
  78, 74, 87, 46, 61, 49, 66, 44, 65, 62, 
  79, 34, 72, 64, 100, 88, 104, 85, 110, 90, 
  100, 57, 76, 32, 65, 64, 76, 64, 68, 71, 
  97, 75, 99, 82, 99, 63, 81, 47, 89, 62, 
  72, 66, 85, -6, 36, -3, 42, 4, 47, 54, 
  63, -43, 63, -26, 29, 61, 102, 75, 100, 77, 
  95, 62, 80, 44, 66, 56, 97, 76, 104, 90, 
  97, 54, 84, 63, 90, 43, 49, -37, 62, 34, 
  55, 39, 80, -20, 39, -3, 34, 8, 25, -7, 
  60, -128, 37, -60, 55, 30, 81, 79, 109, 74, 
  90, 66, 87, 59, 80, 57, 83, 75, 99, 67, 
  82, 22, 72, 39, 68, 1, 40, 42, 52, 25, 
  47, 40, 67, 46, 26, -33, 22, -10, 36, -37, 
  -43, -128, -60, -128, 21, 37, 68, 27, 86, 72, 
  99, 70, 88, 32, 72, 47, 83, 84, 102, 57, 
  74, -37, 38, 29, 60, -128, 21, -128, 7, -128, 
  -50, -128, 43, 29, 11, -23, 16, -60, 7, -128, 
  57, -128, -128, -128, -10, -128, 20, 26, 85, 80, 
  107, 79, 86, 35, 70, 62, 93, 72, 91, 28, 
  -12, -128, 14, 35, 64, -128, -26, -128, -128, -128, 
  -128, -128, -10, -43, 15, 11, 32, -43, -16, -128, 
  8, -128, -128, -128, -128, -128, -128, -18, 84, 79, 
  96, 68, 86, 62, 101, 80, 98, 75, 89, 19, 
  39, -128, 36, -128, -23, -128, 0, -77, -128, -128, 
  -128, -128, 0, -18, -26, -37, 28, -43, -20, -128, 
  -128, -128, -128, -128, -128, -128, 40, -50, 53, 31, 
  61, 5, 45, 43, 68, 15, 77, 42, 57, -50, 
  16, -128, -6, 11, 42, -128, -77, -43, -60, -128, 
  -128, -128, 41, 27, -77, -128, -12, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -14, -128, -37, -128, 
  27, 7, 60, 13, 21, -77, 66, 37, -128, -128, 
  -6, -128, 2, -128, -50, -128, 9, -7, 67, -3, 
  62, 53, 100, 83, 62, 44, 69, 60, 59, 57, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -16, -33, 24, 1, 67, 4, -128, -128, 20, -128, 
  -8, -128, -128, -128, -128, -128, 53, 34, 40, 44, 
  107, 84, 101, 82, 97, 80, 99, 92, 98, 73, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -2, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 50, 25, 57, 44, 
  101, 69, 91, 82, 97, 71, 100, 66, 93, 77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 50, -37, 13, -37, 
  55, 47, 90, 65, 75, 33, 67, 43, 85, 58, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 12, -128, 37, -3, 
  11, -26, 61, 37, 77, 7, 60, 20, 77, 50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  65, 39, 57, -7, 55, 4, 65, 46, 77, 51, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -20, -50, 35, -14, 
  84, 64, 52, -3, 53, 30, 73, 29, 55, 37, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 31, 31, 38, 57, 
  92, 47, 75, 23, 68, 46, 69, 59, 78, 52, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -14, 63, 49, 62, 66, 
  86, 52, 81, 16, 52, 16, 72, 47, 70, 42, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -50, 64, 25, 87, 62, 
  59, 37, 74, 9, 63, 2, 60, -6, 61, 22, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 71, 20, 62, 12, 
  45, -8, 45, -29, 20, -43, 32, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -18, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 30, -26, 54, -12, 
  44, -128, -128, -128, -18, -128, -18, -128, -23, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 2, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -128, -128, -128, 
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
