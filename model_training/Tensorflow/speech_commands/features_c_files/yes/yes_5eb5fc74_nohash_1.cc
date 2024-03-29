/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/5eb5fc74_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_5eb5fc74_nohash_1.cc" \
 */
#include "yes_5eb5fc74_nohash_1.h"


const int g_yes_5eb5fc74_nohash_1_width = 40;
const int g_yes_5eb5fc74_nohash_1_height = 49;
alignas(16) const signed char g_yes_5eb5fc74_nohash_1_data[] = {
  96, 87, 100, 87, 98, 89, 94, 77, 85, 75, 
  88, 81, 102, 86, 93, 64, 77, 79, 85, 74, 
  89, 83, 72, 71, 77, 71, 69, 70, 75, 70, 
  70, 63, 66, 58, 75, 68, 69, 65, 66, 44, 
  102, 70, 88, 60, 82, 69, 87, 62, 70, 64, 
  84, 75, 78, 67, 77, 67, 69, 44, 67, 67, 
  73, 54, 75, 50, 67, 47, 74, 55, 51, 57, 
  63, 47, 66, 42, 62, 53, 74, 56, 64, 50, 
  84, 72, 75, 61, 83, 44, 72, 62, 73, 47, 
  82, 69, 80, 54, 68, 67, 77, 64, 72, 53, 
  75, 55, 67, 59, 67, 62, 75, 42, 65, 58, 
  74, 57, 60, 54, 62, 44, 56, 51, 65, 34, 
  63, 53, 73, 35, 77, 50, 72, 66, 78, 58, 
  82, 39, 55, 34, 56, 55, 75, 63, 70, 53, 
  82, 50, 65, 53, 65, 32, 76, 64, 61, 44, 
  52, 32, 56, 42, 54, 36, 53, 27, 54, 27, 
  78, 40, 56, 47, 81, 63, 79, 35, 57, 29, 
  66, 55, 61, 50, 66, 4, 45, 30, 62, 33, 
  64, 37, 64, 52, 68, 43, 63, 38, 55, 15, 
  46, 21, 59, 33, 40, 8, 59, 34, 47, 34, 
  88, 46, 71, 44, 50, 10, 65, 57, 63, 50, 
  76, 26, 17, 37, 70, 32, 51, -43, 33, 0, 
  46, 14, 53, 27, 49, 25, 58, 30, 66, 42, 
  43, -12, 45, 10, 41, 4, 48, 20, 49, 15, 
  68, 14, 53, 32, 74, 39, 57, -77, 25, -8, 
  -26, 25, 73, 14, 56, 13, 59, 4, 56, 20, 
  48, -60, 32, 16, 66, 34, 49, 18, 57, -29, 
  49, 41, 66, 39, 54, 12, 55, 20, 40, -2, 
  68, 45, 54, -60, 43, 46, 74, 19, 43, 34, 
  55, 19, 52, -50, 55, 32, 30, 23, 59, 32, 
  39, -6, 55, 34, 55, -14, 39, -18, 46, 28, 
  52, 38, 42, -8, 39, -8, 37, 4, 27, 11, 
  42, -128, 60, 56, 63, 7, 62, 40, 58, 11, 
  74, 37, 54, -12, 33, -3, 40, -6, 44, -6, 
  55, 14, 42, -29, 43, 11, 62, 22, 44, 16, 
  40, -2, 35, 5, 36, 22, 44, 9, 41, 15, 
  32, -2, 51, 1, 50, 14, 47, 12, 44, -128, 
  -4, 15, 56, -77, -2, 11, 64, 25, 47, 8, 
  29, -4, 50, -43, 46, 30, 50, 2, 48, -77, 
  45, 9, 34, 7, 47, 27, 8, -60, 38, -3, 
  51, -26, 44, 4, 50, -50, 34, -23, 31, -29, 
  9, -128, -6, -43, 55, -6, 19, -3, 54, -1, 
  28, -128, 32, 22, 55, 42, 30, -26, 45, 1, 
  56, 56, 67, 35, 46, -7, 49, 12, 50, -2, 
  67, 49, 42, -128, -10, 13, 54, -128, 24, -50, 
  21, 8, 50, 5, 55, 7, 63, 36, 64, -37, 
  35, -18, 6, 9, 50, 36, 49, 39, 67, 35, 
  53, 40, 67, 42, 53, -18, 36, -1, 47, 23, 
  37, -77, 25, -33, 43, -60, 37, -23, 7, -37, 
  27, 16, 31, 2, 52, -6, 52, -4, 37, 34, 
  12, -77, 26, -60, 63, 29, 34, 0, 57, 31, 
  62, 40, 67, 40, 42, 2, 31, 16, 46, -1, 
  36, -20, 1, -6, 30, -1, 28, -128, 33, -7, 
  21, -128, -26, 15, 45, 2, 56, -33, 37, -2, 
  25, -20, 30, 1, 66, 45, 67, 37, 60, 40, 
  60, 49, 77, 30, 60, 17, 42, -3, 50, 20, 
  112, 97, 114, 79, 105, 87, 98, 56, 83, 50, 
  36, -60, 40, -29, 32, -14, 29, -6, 32, 9, 
  60, 13, 65, 34, 80, 67, 85, 67, 94, 65, 
  90, 72, 76, 54, 76, 17, 50, 16, 29, 1, 
  112, 87, 76, 90, 120, 94, 100, 96, 109, 87, 
  104, 72, 103, 72, 100, 68, 88, 72, 94, 78, 
  92, 85, 113, 92, 113, 93, 113, 92, 111, 89, 
  112, 88, 99, 73, 87, 29, 60, 29, 21, 16, 
  104, 76, 47, 83, 101, 55, 117, 99, 114, 92, 
  105, 90, 106, 84, 100, 82, 99, 81, 105, 86, 
  108, 90, 115, 87, 102, 82, 107, 87, 100, 82, 
  102, 84, 92, 72, 91, 59, 68, 57, 52, 35, 
  99, 67, 76, 78, 87, 39, 112, 81, 110, 94, 
  103, 77, 95, 85, 96, 77, 101, 78, 101, 78, 
  109, 85, 101, 64, 88, 63, 91, 67, 88, 62, 
  92, 72, 93, 58, 85, 52, 40, -18, 19, -29, 
  85, 29, 93, 73, 75, 62, 87, 29, 112, 80, 
  104, 72, 105, 71, 95, 72, 92, 65, 98, 77, 
  98, 67, 73, 19, 65, 47, 80, 62, 77, 52, 
  85, 59, 80, 40, 69, 31, 72, 26, 29, -8, 
  80, 19, 83, 41, 33, 48, 44, 17, 82, 27, 
  94, 37, 70, 49, 64, 16, 75, 25, 70, 42, 
  61, 6, 42, -23, 23, -128, 49, 21, 58, 4, 
  67, 42, 66, -12, 40, 37, 87, 46, 36, 9, 
  48, -128, 51, -128, -128, -37, -128, -128, -7, -128, 
  48, -128, 20, -128, -43, -128, 26, -128, 21, -29, 
  46, -128, -128, -128, -128, -128, -50, -128, -37, -128, 
  -18, -128, -10, -128, 21, -6, 59, -7, 25, 27, 
  -128, -128, 13, -128, -128, -128, -128, -128, -128, -128, 
  6, -128, -128, -128, -43, -128, -7, -128, -128, -128, 
  9, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  1, -128, 46, 63, 85, 73, 104, 77, 80, 82, 
  -128, -128, 5, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -23, -128, -128, -128, -128, -128, 
  -18, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -2, -128, 67, 52, 89, 84, 101, 86, 95, 81, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -128, 
  4, -128, 69, 56, 87, 72, 97, 62, 84, 65, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, 66, 48, 87, 65, 90, 61, 73, 51, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 17, -29, 35, 30, 55, -43, 30, -16, 
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
