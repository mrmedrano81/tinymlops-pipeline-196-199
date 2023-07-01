/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/aa48c94a_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_aa48c94a_nohash_0.cc" \
 */
#include "yes_aa48c94a_nohash_0.h"


const int g_yes_aa48c94a_nohash_0_width = 40;
const int g_yes_aa48c94a_nohash_0_height = 49;
alignas(16) const signed char g_yes_aa48c94a_nohash_0_data[] = {
  87, 90, 113, 88, 77, 83, 96, 77, 98, 88, 
  111, 89, 95, 81, 91, 75, 77, 74, 81, 82, 
  89, 79, 70, 72, 88, 77, 79, 62, 79, 59, 
  78, 57, 61, 58, 63, 53, 58, 54, 63, 37, 
  79, 79, 102, 80, 82, 65, 70, 63, 83, 74, 
  95, 62, 69, 61, 82, 75, 83, 74, 87, 60, 
  84, 65, 80, 63, 69, 57, 77, 64, 69, 67, 
  74, 57, 65, 55, 65, 43, 66, 54, 58, 39, 
  59, 58, 90, 67, 69, 52, 76, 57, 77, 68, 
  80, 64, 64, 57, 75, 64, 79, 64, 55, 44, 
  62, 30, 74, 61, 67, 63, 72, 50, 61, 53, 
  56, 51, 58, 42, 58, 47, 62, 44, 43, 4, 
  64, 56, 86, 59, 75, 65, 86, 57, 65, 49, 
  83, 61, 82, 68, 80, 39, 70, 39, 79, 61, 
  89, 59, 71, 41, 67, 37, 57, 52, 66, 46, 
  71, 40, 56, 45, 55, 40, 54, 37, 49, 25, 
  57, 55, 80, 43, 69, 44, 81, 56, 86, 59, 
  77, 42, 72, 41, 69, 47, 64, 35, 71, 42, 
  47, 29, 62, 42, 63, 37, 70, 31, 58, 44, 
  68, 39, 49, 15, 35, 19, 50, 31, 55, 42, 
  75, 52, 79, 46, 82, 47, 65, 51, 77, 31, 
  82, 57, 57, 40, 62, 53, 69, 53, 74, 51, 
  59, 27, 64, 43, 60, 34, 55, 35, 52, 11, 
  42, 22, 59, -2, 22, 27, 54, -4, 31, -23, 
  67, 35, 62, 16, 72, 19, 19, 35, 55, 35, 
  65, 2, 58, 36, 45, 21, 71, 29, 59, 30, 
  43, 17, 54, 39, 55, -16, 19, -2, 55, 17, 
  40, -6, 42, 14, 55, 20, 43, 12, 40, -20, 
  47, 36, 64, 18, 61, 30, 35, 38, 36, -3, 
  59, 9, 60, 20, 59, 32, 59, -33, 55, 34, 
  68, 22, 69, 14, 42, 5, 55, 44, 43, 26, 
  49, 15, 47, 20, 49, 4, 34, -16, 28, -50, 
  -18, -14, 49, 14, 65, 21, 14, 16, 44, 29, 
  64, 23, 70, 42, 65, -10, 48, 22, 49, -29, 
  25, -18, 37, -33, 52, 0, 52, 2, 32, -6, 
  36, 19, 45, -14, 38, 1, 40, -4, 30, -33, 
  37, -14, 59, 42, 74, 35, 53, 34, 29, -14, 
  55, -2, 57, 9, 44, -50, 44, 9, 40, -18, 
  52, 22, 48, 1, 42, -128, 31, 11, 49, -12, 
  47, 11, 32, 0, 36, 19, 44, -6, 9, -29, 
  44, -1, 48, -23, 74, 42, 72, 14, -6, 15, 
  67, 18, 35, 4, 44, -43, 45, -7, 54, -1, 
  24, -3, 48, -8, 48, -43, 49, -23, 24, -50, 
  -18, -16, 34, 4, 44, 4, 34, 4, 37, -50, 
  54, 2, 63, 35, 40, -128, 29, -14, 40, -18, 
  47, 30, 54, -14, 28, 25, 51, -60, 62, -3, 
  55, -8, 32, -12, 38, -18, 21, -29, 47, 26, 
  50, 5, 29, 6, 40, 18, 42, 17, 27, -33, 
  -37, -23, 44, -7, 23, -128, 46, 32, 65, 4, 
  26, -1, 55, 8, 55, -12, 24, -4, 41, -128, 
  45, -12, 24, -37, 31, 11, 29, -77, 38, -43, 
  15, -33, 29, -6, 11, -43, 29, -26, 13, -77, 
  37, 10, 55, 10, 54, -6, 49, -77, -20, -60, 
  30, -8, 34, -29, 19, -29, 39, -33, 11, -128, 
  28, -16, 34, 10, 38, -37, 47, 0, 51, -8, 
  42, -43, 45, -16, 29, -33, 18, 7, 1, -33, 
  24, -23, 40, 4, 64, -128, 16, -12, 45, -29, 
  22, 5, 37, -43, 29, -16, 47, -77, 47, -26, 
  5, -128, 4, -43, 19, -12, 22, -23, 27, -43, 
  29, 0, -10, -77, 14, -128, -29, -77, 7, -43, 
  -7, 6, 52, -1, 42, 25, 30, -33, 4, -6, 
  48, -33, 44, -128, 27, 0, 28, -60, 19, -26, 
  9, -60, 32, -128, 12, -43, 36, -7, 21, -37, 
  48, -2, 24, -50, 12, -20, 32, -43, -8, -128, 
  36, -16, 42, -50, 32, -26, -43, -77, 44, -26, 
  29, -14, 19, -2, 27, -77, 28, -23, 11, -77, 
  16, -50, 29, -60, 46, 0, 40, -26, -6, -128, 
  28, -4, 34, -37, 34, -10, 21, -50, 8, -128, 
  57, 27, 51, -8, -128, -128, 53, -77, -23, -43, 
  27, -128, 7, -128, 14, -77, 39, -3, 27, -20, 
  -8, -60, 42, -60, 30, -7, 19, -128, -16, 2, 
  50, -23, 31, -50, -43, -50, 16, -77, 7, -77, 
  -12, -1, 45, -37, 9, -128, 9, -60, -128, -37, 
  44, -12, 38, -29, 21, -4, 51, -50, -20, -60, 
  -16, -20, 9, -1, 21, -50, 38, -60, -6, -50, 
  -4, -128, 16, -128, 12, -33, 19, -60, 15, -77, 
  21, -60, 42, -8, -23, -128, 44, -14, 37, -18, 
  39, -8, 15, -60, 52, -10, 12, -60, 34, -14, 
  46, -4, 34, 1, 31, -43, 24, -2, 33, -4, 
  12, -128, 6, -33, 15, -12, 38, -18, 27, -37, 
  0, -37, 25, -60, 23, -29, 26, -2, 34, -1, 
  48, -14, 5, -77, 32, -29, 21, -7, 7, -128, 
  41, -14, 35, -23, -18, -128, -33, -37, 29, -60, 
  -1, -128, 9, -50, 15, -77, -4, -128, 11, -77, 
  4, -77, 20, -128, 1, 6, 38, -60, 20, -23, 
  20, -128, -14, -77, 33, -128, 13, -77, -3, -16, 
  26, -77, 8, -77, 21, -26, 27, -60, -3, -33, 
  27, -43, -3, -26, 13, -37, 18, -23, -7, -128, 
  28, -43, 7, -128, -50, -128, 4, -128, 34, -50, 
  37, 1, 9, -20, 36, -2, -4, -128, -26, -128, 
  -128, -128, -77, -128, -8, -128, 11, -26, 1, -43, 
  -29, -128, -43, -50, 0, -128, -128, -128, 0, -128, 
  8, -26, 31, -26, -77, -128, -33, -128, -37, -33, 
  27, -128, 21, 7, -6, -128, -26, -50, -37, 0, 
  34, -128, -14, -128, -1, -128, -7, -60, -18, -77, 
  17, -128, -29, -33, -6, -77, -50, -23, -3, -128, 
  5, -43, 25, -37, -18, -43, 26, -4, 20, -77, 
  34, -20, -37, -128, 5, 9, 10, -128, -2, -128, 
  0, -16, 31, -3, -3, -43, -77, -128, -33, -60, 
  14, -128, -18, -128, -3, -60, -6, -128, -20, -77, 
  -8, -77, 24, -20, 36, 19, 34, -29, -23, -128, 
  -33, -77, 19, -10, -16, -128, -2, -128, -8, -50, 
  7, -77, 15, -2, 1, -128, -20, -50, 14, -128, 
  -26, -128, -43, -60, 0, -128, -128, -128, -12, -128, 
  -128, -77, 9, -128, 13, -60, -20, -128, 9, 6, 
  35, -60, 4, -23, -6, -128, -60, -128, 19, -33, 
  11, -20, 25, -77, 9, -128, -20, -43, 17, -77, 
  -29, -77, -128, -128, -20, -128, -8, -128, -43, -128, 
  -128, -128, 5, -128, -128, -77, 4, -33, 27, -128, 
  -29, -128, -3, -128, -37, -50, -29, -128, -8, -128, 
  -128, -128, 14, -128, -2, -128, -20, -128, -7, -50, 
  4, -50, -23, -37, -16, -60, 6, -77, 4, -128, 
  -33, -77, -16, -128, -20, -128, -128, -128, 12, -128, 
  14, -50, -128, -50, 23, -128, -20, -77, 13, -60, 
  7, -77, -43, -128, -43, -50, 28, -128, -12, -128, 
  -43, -29, -6, -128, 14, -77, -23, -128, -23, -128, 
  -4, -128, -128, 9, 73, -16, -50, -128, -10, -77, 
  8, -128, -37, -128, 23, -77, -50, -128, -23, -128, 
  -23, -77, -37, -128, 24, -20, -18, -37, -8, -128, 
  1, -128, -26, -60, 4, -128, -1, -37, -10, -128, 
  80, 60, 59, 28, 73, 8, 32, -1, 44, -128, 
  -60, -20, -33, -77, 14, -43, -37, -128, -37, -128, 
  11, -50, -16, -128, -128, -128, -60, -128, -43, -128, 
  -12, -128, -14, -128, -33, -128, -37, -128, -7, -128, 
  93, 59, 39, -50, 24, -1, 25, -16, -26, -77, 
  24, -7, -16, -128, -60, -128, -33, -128, -20, -128, 
  -37, -50, -7, -128, -29, -128, -128, -128, -128, -128, 
  24, -77, -33, -128, -4, -128, -23, -128, -60, -128, 
  113, 92, 94, 50, 94, 86, 85, 54, 37, 11, 
  62, 49, 69, 13, 55, 21, 24, 5, -26, 15, 
  34, -77, -60, -26, -20, -128, -16, -128, -16, -128, 
  -23, -26, -43, -60, -33, -60, -14, -128, 14, -29, 
  105, 84, 98, 59, 70, 64, 74, 9, 57, 35, 
  44, -4, 37, -26, 21, -37, 18, -60, 26, 37, 
  62, 1, -50, -128, -18, -60, -7, -43, 13, -128, 
  4, -128, -77, -128, -26, -128, -18, -128, 14, 1, 
  96, 75, 89, 33, 87, 76, 88, 50, 50, 32, 
  60, 19, 42, -3, -26, -128, -60, -60, -128, -128, 
  -37, -128, -77, -3, 1, -128, -29, -128, -18, -128, 
  -128, -128, -26, -128, -60, -128, 0, -43, 22, 9, 
  89, 69, 91, 57, 91, 82, 102, 35, 80, 49, 
  65, 30, 64, 25, 44, -23, 13, 14, 12, 14, 
  25, 31, 63, 81, 89, 17, 64, 60, 73, -20, 
  -37, -77, -37, -128, -37, -50, -12, -77, 1, -23, 
  83, 58, 79, 28, 104, 91, 114, 66, 91, 59, 
  49, -2, 24, 34, 35, -43, 34, 16, 39, -20, 
  62, 69, 102, 93, 100, 67, 93, 82, 95, 57, 
  45, 20, 24, -33, 19, -16, 4, 1, 66, 64, 
  70, 26, 55, 4, 102, 79, 97, 81, 114, 79, 
  70, 60, 40, 4, 37, 23, 69, 70, 79, 69, 
  101, 89, 106, 71, 90, 75, 95, 75, 86, 50, 
  42, 7, 40, -8, -60, -128, -29, -60, 1, 2, 
  57, -14, 42, 1, 83, 19, 33, 87, 114, 86, 
  69, 52, 69, 52, 48, 24, 94, 82, 95, 80, 
  104, 85, 100, 63, 95, 60, 88, 26, 62, 11, 
  38, 5, 37, -20, -16, -128, -1, -77, -20, -128, 
  33, -128, -1, 27, 85, 40, 40, 75, 88, 17, 
  72, 63, 73, 66, 63, 36, 93, 72, 97, 74, 
  89, 77, 93, 51, 75, 48, 77, 25, 69, 20, 
  12, -6, 23, -18, 2, -128, -20, -128, -77, -128, 
  53, -128, -60, 19, 73, -60, -128, 74, 93, 40, 
  75, 9, 90, 62, 80, 68, 75, 37, 79, 82, 
  94, 61, 83, 46, 79, 39, 45, -16, 32, -128, 
  0, -3, 31, -43, -77, -33, -4, -18, 28, -26, 
  59, -60, 7, 53, 82, -2, -128, 16, -2, 29, 
  90, 50, 92, 48, 74, 48, 79, 63, 90, 74, 
  92, 52, 76, 34, 74, 45, 70, 52, 65, 17, 
  20, -2, 38, -29, 4, -16, 45, 65, 95, 74, 
  44, -128, -33, 62, 71, -128, -60, -128, -23, 72, 
  89, 43, 87, 54, 85, 19, 67, 47, 80, 50, 
  85, 15, 43, -14, 51, 19, 60, -50, -33, -60, 
  34, -7, -2, -128, -50, -43, 2, 0, 62, -20, 
  -77, -128, -8, 57, 46, -128, -128, -128, 31, 55, 
  69, 52, 57, -16, 56, 0, 62, 14, 49, -7, 
  30, -128, 8, -128, -16, -77, -77, -128, -128, -128, 
  -77, -128, -33, -128, -60, -128, -33, -128, -128, -128, 
  -128, -128, 17, 59, 36, -128, -29, -128, 48, 19, 
  33, 14, 51, 14, 54, -29, -43, -128, 54, -26, 
  46, -128, -18, -128, -128, -77, -60, -128, -128, -128, 
  -77, -128, -128, -128, -128, -60, -37, -128, -77, -128, 
  -128, -128, -4, 41, 41, -128, -50, -1, -20, 52, 
  78, 27, 39, -23, 29, -128, -43, -128, 61, 14, 
  38, -128, -128, -128, -128, -60, -20, -128, -128, -128, 
  -128, -128, -50, -128, -18, -77, 22, -20, 53, 25, 
  -4, -128, -128, 14, 32, -128, -29, -2, 42, -23, 
  35, 2, 1, -50, 55, 16, 48, -50, 13, -128, 
  -2, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -60, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};