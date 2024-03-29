/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/1b4c9b89_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_1b4c9b89_nohash_3.cc" \
 */
#include "no_1b4c9b89_nohash_3.h"


const int g_no_1b4c9b89_nohash_3_width = 40;
const int g_no_1b4c9b89_nohash_3_height = 49;
alignas(16) const signed char g_no_1b4c9b89_nohash_3_data[] = {
  14, 57, 66, 54, 67, 89, 104, 87, 98, 87, 
  65, 65, 87, 80, 83, 50, 17, 17, 37, 25, 
  5, -26, -10, 4, -10, -37, -4, -37, 0, 28, 
  9, -12, 5, 7, 5, -18, 5, 11, -26, -18, 
  47, 59, 63, 4, 55, 62, 77, 72, 102, 83, 
  85, 83, 96, 79, 102, 67, 42, 11, 24, 21, 
  44, 16, 19, 0, -6, -50, 4, 9, 9, 29, 
  15, 9, 8, 8, 12, 12, 30, 25, 13, 1, 
  44, 35, 61, 36, 63, 48, 92, 71, 98, 79, 
  103, 75, 90, 75, 97, 61, 62, 29, 38, 17, 
  45, 46, 49, -26, -2, -29, -7, 9, 24, -3, 
  17, -12, 17, 24, 17, -12, 14, 9, 18, -2, 
  52, 44, 44, -23, 57, 43, 100, 84, 87, 56, 
  99, 65, 71, 52, 76, 77, 93, 26, -7, -43, 
  9, 12, 55, 13, -14, -18, 10, 34, 19, -10, 
  29, -37, 5, -8, 9, -16, -10, -4, 1, -14, 
  20, -128, -26, -23, 40, 41, 53, 15, 80, 53, 
  67, 56, 77, 37, 67, 55, 82, 60, 34, 6, 
  31, 6, 43, 35, 16, -26, 24, 19, 17, -29, 
  -26, -60, -23, 0, 14, -23, -10, -16, 18, 1, 
  23, -3, 29, -20, 35, -8, 89, 71, 67, 35, 
  82, 45, 45, -50, 23, 15, 71, 67, 46, -1, 
  34, 0, 31, -7, 15, -10, 25, 54, 49, 11, 
  1, -23, -12, -43, -12, -8, 14, 4, 16, -20, 
  -20, -60, 44, 20, 48, 8, 81, 54, 54, 39, 
  75, 31, 65, -43, 45, -33, 21, 4, 48, -14, 
  34, -26, 4, -18, -7, -12, 17, 25, 34, 29, 
  17, -10, -2, -50, 9, 0, 9, -33, -20, 6, 
  59, 40, 9, 10, 54, 46, 80, 47, 79, 40, 
  51, -60, -20, -128, -50, -50, -26, -10, 29, -43, 
  34, -2, -23, -29, -20, -43, 13, 10, 23, 14, 
  37, 19, 0, -16, 14, -26, -1, -37, -8, -128, 
  -37, -50, 57, 12, 54, -43, 44, 0, 57, -128, 
  34, -8, 24, -77, -128, -128, -128, -50, 25, 2, 
  -2, -26, -1, 2, 20, 19, 32, 11, 21, -16, 
  44, 24, 7, -18, 1, -50, -16, -37, 26, -20, 
  13, 16, 76, 56, 55, 29, 50, -77, -43, -128, 
  59, 37, 54, -128, -128, -128, -128, -128, -50, 16, 
  35, -128, -50, 5, 50, 49, 12, -37, 6, -50, 
  10, -8, -16, -50, -7, -128, -12, -33, 11, -10, 
  32, -2, 68, 65, 60, 8, 40, -128, -128, -128, 
  -7, -128, 27, -128, -128, -128, -128, -128, -128, -37, 
  -2, -77, 4, 9, -20, -50, 23, -128, -29, -128, 
  -8, -23, 1, -26, -14, -60, -23, -29, -8, -77, 
  -8, -43, 42, -23, -37, -128, -26, -128, -128, -128, 
  45, -29, 53, -128, -128, -128, -128, -128, -43, -128, 
  22, -4, -1, -37, -60, -128, -77, -128, -20, -60, 
  20, -60, -26, -77, -2, -20, -8, -77, -26, -14, 
  -128, -43, 46, 4, -50, -33, 30, -128, -50, -128, 
  -7, -128, -29, -128, -128, -128, -128, -128, -50, -128, 
  7, -33, -18, -50, -60, -50, 9, -128, -20, -128, 
  23, -50, -26, -50, -26, -50, -10, -77, -10, -77, 
  23, -3, 44, -16, -33, -128, 35, -128, -128, -128, 
  -128, -128, -29, -128, -128, -128, -128, -128, -50, -60, 
  13, -128, -128, -128, 0, -33, -20, -77, 2, -128, 
  -33, -77, 2, -128, -37, -77, -3, -60, -12, -26, 
  15, 11, 50, -2, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -14, -128, 
  -29, -128, -128, -128, 6, -77, 0, -128, -50, -128, 
  -14, -77, -43, -77, -23, -128, -12, -128, -18, -128, 
  -26, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -7, -128, 
  -29, -128, -37, -77, 38, -128, -60, -128, -33, -128, 
  -77, -77, -7, -77, -18, -128, -37, -77, -14, -77, 
  -10, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -77, 21, -128, 
  -50, -128, -128, -128, 19, -50, -6, -43, -37, -128, 
  -128, -77, -29, -128, -37, -128, -77, -43, 1, -33, 
  10, -50, -16, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -16, -128, -77, -60, 0, -77, 16, -128, -60, -128, 
  -20, -16, -18, -128, -37, -128, -43, -128, 2, -77, 
  65, 31, 57, -23, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, -37, -37, 12, -77, -60, -128, -29, -128, 
  -33, -128, -50, -128, -50, 14, 37, 35, 64, -1, 
  20, -128, 4, -128, -18, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -14, -128, -26, -77, -2, -128, -60, -128, -128, -128, 
  -26, -128, -37, -77, -128, -16, 7, -1, 47, -3, 
  -128, -60, -8, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -77, -128, -50, -128, 22, -77, 7, -128, -60, -128, 
  -43, -128, -77, -128, -37, -128, -18, -43, -2, -77, 
  -77, -128, 5, -43, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, -77, -128, -50, -128, -26, -128, -128, -128, 
  -60, -128, -60, -128, -50, -128, -37, -37, -33, -128, 
  -20, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -77, -128, -128, -128, 
  -128, -128, -37, -77, -43, -128, -43, -128, -60, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -18, -128, -50, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -77, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -18, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  9, 15, 1, -26, 47, 5, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  110, 99, 118, 95, 97, 82, 79, 22, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -77, 
  -26, -50, -33, -128, -50, -128, -23, -128, -128, -128, 
  -128, -77, -10, -128, -60, -37, -60, -128, -128, -128, 
  110, 88, 95, 52, 112, 94, 86, -128, -29, -128, 
  -12, 39, -33, 20, -77, -128, -128, -128, -77, -77, 
  -60, 58, 72, 18, 10, -43, -50, -128, -128, -128, 
  -77, -128, -77, -60, -20, -50, -77, -128, -60, -128, 
  99, 77, 88, -60, 102, 81, 81, -29, 30, -29, 
  45, 55, -18, 24, -8, 25, 31, -10, 16, 54, 
  79, 45, 49, 53, 48, 11, -29, -128, -128, -128, 
  -29, -128, -60, -128, -26, -77, -18, -128, -50, -128, 
  94, 70, 88, 63, 104, 84, 105, 90, 108, 87, 
  94, 87, 76, 79, 73, 83, 100, 93, 112, 89, 
  89, 73, 81, 76, 87, 79, 91, 85, 92, 48, 
  30, -23, 7, -14, 33, 22, 32, -8, 16, 39, 
  87, 59, 72, -128, 95, 66, 67, 65, 104, 74, 
  95, 78, 90, 86, 100, 92, 110, 90, 62, 47, 
  75, 9, 61, 51, 38, 52, 60, 12, 45, 66, 
  91, 85, 53, 29, 19, -77, -1, -60, -20, 8, 
  80, 52, 70, -128, 88, 59, 64, 52, 92, 59, 
  90, 73, 100, 87, 100, 80, 65, 36, 13, -60, 
  49, -77, 51, 37, 22, 26, 34, -128, -2, 21, 
  79, 72, 50, 24, 1, -128, -77, -128, -23, -128, 
  74, 39, 60, -26, 80, 46, 53, 49, 84, 42, 
  96, 72, 102, 81, 78, 19, 31, -77, -77, -128, 
  -128, -128, -3, -43, -60, -128, -37, -128, -60, -128, 
  61, 39, 60, 34, 12, -60, -33, -60, -8, -60, 
  66, 23, 50, -16, 72, 33, 42, 29, 74, 31, 
  90, 65, 65, 36, 40, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 2, -128, -128, -128, -128, -128, 
  16, 10, 31, -14, -128, -128, -20, -128, -43, -128, 
  62, 9, 44, 1, 70, 15, 15, 29, 65, 1, 
  85, 47, 45, -50, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 2, -128, -128, -128, -128, -128, 
  -128, -60, 45, -128, -128, -128, -20, -128, -128, -128, 
  53, -8, 31, -128, 61, 2, 18, 19, 61, -29, 
  67, 19, -2, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, 41, -60, -43, -128, -77, -128, -128, -128, 
  51, -12, 31, -43, 54, 0, 31, -12, 56, -1, 
  32, -43, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 27, -128, -128, -128, -128, -128, -128, -128, 
  32, -23, 44, -128, 44, 14, 58, -128, 47, 38, 
  -128, -77, -26, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -26, -128, -128, -128, -43, -128, -77, -128, 
  -37, -43, 60, 13, -16, 26, 81, -128, 15, 51, 
  -128, -128, 54, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -50, -128, -77, -128, 
  -128, -128, 65, 54, -43, -6, 89, 42, -128, 35, 
  -1, -128, 55, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -77, -50, -128, -60, -128, 
  -128, -128, 70, 66, -128, -128, 80, 66, -128, -128, 
  -50, -128, -26, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 65, 81, 18, -77, 45, -14, 44, -4, 
  9, -128, 11, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -8, 78, 79, -128, 40, -128, 21, 55, 
  9, -128, 28, -128, -16, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, 62, 82, -60, -128, -128, -128, 19, 
  16, -128, -128, -128, -18, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -37, -128, 
  -128, -128, -128, -128, 45, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -77, 
  -77, -128, -128, -128, 6, -23, -10, -12, 32, -37, 
};
