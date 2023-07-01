/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/5170b77f_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_5170b77f_nohash_1.cc" \
 */
#include "no_5170b77f_nohash_1.h"


const int g_no_5170b77f_nohash_1_width = 40;
const int g_no_5170b77f_nohash_1_height = 49;
alignas(16) const signed char g_no_5170b77f_nohash_1_data[] = {
  92, 58, 75, 67, 39, 53, 47, 54, 56, 65, 
  85, 53, 53, 37, 43, 23, 31, 17, 37, 11, 
  20, 17, 20, 25, 9, 4, 20, 40, 20, 28, 
  29, -26, 0, -2, 5, 23, 20, 4, -26, -7, 
  82, 45, 48, 25, -20, 0, 14, 40, 48, 13, 
  43, 54, 54, 29, 32, 21, 37, 24, 35, 39, 
  61, 14, -2, 24, 22, 20, 32, 19, -12, -2, 
  34, -3, 4, -4, -18, -6, -2, -10, -18, -16, 
  73, 30, 67, 51, 23, 8, 65, 58, 73, 44, 
  29, 5, 12, 17, 26, -16, 21, 22, 0, 34, 
  54, 13, 6, 19, 36, 19, 51, 43, 7, 12, 
  48, 6, 11, -3, 18, 7, 14, 15, 29, 16, 
  69, 46, 54, 47, 54, 79, 103, 81, 85, 58, 
  74, 30, 44, 49, 36, 4, 27, 36, 42, 42, 
  45, 49, 76, 61, 47, 42, 47, 55, 1, 14, 
  37, 4, 5, -1, 9, 20, 12, -7, 30, 34, 
  60, 33, 49, 14, -8, 37, 56, 29, 55, 45, 
  71, 37, -3, 27, 51, 4, 37, 44, 39, 4, 
  24, 35, 61, 49, 49, 27, 40, 29, -10, -23, 
  21, 7, -1, -14, 21, -12, 7, -60, 7, -18, 
  66, 23, 57, 18, 52, 43, 47, 28, 64, 20, 
  40, 27, 39, -8, 32, 11, 49, 55, 40, 42, 
  60, 54, 38, -3, 53, 21, 37, 31, -18, 4, 
  35, -43, -2, -50, 2, -60, -2, -26, -7, -14, 
  55, 25, 22, -77, 70, 47, 44, 37, 61, 26, 
  47, 9, 53, 38, 20, -1, 46, 30, 48, 31, 
  65, 39, 2, -23, 51, 29, 32, 4, -12, 4, 
  47, 2, -26, -60, 18, -16, 11, -16, -14, -26, 
  57, -8, 56, 24, 61, 50, 42, 1, 27, -8, 
  39, -29, 47, -1, 25, -6, 55, -26, 23, -18, 
  34, -1, -6, -60, 28, -20, 24, -7, -26, 10, 
  50, -16, -20, -37, 30, -50, -1, -37, -4, -128, 
  61, 10, 60, 31, 62, 36, 10, -50, 40, -77, 
  -16, 5, 23, -10, 34, -8, 28, 17, 23, -60, 
  24, -37, -3, -128, -23, -128, 20, -1, -8, 2, 
  55, -23, -37, -43, -3, -128, -29, -77, 2, -128, 
  49, 6, 34, -18, 34, 10, 11, 4, 51, 16, 
  50, 26, 58, 9, 1, 2, 29, 32, 17, 8, 
  36, -16, 19, -29, 29, 16, 34, -37, 4, -23, 
  29, -50, -37, -77, -33, -128, -50, -37, 15, -128, 
  98, 84, 102, 82, 95, 57, 74, 25, 61, 45, 
  50, -6, 47, -10, -18, -60, 23, -128, 6, -26, 
  17, -12, 0, 5, 49, -8, 1, -128, -37, -26, 
  36, -50, -23, -77, -33, -128, -23, -50, -4, -50, 
  124, 103, 122, 99, 118, 96, 114, 91, 86, 77, 
  79, 52, 74, 27, 28, 0, -16, -128, 34, -128, 
  4, -20, 64, 40, 22, -128, 9, -128, 17, 42, 
  69, 22, 54, 45, 15, -8, 19, 1, 43, 26, 
  114, 96, 109, 88, 112, 85, 110, 75, 94, 82, 
  94, 45, 89, 67, 65, 4, -3, -14, 51, -12, 
  12, -23, 94, 79, 87, -50, -1, -10, 47, 44, 
  73, 42, 71, 64, 25, 30, 49, 31, 60, 46, 
  100, 87, 105, 70, 90, 74, 97, 75, 81, 77, 
  90, 53, 102, 89, 79, 19, 25, -16, 49, -37, 
  -7, 39, 89, 77, 99, 7, -2, 23, 51, 42, 
  79, 67, 82, 65, 37, 37, 51, 39, 66, 46, 
  98, 80, 101, 59, 97, 73, 93, 71, 78, 75, 
  94, 37, 94, 77, 77, 39, 42, -50, 86, 57, 
  40, 62, 85, 66, 90, 50, -12, 1, 65, 25, 
  70, 57, 69, -12, 31, 30, 45, 48, 65, 32, 
  93, 74, 92, 58, 84, 49, 87, 58, 86, 74, 
  87, 42, 93, 69, 82, -2, 21, 0, 60, 9, 
  52, 48, 92, 67, 90, 59, 42, 40, 66, 25, 
  71, 54, 69, -14, 62, 53, 65, 42, 64, 53, 
  88, 68, 89, 52, 84, 60, 87, 59, 85, 67, 
  84, 59, 84, 62, 80, 34, 32, 20, 76, 34, 
  59, 67, 90, 65, 81, 58, 40, 52, 86, 43, 
  85, 68, 71, -18, 50, 54, 81, 48, 57, 34, 
  84, 63, 88, 35, 79, 56, 80, 55, 75, 55, 
  78, 34, 75, 53, 61, 40, 31, 2, 78, 49, 
  68, 38, 82, 60, 82, 41, 15, 35, 82, 22, 
  80, 56, 48, -50, 47, 47, 74, 31, 58, 33, 
  77, 56, 83, 44, 77, 58, 78, 54, 68, 43, 
  78, 39, 73, 52, 79, 39, 18, 15, 75, 53, 
  69, 8, 69, 42, 74, 61, 40, 44, 67, 5, 
  49, 4, 33, -26, 56, 53, 67, 64, 64, 29, 
  75, 54, 85, 33, 82, 68, 83, 61, 84, 15, 
  71, 46, 61, 38, 85, 55, 51, 7, 68, 55, 
  65, 37, 72, 37, 68, 59, 45, 57, 85, -6, 
  60, 34, 6, -128, 46, 47, 78, 50, 54, 28, 
  74, 49, 76, 45, 72, 43, 80, 56, 76, 25, 
  56, 2, 67, 30, 57, 2, 60, 36, 71, 40, 
  51, 27, 57, 38, 71, 34, 57, 38, 75, 12, 
  60, 34, 47, -14, 39, 42, 72, 43, 60, 36, 
  76, 43, 70, 50, 63, -2, 76, 15, 80, 49, 
  66, 30, 66, 4, 67, -128, 8, 4, 52, 32, 
  70, 40, 58, 39, 62, -43, 37, 18, 66, 55, 
  43, -8, 23, -33, 55, 30, 60, 40, 50, 16, 
  67, 7, 44, 39, 79, 64, 97, 59, 98, 52, 
  84, 65, 72, -43, 52, 17, 93, 80, 84, 70, 
  81, 48, 62, 67, 89, 64, 90, 64, 92, 85, 
  96, 58, 57, 11, 60, 17, 68, 40, 47, -6, 
  42, -128, 42, 38, 86, 83, 106, 96, 119, 85, 
  99, 75, 71, 1, 64, 80, 116, 99, 119, 94, 
  103, 57, 100, 77, 90, 69, 99, 73, 92, 85, 
  93, 73, 95, 52, 54, -8, 84, 69, 72, 10, 
  -77, -128, 54, 4, 74, 50, 97, 69, 102, 75, 
  94, 65, 67, 37, 86, 86, 100, 83, 106, 79, 
  99, 73, 94, 50, 63, 62, 79, 40, 89, 64, 
  60, 51, 84, 56, 58, -6, 62, 38, 63, -7, 
  -16, -128, -128, -128, 35, 8, 87, 67, 81, 35, 
  74, 4, 51, -10, 79, 67, 97, 71, 84, 49, 
  85, 71, 77, -2, -8, -128, 40, 29, 68, 28, 
  38, -60, 58, 49, 47, 10, 28, 4, 31, -60, 
  24, -128, -128, -128, -33, -128, 42, -20, 69, -10, 
  46, 30, -8, -128, 39, 52, 74, 23, 37, -2, 
  52, 9, 14, -128, -128, -128, -3, -1, 48, -128, 
  -128, -128, 54, 48, 22, -128, -23, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 4, -128, 
  8, -128, -128, -128, -128, -37, 57, -128, -128, -128, 
  16, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 9, -128, -128, -128, 
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
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};