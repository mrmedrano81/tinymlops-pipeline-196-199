/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/27c30960_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_27c30960_nohash_0.cc" \
 */
#include "yes_27c30960_nohash_0.h"


const int g_yes_27c30960_nohash_0_width = 40;
const int g_yes_27c30960_nohash_0_height = 49;
alignas(16) const signed char g_yes_27c30960_nohash_0_data[] = {
  57, 53, 73, 57, 58, 57, 77, 53, 45, 50, 
  57, 47, 62, 50, 65, 68, 67, 35, 72, 73, 
  69, 62, 57, 39, 44, 34, 5, 15, -4, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  42, 25, 64, 49, 60, 67, 75, 44, 67, 60, 
  70, 44, 52, 60, 53, 60, 59, 57, 64, 57, 
  58, 49, 59, 34, 36, 29, 27, 19, -12, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  6, 29, 51, 45, 69, 47, 62, 44, 58, 47, 
  57, 51, 50, 38, 34, 46, 59, 39, 59, 46, 
  70, 40, 47, 35, 30, 0, 10, 9, 18, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  25, 15, -1, 5, 53, 38, 62, 48, 56, 23, 
  49, 16, 56, 52, 64, 38, 55, 52, 77, 65, 
  85, 63, 65, 46, 49, 39, 40, -18, -3, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  36, 39, 59, 35, 52, 27, 65, 37, 45, -18, 
  34, 6, 45, 25, 47, 4, 42, 37, 55, 18, 
  55, 31, 22, 30, 45, 15, 29, -3, 12, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  43, 29, 23, 16, 60, -6, 22, -29, 29, -6, 
  -2, -12, 16, -29, 43, 4, 36, 17, 54, 20, 
  45, 1, 20, -1, 15, 2, 22, -14, -6, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  0, -14, 23, -77, 36, -8, 2, -14, 2, 2, 
  48, -50, 26, 14, 23, -10, 28, -10, 38, 17, 
  55, 12, 41, 5, 16, 11, 20, -16, -12, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  35, -128, 14, 7, 54, 34, 48, -33, -12, 13, 
  51, 28, 34, -26, 29, -128, -4, -3, 17, -18, 
  20, -77, 34, 13, 25, -2, 21, -60, -20, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  27, -3, 38, -6, 50, 4, -4, -60, 46, -4, 
  28, -20, 20, -33, 13, -37, 16, 1, 24, -33, 
  22, -43, 26, -128, -20, -77, -2, 1, -20, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  17, 37, 45, -128, -3, -33, 48, -14, -29, 26, 
  54, 23, 42, -10, 23, -26, 19, 0, 45, -50, 
  -7, -60, 29, -23, 14, -20, -33, -60, -20, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  36, -43, 19, -33, -14, -77, 39, 8, 31, -12, 
  12, 7, 21, -128, 21, 19, 25, -26, 19, 20, 
  36, -37, 27, -50, -8, -37, 7, -37, -6, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -128, 30, 21, 40, 5, 49, 37, 44, 9, 
  41, 4, 18, -26, -14, -14, 21, -20, -1, -128, 
  17, -77, 15, -128, 4, -50, -4, -29, -12, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -7, -1, 37, 21, -16, -50, 9, -20, 17, -23, 
  2, -33, 15, -33, 13, -18, 7, -128, -16, -128, 
  39, -16, 1, -37, 5, -60, -50, -128, -33, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -60, 11, -77, -77, -29, 18, -26, 0, -128, 
  12, -60, -14, -77, 15, -29, -1, -77, 12, -37, 
  5, -50, 21, -60, -6, -60, 4, -60, -33, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  27, -23, 9, -3, -2, -43, 39, -26, 1, -43, 
  29, -60, -128, -128, 4, -37, 37, -60, -23, -128, 
  -23, -60, 9, -29, 8, -60, -37, -50, -20, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -4, 2, 33, -33, 27, -50, 27, -26, -26, -60, 
  26, -128, 19, -77, 4, -37, -60, -29, -7, -128, 
  12, -60, 8, -77, 4, -77, -12, -43, -16, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -8, -128, -26, -128, 24, -18, -20, -128, -33, -128, 
  21, -26, 6, -50, 16, -43, 17, -16, 16, -60, 
  -16, -128, -33, -77, -6, -43, 0, -77, -16, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -6, -128, 9, -20, -37, -60, 27, -7, 5, 17, 
  52, -33, 0, -14, 11, 9, 30, -77, 11, -128, 
  -10, -77, -37, -128, -29, -12, -20, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  8, 11, 25, -128, 15, -77, -50, -128, 35, -43, 
  -29, -43, 13, -29, 28, -128, -26, -128, -3, -128, 
  -77, -60, 1, -77, 15, -26, -16, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -12, -1, 35, -77, -60, -128, -20, 6, 16, -60, 
  5, -1, 10, -29, 6, -128, -33, -60, 20, -77, 
  -29, -128, -43, -128, -29, -128, -12, -50, -29, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  11, -23, -3, -50, 9, -128, -43, -128, -23, -50, 
  -26, -128, -6, -128, 15, -128, -1, -128, -7, -128, 
  -50, -128, -33, -77, -33, -128, -43, -50, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -3, -128, -128, -3, 34, -23, 19, -128, -14, -128, 
  4, -77, 11, -43, -16, -60, 1, -77, -33, -128, 
  -50, -128, -50, -60, -26, -128, -26, -33, -10, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  5, -23, 23, -8, 2, -128, -14, -4, 16, -128, 
  4, -128, -43, -128, -4, -128, -128, -50, 5, -128, 
  -8, -128, -29, -128, -23, -128, -4, -33, -33, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -4, -33, 7, -128, 15, -128, 19, -43, 
  32, -50, 15, -128, 1, -37, -26, -128, 8, -128, 
  -14, -128, -37, -128, -77, -128, -33, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  16, -37, -2, -16, 25, -128, -16, -16, 55, -50, 
  -18, 11, 22, -26, -26, -128, -50, -128, -6, -128, 
  -128, -128, -128, -128, -23, -128, -37, -77, -33, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  35, -50, -12, -128, -50, -10, 5, -128, 23, -43, 
  -26, -29, -37, -128, -26, -128, -60, -128, -37, -128, 
  -77, -128, -50, -77, -33, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  12, -128, 19, -60, -37, -128, 8, -77, 6, -37, 
  15, 0, 7, -77, -37, -128, 12, -128, -29, -128, 
  -43, -128, -60, -128, -50, -77, 4, -128, -33, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -6, -128, 19, -77, -7, -128, -128, -128, 36, -23, 
  -43, -60, -18, -77, 9, -50, -37, -128, -43, -128, 
  -26, -128, -50, -77, -20, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  23, 7, 32, -128, -77, -128, 8, -33, -128, -128, 
  -128, -128, -33, -128, -43, -37, -4, -128, -60, -128, 
  -128, -128, -60, -50, -77, -77, -43, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  60, 17, 30, 11, 17, -14, -18, -128, -128, -128, 
  -128, -128, -29, -60, -43, -128, -50, -128, -50, -128, 
  -128, -128, -128, -77, -23, -8, 42, 1, 22, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  103, 92, 103, 71, 82, 40, -29, -60, 14, -128, 
  7, -77, -2, -77, 15, 41, 47, -128, -60, -128, 
  -128, -128, -14, -50, 42, 54, 76, 30, 28, -43, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  105, 93, 112, 97, 115, 91, 105, 75, 72, 34, 
  53, -16, 43, -18, -12, -26, 39, 15, 40, 20, 
  17, 42, 56, 63, 95, 87, 105, 82, 94, 59, 
  -128, -60, 4, -16, -6, -16, 4, -16, 4, -10, 
  115, 89, 110, 93, 118, 96, 106, 88, 99, 76, 
  80, 63, 74, 45, 67, 32, 69, 40, 48, 23, 
  69, 72, 102, 92, 114, 88, 102, 82, 108, 82, 
  -16, 6, 22, 15, 29, 15, 33, 16, 24, 6, 
  99, 70, 98, 73, 104, 87, 112, 85, 104, 86, 
  100, 71, 78, 71, 83, 39, 72, 57, 76, 75, 
  94, 82, 105, 87, 104, 72, 94, 87, 109, 83, 
  2, -14, 20, 6, 27, 22, 24, 11, 33, 21, 
  92, 60, 87, 58, 95, 75, 109, 82, 102, 76, 
  95, 81, 88, 74, 94, 72, 75, 73, 93, 80, 
  95, 70, 89, 69, 90, 59, 94, 74, 96, 55, 
  5, -7, 19, 4, 33, 18, 36, -1, 11, 12, 
  88, 59, 73, 43, 89, 67, 104, 80, 98, 72, 
  103, 68, 99, 65, 100, 68, 83, 73, 94, 77, 
  74, 64, 93, 65, 87, 52, 85, 38, 74, 48, 
  19, -6, 45, 35, 51, 27, 50, 39, 53, 40, 
  75, 36, 71, 37, 82, 67, 93, 66, 101, 48, 
  92, 61, 82, 72, 97, 69, 88, 80, 100, 60, 
  82, 51, 80, 47, 72, 47, 72, 46, 82, 50, 
  12, 7, 47, 26, 50, 38, 57, 35, 54, 34, 
  71, 25, 65, 26, 71, 55, 82, 69, 95, 67, 
  90, 60, 90, 61, 94, 57, 89, 77, 96, 37, 
  70, 41, 67, 16, 66, 19, 62, 11, 64, 28, 
  -12, 1, 40, 24, 43, 19, 45, 28, 52, 29, 
  69, 9, 59, 20, 53, 30, 79, 62, 84, 68, 
  74, 69, 77, 55, 85, 60, 84, 44, 63, 5, 
  60, -33, 51, 29, 70, -23, 29, -128, 22, -43, 
  -26, -77, 2, -43, -29, -37, -2, -77, -2, -29, 
  64, -14, 12, -33, 19, -60, 64, 46, 54, 57, 
  73, 46, 60, 28, 54, -2, 70, 47, 71, -14, 
  34, -128, 37, -128, -43, -128, 21, -128, -128, -128, 
  -50, -128, -23, -50, 4, -60, -3, -37, 8, -33, 
  41, -128, -128, -128, -77, -128, -26, -128, 29, -29, 
  29, -10, 37, -26, 21, 16, 24, -128, 11, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, -8, -128, -128, -128, 10, -128, -50, -128, 
  -128, -128, -6, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 23, -128, -77, -128, -77, -128, -26, -128, 
  -128, -37, 31, -26, 42, 23, 58, 7, 14, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 20, -128, -128, -128, -77, -128, -128, -128, 
  -60, -128, -128, -128, -1, -18, 53, 31, 50, 28, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -7, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -37, 46, -10, 49, -20, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -14, 47, -128, -23, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, -16, -60, 44, -6, 48, 1, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, 28, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -3, -128, -20, -77, 14, 6, 34, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  32, -60, 57, 19, -10, -60, 16, -128, -128, -128, 
  -128, -128, -12, -128, 14, -4, 34, 8, 60, 29, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -18, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -1, -77, 56, -60, 28, 12, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
