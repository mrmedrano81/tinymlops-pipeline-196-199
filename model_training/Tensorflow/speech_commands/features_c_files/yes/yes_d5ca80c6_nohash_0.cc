/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/d5ca80c6_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_d5ca80c6_nohash_0.cc" \
 */
#include "yes_d5ca80c6_nohash_0.h"


const int g_yes_d5ca80c6_nohash_0_width = 40;
const int g_yes_d5ca80c6_nohash_0_height = 49;
alignas(16) const signed char g_yes_d5ca80c6_nohash_0_data[] = {
  89, 74, 80, 50, 55, 54, 61, 59, 56, 46, 
  62, 57, 54, 68, 72, 63, 79, 69, 72, 50, 
  62, 52, 70, 60, 57, 60, 80, 72, 63, 57, 
  58, 64, 74, 64, 65, 57, 56, 59, 60, 50, 
  66, 50, 65, 64, 84, 62, 84, 66, 41, 57, 
  69, 46, 54, 60, 72, 64, 73, 66, 86, 65, 
  60, 62, 78, 55, 72, 63, 64, 50, 75, 65, 
  63, 59, 65, 51, 56, 47, 57, 44, 51, 19, 
  85, 64, 77, 66, 75, 59, 80, 65, 57, 52, 
  79, 59, 54, 24, 60, 72, 86, 61, 80, 59, 
  57, 55, 74, 58, 71, 46, 67, 56, 75, 60, 
  62, 39, 66, 34, 61, 57, 68, 55, 63, 35, 
  68, 40, 43, 51, 65, 16, 37, -128, 49, 54, 
  60, 31, 42, 37, 73, 68, 66, 26, 55, 19, 
  45, 56, 79, 35, 65, 45, 57, 52, 79, 63, 
  64, 50, 67, 57, 74, 56, 65, 32, 64, 52, 
  58, 30, 60, 54, 61, 8, 57, 16, 48, 14, 
  67, 51, 60, 21, 70, 47, 62, 27, 74, 44, 
  68, 53, 64, 52, 60, 43, 66, 35, 69, 42, 
  55, 26, 58, 23, 64, 40, 61, 44, 48, 9, 
  72, 42, 23, 4, 78, 62, 50, 39, 73, 32, 
  52, -6, 44, 46, 58, 16, 51, 25, 39, 24, 
  63, 30, 52, 36, 50, 20, 57, 37, 56, -4, 
  46, -18, 45, 25, 42, 15, 49, 19, 42, -3, 
  34, -43, 47, 30, 66, 30, 33, 9, 59, 34, 
  -3, -60, -10, -4, 32, 7, 29, -2, 23, 11, 
  44, -7, 37, 20, 46, 6, 56, 31, 51, 0, 
  52, 0, 46, 34, 56, 19, 35, -12, 32, -29, 
  62, 18, 15, 6, 50, 39, 25, -12, 35, -16, 
  21, 15, 62, 19, 43, -8, 39, 23, 55, 10, 
  40, -60, 30, 10, 63, 34, 51, 24, 39, 8, 
  56, 21, 34, -23, 32, -29, 31, -7, 49, -1, 
  64, 29, 34, -12, 32, 12, 53, 17, 47, -3, 
  19, -6, 26, -26, 33, -4, 55, 29, 62, 14, 
  30, -77, 25, 61, 72, 49, 62, 21, 61, 59, 
  66, -4, 42, -128, 6, -4, 34, -43, 20, -23, 
  44, -3, 37, -3, 7, 5, 49, -128, 38, -43, 
  9, 4, 57, -50, 25, 12, 84, 45, 58, 36, 
  43, -8, 45, 33, 70, 38, 55, 40, 68, 32, 
  52, -29, 26, -26, 19, -14, 34, -2, 40, -29, 
  34, -3, 55, -128, -128, -26, 29, -60, -10, -43, 
  -8, -20, 36, -77, 35, 21, 83, 64, 50, 29, 
  53, -20, 36, 4, 30, -6, 47, 9, 59, 14, 
  26, -29, 14, -60, 23, -33, 22, -33, 7, -37, 
  58, 36, 46, -50, 36, 4, 52, -37, 7, -60, 
  17, -60, 0, 14, 42, 29, 76, 14, 51, 14, 
  41, -77, 34, 11, 14, -50, 23, -33, 40, -37, 
  8, -16, 33, -60, 7, -77, 8, -50, -26, -128, 
  8, -128, 44, -23, 35, -8, 34, 18, 27, -23, 
  -14, -128, 6, -20, 23, -29, 76, 48, 30, -50, 
  7, -20, -16, -128, -10, -50, -20, -128, -7, -128, 
  16, -26, 27, -37, -8, -128, -3, -60, -4, -128, 
  30, -128, 36, -43, 25, -29, -128, -20, -16, -77, 
  27, -128, -26, -43, 28, -128, 40, -128, -37, -77, 
  21, -29, -12, -128, -4, -128, -4, -128, -6, -128, 
  -6, -60, 9, -43, 1, -128, 9, -128, -6, -128, 
  20, -128, -18, -128, -50, -128, -37, -16, 31, -23, 
  -6, -6, -50, -128, 2, -128, -37, -128, -128, -128, 
  -12, -12, 12, -77, -50, -128, 2, -128, -26, -128, 
  17, -14, -16, -128, -33, -128, 4, -37, 18, -128, 
  38, -77, 19, -77, 27, -12, 35, 19, 24, -77, 
  37, 1, 60, 31, 35, -77, -12, -128, -128, -128, 
  -43, -50, 6, 4, 29, -128, -8, -50, -50, -128, 
  16, -26, 16, -60, -4, -128, -12, -50, 19, -60, 
  2, -16, 54, 2, 7, -128, 11, -128, -29, -128, 
  -77, -128, -18, -128, -20, -128, -128, -128, -128, -60, 
  14, -18, 44, -43, 36, 1, 48, -8, -8, -128, 
  32, -14, 39, -14, 11, -18, -6, -128, -1, -26, 
  19, -43, 15, -128, 7, -20, -128, -128, -23, -128, 
  -77, -128, -128, -77, -43, -128, -128, -128, -128, -128, 
  -43, -128, -8, -128, 55, -2, 39, -26, -6, -77, 
  15, -43, 4, -77, -50, -128, -7, -128, 4, -50, 
  36, -16, -23, -128, -77, -77, -50, -128, 6, -50, 
  21, -128, -18, -128, -23, -128, -128, -128, -128, -128, 
  -33, -128, -14, -10, 40, 19, 46, 2, 0, -128, 
  14, -18, -6, -77, -2, -128, -26, -128, 13, -77, 
  -33, -128, -20, -128, -128, -128, -37, 9, 6, -128, 
  -128, -60, -3, -128, -128, -128, -128, -128, -50, -128, 
  -20, -128, -10, -128, -20, -20, 41, -128, -43, -128, 
  -10, -128, 19, -77, -23, -77, -37, -128, -43, -128, 
  -128, -128, 37, -1, 6, -43, 20, -50, 7, -77, 
  -60, -128, -128, -128, -16, -128, -128, -128, -128, -128, 
  -50, -128, -23, -128, 22, -16, 42, -128, -43, -128, 
  -4, -37, 9, -37, -26, -77, 0, -77, -12, -60, 
  19, -29, 17, -26, -7, -60, 42, -77, -8, -33, 
  -128, -128, -128, -60, -77, -128, -128, -128, -128, -128, 
  -23, -77, -60, -128, 19, -23, 10, -50, -8, -128, 
  -26, -128, -18, -128, -8, -128, -29, -77, -37, -128, 
  -2, -43, 4, -60, 7, -50, 19, -128, -128, -37, 
  -7, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -77, -128, -50, -23, 62, 26, 50, 15, 4, -50, 
  6, -37, -26, -128, 6, -60, 5, -3, 27, -50, 
  -23, -128, -128, -128, -77, -128, -26, -128, -29, -128, 
  -23, -37, -18, -128, -29, -128, -128, -128, -128, -128, 
  2, -128, -26, -128, 66, 43, 50, 0, 20, -26, 
  -60, -4, 49, 6, -26, -128, 10, 11, 19, -77, 
  -7, -50, -128, -128, 19, -20, -60, -37, 15, -20, 
  -12, -43, 12, -128, -128, -128, -128, -128, -128, -128, 
  23, -128, 35, 20, 51, 40, 59, 4, -2, -128, 
  29, 61, 85, 56, 49, 0, 11, -7, 32, -60, 
  -50, -128, 24, -23, -3, -128, -7, -60, -20, -43, 
  -8, -77, -60, -128, -128, -128, -128, -128, -128, -60, 
  9, -14, 42, 5, 36, -18, 40, -60, -60, -128, 
  -14, -10, 58, -16, 33, -23, 17, -50, -1, -128, 
  85, 55, 47, 8, 11, -128, -128, -128, -2, -43, 
  -26, -37, -16, -128, -26, -128, -128, -128, -128, -128, 
  34, 11, 37, -2, -2, 32, 50, -3, -23, -128, 
  -29, -128, -33, -128, -77, -77, -12, -29, -4, -77, 
  100, 93, 110, 94, 107, 67, 73, 45, 65, 44, 
  20, 4, 35, -128, -43, -128, -128, -128, 2, -16, 
  62, 76, 89, 38, 54, 55, 74, 36, 45, 15, 
  82, 73, 86, 61, 85, 81, 66, 14, 45, 12, 
  86, 87, 108, 82, 106, 77, 91, 72, 87, 72, 
  77, 44, 57, 44, 5, 13, 1, 4, 50, 59, 
  89, 87, 104, 74, 90, 75, 94, 68, 71, 68, 
  95, 68, 95, 80, 90, 76, 77, 46, 76, 30, 
  90, 83, 107, 82, 108, 82, 100, 74, 90, 76, 
  89, 72, 85, 67, 70, 51, 50, 54, 80, 77, 
  105, 94, 113, 85, 106, 89, 108, 87, 100, 90, 
  111, 85, 104, 87, 108, 90, 99, 75, 102, 73, 
  90, 75, 104, 83, 112, 90, 104, 78, 101, 79, 
  97, 76, 95, 72, 89, 70, 83, 75, 100, 86, 
  114, 91, 107, 88, 109, 85, 101, 79, 95, 85, 
  100, 75, 103, 87, 112, 89, 110, 84, 108, 91, 
  90, 62, 99, 72, 108, 91, 100, 75, 100, 70, 
  100, 72, 94, 74, 89, 72, 84, 72, 99, 80, 
  109, 80, 97, 83, 106, 75, 92, 65, 91, 76, 
  92, 62, 93, 79, 102, 78, 104, 76, 99, 85, 
  87, 47, 91, 60, 102, 85, 99, 79, 97, 67, 
  95, 68, 89, 72, 89, 70, 87, 72, 96, 79, 
  106, 74, 98, 77, 97, 64, 80, 54, 91, 70, 
  86, 52, 87, 72, 96, 65, 90, 60, 83, 69, 
  84, 34, 83, 49, 95, 78, 99, 80, 92, 65, 
  92, 59, 84, 66, 86, 64, 84, 67, 94, 79, 
  104, 70, 88, 74, 90, 53, 73, 62, 88, 49, 
  82, 55, 82, 66, 89, 62, 89, 49, 76, 54, 
  74, 23, 70, 49, 88, 61, 102, 77, 88, 57, 
  91, 59, 81, 54, 84, 64, 84, 70, 91, 78, 
  99, 55, 83, 63, 88, 47, 68, 63, 90, 56, 
  78, 46, 78, 61, 88, 60, 90, 41, 68, 37, 
  59, 21, 60, 46, 72, 29, 100, 66, 84, 61, 
  82, 63, 83, 50, 82, 61, 84, 67, 94, 77, 
  88, 4, 70, 57, 73, 17, 61, 59, 89, 50, 
  75, 39, 71, 48, 76, 46, 84, 24, 60, 35, 
  43, 17, 49, 32, 49, 34, 95, 49, 75, 63, 
  75, 59, 78, 47, 81, 55, 83, 61, 94, 70, 
  66, -128, 53, 25, 52, -128, 60, 44, 76, -1, 
  38, -12, 45, -12, 54, 9, 57, -23, 29, -29, 
  29, 8, 24, -7, -14, 43, 85, 40, 75, 54, 
  68, 37, 65, 34, 68, 37, 68, 54, 86, 11, 
  -128, -128, -29, -37, -18, -128, 27, -20, 56, -60, 
  -128, -128, -128, -128, -50, -128, -16, -128, -128, -128, 
  28, -18, -37, -128, -60, 11, 52, 40, 61, -14, 
  43, 16, 54, -37, 46, -20, 51, 54, 59, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  45, -37, -60, -128, -7, -128, 44, -4, 44, -50, 
  39, 0, 54, -8, 56, -3, 74, 30, 34, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  50, -77, 4, -128, -20, -128, 23, -128, 39, -7, 
  40, -77, 32, -50, 42, 15, 66, -18, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -23, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 32, -128, 14, -128, 28, 44, 
  80, -12, 57, -12, 34, -128, 9, 46, 49, -6, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  59, 15, 59, -33, -33, -128, 50, 45, 58, 19, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  34, 11, 42, -128, -50, -128, 48, 50, 62, -16, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  31, 39, 13, -128, -12, -60, 49, 58, 69, 35, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -2, -128, 
  62, 57, 29, -43, 31, -16, 61, 64, 81, 39, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  59, 52, 24, 4, 55, -26, 58, 41, 62, 33, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  0, 19, -1, -128, -1, 4, 65, 44, 59, 17, 
};