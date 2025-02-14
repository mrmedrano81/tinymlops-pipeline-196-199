/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/43fc47a7_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_43fc47a7_nohash_1.cc" \
 */
#include "yes_43fc47a7_nohash_1.h"


const int g_yes_43fc47a7_nohash_1_width = 40;
const int g_yes_43fc47a7_nohash_1_height = 49;
alignas(16) const signed char g_yes_43fc47a7_nohash_1_data[] = {
  95, 87, 100, 77, 80, 69, 68, 64, 62, 59, 
  79, 63, 58, 54, 74, 57, 64, 58, 77, 60, 
  65, 58, 57, 34, 44, 39, 47, 35, 51, 64, 
  69, 67, 76, 75, 83, 77, 82, 70, 81, 70, 
  93, 54, 59, 61, 79, 67, 75, 64, 65, 57, 
  28, 54, 74, 52, 70, 48, 72, 68, 70, 58, 
  64, 40, 46, 53, 47, 34, 40, 35, 39, 24, 
  50, 63, 74, 61, 76, 49, 72, 65, 75, 63, 
  91, 69, 76, 63, 84, 50, 63, 46, 59, 32, 
  46, 47, 55, 11, 63, 65, 56, 34, 50, 32, 
  59, 42, 54, 27, 44, 48, 49, 33, 47, 49, 
  60, 42, 59, 42, 62, 47, 70, 46, 70, 42, 
  89, 69, 49, 60, 79, 45, 60, 55, 75, 48, 
  52, 21, 49, 14, 57, -7, 44, 29, 56, 42, 
  64, 14, 34, 16, 24, -7, 29, 31, 46, 2, 
  47, 43, 69, 44, 59, 53, 67, 56, 70, 36, 
  78, 58, 83, 50, 46, 18, 45, 24, 46, 32, 
  45, 8, 57, 47, 36, 37, 65, 19, 60, 29, 
  47, 29, 49, 25, 23, 12, 34, -12, 46, 29, 
  63, 35, 59, 25, 60, 34, 62, 44, 70, 30, 
  74, 32, 62, 57, 71, 40, 53, -7, 29, 36, 
  61, 18, 47, 35, 59, 23, 24, 17, 48, -33, 
  11, 24, 25, 8, 44, 18, 20, -18, 25, -1, 
  52, 37, 64, 41, 54, 35, 69, 16, 45, 14, 
  80, 53, 50, 34, 59, 2, 41, -16, 34, -14, 
  24, -8, 36, 24, 59, 48, 58, 28, 58, -20, 
  40, 22, 61, -60, 22, -3, 29, -10, 39, 27, 
  52, 27, 52, 25, 48, 34, 55, 33, 55, 13, 
  73, 48, 40, 16, 56, 37, 47, 26, 42, 41, 
  60, 14, 32, 29, 36, 4, 37, 19, 52, 24, 
  34, -77, 1, -10, 2, 4, 16, -16, 34, 16, 
  54, -3, 49, 40, 62, 27, 61, 29, 60, 23, 
  26, -128, 50, -14, 52, 40, 68, 46, 19, -6, 
  21, -60, 39, -18, 55, 40, 55, 13, 2, -3, 
  45, 4, 39, 4, 29, -37, 7, -6, 29, -16, 
  25, -14, 29, -1, 52, 30, 44, 14, 42, -7, 
  60, -7, 61, -4, 31, -128, 11, -50, 50, -6, 
  35, -4, 18, 35, 36, -37, 41, 39, 49, 9, 
  39, 11, 39, -10, 15, -1, 26, 17, 35, 4, 
  38, -6, 48, 6, 42, 19, 47, 25, 37, -10, 
  52, 19, 43, -43, 18, 4, 40, -6, 44, 14, 
  31, -33, -14, -16, 39, -20, 15, 13, 41, -60, 
  24, 11, 43, -77, 34, -12, 20, -43, 11, -26, 
  29, -20, 51, 22, 23, -128, 38, -26, 30, -18, 
  59, 32, 60, 9, 35, 16, 67, 10, 11, -7, 
  41, 0, 0, -29, 17, -23, 23, 7, 42, -14, 
  40, 4, -43, -50, 4, -60, 19, -20, 2, -29, 
  23, -4, 19, -60, 36, -23, 29, 21, 43, 19, 
  32, -128, 32, -128, 35, -1, 50, -128, -29, -50, 
  39, -37, 39, 9, 21, -77, 48, -60, -20, -26, 
  39, 15, 21, -50, 32, -33, 0, -128, 19, -43, 
  37, -60, 43, -14, 49, 1, 39, -37, 28, -20, 
  11, -128, 50, -33, 37, 22, 14, 7, 12, -128, 
  9, 11, 16, -4, 36, -4, 18, -77, 29, -14, 
  48, -18, 16, 1, 31, 5, 32, -18, 2, -16, 
  8, -8, 27, -4, 47, -18, 35, -33, 21, -12, 
  40, -7, -26, -128, -33, -128, -1, -128, 4, -60, 
  -33, -128, -33, -60, 29, 1, 21, -128, 18, -43, 
  -7, -50, -26, -128, 6, -29, 9, -60, -20, -128, 
  -8, -77, 39, -26, 31, -8, 29, -50, 35, -77, 
  -6, -128, 44, -33, -128, -128, 36, 7, 17, -43, 
  11, -128, 6, -128, 15, -37, 6, -1, -29, -29, 
  36, 16, 17, -37, 15, -128, -4, -128, 11, -29, 
  24, -50, 11, -60, 37, -10, 31, -23, 31, -43, 
  52, 19, 41, 7, 36, -10, 9, -50, -7, -128, 
  -43, -1, 16, -77, 2, -10, 36, -128, 5, -23, 
  4, -10, 26, -29, -26, -128, -29, -29, 20, -50, 
  13, -37, -23, -128, 48, -23, 17, -37, 29, -29, 
  -29, -128, -14, -128, 25, -43, 24, -128, 21, 22, 
  37, -26, 21, -10, 38, -37, 9, -26, 42, 5, 
  6, -128, -23, -128, -14, -60, -23, -77, -29, -128, 
  10, -23, 24, -37, 33, 2, 39, -23, 23, -60, 
  27, -128, -128, -128, 19, -128, 4, -128, 0, -128, 
  16, -26, 33, -18, 51, -4, 23, -29, -12, -23, 
  21, -37, -23, -16, 5, -43, -14, -50, 13, -33, 
  11, -128, 17, -128, 17, -6, 28, -26, 36, -50, 
  37, 25, 64, 54, 79, 53, 55, 25, 59, 32, 
  68, 46, 68, 44, 47, 29, 59, 40, 57, 39, 
  61, 19, 38, -3, 69, 64, 74, 65, 70, 52, 
  58, 35, 74, 68, 89, 59, 80, 37, 55, 9, 
  -43, -43, 62, -60, 46, 35, 55, 2, -7, -77, 
  40, -77, -128, -128, 17, -16, -60, -128, 4, -12, 
  7, -29, 4, -37, -29, -128, -37, -60, 17, -7, 
  32, 25, 57, 20, 48, 9, 65, 52, 81, 66, 
  39, -37, 38, 27, 47, -50, -6, -60, 4, -77, 
  25, -128, -33, -128, -77, -77, -10, -128, -18, -50, 
  14, -23, -14, -128, -128, -128, -60, -128, 13, -20, 
  11, -60, 42, -2, 45, -23, 51, 38, 74, 53, 
  28, -60, 11, -128, 7, -128, -128, -128, -37, -128, 
  -8, -33, -23, -50, -1, -50, 18, -60, 34, -26, 
  -1, -128, 21, -128, -18, -128, -33, -128, -26, -77, 
  -23, -128, -7, -128, -6, -128, -60, -128, -4, -128, 
  32, 5, -37, -16, 46, -37, 18, -128, -14, -20, 
  -26, -128, 4, -77, -14, -128, -3, -128, -12, -128, 
  -26, -128, -29, -77, -77, -128, -23, -128, -29, -128, 
  -12, -128, -18, -128, 4, -77, 6, -128, -2, -128, 
  -4, -128, 31, -77, -128, -128, 21, -33, -128, -128, 
  -60, -128, 15, -77, -16, -128, -43, -29, 25, -77, 
  -128, -128, -8, -128, -37, -128, -128, -128, -8, -128, 
  -33, -128, -43, -128, -14, -128, -20, -128, -77, -128, 
  -6, -26, -2, -128, -33, -60, 4, -50, 22, -128, 
  -50, -33, 2, -128, -77, -128, 5, -128, -128, -128, 
  -16, -128, -16, -77, -128, -128, -29, -128, -37, -128, 
  -6, -37, 9, -128, -33, -128, -23, -128, -2, -128, 
  75, 38, 29, -77, -26, -60, 25, -37, -12, -128, 
  -50, -128, -6, -128, -37, -128, -10, -128, -23, -128, 
  9, -128, 9, -77, -50, -128, -33, -128, -128, -128, 
  22, -23, -50, -128, -128, -128, -12, -128, -77, -128, 
  108, 79, 108, 89, 88, 68, 59, -128, -77, -128, 
  8, -3, -7, -128, -128, -128, 4, -77, -128, -128, 
  -128, -128, -20, -128, 6, -128, -16, -128, -60, -18, 
  69, 44, -37, -128, -1, -128, -8, -128, -37, -128, 
  100, 64, 104, 85, 89, 70, 81, -2, 31, -60, 
  23, -2, -3, -37, -50, -128, -43, -128, -23, -128, 
  -3, -26, -7, 6, 32, -50, 7, -37, 48, 54, 
  85, 56, 8, -60, 6, -60, 19, -43, -7, -37, 
  101, 74, 106, 92, 112, 75, 95, 60, 79, 47, 
  69, 30, 57, 2, 37, -37, -14, 31, -3, -128, 
  38, 34, 72, 85, 107, 77, 100, 82, 99, 77, 
  101, 83, 86, 54, 57, 37, 61, 5, 64, 46, 
  93, 56, 103, 77, 106, 98, 117, 91, 100, 77, 
  85, 72, 76, 44, 61, 53, 69, 51, 76, 66, 
  89, 85, 105, 94, 105, 90, 110, 84, 97, 84, 
  109, 87, 102, 78, 78, 53, 94, 72, 89, 72, 
  83, 47, 82, -1, 104, 85, 108, 98, 116, 91, 
  104, 77, 91, 77, 92, 75, 94, 83, 94, 88, 
  111, 94, 115, 69, 98, 74, 82, 55, 75, 64, 
  92, 64, 84, 70, 78, 50, 88, 71, 95, 77, 
  69, 51, 71, -20, 86, 23, 88, 68, 119, 96, 
  110, 84, 99, 79, 100, 80, 100, 85, 108, 95, 
  116, 81, 93, 74, 97, 67, 71, 49, 77, 59, 
  83, 40, 79, 63, 76, 34, 81, 57, 73, 49, 
  50, 55, 49, 7, 68, -8, 64, 62, 91, 87, 
  110, 75, 95, 71, 94, 69, 95, 72, 103, 80, 
  92, 40, 69, 50, 85, 35, 45, -2, 51, 20, 
  56, -50, 42, 39, 57, 20, 73, 54, 70, 35, 
  54, 50, 49, -60, 16, -128, -128, -128, -29, -128, 
  55, 39, 54, -128, 22, -60, 32, -50, 45, -43, 
  9, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 54, -4, 52, -18, 38, -37, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  29, 46, 45, -128, 48, 16, -33, -128, 8, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -128, -128, 
  -128, -128, -128, -128, 37, -50, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -33, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -77, -128, -128, -128, 52, -2, 0, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -14, -128, 37, -14, 17, -128, 9, -128, 
  -128, -128, -50, -128, -77, -128, 2, 13, 49, -50, 
  42, -43, 65, 44, 78, 68, 73, 43, 60, 19, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -29, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -16, -77, 39, -128, 
  -16, -77, 27, 1, 75, 60, 66, 38, 67, 42, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -77, -6, -77, 16, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -77, -128, 45, 45, 84, 54, 68, 59, 78, 63, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -60, -33, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -23, -23, 25, -60, 
  28, -128, -1, 50, 85, 46, 50, 36, 71, 52, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -18, -128, 
  -50, -128, 2, -14, 57, 0, -18, -77, 35, 0, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 21, -128, 
  -43, -128, 31, 47, 74, 1, 79, 46, 72, 26, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -23, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -20, -128, 
  30, -33, 55, 18, 80, 55, 61, 42, 73, 42, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -3, -128, 
  -20, -20, 52, 15, 74, 48, 59, -1, 51, 32, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -77, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  7, -128, 49, 49, 62, 21, 22, -60, 50, -7, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -16, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -43, -60, 
  46, -16, 58, 19, 55, -29, -77, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -77, -128, -29, -77, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, 4, 
  24, -128, 29, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -10, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
