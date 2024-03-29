/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/bb05582b_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_bb05582b_nohash_1.cc" \
 */
#include "yes_bb05582b_nohash_1.h"


const int g_yes_bb05582b_nohash_1_width = 40;
const int g_yes_bb05582b_nohash_1_height = 49;
alignas(16) const signed char g_yes_bb05582b_nohash_1_data[] = {
  57, 65, 85, 73, 53, 30, 40, 41, 49, 11, 
  47, 62, 53, 32, 37, 45, 54, 40, 58, 55, 
  55, 50, 44, 49, 56, 45, 20, 35, 53, 37, 
  37, 11, 26, 45, 33, 51, 63, 44, 55, 32, 
  92, 50, 70, 63, 46, 36, 33, 34, 60, 62, 
  56, 55, 67, -18, 31, 53, 52, 32, 40, 29, 
  44, 41, 30, 60, 59, 20, 29, 31, 43, 36, 
  37, 25, 43, 37, 31, 19, 39, 34, 45, 44, 
  69, 72, 55, 52, 72, 40, 36, 36, 59, 25, 
  34, 20, 35, 14, 33, 54, 49, 5, 21, -37, 
  9, -6, 53, 47, 52, 34, 53, 37, 33, 19, 
  33, 40, 47, 30, 29, 15, 37, 36, 57, 31, 
  69, 43, 45, -37, 58, 53, 56, 22, 40, 15, 
  57, 21, 43, 49, 27, 7, 34, 29, 31, 17, 
  38, -8, 45, 35, 43, 35, 30, 14, 14, -14, 
  32, 35, 32, 18, 27, 22, 43, 27, 39, -16, 
  67, 15, 33, -43, 32, 52, 72, 34, 50, 19, 
  17, 10, 44, 36, 47, -60, 20, 8, 36, 28, 
  37, -43, 42, 19, 51, 47, 16, -1, 32, 24, 
  41, -7, 13, 23, 39, 41, 40, 27, 43, -29, 
  38, 4, 39, -128, 31, 30, 61, 27, 30, -20, 
  30, -18, 24, 14, 51, -7, 1, -128, 27, 7, 
  15, 11, 49, -20, -7, 4, 40, 7, 24, -10, 
  4, 11, 30, 4, 34, 19, 20, 22, 45, -16, 
  68, 29, 54, 37, 65, 47, 59, 5, 7, -23, 
  18, -60, 39, 41, 44, -23, 24, 34, 57, 31, 
  4, 17, 10, -8, 37, 8, 34, -26, 5, 5, 
  38, -14, 15, -29, -8, -50, 29, 17, 36, 4, 
  54, -29, 43, 25, 34, -60, 39, -33, -77, -20, 
  43, -37, 56, 35, 53, -12, -77, 23, 52, -7, 
  34, 15, 16, -128, -3, -6, 20, -37, -7, -29, 
  26, 17, 37, -77, 2, -33, 23, 12, 30, -18, 
  -128, -128, 29, -50, 30, -6, 43, -29, 39, 48, 
  64, -2, 74, 53, 24, -33, 13, 9, 52, -60, 
  -14, -60, -43, -128, 7, -14, 8, -50, -43, -128, 
  22, 22, 33, -2, 30, -23, 25, -6, 27, -16, 
  -2, -43, 21, -77, 7, -20, -3, -77, 35, 30, 
  50, -128, 7, -128, 9, -128, -4, 30, 49, -43, 
  11, -128, 11, 1, 30, -2, -3, -29, 25, -18, 
  9, -18, 22, -7, 37, -29, 13, -14, 29, 4, 
  -29, -60, -128, -128, -23, -29, 52, 0, 34, -128, 
  -16, -128, -37, -77, -33, -60, 21, 6, 39, -23, 
  1, -60, -77, -128, 31, -16, 14, -128, 17, -37, 
  34, -4, -14, 5, 40, -14, 42, 4, 25, -43, 
  23, -50, 43, 27, 2, -128, -8, 6, 39, -60, 
  6, -20, -43, -60, 20, -12, -29, -128, -6, -50, 
  0, -128, 8, -50, -4, -50, -8, -29, 11, -26, 
  -1, -128, 15, -2, 27, -77, 19, -33, 5, -33, 
  -128, -128, 44, -18, 47, -26, 13, 8, -4, -77, 
  2, -18, 11, -128, -77, -128, -7, -77, 15, -33, 
  21, -23, 9, 19, 2, -128, -43, -60, -50, -8, 
  18, -128, -16, -33, 28, -60, -29, -128, -37, -77, 
  -128, -128, 7, -60, 19, 11, 40, 27, 49, -60, 
  -12, -77, 20, -33, -128, -128, -26, -4, 24, -4, 
  15, 14, -7, -26, -12, -128, -7, -16, -43, -50, 
  -1, -128, 13, -60, 25, -14, 15, -128, -50, -128, 
  29, -128, -128, -128, 23, 12, 15, -23, 24, -26, 
  16, -77, -18, -77, -26, -128, 0, -128, -16, -29, 
  -4, -50, -16, -14, 17, -128, -60, -128, -29, -77, 
  -29, -43, 4, -18, 21, -60, -20, -128, -20, -60, 
  -3, -128, 32, -37, -128, -128, -37, -128, 11, -33, 
  -33, 24, 44, -128, -60, -128, -10, -43, -8, -128, 
  -16, -128, -8, -128, 23, -128, -60, -37, -12, -128, 
  -23, -50, -16, -50, -2, -33, -16, -128, 25, -50, 
  -60, -20, 31, 42, 84, 69, 69, -60, -23, -128, 
  -128, -20, 34, -23, -37, -77, -29, -26, 21, -128, 
  -12, -77, -29, -128, -26, 52, 80, 20, 4, -77, 
  5, -128, 36, -4, 2, 34, 86, 64, 0, -60, 
  -23, -128, 66, 49, 64, 4, 45, -33, -43, -77, 
  -29, -33, 31, 5, 34, -60, -6, -128, -8, -128, 
  7, -128, -43, -50, -3, 40, 79, 33, -18, -77, 
  9, -128, 7, -50, 8, -43, 70, 46, 28, -6, 
  -18, -10, 30, -12, 20, 8, 37, -128, -37, -43, 
  -43, -26, 29, 2, 35, 31, 24, -50, 12, -128, 
  -128, -128, 6, -16, -20, -128, -37, -2, 25, -29, 
  -12, -128, 10, -16, -29, -128, 47, -23, -6, -128, 
  -128, -128, -8, -128, 29, -60, -128, -128, -128, -128, 
  -128, -128, 4, -128, 16, 21, -8, -77, 0, -128, 
  -128, -128, -60, -128, -128, -128, -128, -37, -6, -128, 
  -23, -128, 21, -43, -16, -77, -128, -128, -77, -128, 
  -23, -128, -50, -128, -128, -128, -60, -128, -128, -33, 
  21, -128, 0, -50, -3, -77, 36, 38, 17, 4, 
  17, -12, -12, -128, -77, -128, -37, 1, 53, -7, 
  -50, -128, 38, 8, 19, -128, -60, -128, 2, -128, 
  -50, -60, -50, -128, -128, -128, -16, -37, -77, -77, 
  -14, -128, -50, -43, 30, -14, -26, -33, 4, -29, 
  12, -77, -29, -128, -23, -128, -33, -8, 42, 15, 
  -37, -128, 40, 17, 39, -128, -50, -6, 35, -128, 
  -37, -128, 4, -128, -128, -128, -50, 11, 19, -43, 
  -37, 4, -14, -128, -77, -128, 35, -128, -50, -128, 
  -128, -128, -60, -128, -33, -128, -77, -128, 25, -60, 
  -128, -128, -14, -6, 22, -128, -128, -33, 34, -23, 
  -128, -128, -128, -128, -16, -128, -29, -128, -37, -128, 
  40, 11, -128, -128, -128, -60, 34, -128, -20, -60, 
  14, -37, -6, -128, -12, -37, -26, -33, 52, 39, 
  35, 54, 105, 94, 114, 74, 35, 18, 54, -10, 
  -77, -128, -128, -128, -12, -77, -7, -50, -23, -37, 
  -14, -60, -60, -128, -33, -128, -6, -60, -128, -128, 
  -7, -2, 1, -128, -3, -128, -128, -128, 8, -128, 
  -50, -37, 43, -37, 39, 9, -33, -128, 4, -128, 
  -128, -128, -128, -128, 6, -128, -43, -128, -128, -128, 
  -23, -128, -128, -128, -60, -128, -26, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, 1, -128, 
  -8, -128, -128, -128, 19, -23, -18, 11, 75, 63, 
  97, 87, 106, 84, 88, 18, 38, 30, 35, -8, 
  4, -128, -77, -128, 5, -128, -50, -128, -128, -128, 
  -60, -29, 12, -128, 9, 9, 68, 59, 26, 4, 
  14, -77, -128, -128, 31, 5, 87, 90, 116, 95, 
  126, 104, 126, 104, 124, 99, 112, 94, 108, 82, 
  86, 59, 50, 23, 52, -7, 25, -18, 67, 77, 
  99, 92, 96, 75, 102, 94, 122, 101, 118, 89, 
  89, 71, 79, 90, 117, 93, 110, 96, 117, 95, 
  99, 93, 109, 99, 120, 95, 117, 91, 114, 94, 
  108, 70, 68, 64, 79, 65, 96, 82, 112, 101, 
  123, 100, 119, 89, 117, 100, 120, 97, 120, 99, 
  122, 92, 117, 94, 112, 95, 114, 89, 99, 82, 
  98, 74, 99, 93, 115, 82, 100, 81, 90, 85, 
  112, 75, 85, 85, 93, 77, 113, 95, 116, 95, 
  119, 94, 113, 95, 116, 94, 109, 84, 109, 81, 
  103, 72, 72, 24, 61, 12, 98, 82, 98, 69, 
  94, 55, 90, 63, 93, 92, 103, 72, 101, 84, 
  98, 70, 88, 76, 97, 79, 105, 87, 105, 76, 
  101, 64, 88, 71, 97, 60, 70, 43, 90, 80, 
  97, 63, 65, -12, 58, 59, 86, 65, 87, 54, 
  80, -16, 63, -20, 72, 53, 72, 31, 76, 2, 
  66, 68, 69, 46, 87, 64, 80, 36, 75, 58, 
  77, 29, 77, 49, 63, 17, 38, -128, -8, 23, 
  76, 54, 49, -128, -77, 15, 78, 45, 80, 43, 
  63, 14, 19, -128, 47, -128, 11, 40, 72, 55, 
  75, 53, 37, -128, -128, 21, 54, -8, 54, -29, 
  14, -26, 53, -29, 82, 41, 49, -128, -37, -14, 
  59, 59, 80, 58, 83, 64, 75, 4, 62, -10, 
  2, -128, -20, -128, -77, -128, 42, -1, 48, -16, 
  60, 14, 81, 64, 50, -50, 44, -60, 77, 66, 
  65, -128, 50, 15, 65, 32, 60, -128, 69, 65, 
  97, 87, 119, 100, 117, 80, 109, 85, 110, 73, 
  -23, -128, -128, -128, -128, -128, -128, -128, 35, -50, 
  -6, -128, 67, 30, 27, -128, -128, -128, 62, -23, 
  -2, -128, 13, -50, 0, -128, 44, -50, 73, 53, 
  84, 66, 102, 68, 99, 74, 110, 80, 109, 86, 
  -128, -128, -128, -128, -128, -128, -128, -128, -10, -128, 
  -128, -128, 57, -6, 19, -128, -128, -128, 44, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, 54, 7, 
  55, 61, 85, 44, 84, 69, 102, 75, 101, 65, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 38, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 20, 4, 
  50, 38, 67, -50, 67, 51, 87, 56, 80, 55, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  20, 14, 38, -128, 45, 20, 68, 41, 75, 40, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -77, -16, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -23, 22, 39, -128, 47, 30, 60, -50, 20, -20, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 12, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, -128, -128, -128, 2, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
