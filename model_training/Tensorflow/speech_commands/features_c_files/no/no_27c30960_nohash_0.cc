/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/27c30960_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_27c30960_nohash_0.cc" \
 */
#include "no_27c30960_nohash_0.h"


const int g_no_27c30960_nohash_0_width = 40;
const int g_no_27c30960_nohash_0_height = 49;
alignas(16) const signed char g_no_27c30960_nohash_0_data[] = {
  63, 41, 79, 74, 80, 53, 83, 74, 79, 70, 
  80, 52, 76, 70, 64, 66, 72, 65, 66, 50, 
  39, 47, 56, 64, 58, 42, 39, 41, 17, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  44, 64, 80, 73, 80, 76, 82, 53, 56, 48, 
  70, 55, 60, 37, 65, 46, 32, 54, 66, 49, 
  53, 50, 44, 45, 45, 36, 26, 19, 21, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  50, 26, 82, 73, 92, 75, 66, 55, 61, 42, 
  59, 45, 44, 34, 67, 45, 59, 40, 49, 17, 
  47, 25, 52, 22, 41, 13, 31, 28, 10, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  62, 40, 50, 31, 70, 54, 60, 40, 65, 39, 
  52, 45, 46, 27, 37, -4, 24, 4, 7, -2, 
  24, 15, 62, 40, 47, 27, 40, 10, 15, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  34, 31, 68, 33, 57, 38, 68, 4, 55, 49, 
  62, -10, 27, 17, 40, 29, 49, 11, 55, 35, 
  29, 24, 34, -6, 27, 16, 22, -8, -2, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  14, -14, 19, -77, 53, 38, 54, 30, 38, 27, 
  54, 1, 49, 40, 62, -2, 30, -6, 19, -26, 
  42, 17, 32, -37, 30, -6, 12, 4, -3, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  42, 49, 53, -128, 29, -3, 16, -43, 40, -37, 
  28, 6, 55, 19, 27, 2, 26, 9, 48, 19, 
  24, 15, 46, -7, 19, -50, 7, -18, 4, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  43, -8, 44, -14, 46, -10, 66, 9, 30, -16, 
  49, -29, 34, -6, 4, -60, 38, 19, 42, -29, 
  35, -16, 26, -12, 23, -43, 6, -128, -6, -77, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  9, -6, 46, -16, 47, -16, 10, 25, 33, -2, 
  37, -43, 23, -12, 20, -14, 25, 2, 50, 31, 
  30, 18, -1, -12, 38, -14, -3, -37, -16, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  47, -16, 29, 14, 30, -50, 6, -50, 49, -12, 
  -3, -12, 5, -43, 36, 0, 4, -1, 32, -128, 
  4, -77, -2, -128, -4, -20, 0, -43, -7, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  25, -43, 0, -37, 17, -128, 43, 20, 44, 5, 
  42, -4, 20, -29, 15, -12, 40, -26, 4, -37, 
  7, -77, -29, -128, -12, -20, 29, -16, 0, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  30, -6, 4, -128, 18, -128, 25, -128, 15, -8, 
  14, -23, 10, -50, 15, -33, 29, -77, -3, -33, 
  6, -128, -43, -128, -6, -43, -3, -50, 2, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -16, -8, 34, -128, 33, -128, -10, -128, 19, -18, 
  34, -26, -23, -50, 18, -12, 24, -29, 24, -33, 
  -10, -128, 21, -20, -4, -128, -43, -37, -33, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -1, 1, 39, -128, 23, -37, -77, -8, 
  45, -77, 14, -77, 49, 37, 36, -37, 4, -128, 
  -12, -23, -12, -77, -29, -37, -2, -77, -77, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  32, -128, -7, -128, -43, -128, 13, -29, 57, 12, 
  44, -33, -4, -33, -43, -128, -23, -77, -60, -128, 
  8, -23, -16, -128, -29, -43, -10, -128, -43, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, 33, 4, -2, -128, -50, -77, 53, -2, 
  41, -20, -18, -77, 36, -26, -29, -77, 1, -77, 
  -7, -60, -2, -128, -20, -77, -29, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -1, 9, 42, -128, -37, -26, -8, -23, 35, -14, 
  45, -10, 25, -77, 20, -43, -14, -128, -16, -128, 
  17, -50, -6, -128, -26, -50, -4, -43, -23, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  16, -77, -16, -29, 2, -128, -33, -16, 14, -2, 
  42, -128, 11, -33, -12, -8, 14, -128, -60, -128, 
  -16, -60, -7, -77, -2, -77, -16, -77, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -33, -1, -128, -6, -128, 13, -50, 14, -23, 
  5, -29, 4, -26, -26, -77, 11, -128, -10, -60, 
  14, -33, -33, -128, -3, -128, -3, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, 12, 35, -128, -14, -128, 18, -14, -37, -128, 
  -37, -128, -128, -128, -14, -128, -10, -77, -29, -128, 
  -37, -128, 6, -50, -128, -128, -60, -77, -29, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -128, -43, -128, -128, -128, 4, -128, 0, -50, 
  19, -77, -8, -50, -37, -128, 11, -77, -12, -128, 
  -10, -128, -18, -60, -7, -43, 1, -43, -20, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  58, 40, 30, -128, -10, -77, -7, -77, 2, -60, 
  -43, -43, -14, -128, -128, -128, 11, -37, 27, -128, 
  4, -128, -43, -128, -60, -128, -26, -128, -26, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  110, 93, 95, 54, 57, 48, 11, -14, 31, -128, 
  -29, -60, -20, -128, -77, -43, 21, -12, 44, -26, 
  -43, -77, 5, -128, 31, -23, 4, -60, -26, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  113, 94, 104, 46, 87, 76, 70, 32, 32, -12, 
  44, 53, 65, -3, 30, 19, 55, 48, 60, 6, 
  25, -77, -43, -4, 59, 36, 37, -50, -8, -29, 
  -128, -128, -128, -128, -77, -43, -43, -60, -37, -60, 
  104, 81, 93, 60, 95, 75, 67, -23, -128, -128, 
  15, 0, 30, 17, 35, 9, 61, 55, 67, 1, 
  -7, -20, 15, -4, 59, 0, 28, 9, 20, -18, 
  -77, -128, -128, -128, -29, -43, -50, -60, -43, -77, 
  98, 67, 69, 52, 82, 43, 75, 20, 2, -50, 
  -2, -14, 38, 22, 4, -7, 34, 28, 52, -33, 
  -26, -43, 26, 21, 63, 33, 32, 17, 32, -37, 
  -128, -128, -50, -128, -50, -77, -50, -60, -50, -77, 
  77, -8, 63, 55, 24, -128, 62, 37, 19, -128, 
  -33, -128, -23, -128, -12, -50, -3, -43, 6, -20, 
  7, -128, -8, -3, 26, -43, -8, -33, -29, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  40, -128, 62, 57, 82, 44, 75, 57, 90, 62, 
  71, 62, 93, 69, 78, 16, 34, -1, 44, 33, 
  61, 40, 71, 56, 99, 88, 109, 90, 74, -3, 
  -128, -128, -77, -60, -60, -60, -60, -77, -60, -60, 
  87, 70, 99, 94, 113, 96, 115, 95, 119, 100, 
  117, 94, 106, 75, 102, 84, 99, 87, 111, 85, 
  90, 78, 101, 92, 115, 92, 104, 82, 109, 80, 
  17, 20, 50, 39, 59, 49, 57, 50, 59, 49, 
  86, 58, 96, 76, 106, 75, 100, 77, 110, 85, 
  98, 80, 96, 72, 105, 66, 100, 80, 102, 78, 
  99, 76, 100, 84, 104, 73, 93, 70, 99, 68, 
  37, 20, 43, 38, 52, 44, 55, 35, 53, 37, 
  74, 25, 85, 62, 92, 61, 92, 57, 95, 58, 
  90, 70, 95, 67, 87, 71, 95, 61, 85, 49, 
  85, 56, 86, 69, 90, 49, 80, 57, 89, 36, 
  -1, -10, 21, -12, -7, -20, 31, -1, 14, -14, 
  66, 16, 55, 43, 85, 44, 78, 64, 83, 50, 
  86, 67, 64, 65, 89, 74, 93, 69, 56, 40, 
  74, 53, 88, 56, 81, 52, 80, 58, 74, 42, 
  -29, -43, 17, -12, 4, -33, 5, -12, 17, 4, 
  60, 9, 59, 49, 88, 52, 72, 68, 53, 48, 
  94, 40, 89, 56, 91, 79, 98, 51, 37, 55, 
  80, 60, 82, 42, 86, 56, 79, 65, 85, 43, 
  -3, -33, 4, -43, 14, -26, 1, -43, 13, -12, 
  64, 31, 69, 42, 87, 59, 79, 55, 82, 59, 
  70, 58, 80, 64, 96, 72, 82, 1, 32, 11, 
  67, -16, 73, 57, 79, 29, 72, 58, 65, 4, 
  16, -8, 42, 24, 34, 16, 44, 21, 39, 25, 
  61, 29, 74, 42, 79, 49, 74, 50, 79, 55, 
  63, 41, 77, 62, 99, 61, 61, -77, 2, -77, 
  57, 35, 70, 47, 74, 29, 88, 62, 37, 12, 
  14, -18, 31, 22, 43, 22, 49, 20, 35, 9, 
  58, 16, 70, 33, 69, 27, 65, 59, 74, 32, 
  64, 42, 62, 66, 92, 61, 31, -128, -43, -43, 
  56, -37, 61, 51, 57, 14, 69, 28, -18, -43, 
  -43, -50, -14, -60, -4, -60, -14, -60, -12, -128, 
  52, -7, 64, 16, 57, -12, 65, 66, 59, -8, 
  75, 39, 75, 62, 78, 38, -1, -128, -128, -128, 
  43, 34, 55, 12, -10, -77, 55, -12, 7, -29, 
  -77, -77, -10, -60, 6, -50, 1, -60, -10, -50, 
  48, -77, 52, -18, 21, 9, 83, 58, 41, -60, 
  63, 12, 87, 57, 62, -60, -18, -128, -128, -128, 
  34, -37, 55, 9, -128, -128, 47, -128, -10, -128, 
  -4, -128, -20, -128, -7, -60, -26, -128, -1, -43, 
  34, -128, 21, -29, -60, -16, 84, 15, 24, -128, 
  30, -18, 67, 6, -23, -128, -128, -128, -77, -128, 
  7, -128, 48, -60, -128, -128, 13, -128, -128, -128, 
  -77, -128, -8, -60, -2, -50, -29, -77, -23, -128, 
  30, -128, 6, -50, -128, 20, 87, 19, 6, -128, 
  38, 34, 70, 17, -128, -128, -128, -128, -128, -128, 
  5, -33, 43, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -60, -16, -128, -10, -77, 0, -60, 
  27, -128, -33, -128, -29, -128, 29, -128, -128, -128, 
  43, 9, 39, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 5, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -12, -128, 9, -128, -77, -128, -33, -128, -128, -128, 
  -37, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  10, -128, -128, -128, -128, -128, -43, -128, -128, -128, 
  11, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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