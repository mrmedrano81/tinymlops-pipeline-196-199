/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/893705bb_nohash_12.wav" \
 * --output_c_file="features_c_files/no/no_893705bb_nohash_12.cc" \
 */
#include "no_893705bb_nohash_12.h"


const int g_no_893705bb_nohash_12_width = 40;
const int g_no_893705bb_nohash_12_height = 49;
alignas(16) const signed char g_no_893705bb_nohash_12_data[] = {
  80, 78, 87, 70, 78, 50, 31, 32, 37, -2, 
  0, 4, -18, -37, -26, -50, -33, -26, -4, 17, 
  26, -12, -10, -60, -26, -18, 5, -18, -18, 7, 
  42, 25, -4, -37, -18, -18, -26, -18, -50, -26, 
  73, 66, 76, 36, 42, 34, 64, 55, 42, 11, 
  4, -10, -6, -3, 19, -3, -37, -20, 9, -10, 
  50, 24, -26, -37, -50, -20, -1, -14, -50, 4, 
  20, -18, 9, -29, -50, -20, -6, -29, -26, -50, 
  65, 68, 79, 34, 43, 28, 40, 53, 62, 14, 
  17, -3, -20, -33, -50, -43, -50, -29, -37, -33, 
  64, 34, -26, -29, -18, -43, -29, -33, -26, -26, 
  0, -26, -14, -37, -18, -23, -20, -50, -37, -50, 
  80, 58, 70, 55, 41, 6, 44, 40, 18, -3, 
  5, -37, 7, 5, 17, -12, -26, -43, -37, -37, 
  36, 8, -29, -23, -7, -77, 1, 17, 15, -37, 
  -43, -37, -14, -18, -14, -33, -7, -12, -50, -128, 
  10, -43, 62, 58, 44, 15, 20, -60, 11, -20, 
  8, -12, 43, 19, 35, -60, -20, -20, -8, -23, 
  -77, -128, -14, -33, -3, -26, -16, -37, -8, -60, 
  -23, -50, -37, -26, -8, -60, -29, -43, -20, -77, 
  35, -16, -128, -128, -8, -26, 29, -128, 6, -16, 
  -33, 14, 52, -3, -12, -43, -3, -60, -10, -23, 
  -43, -77, -23, -43, -50, -128, -1, -37, -16, -60, 
  -43, -128, -50, -128, -37, -20, -16, -60, -50, -128, 
  31, 17, 28, -128, -128, -128, -43, -128, 5, -43, 
  -12, 25, 41, -14, 5, -60, -29, -128, -50, -33, 
  -26, -60, -29, -43, -43, -37, 7, -33, -23, -77, 
  -77, -77, -43, -128, -128, -37, -23, -77, -37, -77, 
  55, 11, 9, -128, -33, -77, -23, -128, -37, -12, 
  -33, -60, 9, -77, -128, -128, -43, -128, -18, -60, 
  -16, -128, -33, -50, -6, -3, 1, -77, -6, -50, 
  -33, -77, -43, -77, -50, -60, -18, -50, -37, -128, 
  9, -23, -29, -128, -3, -60, -6, -60, -4, -128, 
  -77, -128, -10, -128, -10, -37, -33, -77, 6, -37, 
  20, -60, -50, -77, 2, -43, -26, -50, -18, -50, 
  -128, -77, -43, -37, -33, -33, -18, -128, -77, -128, 
  55, 39, 35, -128, -128, -43, 9, 0, -23, -128, 
  -37, -77, -12, -77, -77, -128, -23, -77, 12, -60, 
  -43, -128, -77, -128, -33, -128, -37, -37, -33, -128, 
  -128, -128, -43, -60, -33, -128, -33, -60, -50, -77, 
  23, -128, -33, -128, 1, -26, -77, -77, -14, -33, 
  -29, -128, -50, -60, 6, -60, -128, -128, 7, -16, 
  -43, -128, -43, -128, -43, -128, -60, -77, -60, -128, 
  -77, -50, -33, -128, -77, -128, -77, -128, -50, -128, 
  -128, -128, -3, -60, -26, -128, -4, -33, -128, -128, 
  -50, -60, -29, -23, 4, -128, -60, -128, -77, -128, 
  -50, -128, -60, -77, -128, -60, -77, -128, -60, -77, 
  -14, -77, -77, -60, -26, -128, -33, -50, -77, -128, 
  -77, -128, -128, -128, -26, -60, -18, -128, -60, -20, 
  -7, -50, -128, -128, -33, -128, -26, -33, -37, -128, 
  -128, -128, -60, -43, 4, -18, -37, -128, -37, -43, 
  -60, -77, -77, -128, -60, -77, -37, -77, -33, -128, 
  -10, -128, -128, -128, -60, -128, -50, -128, -37, -128, 
  -23, -128, -77, -128, -33, -8, -14, -77, -60, -128, 
  -128, -128, -77, -77, 6, -10, -29, -128, -29, -77, 
  9, -77, -128, -128, -77, -77, -60, -60, -77, -128, 
  -50, -128, -128, -128, -128, -77, -43, -128, -128, -128, 
  -50, -128, -77, -77, -16, -37, -29, -128, -60, -128, 
  -128, -77, -14, -43, -60, -128, -60, -77, -50, -128, 
  -29, -128, -43, -77, -60, -128, -60, -77, -60, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, -60, -14, 
  -14, -128, -23, -50, -7, -128, -77, -37, -8, -128, 
  -128, -128, -37, -128, -50, -128, -60, -128, -128, -128, 
  -37, -128, -60, -77, -60, -77, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -50, -4, -43, 8, -128, 
  -26, -77, -128, -77, -29, -128, -29, -60, -43, -128, 
  -128, -128, -20, -60, -50, -128, -14, -23, -60, -128, 
  -60, -128, -128, -128, -60, -128, -50, -128, -128, -128, 
  -10, -128, 33, -43, -128, -77, -23, -128, -128, -128, 
  -43, -128, -77, -128, -128, -77, 5, -77, -60, -128, 
  -128, -128, -77, -77, -50, -128, -77, -128, -128, -77, 
  -20, -77, -60, -77, -37, -77, -60, -128, -128, -128, 
  -128, -128, -77, -128, -43, -128, -60, -128, -33, -26, 
  19, -50, -7, -128, -29, -33, 21, -60, -50, -128, 
  -7, -128, -128, -128, -43, -50, -60, -128, -77, -128, 
  -77, -50, -23, -60, -29, -128, -50, -128, -128, -128, 
  -128, -128, -33, -128, -128, -128, -23, -128, -77, -23, 
  17, -26, -12, -77, -29, -128, 9, -26, -50, -128, 
  -33, -128, -60, -128, -77, -128, -33, -128, -77, -128, 
  -50, -128, -7, -43, -29, -128, -33, -128, -128, -128, 
  -1, -33, -128, -128, -128, -128, -128, -77, 2, 0, 
  32, -128, -128, -128, -77, -37, 4, -128, -128, -128, 
  -128, -128, -50, -50, -33, -128, -128, -128, -77, -128, 
  -77, -128, -12, -43, -37, -128, -128, -128, -77, -128, 
  -128, -128, -20, -77, -8, -60, -128, -128, -50, -128, 
  -33, -128, -50, -128, -128, -128, 12, -128, -128, -128, 
  -128, -128, -50, -128, -77, -128, -43, -128, -60, -128, 
  -128, -128, -26, -128, -128, -128, -43, -128, -60, -128, 
  -128, -128, -37, -77, 7, -43, -77, -37, -20, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -60, -77, -60, -77, -50, -128, -128, -128, -50, -128, 
  -60, -77, -1, -77, -77, -128, -60, -128, -128, -128, 
  -128, -128, -50, -128, -43, -128, 20, 19, 39, -43, 
  -50, -77, -23, -128, -20, -128, -26, -128, -77, -128, 
  -128, -128, -33, -43, -128, -128, -128, -128, -77, -128, 
  -128, -128, 1, -50, -60, -128, -128, -128, -77, -128, 
  -128, -128, -77, -50, -37, -128, -4, 35, 73, 24, 
  -128, -43, 11, -29, -3, -77, -128, -128, 13, -20, 
  -128, -128, -50, -128, -77, -77, -77, -128, -77, -128, 
  -128, -128, -43, -128, -128, -128, -33, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -60, -60, 42, -50, 
  -29, -77, -8, 5, 30, -128, -128, -128, -4, -10, 
  -128, -128, -128, -128, -77, -128, -77, -128, -128, -128, 
  -77, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  -37, -50, 0, -18, 40, -60, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -43, -128, -50, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -77, -128, 
  -128, -128, -12, -128, -33, -33, -18, -128, -43, -128, 
  -37, -128, -77, -33, 26, -77, -128, -128, -128, -128, 
  -43, -128, -77, -128, -128, -128, -77, -128, -50, -77, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -77, -43, -60, -60, -128, -12, -50, 
  32, -77, -128, -60, 13, -77, -128, -26, -26, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -77, -50, 
  -60, -128, -128, -128, -77, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -20, 
  29, -128, -128, -128, -128, -77, -12, -23, 4, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -16, -77, 
  -77, -128, -128, -128, -60, -128, -77, -128, -77, -128, 
  -128, -128, -128, -23, 5, -37, -16, -128, 17, 11, 
  32, -128, -77, -128, -128, -128, -43, -128, -60, -128, 
  -29, -128, -77, -128, -29, -60, -60, -128, -8, -60, 
  -128, -128, -77, -128, -50, -128, -77, -128, -50, -128, 
  -8, -128, -128, -8, 42, -18, -128, -128, -23, -43, 
  14, -33, -77, -77, -18, -128, -128, -128, -128, -128, 
  -43, -128, -128, -128, -77, -128, -128, -128, -29, -60, 
  -60, -128, -60, -77, -128, -60, -50, -128, -128, -128, 
  104, 94, 111, 80, 63, 28, 37, -10, -29, 36, 
  57, 17, -43, -29, 9, -128, -128, -128, -77, -128, 
  -43, -128, -33, -37, -23, -77, -77, -128, -6, -50, 
  -77, -128, -77, -77, -3, 1, 0, -77, -128, -77, 
  120, 99, 118, 93, 110, 91, 100, 41, 46, 5, 
  62, 45, 45, 36, 37, -6, -60, -10, -60, -50, 
  -77, -37, 26, 17, 10, 2, 42, 1, 11, 33, 
  57, -7, 40, 26, 35, 26, 40, 7, 16, -3, 
  121, 87, 110, 97, 116, 81, 105, 90, 114, 93, 
  101, 93, 114, 94, 99, 63, 52, 53, 34, 11, 
  -10, 44, 73, 63, 79, 59, 76, 67, 59, 53, 
  42, 36, 64, 55, 50, 34, 50, 35, 54, 43, 
  106, 62, 107, 89, 90, 79, 90, 74, 85, 69, 
  89, 52, 59, 37, 74, 37, 77, 59, 59, 17, 
  18, 44, 56, 44, 60, 45, 73, 65, 64, 57, 
  55, 44, 42, 22, 37, 16, 52, 30, 52, 41, 
  94, 50, 101, 78, 83, 71, 81, 42, 49, -7, 
  71, 55, 69, 20, 34, 47, 87, 69, 77, 37, 
  -6, 12, 38, -23, 32, 28, 49, 19, 46, 47, 
  43, 34, 38, -20, 26, -2, 30, 22, 47, 26, 
  82, 37, 93, 65, 78, 70, 75, -33, 59, -6, 
  59, -6, 16, -128, 17, -20, 65, 71, 79, -128, 
  -77, -50, 51, -50, -43, -77, 7, -128, 24, -60, 
  36, 11, 8, -128, -29, -128, -23, -33, 21, -50, 
  77, 37, 82, 68, 95, 75, 96, 73, 81, 60, 
  69, 1, 63, -16, 27, 52, 99, 79, 94, 27, 
  -18, 40, 61, -1, -4, -128, -128, -128, 9, -128, 
  23, -14, 24, -128, 9, 4, 34, 10, 42, 20, 
  69, 16, 86, 58, 80, 70, 92, 91, 101, 84, 
  101, 65, 105, 83, 105, 88, 109, 90, 111, 65, 
  42, 42, 55, -60, -20, -128, -128, -128, -43, -128, 
  33, -10, 5, -128, 2, -37, 25, 6, 29, 20, 
  60, -14, 72, 38, 68, 58, 94, 84, 99, 84, 
  97, 70, 92, 71, 103, 88, 103, 60, 63, 70, 
  69, 25, 36, -128, -43, -128, -60, -128, -26, -128, 
  14, -7, 5, -77, -7, -37, 19, 8, 35, 10, 
  54, -37, 59, 13, 60, 44, 83, 73, 92, 76, 
  95, 69, 84, 62, 87, 70, 53, -128, -37, 6, 
  37, -16, 11, -128, -128, -128, -128, -128, -77, -128, 
  -16, -43, -50, -128, -43, -128, -43, -60, -3, -60, 
  47, -128, 49, -14, 55, 34, 80, 62, 82, 62, 
  87, 71, 90, 69, 96, 11, 42, -128, -26, 23, 
  21, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -29, -128, -60, -128, -7, -43, 
  39, -77, 47, -43, 55, 31, 79, 49, 78, 53, 
  78, 59, 95, 60, 71, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -50, -128, -20, -128, 
  27, -128, 43, -77, 59, 32, 77, 38, 72, 39, 
  63, 57, 92, 34, 32, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -26, -77, -60, -128, -8, -128, 
  19, -50, 39, -128, 70, 34, 77, 15, 64, 1, 
  71, 54, 78, -128, -12, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -23, -128, 
  14, -128, 11, -128, 70, 29, 68, -33, 59, -33, 
  62, -12, 24, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -60, -128, -77, -128, -33, -128, 
  6, -29, 30, -128, 74, 19, 54, -128, 17, -128, 
  62, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 40, 41, 
  80, 59, 73, -1, -37, -128, -50, -60, -14, -50, 
  5, -128, 15, -128, 70, 29, 38, -128, 11, -128, 
  17, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  4, -128, -128, -128, -128, -128, -18, -10, 70, 40, 
  79, 61, 70, 14, 4, -23, -43, -77, -12, -128, 
};
