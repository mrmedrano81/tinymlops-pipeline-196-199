/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/bb05582b_nohash_4.wav" \
 * --output_c_file="features_c_files/no/no_bb05582b_nohash_4.cc" \
 */
#include "no_bb05582b_nohash_4.h"


const int g_no_bb05582b_nohash_4_width = 40;
const int g_no_bb05582b_nohash_4_height = 49;
alignas(16) const signed char g_no_bb05582b_nohash_4_data[] = {
  71, 51, 56, 46, 54, 44, 42, 58, 35, 30, 
  42, 15, 54, 54, 55, 34, 50, 67, 42, 20, 
  0, -50, 17, 17, 26, 32, 33, 37, 20, 23, 
  37, 39, 37, 28, 37, 15, 40, 42, 40, 34, 
  79, 70, 61, 12, 9, 44, 74, 57, 72, 43, 
  31, -23, 27, 43, 39, 49, 23, 37, 36, -18, 
  9, 9, 40, 40, 42, 12, 39, 29, 43, 21, 
  21, 26, 42, 21, 29, 31, 56, 36, 42, 5, 
  31, 48, 57, 37, 52, 55, 65, 54, 70, 40, 
  47, 1, 11, 5, 50, 36, 21, 42, 58, 28, 
  41, -12, 19, 17, -4, 26, 33, 6, 19, -10, 
  -4, -33, -6, -23, 9, -10, -2, 24, 30, -10, 
  45, 39, 60, 17, 27, -20, 52, 59, 46, -33, 
  15, 19, -3, -50, 19, -33, 31, -37, 52, 24, 
  34, -14, 39, 2, 14, -12, -7, -4, 17, 19, 
  -1, -20, 25, 6, 23, 22, 34, 17, 24, 6, 
  44, -37, 35, -12, 44, 22, 42, 2, -4, -29, 
  16, 37, 40, 17, 24, -37, 11, -26, 25, 23, 
  49, 9, -14, -7, 24, 17, -14, -16, 32, -8, 
  -6, -29, 34, 6, 28, 13, 28, -12, 16, 9, 
  36, -128, -50, 32, 49, -60, -16, -128, -29, -26, 
  32, 45, 39, 9, 51, 2, -77, -128, 4, -14, 
  29, -20, 24, -14, 32, 0, 17, -18, 21, -50, 
  -3, -10, 44, 17, 26, 37, 37, 1, 36, 5, 
  15, -29, 26, -23, 38, -7, 16, -60, -14, -18, 
  9, -60, 12, -3, -1, -33, -23, -50, 27, -50, 
  -8, -7, 31, -29, -7, -33, 2, -23, 8, -26, 
  11, -26, 20, 11, 9, 10, 11, -26, 27, -16, 
  55, -8, -43, -18, 29, 19, 20, -128, -10, -26, 
  27, 4, 29, -33, 7, -77, 17, -37, 1, -33, 
  -26, -10, -1, -26, 16, -29, 26, -33, 23, -14, 
  -1, -14, 32, -16, 10, 4, 24, -37, -3, -33, 
  57, -26, 22, -60, 4, 12, 30, -77, 10, -50, 
  29, -77, -8, 4, 34, -18, 20, -43, -1, -23, 
  24, 32, 11, -77, -14, -43, -33, -128, 32, -50, 
  -128, -128, 2, -77, 9, -1, 15, -43, -4, -128, 
  -29, -33, 2, -6, -26, -6, 24, -128, 15, 10, 
  17, -43, -6, -128, -33, -14, -33, -128, -23, -60, 
  -23, -18, -29, -43, -33, -77, -26, -33, 29, -37, 
  -7, -43, 4, -77, -33, -43, -3, -50, 20, -50, 
  18, -128, 17, -50, -128, -29, 22, -128, 40, 2, 
  -33, -128, -50, -128, -128, -128, 8, -128, -77, -128, 
  5, -50, -18, -77, -29, -128, -7, -43, 6, -77, 
  -33, -77, -12, -33, -23, -128, -43, -43, 19, -37, 
  -14, -128, 23, -60, 16, 10, -10, -128, 17, -60, 
  -18, -23, -3, -33, -37, -128, -18, -128, -50, -60, 
  -20, -60, -29, -128, -77, -128, -29, -128, 5, -50, 
  -14, -29, -18, -14, 16, -128, -33, -23, 25, 5, 
  13, -16, 37, 13, -23, -128, -23, -128, 9, -60, 
  -33, -128, -23, -3, 23, -128, -37, -128, -50, -77, 
  -50, -128, 1, -29, -12, -128, -12, -60, -29, -77, 
  -43, -29, -18, -128, 4, -77, -43, -18, 54, 29, 
  -23, -33, 9, -128, -33, -77, -23, -128, -4, -50, 
  -7, -128, 4, -50, 25, 4, -14, -128, -43, -77, 
  30, 1, 14, -10, 16, -128, -77, -128, -37, -128, 
  -43, -50, -14, -128, 11, -77, -10, -7, 86, 73, 
  106, 74, 85, 71, 70, -23, 35, -26, 26, -8, 
  -37, -128, -14, 0, -23, -128, -33, -128, -128, -77, 
  37, 11, -33, -128, -7, -128, -37, -128, -37, -23, 
  -2, -8, 13, -7, -29, -128, -77, 47, 106, 90, 
  124, 103, 125, 102, 120, 97, 110, 70, 56, 54, 
  62, -3, 40, -26, -2, -43, 30, 62, 103, 80, 
  91, 92, 105, 55, 52, 46, 52, 24, 47, 5, 
  13, -8, 21, 17, 46, 35, 57, 87, 113, 90, 
  109, 94, 99, 87, 113, 94, 109, 79, 70, 62, 
  66, 27, 64, 66, 50, 9, 59, 75, 105, 92, 
  109, 92, 113, 87, 94, 51, 59, 44, 57, -37, 
  25, -26, -10, 9, 49, 45, 58, 77, 114, 89, 
  101, 82, 97, 76, 103, 78, 88, 74, 73, 76, 
  80, 55, 88, 77, 73, -2, 74, 71, 105, 81, 
  102, 77, 96, 74, 84, 66, 15, 39, 50, -18, 
  -20, -37, 9, -18, 45, 35, 71, 72, 87, 44, 
  95, 69, 81, 60, 97, 71, 88, 55, 97, 75, 
  67, 21, 62, 29, 62, 27, 75, 75, 91, 55, 
  97, 68, 95, 70, 61, -43, -8, -18, 5, -20, 
  11, -77, 5, -128, 38, 85, 101, 77, 92, 55, 
  92, 66, 87, 67, 85, 45, 47, -6, 49, -50, 
  44, 51, 88, 31, 60, 16, 47, 36, 85, 55, 
  85, 60, 99, 75, 91, 51, 47, -23, -8, -50, 
  1, -12, 12, 17, 73, 78, 94, 51, 92, 66, 
  84, 54, 80, 54, 80, 40, 54, 12, 48, -20, 
  57, 64, 90, 33, 67, 69, 84, 62, 69, 35, 
  77, 58, 94, 77, 104, 76, 87, 74, 89, 72, 
  67, 44, 53, 49, 87, 45, 79, 82, 99, 55, 
  70, 44, 74, 43, 84, 76, 110, 93, 106, 67, 
  108, 84, 100, 70, 101, 99, 124, 100, 114, 91, 
  110, 82, 104, 86, 115, 95, 120, 101, 124, 100, 
  123, 100, 111, 99, 120, 100, 119, 78, 76, 42, 
  69, 34, 57, 14, 94, 69, 110, 90, 111, 87, 
  110, 76, 65, 71, 84, 76, 100, 71, 62, 27, 
  67, 44, 75, 70, 95, 66, 86, 64, 99, 71, 
  77, 38, 67, 66, 100, 75, 103, 72, 82, 64, 
  73, 37, 58, 28, 87, 65, 102, 79, 101, 75, 
  100, 67, 76, 80, 91, 60, 62, -37, 56, 17, 
  67, 35, 73, 57, 79, 33, 54, 35, 78, 49, 
  65, 35, 41, 39, 88, 63, 95, 54, 51, 45, 
  74, 34, 65, 39, 88, 59, 91, 68, 92, 77, 
  100, 62, 80, 67, 77, 11, 39, -128, 25, -7, 
  53, 16, 67, 41, 52, -77, 44, 36, 62, -26, 
  -4, -128, 13, -128, 79, 49, 78, 56, 56, 42, 
  72, 30, 63, 40, 86, 51, 79, 47, 81, 60, 
  89, 65, 92, 77, 84, -128, -43, -128, -50, -128, 
  21, -128, 49, 32, 60, -128, 32, 31, 41, -23, 
  -23, -128, -12, 20, 69, 29, 81, 41, 46, -29, 
  67, 26, 73, 51, 87, 48, 68, 37, 72, 54, 
  84, 64, 95, 72, 77, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, 27, -128, 43, 21, 25, -128, 
  4, -128, -128, -50, 41, -12, 82, 34, 44, -77, 
  66, 25, 69, 48, 87, 51, 56, 17, 66, 47, 
  84, 71, 93, 15, 44, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 48, -128, -26, -128, -10, -128, 
  19, -128, -77, -128, 22, -128, 51, -14, 19, -128, 
  61, 12, 70, 45, 83, 43, 23, 11, 55, 54, 
  88, 78, 44, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -43, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, 55, -26, -77, -128, 
  58, -7, 70, 40, 76, 21, -14, -50, -8, 64, 
  85, 55, 27, -128, -23, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -26, -128, -128, -128, 
  52, -26, 68, 30, 66, -10, -33, -128, 12, 63, 
  77, 2, -14, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  43, -77, 54, -4, 50, -128, -128, -128, 45, 25, 
  -16, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -7, -128, 31, -128, -50, -128, -128, -128, 52, -20, 
  -23, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 55, -50, -128, -128, -128, -128, 44, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 21, -128, -128, -128, -128, -128, 49, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, -128, -128, -128, -128, -128, 4, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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