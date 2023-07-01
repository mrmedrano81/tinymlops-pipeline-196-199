/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/63f7a489_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_63f7a489_nohash_3.cc" \
 */
#include "no_63f7a489_nohash_3.h"


const int g_no_63f7a489_nohash_3_width = 40;
const int g_no_63f7a489_nohash_3_height = 49;
alignas(16) const signed char g_no_63f7a489_nohash_3_data[] = {
  -128, -60, -10, 7, 62, 57, 47, 34, 51, 45, 
  51, 30, 23, 34, 9, 4, 35, 32, 35, 17, 
  20, 23, 39, 25, 23, 17, 20, 20, -10, 11, 
  5, 4, 26, 4, 14, 7, 23, 17, 17, 15, 
  -128, -50, 9, -16, 45, 49, 43, 46, 47, -10, 
  46, 37, 15, 44, 32, 20, 44, 12, 40, 14, 
  24, 19, 46, 33, 32, 7, 43, 13, 32, -1, 
  16, 8, -2, 11, 22, 25, 29, 16, 37, 11, 
  -128, -128, -29, -7, 38, 0, 32, 27, 35, 23, 
  16, -1, 40, 34, 45, 37, 36, 1, 38, 29, 
  30, 22, 20, 7, 29, -4, -16, 6, 36, 17, 
  17, -14, 10, -3, -3, 2, 25, 6, -4, -8, 
  -128, -128, -20, 9, 34, -37, 43, 22, 31, 9, 
  40, 26, 47, 16, 57, 40, 32, 1, -26, -20, 
  8, -26, -7, -12, 7, 8, 11, 6, 20, -12, 
  27, -2, 19, 11, -16, -1, 11, -18, 24, -7, 
  -128, -128, 25, 42, 20, -37, 37, 25, 44, 39, 
  48, 27, 22, 0, 54, -6, 28, -1, 37, 39, 
  43, 5, 8, 27, 16, -2, 22, -18, 19, 14, 
  33, -14, -2, -2, -6, 4, 31, -26, 9, -20, 
  -12, 14, 51, 58, 70, 45, 38, -18, 28, -2, 
  30, 15, 12, -12, 25, 6, 30, 15, 12, -16, 
  24, 2, 21, 14, 25, 1, 8, -37, 8, -6, 
  0, 19, 37, 5, 19, 37, 41, 54, 71, 42, 
  111, 100, 122, 101, 124, 102, 118, 94, 87, 67, 
  62, 20, 48, 23, 42, 19, 54, 35, 68, 53, 
  89, 78, 94, 87, 80, 20, 34, -12, -2, -12, 
  19, 11, 29, 4, 70, 70, 99, 95, 117, 96, 
  97, 88, 115, 91, 119, 96, 113, 95, 101, 81, 
  95, 39, 50, 16, 43, 55, 71, 62, 109, 94, 
  114, 94, 108, 89, 101, 28, 44, 32, 17, 27, 
  22, -1, 26, 4, 94, 82, 60, -50, 23, -26, 
  88, 71, 109, 75, 103, 89, 110, 92, 112, 87, 
  90, 65, 67, -3, 62, 58, 55, 56, 99, 85, 
  110, 88, 102, 68, 106, 44, 40, 10, 32, 40, 
  27, -60, -43, 32, 103, 87, 70, -128, -50, -128, 
  87, 57, 104, 78, 90, 81, 108, 83, 113, 85, 
  101, 76, 77, 61, 64, 64, 78, 66, 87, 68, 
  100, 83, 103, 79, 100, 58, 58, -12, 27, 5, 
  16, 4, 48, 34, 96, 74, 55, -128, -128, -128, 
  92, 6, 96, 75, 76, 71, 103, 69, 104, 78, 
  103, -12, 70, 54, 84, 86, 112, 94, 102, 75, 
  92, 70, 91, 71, 88, 69, 47, 32, 29, 11, 
  21, 27, 54, 9, 92, 74, 93, -50, -128, -128, 
  87, -128, 85, 70, 47, 50, 99, 56, 102, 47, 
  85, 70, 74, 51, 99, 83, 112, 78, 99, 76, 
  92, 64, 98, 75, 105, 93, 54, 20, 29, 38, 
  32, 34, 37, -18, 85, 61, 83, -50, -60, -128, 
  88, -128, 79, 67, 60, 59, 100, 23, 87, 62, 
  99, 72, 88, 70, 103, 81, 103, 81, 99, 77, 
  89, 71, 91, 62, 90, 73, 79, 42, 52, -3, 
  21, 45, 45, -60, 69, 52, 82, -7, -50, -128, 
  87, -128, 81, 69, 66, 41, 91, 23, 82, 59, 
  80, 75, 106, 87, 109, 89, 95, 74, 94, 66, 
  97, 63, 93, 54, 95, 75, 66, 14, 29, -3, 
  62, 76, 64, 6, 79, 57, 69, -60, -50, -128, 
  82, 25, 72, 62, 68, 22, 85, 24, 77, 46, 
  59, 46, 80, 72, 103, 85, 91, 57, 77, 49, 
  90, 45, 76, 33, 93, 72, 87, 37, 29, -50, 
  69, 55, 57, 31, 77, 64, 90, -43, -26, -37, 
  70, -128, 62, 64, 84, -3, 89, 71, 98, 84, 
  96, 79, 95, 88, 102, 69, 87, 63, 75, 47, 
  85, 57, 87, 58, 90, 79, 107, 80, 117, 102, 
  124, 101, 122, 99, 89, 54, 114, 96, 106, 82, 
  69, -128, 67, 35, 53, 59, 92, 94, 122, 95, 
  113, 88, 112, 92, 110, 85, 96, 71, 92, 65, 
  77, 53, 64, 52, 101, 88, 111, 95, 111, 57, 
  81, 64, 93, 65, 90, 54, 84, 74, 94, 69, 
  -128, -128, 57, -16, 40, 32, 55, 90, 108, 67, 
  102, 93, 111, 62, 99, 50, 90, 29, 70, 46, 
  55, -128, 67, 80, 90, 53, 87, 70, 87, -128, 
  52, 23, 90, 71, 80, 29, 76, 73, 104, 75, 
  21, 24, 34, -128, 56, -23, 90, 83, 82, 84, 
  103, 86, 91, 71, 89, 1, 54, 35, 73, 35, 
  75, 44, 75, 37, 72, -77, 78, 44, 0, -128, 
  -23, -128, 84, 57, 64, 1, 79, 55, 79, 62, 
  23, 61, 57, -128, 71, 2, 94, 50, 75, 67, 
  85, 30, 78, 65, 84, -77, 45, 6, 67, -12, 
  59, -1, 67, 44, 66, -1, 68, 18, 34, -128, 
  -60, -128, 77, 54, 60, 31, 79, 53, 70, 43, 
  55, 70, 44, -6, 77, 30, 80, 13, 80, 32, 
  76, -6, 78, 39, 65, -2, 42, -16, 30, -14, 
  33, -50, 47, 19, 42, 4, 62, -23, 27, -128, 
  -128, -128, 40, -14, 45, -16, 42, -128, -10, -128, 
  65, 62, 10, -14, 54, 16, 51, 24, 54, 23, 
  72, 38, 83, 37, 47, -29, 21, -128, -128, -128, 
  17, -16, 32, -77, 24, -128, 56, -128, -128, -128, 
  -128, -128, 20, -128, 27, -43, 29, -128, -128, -128, 
  62, 34, -128, -128, 15, -60, 34, 10, 17, -33, 
  92, 43, 53, -20, -7, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -10, -128, -128, -128, -128, -128, 
  62, 43, -37, -128, -16, -128, 0, -77, 17, 24, 
  78, -43, 43, -37, 31, -128, -77, -60, -128, -128, 
  -2, -60, -20, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -20, -128, -128, -128, -128, -128, 
  -18, -128, -50, -128, -128, -128, 4, -128, -128, -16, 
  12, -128, -8, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -14, -128, 
  -128, -128, 62, -2, -10, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -33, -128, 
  -128, -128, 10, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 14, 1, 12, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 26, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -77, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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