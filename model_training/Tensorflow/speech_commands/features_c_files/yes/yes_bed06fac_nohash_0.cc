/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/bed06fac_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_bed06fac_nohash_0.cc" \
 */
#include "yes_bed06fac_nohash_0.h"


const int g_yes_bed06fac_nohash_0_width = 40;
const int g_yes_bed06fac_nohash_0_height = 49;
alignas(16) const signed char g_yes_bed06fac_nohash_0_data[] = {
  111, 91, 93, 77, 90, 85, 95, 65, 80, 75, 
  90, 77, 74, 72, 72, 66, 84, 65, 69, 74, 
  77, 45, 72, 55, 68, 67, 63, 55, 82, 64, 
  69, 63, 63, 52, 60, 54, 56, 57, 54, 48, 
  84, 69, 69, 70, 92, 58, 75, 74, 82, 51, 
  87, 74, 63, 59, 55, 44, 62, 23, 56, 45, 
  47, 50, 64, 60, 61, 39, 73, 59, 77, 64, 
  69, 47, 53, 54, 38, 42, 55, 49, 67, 46, 
  83, 71, 98, 72, 87, 52, 80, 62, 76, 60, 
  68, 19, 47, 28, 68, 53, 75, 63, 79, 46, 
  58, 55, 59, 50, 55, 46, 73, 50, 69, 52, 
  64, 41, 55, 44, 29, 17, 60, 40, 55, 29, 
  89, 57, 80, 61, 75, 64, 74, 43, 52, 53, 
  70, 37, 52, 52, 69, 50, 52, 43, 67, 24, 
  45, 31, 59, 49, 66, 34, 50, 20, 61, 37, 
  59, 43, 51, 24, 49, 35, 45, 19, 34, 26, 
  55, 14, 66, 62, 90, 62, 67, 52, 61, 29, 
  51, 19, 70, 34, 67, 45, 49, 38, 51, -18, 
  24, 21, 61, 41, 38, 25, 48, 37, 56, 36, 
  59, 25, 52, 29, 46, 42, 42, 12, 39, 15, 
  69, 57, 90, 49, 56, 48, 71, 53, 60, -26, 
  47, 34, 54, 36, 60, 49, 62, 56, 58, -3, 
  44, 27, 50, 39, 60, -12, 55, 39, 54, 32, 
  58, 22, 33, 16, 59, 22, 40, 18, 27, -2, 
  55, -3, 70, 0, 49, -1, 60, 49, 57, 16, 
  65, 46, 74, 9, 47, -7, 41, 9, 47, 35, 
  56, 27, 43, 29, 51, 8, 47, -26, 43, 23, 
  55, 29, 37, 23, 52, 20, 43, 16, 49, 12, 
  78, 34, 14, 39, 66, 11, 14, -77, 42, -10, 
  41, 2, 37, -6, 14, -43, 42, 11, 34, 37, 
  46, -33, 10, -10, 40, 18, 37, 9, 50, 27, 
  51, 2, 13, -128, 18, -8, 14, -7, 45, 2, 
  58, 34, 31, -18, 55, -43, -33, -128, 41, 23, 
  48, 19, 65, 19, 43, 36, 39, 15, 58, 22, 
  47, -20, 36, 9, 52, 24, 45, 22, 50, 15, 
  48, 5, 46, 20, 49, 11, 43, 0, 31, -7, 
  51, 42, 67, 14, 8, -128, -6, -33, 57, 24, 
  43, -4, 46, 25, 54, 41, 65, 32, 73, 52, 
  60, 9, 54, -26, 34, -1, 39, 22, 47, 0, 
  59, 44, 52, 11, 34, -10, 30, -6, 9, -23, 
  56, -37, 51, -7, -18, -29, 30, -26, 53, -18, 
  16, -6, 47, -37, 32, -20, 45, -10, -8, -128, 
  57, 11, 15, -10, 23, -23, 43, -10, 34, -16, 
  35, -6, -23, -60, 36, -3, 37, 4, 24, -16, 
  19, 1, 58, -26, 24, 5, 54, -10, 27, 19, 
  46, -37, 40, -16, 56, 17, 46, 4, 5, -6, 
  36, -37, 11, -77, 25, -128, -2, -23, 30, -10, 
  22, -18, 39, -7, 44, 4, 4, -14, 32, -37, 
  52, 32, 43, 14, 30, 17, 55, 4, 27, -37, 
  28, -128, -26, -10, 52, -128, 9, -43, 27, 2, 
  1, 2, 43, -50, 45, -50, 11, -8, 40, -60, 
  40, 6, 30, -16, 45, -23, 11, -60, 13, -16, 
  61, 37, 57, 21, 54, -16, 54, -6, -23, -8, 
  22, -20, 51, 14, 49, -37, -14, -18, 39, -128, 
  -20, -128, 34, -43, 20, -7, 43, 10, 29, -43, 
  17, -43, 21, -77, 11, -23, 17, -37, 9, -37, 
  69, 39, 32, -26, 52, 44, 53, -12, 0, -128, 
  -14, -43, 19, -29, 15, -23, 51, 9, 34, -128, 
  35, -29, 44, -16, 45, -3, 8, -60, 29, -18, 
  27, -33, 11, -10, 27, -10, 10, -77, 22, -7, 
  48, 9, 40, -50, -7, -128, -60, -23, 47, 15, 
  -7, -128, 47, -12, 32, -128, 23, -16, 37, -29, 
  0, -60, 31, -14, -4, -50, 25, 0, 45, -23, 
  19, -16, 4, -18, 2, -128, -6, -43, -12, -128, 
  8, -128, 16, 7, 47, -128, -29, -16, 47, 24, 
  -50, -128, 28, -128, 43, -6, 8, -16, 17, -128, 
  15, -8, 16, -128, 11, 2, 27, -33, 26, -29, 
  23, -23, 2, -29, -12, -77, 14, -37, 1, -60, 
  -50, -128, 29, 23, 34, -128, -128, -128, 17, -128, 
  -12, -18, -6, -60, 17, 0, 49, -3, -50, -128, 
  15, 5, 14, -128, -1, 1, 30, -16, 27, -43, 
  11, -77, -23, -60, 18, -77, -26, -128, -8, -128, 
  33, -37, -60, -16, 39, -60, 42, -77, 37, -16, 
  24, -77, 20, -128, 23, -6, -3, -33, 10, -8, 
  13, -77, -60, -60, 14, -128, 14, -43, 7, -128, 
  -2, -77, 11, -43, 12, -77, 7, -37, 7, -37, 
  -4, -50, 19, -29, 29, -33, 45, -60, 12, 15, 
  55, -60, 14, -128, -1, -2, 14, -128, -12, -60, 
  14, -3, -7, -128, 16, -50, 13, -16, -7, -20, 
  15, -128, -14, -128, -8, -43, -14, -128, -2, -77, 
  38, -23, 38, -20, 9, -128, 42, 20, 38, -128, 
  -23, -60, 29, 1, -16, -128, -23, -50, 4, -128, 
  -128, -77, -128, -77, -1, -37, 4, -128, 21, -50, 
  1, -128, -43, -128, 0, -37, 16, -33, 14, -50, 
  53, 20, 9, -43, 37, -128, 33, -128, 6, -128, 
  -18, -128, 29, -7, 34, -128, 17, -128, -128, -128, 
  0, -60, 14, -128, -14, -60, -12, -60, 23, -26, 
  14, -50, 4, -128, -16, -60, -14, -128, 10, -77, 
  -26, -20, 59, -128, -33, -128, -60, -128, -128, -128, 
  20, -128, -29, -50, -60, -128, 29, -77, 0, -128, 
  6, -128, -12, -50, 9, -23, -16, -128, -8, -77, 
  13, -50, -7, -23, -20, -128, -23, -128, -16, -128, 
  6, -77, -128, -43, 44, 11, 41, -128, -6, -60, 
  11, -128, 9, -16, 38, -1, -37, -128, -128, -128, 
  14, -77, -20, -77, 4, -128, -1, -43, -4, -128, 
  -12, -128, -12, -23, 11, -33, 7, -128, -7, -77, 
  19, -18, 32, -20, 8, -128, -18, -128, 4, -43, 
  -16, -128, -60, -128, -128, -128, -23, -60, 11, -128, 
  0, -77, 9, -8, -1, -128, -128, -128, 4, -77, 
  -12, -128, -37, -77, -6, -128, -23, -29, -18, -77, 
  -60, -128, -12, -43, 6, -77, 20, -77, -37, -128, 
  9, -60, 21, -128, -50, -128, 19, -43, 17, -77, 
  -16, -43, 29, -128, -6, -128, 5, -128, -1, -128, 
  -43, -60, 9, -128, -23, -77, 15, -128, 7, -16, 
  -29, -128, -50, -128, -1, -128, -60, -128, -43, -128, 
  -3, -29, -23, -128, -77, -128, -2, -128, 8, -60, 
  -2, -128, -1, -33, -43, -128, -29, -128, 0, -77, 
  -7, -50, 4, -43, 19, -43, 2, -77, -7, -29, 
  5, 16, 56, -60, 5, -128, -33, -33, -128, -128, 
  -77, -128, 5, -128, -4, -128, -20, -128, -33, -10, 
  -8, -26, 19, -77, -60, -43, -29, -128, 11, -33, 
  -12, -128, -16, -128, -29, -50, -29, -128, -14, -128, 
  7, -50, -60, -128, -10, -16, -29, -128, -43, -128, 
  -60, -128, -20, -128, 31, -33, -14, -33, 9, -77, 
  -18, -16, 19, -60, 32, -12, 27, -128, -8, -128, 
  -60, -128, -29, -128, -29, -128, -29, -128, -1, -50, 
  38, -128, -128, -128, -77, -33, -60, -128, 14, -37, 
  -7, -77, -50, -128, 8, -128, -2, -128, -12, -128, 
  -18, -128, 4, -60, -23, -128, -16, -128, -8, -77, 
  -23, -128, -37, -128, -14, -128, -33, -77, -23, -77, 
  -128, -128, 9, -128, -128, -128, -128, -128, 17, 26, 
  -12, -128, -128, -128, -128, -128, 9, -1, 6, -128, 
  -16, -77, -77, -128, -128, -128, 4, -128, -8, -33, 
  39, -60, -43, -128, -16, -128, -60, -128, -18, -128, 
  -14, -128, -128, -23, 42, -8, -128, -7, 29, -12, 
  -23, -128, -128, -128, -60, -128, 15, -43, -29, -128, 
  -43, -29, -10, 44, 78, 6, 43, 2, -23, -26, 
  57, -16, -16, -60, -29, -128, -128, -128, -20, -128, 
  97, 80, 76, 29, 69, 34, -14, -37, 0, -128, 
  28, 11, 29, -7, -6, -128, -50, -50, 10, -128, 
  -128, -128, 0, 1, 52, 21, 35, 42, 25, -8, 
  34, -20, 19, 14, -43, -128, -18, -128, -20, -77, 
  101, 75, 54, 76, 100, 62, -7, -128, -60, -12, 
  -128, -128, -20, -14, -7, -128, 10, -6, 45, -29, 
  -8, -3, 73, 80, 103, 56, 86, 76, 79, 74, 
  95, 45, 63, 37, -14, -37, -33, -128, -14, -77, 
  99, 79, 79, 80, 105, 82, 58, -14, -16, 33, 
  37, -128, -3, -77, 30, -12, 11, 17, 38, 28, 
  29, 2, 70, 67, 86, 49, 75, 65, 67, 72, 
  93, 48, 39, -26, -4, -128, -18, -50, -1, -29, 
  82, 63, 68, 60, 104, 89, 72, 51, 44, 37, 
  62, -128, 9, -77, 36, 8, 42, 25, 57, 51, 
  4, 34, 80, 65, 90, 65, 89, 50, 59, 59, 
  84, 47, 45, -60, -7, -60, -23, -128, -60, -128, 
  72, 42, 38, 62, 100, 79, 76, 75, 80, 77, 
  101, 55, 52, 5, 56, 50, 69, 51, 73, 63, 
  62, 70, 95, 70, 85, 69, 91, 69, 77, 58, 
  82, 48, 75, 22, -3, -60, -1, -128, 2, -77, 
  82, 56, 55, 61, 86, 51, 85, 87, 99, 78, 
  97, 44, 74, 1, 50, 50, 68, 44, 75, 57, 
  65, 77, 110, 82, 90, 81, 99, 80, 90, 73, 
  93, 69, 87, 65, -29, -128, -43, -77, -20, -43, 
  70, 48, 65, 43, 83, 59, 84, 87, 104, 66, 
  88, 52, 88, 41, 42, 55, 79, 39, 74, 67, 
  77, 75, 94, 71, 82, 62, 88, 47, 83, 57, 
  85, 65, 91, 78, 35, -77, -16, -77, -37, -20, 
  57, 21, 45, 13, 68, 28, 84, 80, 100, 69, 
  95, 58, 85, 36, 55, 55, 82, 54, 81, 68, 
  92, 65, 76, 46, 70, 57, 91, 69, 75, 56, 
  79, 59, 82, 58, 46, -26, -23, -37, -2, -29, 
  56, 8, 21, 5, 54, -29, 91, 77, 95, 76, 
  100, 65, 86, 43, 68, 57, 78, 65, 87, 69, 
  89, 51, 55, 4, 62, 55, 76, 50, 86, 49, 
  78, 44, 79, 55, 60, -12, -26, -77, -43, -18, 
  60, 7, -37, -33, -50, -128, 99, 69, 88, 87, 
  97, 62, 86, 56, 70, 49, 76, 65, 94, 65, 
  93, 50, 57, -60, 67, 42, 82, 53, 74, 33, 
  68, 36, 55, -33, 20, -26, -12, -128, -29, -128, 
  64, -18, 57, 51, 39, -128, 72, -7, 103, 77, 
  72, 79, 87, 79, 93, 65, 89, 75, 100, 80, 
  105, 59, 77, 24, 72, 49, 76, 48, 75, 44, 
  73, 44, 72, 0, 68, 14, 15, -43, -18, -37, 
  -26, -128, 79, 7, -77, 6, 73, 30, 90, 61, 
  90, 62, 79, 64, 94, 65, 87, 70, 100, 82, 
  102, 60, 70, 30, 69, 38, 66, 51, 67, 36, 
  53, 22, 57, 20, 60, -7, -1, -60, -10, -43, 
  42, -128, 70, -128, -33, -128, 61, 0, 84, 32, 
  53, 53, 75, 5, 85, 60, 79, 60, 94, 70, 
  86, 48, 54, -1, 52, 37, 66, -14, 23, -12, 
  51, 33, 49, -50, 47, -128, -43, -128, -37, -128, 
  13, -128, 72, -60, -18, -128, 61, 0, 82, 39, 
  64, 66, 74, 56, 72, 43, 68, 43, 86, 62, 
  76, 37, 32, -128, 20, -60, 19, -16, 21, -50, 
  31, -29, 22, -60, 14, -128, -29, -128, -43, -128, 
  -128, -128, 63, -128, -128, -128, 57, -128, 42, 4, 
  69, 53, 43, 9, 52, 17, 54, 25, 71, 37, 
  60, -23, -128, -128, -128, -128, 13, -128, 6, -128, 
  24, -128, -128, -128, 6, -128, -43, -128, -77, -128, 
  -128, -128, 40, -128, -128, -128, 32, -43, 61, -128, 
  37, 54, 54, 11, 31, -12, 61, 4, 65, 39, 
  52, -23, -37, -128, -16, -43, 29, -128, -23, -77, 
  36, -43, 19, -128, 16, -29, -26, -77, -43, -128, 
  -128, -128, 42, -128, -60, -128, 58, -77, 56, -128, 
  -4, 20, 37, -128, -33, -128, -128, -128, -50, -128, 
  25, -128, -128, -128, -33, -14, 42, -128, -23, -128, 
  47, 11, 13, -128, -10, -43, -23, -77, -26, -128, 
};
