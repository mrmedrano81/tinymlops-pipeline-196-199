/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/91b03183_nohash_2.wav" \
 * --output_c_file="features_c_files/no/no_91b03183_nohash_2.cc" \
 */
#include "no_91b03183_nohash_2.h"


const int g_no_91b03183_nohash_2_width = 40;
const int g_no_91b03183_nohash_2_height = 49;
alignas(16) const signed char g_no_91b03183_nohash_2_data[] = {
  53, 34, 45, 35, 42, 54, 44, 4, 23, 20, 
  26, 28, 14, 20, 31, 35, 44, 47, 57, 35, 
  63, 51, 48, 51, 31, 44, 42, 37, 47, 28, 
  31, 17, 0, 4, 5, 7, 9, 20, 9, -26, 
  25, 50, 54, 22, 49, 47, 56, 8, 35, 44, 
  52, 41, 39, 38, 34, 17, 44, 40, 38, 37, 
  60, 62, 67, 11, 57, 57, 49, 32, 49, 28, 
  7, -6, 9, 17, 12, -10, 8, 7, -1, -29, 
  44, 18, 47, 32, 58, 52, 47, 40, 59, 41, 
  30, -20, 5, 35, 41, 32, 40, 33, 33, 25, 
  46, 41, 29, 15, 47, 40, 29, 42, 54, 21, 
  1, -26, 2, 8, 7, -3, 11, -8, -2, -29, 
  46, -26, 21, -18, 20, 23, 53, 38, 34, -8, 
  -3, 27, 46, 34, 49, 8, 40, -7, 40, -3, 
  13, 16, 62, 32, 26, 37, 48, 37, 33, 9, 
  24, -2, 5, -23, 13, 9, 19, -12, -14, -43, 
  8, -1, 14, 8, 21, 38, 61, 28, 52, 36, 
  44, 20, 50, 4, 20, -50, -2, -23, 22, -29, 
  11, -60, 41, 15, 8, -8, 44, 33, 37, 5, 
  2, -18, 4, -26, 15, -8, 20, -50, -23, -77, 
  46, 35, 56, -7, 36, 40, 48, -23, 25, -29, 
  17, 2, 0, -50, 26, 21, 32, 16, 9, -7, 
  39, -18, 19, 11, 23, -14, 21, 23, 38, -14, 
  24, -16, 27, -7, 13, -7, 13, -33, -43, -77, 
  31, -7, 14, -10, 54, 32, 47, -6, -1, -23, 
  2, -77, -1, -37, 30, -37, 33, -23, 1, -3, 
  25, -33, 23, -29, 35, 9, 26, 6, 18, -16, 
  19, -4, 4, -37, -20, -37, 29, 2, -33, -60, 
  52, 49, 55, 5, 56, 18, 45, -43, 28, -33, 
  -2, 4, -10, -128, 12, 8, 48, 12, 24, 19, 
  -12, 20, 52, 9, 35, -23, 35, -14, 44, -7, 
  9, -7, 16, -20, 11, 13, 34, -20, -7, -60, 
  59, 11, 21, -8, 21, -8, 9, -16, 29, -12, 
  -23, -43, 27, -23, -6, 9, 37, 2, 22, -14, 
  24, -29, 21, -2, 9, -77, 34, -16, 9, -77, 
  0, -43, -12, 0, 6, -26, 9, -18, -18, -77, 
  40, 23, 50, 26, 44, -26, 34, -50, 37, 5, 
  -4, -43, -23, -77, -3, -60, 24, 0, 31, 28, 
  40, 29, 32, -8, 19, -50, 39, -10, 20, -8, 
  -8, -43, -23, -77, 4, -37, 1, -43, 4, -60, 
  118, 97, 116, 94, 101, 57, 62, 15, 46, -2, 
  2, 7, -6, -60, -7, -23, 30, -1, 14, -43, 
  38, 22, 14, -26, 25, -16, 22, -23, 33, 9, 
  28, -26, 31, -26, 9, -16, -23, -43, 7, -77, 
  120, 98, 117, 95, 112, 81, 108, 89, 80, 54, 
  67, 30, 32, -8, 8, -26, 27, -10, 17, 6, 
  30, -1, 29, 21, 9, -26, 17, -128, 40, 53, 
  60, 47, 46, -14, 31, 54, 37, 9, 29, -6, 
  113, 94, 104, 83, 111, 86, 104, 91, 98, 67, 
  82, 51, 64, 45, 29, -6, 23, 4, 45, 45, 
  44, 22, 74, 69, 66, 15, 29, -1, 31, 48, 
  62, 4, 11, 11, 51, 73, 75, 20, 48, 27, 
  99, 78, 85, 50, 102, 87, 105, 86, 109, 79, 
  102, 73, 69, 56, 62, 14, 10, 0, 69, 30, 
  61, 24, 104, 87, 72, 16, -8, -128, 30, 65, 
  87, 59, 38, -43, 44, 73, 92, 57, 55, 35, 
  97, 75, 89, 34, 95, 79, 104, 73, 102, 79, 
  99, 61, 74, 30, 20, -128, -16, 31, 77, 58, 
  68, 16, 92, 69, 74, 25, 11, -128, 45, 80, 
  104, 78, 54, 6, 66, 64, 79, 50, 38, 17, 
  92, 71, 90, 63, 95, 75, 98, 62, 93, 58, 
  66, 43, 39, -37, 20, 13, -2, 51, 72, 32, 
  71, 42, 93, 67, 48, -128, 5, -128, 46, 16, 
  73, 56, 61, -33, 87, 52, 45, 28, 45, 35, 
  90, 68, 89, 70, 99, 77, 91, 61, 90, 75, 
  91, 52, -2, 13, 24, 60, 100, 84, 95, 78, 
  85, 65, 77, 43, 77, 66, 87, 63, 78, 40, 
  58, 24, 63, -1, 29, -26, 58, 37, 43, 28, 
  89, 72, 99, 84, 115, 99, 114, 82, 109, 93, 
  107, 63, 105, 93, 112, 95, 120, 100, 124, 102, 
  121, 100, 116, 87, 102, 93, 115, 98, 119, 94, 
  106, 80, 105, 89, 112, 100, 122, 93, 96, 69, 
  78, 62, 95, 74, 109, 90, 109, 83, 107, 85, 
  104, 85, 114, 93, 114, 95, 115, 95, 112, 83, 
  114, 94, 113, 81, 108, 89, 114, 97, 115, 81, 
  102, 89, 112, 74, 94, 78, 105, 81, 97, 81, 
  72, 56, 87, 47, 99, 78, 100, 77, 98, 65, 
  93, 71, 104, 84, 106, 86, 111, 82, 102, 64, 
  104, 82, 99, 66, 92, 75, 103, 82, 103, 76, 
  87, 71, 101, 82, 67, 64, 98, 78, 98, 73, 
  74, 55, 86, 20, 94, 73, 91, 49, 92, 64, 
  90, 72, 99, 70, 102, 85, 106, 65, 78, 52, 
  79, 73, 96, 32, 86, 64, 95, 78, 96, 43, 
  85, 64, 97, 81, 62, 40, 84, 66, 80, 56, 
  69, 46, 78, 2, 92, 66, 84, 42, 81, 54, 
  85, 70, 93, 69, 102, 79, 88, 51, 64, 27, 
  82, 60, 82, 20, 75, 54, 82, 65, 79, 54, 
  78, 52, 86, 80, 77, -8, 60, 60, 70, 41, 
  69, 36, 74, 65, 80, 26, 85, 60, 77, 60, 
  77, 64, 78, 64, 100, 64, 70, -128, 18, -37, 
  50, -3, 51, -20, 55, 14, 70, 37, 60, 34, 
  64, -7, 52, 53, 66, -128, 47, 40, 62, 43, 
  63, 5, 67, 65, 71, -26, 75, 30, 55, -4, 
  34, 48, 75, 64, 90, 30, 45, -128, 16, -128, 
  41, 16, 43, -128, 22, -128, 20, -128, 25, -128, 
  29, -77, 44, 27, 53, -128, -43, -26, 28, -50, 
  -33, -128, 36, 41, 47, -128, 40, -128, 32, 11, 
  20, 26, 82, 68, 69, -128, -128, -128, -128, -128, 
  -14, -43, 2, -128, 0, -128, -50, -128, 19, -128, 
  15, -128, -20, 1, 40, -128, -128, -60, 38, -29, 
  31, -128, -14, 17, 61, 0, 40, -128, 42, -29, 
  14, 14, 70, 48, 47, -128, -128, -128, -60, -128, 
  -77, -128, -16, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  27, -128, -29, -77, 44, -128, -128, -128, -128, -128, 
  -128, 18, 59, -128, -2, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, 11, 9, -50, -128, -128, -128, -128, -128, 
  -128, -128, 19, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, 21, -37, -128, -128, -128, -128, -128, -128, 
  -128, -4, 12, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -60, -77, -128, -128, -128, -128, -128, -128, -128, 
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