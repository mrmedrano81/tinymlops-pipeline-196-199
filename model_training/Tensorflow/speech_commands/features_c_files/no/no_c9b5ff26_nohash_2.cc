/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/c9b5ff26_nohash_2.wav" \
 * --output_c_file="features_c_files/no/no_c9b5ff26_nohash_2.cc" \
 */
#include "no_c9b5ff26_nohash_2.h"


const int g_no_c9b5ff26_nohash_2_width = 40;
const int g_no_c9b5ff26_nohash_2_height = 49;
alignas(16) const signed char g_no_c9b5ff26_nohash_2_data[] = {
  74, 74, 77, 69, 79, 82, 87, 74, 80, 74, 
  83, 74, 85, 80, 99, 80, 85, 70, 84, 77, 
  81, 73, 91, 84, 72, 64, 75, 67, 70, 75, 
  79, 66, 79, 69, 78, 74, 82, 69, 87, 71, 
  76, 69, 92, 69, 78, 50, 80, 68, 62, 40, 
  69, 66, 65, 52, 79, 65, 82, 72, 69, 56, 
  62, 60, 80, 65, 81, 62, 69, 50, 72, 71, 
  76, 50, 72, 63, 77, 44, 77, 62, 77, 44, 
  115, 87, 87, 73, 97, 74, 77, 68, 69, 65, 
  70, 52, 65, 50, 68, 35, 40, 48, 75, 59, 
  69, 65, 68, 59, 77, 46, 51, 48, 57, 58, 
  74, 55, 59, 54, 60, 48, 74, 55, 59, 37, 
  121, 103, 125, 100, 120, 94, 112, 76, 70, 52, 
  70, 37, 78, 76, 97, 68, 81, 67, 95, 70, 
  99, 75, 80, 43, 70, 40, 79, 59, 74, 59, 
  80, 63, 77, 58, 58, 42, 62, 70, 79, 55, 
  102, 90, 112, 84, 107, 81, 107, 72, 85, 68, 
  72, 44, 88, 85, 94, 77, 82, 73, 88, 59, 
  81, 48, 71, 2, 79, 79, 100, 73, 68, 5, 
  66, 68, 89, 66, 64, 54, 61, 57, 77, 49, 
  93, 78, 100, 76, 100, 71, 97, 69, 92, 69, 
  67, 24, 97, 80, 88, 57, 88, 76, 90, 54, 
  49, -4, 41, 15, 60, 56, 72, 56, 68, 47, 
  73, 54, 76, 50, 72, 29, 68, 53, 71, 45, 
  90, 70, 101, 85, 110, 89, 112, 91, 114, 91, 
  116, 95, 111, 91, 116, 96, 114, 77, 89, 60, 
  73, 45, 56, 50, 67, 52, 74, 49, 74, 46, 
  76, 68, 76, 37, 65, 40, 65, 34, 70, 19, 
  90, 66, 86, 76, 102, 83, 105, 86, 108, 90, 
  117, 94, 114, 84, 113, 87, 105, 75, 96, 76, 
  97, 67, 69, 35, 68, 51, 71, 56, 84, 47, 
  66, 57, 77, 62, 71, 51, 59, 28, 65, 49, 
  81, 57, 80, 68, 95, 74, 99, 77, 103, 85, 
  111, 88, 111, 89, 101, 65, 87, 66, 86, 49, 
  86, 49, 74, 23, 74, 66, 88, 58, 76, 39, 
  76, 51, 84, 51, 74, 36, 63, 6, 58, 42, 
  81, 48, 79, 56, 89, 67, 97, 71, 100, 85, 
  104, 86, 111, 81, 91, 53, 83, 57, 79, 38, 
  75, 47, 45, -37, 67, 44, 79, 59, 61, 24, 
  62, 46, 85, 60, 68, 42, 59, 27, 59, 37, 
  73, 41, 76, 48, 83, 61, 94, 69, 97, 80, 
  99, 80, 106, 59, 75, 43, 74, -14, 52, 29, 
  69, 35, 68, 22, 59, 16, 78, 59, 63, -2, 
  53, 17, 76, 35, 59, -2, 46, -29, 43, 24, 
  76, 36, 75, 39, 79, 58, 92, 70, 98, 72, 
  95, 75, 95, 50, 54, -6, 48, -18, 39, 43, 
  62, 9, 67, -7, 65, 55, 92, 68, 67, 2, 
  48, -1, 64, 19, 47, 18, 46, -18, 31, -6, 
  72, 21, 71, 19, 72, 47, 87, 64, 95, 66, 
  89, 71, 77, 31, 47, -3, 22, -128, -26, -16, 
  43, -37, 40, 12, 73, 45, 78, 50, 62, -14, 
  29, -29, 25, -128, 15, -6, 47, -18, 43, 1, 
  71, 12, 69, 10, 66, 37, 82, 56, 87, 60, 
  85, 63, 60, -29, 37, -128, 43, -128, -20, -128, 
  29, -128, 30, 31, 80, 42, 62, 27, 55, 0, 
  29, -128, -60, -128, 21, -43, 4, -128, 26, 5, 
  65, 2, 66, 16, 68, 34, 81, 55, 85, 59, 
  85, 52, 56, -128, 14, -128, 7, -128, -60, -60, 
  43, -20, 49, -8, 64, 1, 69, 49, 64, -128, 
  2, -128, 0, -6, 41, -14, 30, -50, 18, 7, 
  60, -8, 62, 4, 65, 35, 79, 50, 81, 59, 
  80, 25, 30, -128, -128, -128, -60, -128, -128, -128, 
  -26, -16, 48, -29, 24, -37, 69, 43, 46, -128, 
  -3, -128, -23, -128, 24, -10, 31, -128, -6, -14, 
  59, -6, 61, 2, 59, 25, 75, 47, 77, 46, 
  75, -1, 25, -128, -128, -128, -128, -128, -43, -128, 
  -29, -128, 27, -29, 30, -10, 70, -4, 36, -23, 
  52, -128, -128, -128, 20, -23, 42, -128, 4, -18, 
  59, -37, 55, -3, 59, 22, 73, 43, 70, 25, 
  65, -43, 11, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, 11, -77, -8, -128, 60, -33, 35, -128, 
  -14, -128, -128, -77, -2, -50, 17, -23, 10, 14, 
  56, -50, 51, -20, 56, 19, 72, 43, 62, -8, 
  58, -128, 0, -128, -128, -128, -128, -128, -128, -128, 
  7, -77, 55, 25, 50, -128, 57, -43, 19, -60, 
  22, -128, -128, -128, 2, -77, 14, -33, 25, -18, 
  57, -128, 45, -18, 55, 12, 66, 37, 49, -77, 
  45, -128, -33, -128, -128, -128, -128, -128, -128, -128, 
  6, -20, 57, -26, 11, -128, 25, -128, -43, -37, 
  6, -128, -43, -128, 0, -77, 8, 1, 36, -33, 
  59, -128, 44, -10, 52, 11, 57, 33, 40, -128, 
  27, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -20, 60, -60, 27, -128, -128, -128, 42, -18, 
  10, -128, -128, -128, -2, -128, 9, -26, 11, -128, 
  57, -128, 37, -29, 44, -4, 39, 6, 13, -128, 
  -16, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -6, -50, 34, -77, 8, -128, 11, -26, 
  32, -43, -128, -128, 22, -50, 4, -77, -7, -128, 
  60, -128, 15, -20, 27, 9, -128, -50, -18, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, 31, -128, -128, -128, 32, -33, 
  5, -23, -128, -4, 47, -128, 6, -77, -6, -128, 
  53, -128, -7, -37, -20, -18, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  -4, -128, -33, -77, 17, -128, -20, -128, -8, -128, 
  -2, -77, -128, -50, 33, -60, 12, -128, -43, -60, 
  52, -128, -50, -60, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 36, -33, -14, -128, -128, -128, -128, -128, 
  -20, -14, -7, -128, 22, -77, 35, -128, -18, -128, 
  45, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -60, 40, -77, -77, -128, -128, -128, -128, -128, 
  -33, -128, -43, -128, -4, -60, 17, -77, -33, -128, 
  27, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -43, -7, -128, 31, -128, -128, -128, -128, -128, 
  -60, -77, -77, -128, 4, -29, 42, -37, -37, -128, 
  -43, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -50, 32, -128, -128, -128, -16, -128, 
  -37, -128, -50, -77, 9, -50, 4, -128, 1, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, -128, -128, -128, -128, -43, -128, 
  -43, -128, -2, -128, 26, -60, 23, -43, -8, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -50, -43, -128, -128, -128, -60, -43, 
  4, -128, -43, -128, -128, -77, -37, -60, -2, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, -128, -128, -128, -128, -37, -77, 
  20, -128, -128, -128, -26, -128, 4, -60, 24, -37, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -20, -128, -77, -128, -128, -128, -128, -128, 
  -77, -128, -23, -128, 17, 11, -12, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 12, -128, -128, -128, -128, -128, -128, -128, 
  -18, -128, -77, -60, 8, -77, -43, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -50, -14, 
  -7, -128, -29, 5, 4, -37, -23, -77, -14, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -29, 
  -128, -128, -77, -128, -77, -43, 14, -60, -29, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -29, -128, -128, -128, -128, 24, -26, 
  -20, -128, -128, -128, -37, -8, -18, -128, -10, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -43, 
  -128, -60, -60, -60, -50, -128, -128, -128, -7, -18, 
  -7, 17, -43, -128, -128, -128, 1, -77, -33, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -43, -77, -128, 
  -128, -128, -6, -128, -128, -128, -128, -128, 9, -128, 
  4, 7, -26, -128, -43, -128, 1, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -37, 17, -77, -128, -128, -128, -128, -128, -128, 
  -37, -128, 2, -23, -26, -77, 17, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 4, -128, -128, -128, -128, -128, -128, -128, 
  1, -128, -128, -128, -26, -128, -12, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -33, -128, 
  2, -43, -18, -128, -77, -128, -128, -128, -7, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -23, -128, 
  19, -128, -128, -128, -128, -128, -77, -50, -29, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -10, -128, 
  -23, -128, -128, -128, -10, -128, -77, -60, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  -77, -128, -60, -128, -60, -128, -37, -33, -16, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, -128, -128, -128, -128, -128, -128, -37, -60, 
  14, -128, -128, -50, -26, -128, -128, -128, -14, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -12, -50, 
  19, -128, -128, -128, -60, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -20, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -128, -77, -60, -23, -37, -37, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -18, -128, -128, -33, 21, -128, -128, -128, -16, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -43, 
  -128, -128, -128, -128, -16, -128, -128, -128, -128, -60, 
  -14, -128, -128, -128, -77, -128, -128, -77, -77, -128, 
};
