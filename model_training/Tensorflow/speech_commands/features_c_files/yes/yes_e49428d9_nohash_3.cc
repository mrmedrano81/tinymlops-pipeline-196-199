/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/e49428d9_nohash_3.wav" \
 * --output_c_file="features_c_files/yes/yes_e49428d9_nohash_3.cc" \
 */
#include "yes_e49428d9_nohash_3.h"


const int g_yes_e49428d9_nohash_3_width = 40;
const int g_yes_e49428d9_nohash_3_height = 49;
alignas(16) const signed char g_yes_e49428d9_nohash_3_data[] = {
  50, 51, 48, 51, 63, 44, -26, -7, 17, -7, 
  -10, -18, 47, 47, -33, -12, -18, 23, 50, 20, 
  -4, -7, 17, 25, 17, 50, 43, 35, 9, 15, 
  14, 17, 45, 44, 40, 25, 29, 30, 45, 39, 
  19, 8, 43, 50, 39, -4, 46, 35, 43, -8, 
  16, 29, 23, -2, -37, -20, 9, 54, 47, 7, 
  -12, 9, 27, -23, 8, 14, 17, 25, 4, -6, 
  15, 16, 14, 10, 26, 28, 31, 23, 38, 26, 
  57, 48, 61, 24, 30, 21, 56, 32, 9, -33, 
  -37, 4, 4, -33, -18, -1, -7, -8, 6, -37, 
  -29, -33, 25, -20, -8, -33, 15, 7, 14, 29, 
  30, 25, 27, -37, 0, -3, 9, 23, 37, 29, 
  57, 57, 41, 10, 26, 16, 50, 45, 11, 11, 
  25, -23, -2, -26, 31, 14, 1, -77, 5, -37, 
  -2, 4, 30, -37, -23, -77, 4, 0, -4, 15, 
  4, -33, -18, -50, 4, -2, 23, 0, 15, 9, 
  66, 43, -50, -128, -23, -12, -7, 21, 29, 47, 
  43, 9, -12, -33, 9, -60, 16, -8, -16, -7, 
  -3, -3, 1, -50, -23, -77, -18, 0, 18, 14, 
  14, 4, -7, -50, -7, 8, 29, 4, 19, 33, 
  -20, -60, -50, -128, -128, -128, -18, -20, -4, -33, 
  12, 13, 35, -2, 43, -14, -6, -29, -16, -50, 
  -23, 28, 27, -18, -16, -77, 9, -14, 22, 9, 
  37, 16, 4, 11, 28, 16, 32, 19, 20, -29, 
  -8, -37, 8, -29, -18, -128, -4, -37, -29, -77, 
  -16, -12, 12, 24, 33, -128, -12, -29, 15, -60, 
  -33, -4, 27, -20, 17, -77, -10, -16, 27, 19, 
  19, -16, 14, 29, 44, 35, 35, 11, -8, -26, 
  24, 15, 47, 25, 22, -50, -128, -128, -23, -43, 
  -23, -128, -23, 2, 25, -50, -8, 16, 16, -4, 
  -60, -60, 7, -43, -14, -20, 13, -23, -10, -6, 
  16, -77, -12, 8, 48, 7, 24, 19, -10, -128, 
  23, -50, 16, -60, -43, -128, -77, -128, -23, -16, 
  -23, -128, -37, -33, -14, -43, 0, -43, -14, -50, 
  -2, -2, 32, -60, -8, 0, 0, -77, 9, -77, 
  20, -128, 8, 31, 17, -77, 18, 1, 4, -37, 
  33, -14, 1, -2, 0, -128, -60, -128, -50, -128, 
  -37, -128, -128, -128, -14, -6, -6, -12, 1, -50, 
  -3, -128, -77, -128, -10, -12, 15, -128, -8, -128, 
  -77, -60, -1, -18, 5, -128, 9, -18, -12, -50, 
  6, -128, 0, -29, -60, -43, -7, -128, -14, -33, 
  -33, -128, -77, -128, -60, -37, -37, -128, 4, -3, 
  -8, -128, -77, -77, 2, -77, -33, -50, 15, -77, 
  -7, -128, -16, 16, 25, -60, 0, -60, -14, -60, 
  -37, -128, -128, -128, -77, -128, -43, -128, -10, -77, 
  -1, -8, -10, -60, -10, -23, -7, -128, 5, -20, 
  10, -128, -77, -128, -23, -128, -77, -128, 4, -60, 
  -29, -20, 20, -7, -8, -60, 14, -50, -2, -33, 
  34, -23, 34, -18, -43, -128, -77, -12, -16, -128, 
  -33, -37, 1, -43, 23, -128, -8, -128, -20, -128, 
  -37, -128, -60, -33, 0, -43, -23, -128, -4, -128, 
  -43, -77, -8, -50, -18, -60, 9, -128, 7, -77, 
  -12, -128, 45, 31, 22, -60, -77, -77, -7, -37, 
  35, 11, -3, -7, 16, -128, -50, -128, -26, -128, 
  -37, -128, -77, -60, -1, -29, 4, -128, -23, -60, 
  -43, -77, -18, -77, -10, -43, -43, -77, 15, -37, 
  -33, -128, -37, -50, -77, -77, -77, -128, -60, -77, 
  -8, -37, -77, -128, -33, -128, 40, 11, 2, -128, 
  -77, -128, -128, -29, 19, 9, -14, -128, -50, -60, 
  -10, -77, -3, -26, -4, -50, -16, -60, 4, -77, 
  24, -23, -128, -128, 8, -37, -128, -128, -14, -128, 
  -6, -77, -77, -128, -128, -60, 6, -23, -6, -33, 
  -18, -128, -77, -26, -1, -60, -20, -77, -16, -50, 
  -26, -60, -26, -50, 14, -50, -2, -128, -16, -37, 
  4, -128, -50, -128, 43, 30, 37, -128, -60, -128, 
  -3, -43, -2, -128, -26, -60, -23, -128, -10, 9, 
  -1, -50, -26, -128, -128, -128, -50, -29, 2, -60, 
  2, -8, 2, -43, 24, -60, 4, -43, -2, -128, 
  34, 11, -18, -37, 21, 24, 41, -50, -50, -3, 
  42, -29, 7, -128, -33, -8, 25, -77, -20, -4, 
  1, -128, -10, -128, -2, -23, -60, -128, -12, -128, 
  -29, -23, 16, -128, 24, -33, 11, -128, -43, -128, 
  -3, -128, -43, -128, -7, -128, -128, -128, -77, -128, 
  -1, -50, -128, -128, -23, 12, 8, -77, -128, -128, 
  -33, -77, -7, -128, -37, -128, -128, -128, 9, -60, 
  -14, -33, 2, -60, 4, -77, -29, -128, -14, -50, 
  9, -128, -128, -128, -60, -128, -128, -128, -50, -60, 
  -37, -77, -50, -128, -23, 2, 19, -50, -20, -60, 
  -23, -77, -128, -60, -60, -128, -77, -128, 13, -50, 
  -23, 8, 19, -60, 14, -128, 10, -16, -128, -128, 
  -128, -60, 40, -37, 8, -26, 2, -33, -33, -128, 
  0, -77, 2, -128, -10, -26, -7, -128, -33, -29, 
  5, 11, 1, -128, -77, -128, -8, -128, -26, -10, 
  15, 21, 24, -37, -29, -128, -2, -128, -18, -29, 
  -128, -128, -26, -33, -18, -50, 16, -60, -16, -3, 
  -18, -16, 20, -77, -77, -29, 18, -18, -128, -29, 
  10, -128, -60, -128, -33, 12, 50, -20, 47, 58, 
  49, 51, 57, 15, -29, -128, -43, -128, 6, -77, 
  -3, -37, -10, 4, 31, -29, 36, 4, -43, -3, 
  -14, 1, 40, -26, -128, -50, 10, -4, -128, -50, 
  -1, -128, -50, -60, 4, 41, 71, -8, 63, 48, 
  70, 67, 57, 13, -43, -128, -50, -128, 34, -43, 
  62, 40, 22, 60, 76, 56, 62, 53, 46, 13, 
  25, 1, 53, -20, -37, 19, 43, -43, -18, -128, 
  -4, -128, -20, -26, 35, 51, 24, -33, 45, 18, 
  60, 39, 46, -128, -50, -128, -77, -128, 26, -50, 
  121, 102, 124, 103, 124, 97, 114, 93, 104, 87, 
  95, 79, 88, 56, 60, 54, 69, 58, 75, 72, 
  103, 84, 64, 65, 87, 80, 89, 79, 98, 60, 
  60, 37, 38, -43, 4, -33, 16, -20, 30, 8, 
  108, 82, 114, 89, 106, 95, 109, 89, 114, 91, 
  105, 84, 102, 87, 97, 78, 101, 82, 102, 90, 
  112, 87, 103, 90, 105, 83, 101, 85, 104, 72, 
  100, 81, 75, -14, 14, -20, 19, -6, 24, -33, 
  97, 65, 99, 72, 109, 90, 109, 86, 105, 74, 
  105, 79, 95, 68, 88, 72, 92, 70, 102, 85, 
  95, 61, 93, 75, 91, 66, 84, 57, 89, 61, 
  90, 74, 76, 0, 27, 11, 32, 19, 47, 16, 
  89, 60, 83, 41, 91, 69, 108, 75, 102, 83, 
  105, 78, 97, 71, 95, 79, 101, 84, 109, 81, 
  91, 40, 93, 77, 90, 60, 85, 72, 97, 60, 
  79, 70, 86, -4, 77, 64, 37, 30, 47, 12, 
  84, 47, 70, 27, 83, 62, 98, 73, 97, 68, 
  90, 63, 89, 66, 90, 66, 91, 72, 95, 57, 
  62, 5, 70, 53, 76, 18, 46, 55, 79, 54, 
  65, 45, 81, 44, 62, 46, 52, 22, 51, 24, 
  77, 34, 15, -128, 41, 7, 69, 6, 58, 13, 
  63, 32, 21, -77, 57, 9, 25, -10, 60, -60, 
  -29, -128, 9, 18, 56, -60, 9, -7, 44, -16, 
  7, -128, 48, 37, 40, -7, 17, 4, 30, -37, 
  49, -37, -128, -128, 20, -128, -128, -128, 49, -37, 
  1, -128, -29, -128, -128, -128, 36, -128, -50, -128, 
  -128, -128, -7, -60, 15, -128, -37, -128, -43, -128, 
  -128, -128, -6, -8, 7, -77, -20, -18, -77, -23, 
  -29, -128, -128, -128, -16, -128, -10, -128, -128, -128, 
  -128, -128, -29, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, 8, -128, -37, -128, -128, -128, 
  -128, -128, 46, 55, 24, -60, 50, 25, 34, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, 46, 61, 56, -3, 68, 46, 61, 11, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, 62, 78, 82, 76, 108, 76, 93, 46, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 29, 23, 
  -6, -37, 84, 79, 79, 67, 95, 73, 92, 32, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 42, 30, 
  5, 15, 78, 77, 86, 64, 94, 67, 79, 35, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -50, -29, 
  15, -128, 70, 24, 74, 66, 93, 55, 82, 32, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -23, -128, -77, -60, 
  -29, -128, 26, -60, 55, 47, 85, 53, 76, 49, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 24, -10, 65, 67, 76, 32, 70, 51, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -3, -77, 38, -1, 23, 61, 77, 52, 70, 33, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -18, 
  5, -128, 41, -29, 59, 46, 63, 39, 72, 54, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -18, -77, -12, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -33, -33, 
  17, -50, 29, -14, 32, -18, 53, -60, 9, 30, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -10, -128, -128, -128, -7, 30, 23, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -29, -128, -60, -77, -6, -128, 21, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -37, -18, -128, -43, -128, -7, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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