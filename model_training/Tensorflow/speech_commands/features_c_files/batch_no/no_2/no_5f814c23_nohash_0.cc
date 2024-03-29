/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/5f814c23_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_5f814c23_nohash_0.cc" \
 */
#include "no_5f814c23_nohash_0.h"


const int g_no_5f814c23_nohash_0_width = 40;
const int g_no_5f814c23_nohash_0_height = 49;
alignas(16) const signed char g_no_5f814c23_nohash_0_data[] = {
  49, 55, 86, 67, 54, 40, 59, 50, 53, 58, 
  56, 50, 52, 40, 37, 17, 14, 20, 40, 17, 
  5, -2, 20, 7, 23, -2, 35, 15, 17, 28, 
  23, -2, 31, 28, 23, 15, 17, 17, 20, -26, 
  60, 62, 79, 71, 82, 70, 68, 46, 53, 47, 
  64, 35, 35, 49, 51, 34, 32, 34, 48, 19, 
  25, -4, -7, 20, 4, 0, -2, 4, 15, 21, 
  29, 23, 18, 5, 8, 22, 29, 10, 24, -8, 
  63, 64, 80, 53, 52, 8, 32, 4, 40, 39, 
  45, 42, 51, 19, 38, 8, 32, 23, 30, 12, 
  14, -7, 14, -14, 2, -7, 23, 8, -3, -3, 
  -3, -4, 16, 2, 10, -6, 5, 13, 19, -6, 
  76, 44, 29, 44, 56, 1, 49, 44, 30, 9, 
  43, 38, 51, 47, 52, 4, 4, -1, 37, 40, 
  12, -1, 9, -16, 0, -10, 18, 16, 24, -20, 
  4, 11, 15, -18, 9, -18, 18, -1, 8, -43, 
  45, 37, 73, 37, 37, -8, -8, 14, 37, 5, 
  67, 35, 53, 22, 52, 21, 19, -20, 23, -4, 
  23, 4, 42, -18, 18, 0, -7, -16, 11, -29, 
  11, -7, -7, -16, 23, -10, 2, -3, -2, -43, 
  43, 26, 27, -26, 57, 5, 8, 17, 39, 4, 
  24, 5, 42, 37, 47, -10, -20, -23, 39, -1, 
  -3, -33, -14, -20, -2, -10, 18, 1, 9, -18, 
  -7, -29, 12, -8, -7, -12, -7, -18, -26, -60, 
  59, 39, 65, 17, 21, -18, 49, 46, 44, -16, 
  61, 34, 34, -60, -20, 0, 30, -20, 23, -23, 
  4, -18, -1, -77, -14, -18, 16, -60, 4, -26, 
  4, -37, 7, -50, -14, -20, 8, -20, 4, -50, 
  23, -20, 52, -3, 32, 26, 47, -10, 14, 20, 
  45, -6, 9, -50, 16, -33, -7, -6, 25, -23, 
  -6, -20, 23, -6, 0, -60, 23, -50, -10, -60, 
  -1, -26, -6, -43, 7, -50, 2, -23, -16, -128, 
  62, 52, 62, 26, 47, -29, -33, 19, 54, -4, 
  6, 9, 47, -16, 32, 15, 7, -50, -33, -33, 
  1, -12, 21, -60, 13, -16, 7, -43, 15, -3, 
  15, -43, 1, -23, 9, -29, 1, -43, -2, -128, 
  -128, -128, 38, 14, 32, 9, 44, -16, 27, 4, 
  20, 4, 16, -33, 12, -2, -14, -128, -7, -12, 
  14, -20, 17, 0, -50, -29, -26, -43, -50, -37, 
  -8, -60, -26, -37, -8, -50, 0, -26, -60, -60, 
  19, -16, 51, 35, 53, -23, 27, -14, 34, 29, 
  50, -2, -3, -60, 33, -14, -33, -77, -16, -14, 
  -6, -60, 13, -12, -12, -77, -16, -128, -50, -60, 
  9, -37, -14, -43, -8, -43, 17, -33, -23, -60, 
  25, -29, 53, -6, 36, -14, 26, -128, -7, -23, 
  49, -20, 19, -128, 9, -10, 25, -12, 25, -128, 
  4, -33, -4, -33, 4, -33, -3, -60, -26, -128, 
  -10, -37, -2, -60, -6, -18, -7, -37, 0, -77, 
  35, 23, 19, -128, -37, -128, 2, -128, 22, -29, 
  4, -77, -29, -18, -14, -7, 21, -43, -16, -77, 
  -12, -128, 10, 11, 9, -29, -18, -60, -2, -23, 
  -7, -43, 4, -29, -20, -50, -23, -33, -10, -128, 
  54, 14, 39, -128, -37, -128, 19, 1, 17, -50, 
  14, -37, -50, -128, -60, -43, 34, -60, -43, -33, 
  21, -20, 6, -20, 18, -50, -29, -50, 14, -43, 
  -29, -60, 17, -50, -37, -50, -4, -77, 1, -60, 
  40, 18, 21, -128, -1, -77, 6, -128, 12, 17, 
  24, -128, 19, -14, -18, -33, 17, -16, 6, -10, 
  -10, -128, -33, -60, -37, -43, -6, -60, -8, -50, 
  -18, -26, 7, -60, -23, -77, -18, -128, -23, -77, 
  121, 100, 120, 99, 119, 96, 107, 85, 105, 83, 
  90, 79, 106, 89, 104, 86, 101, 80, 98, 86, 
  102, 87, 105, 91, 111, 88, 97, 79, 101, 80, 
  88, 79, 92, 74, 91, 74, 94, 75, 89, 72, 
  116, 90, 104, 88, 120, 99, 120, 97, 119, 95, 
  114, 93, 108, 90, 110, 89, 111, 94, 112, 87, 
  105, 84, 103, 92, 113, 93, 113, 91, 100, 88, 
  109, 87, 106, 89, 105, 85, 104, 87, 103, 85, 
  85, 87, 112, 88, 106, 61, 92, 67, 74, -128, 
  -43, -128, 25, -128, -128, -128, -37, -128, -128, -128, 
  -128, -128, 1, -128, 4, -128, -43, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -60, -128, -128, -128, 
  83, 78, 104, 79, 102, 62, 91, 65, 82, -128, 
  -10, -60, 56, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, 74, 64, 67, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -43, -128, -18, -128, 
  77, 47, 90, 72, 99, 67, 89, 57, 85, 37, 
  61, -6, 49, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 47, 31, 69, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  79, 49, 87, 60, 93, 64, 80, 32, 72, -12, 
  24, -128, 23, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 57, 9, 29, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -29, -128, -77, -128, 
  82, 55, 91, 51, 87, 60, 77, 44, 84, 30, 
  65, 30, 11, -128, -128, -128, 1, -128, -14, -43, 
  -60, -4, 104, 86, 92, -20, -60, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -43, -128, -23, -128, 
  82, 50, 89, 22, 70, 47, 74, 36, 73, 27, 
  27, -7, 22, -128, -43, -7, 20, -14, 42, -29, 
  -7, -37, 85, 67, 84, -8, 0, -128, -128, -128, 
  -128, -128, -128, -128, -26, -77, -26, -128, -60, -128, 
  85, 50, 93, 61, 91, 85, 111, 88, 107, 83, 
  75, 51, 62, -128, 53, 76, 112, 98, 122, 99, 
  115, 50, 40, -128, 85, 77, 92, 44, 34, -128, 
  -29, -128, -33, -128, -20, -37, 24, -43, 37, 8, 
  79, 32, 79, 12, 60, 51, 112, 91, 109, 87, 
  93, 61, 79, 47, 85, 87, 113, 94, 102, 81, 
  104, 74, -23, -128, -12, 34, 82, 75, 95, 4, 
  -60, -128, 16, -37, 4, -50, 30, -33, 32, 8, 
  72, 26, 71, -8, 57, 57, 108, 85, 109, 84, 
  94, 61, 79, 69, 107, 90, 111, 60, 77, 65, 
  90, 84, 64, -128, -128, -77, 67, 69, 90, 44, 
  14, -26, 32, 12, 55, 31, 57, 36, 58, 30, 
  63, 17, 62, 4, 58, 55, 90, 67, 102, 56, 
  90, 85, 110, 90, 108, 81, 103, 39, 88, 61, 
  100, 86, 105, 63, 47, 23, 91, 80, 107, 77, 
  -50, -128, -3, -43, 29, -33, 4, -60, 6, -33, 
  34, -20, -2, 28, 59, 39, 50, 65, 85, 58, 
  87, 65, 101, 89, 105, 63, 77, -18, 51, 23, 
  78, 48, 87, 39, 19, 12, 90, 72, 84, 34, 
  -43, -128, -6, -128, 2, -50, 16, -77, 27, -37, 
  29, 30, 46, 35, 49, 30, 59, 69, 81, 73, 
  82, 56, 107, 82, 97, 50, 14, -29, 63, 9, 
  62, 14, 70, -77, -29, 25, 89, 62, 68, -128, 
  5, -128, 4, -128, -10, -128, -1, -20, 27, -29, 
  70, 50, 52, 42, 46, 42, 74, 49, 90, 62, 
  84, 75, 100, 79, 80, -128, 14, -128, -128, -128, 
  -128, -16, 65, -2, 14, -128, -33, -128, -128, -128, 
  15, -50, 21, -33, 29, 11, 49, -8, 42, 19, 
  71, -33, 25, 4, 16, 11, 48, 23, 60, 49, 
  89, 59, 92, 59, 63, -128, -128, -128, -128, -128, 
  -128, -128, 64, -20, -77, -128, -128, -128, -128, -128, 
  -18, -77, -60, -128, -50, -128, -29, -128, 30, -3, 
  73, -33, 27, -12, 33, -33, 49, -20, 27, -128, 
  76, 31, 82, 33, 37, -128, -128, -128, -128, -128, 
  -128, -128, 39, -128, -128, -128, -128, -128, -60, -128, 
  7, -1, -20, -128, -37, -128, -14, -128, -1, -77, 
  78, -10, -43, -128, 4, -2, 37, -128, 16, -128, 
  78, 40, 48, -60, 20, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  20, 14, 1, -128, -128, -128, -128, -128, -50, -128, 
  74, -14, -128, -128, -77, -128, -128, -128, -128, -128, 
  29, -2, 34, -128, 20, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -18, -60, -128, -128, -128, -128, -128, -128, -128, -128, 
  69, -50, -128, -128, -4, -29, 25, -128, -33, -128, 
  -10, -128, -33, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -18, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -50, -128, -37, -128, -23, -43, 
  55, -128, -128, -128, -20, -4, 39, -128, -20, -128, 
  42, 9, 0, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -10, -128, -128, -77, -128, -8, 30, -128, -128, -128, 
  70, 34, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  11, -128, -128, -20, -20, -43, -43, -128, -128, -128, 
  61, -50, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, -33, -4, 4, -33, -12, -128, -128, -128, 
  -4, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -50, -60, -128, -128, -128, -128, -128, 
  4, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, -12, -128, -128, -128, -128, -128, 
  -12, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -14, -128, -77, -128, -128, -128, 
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
