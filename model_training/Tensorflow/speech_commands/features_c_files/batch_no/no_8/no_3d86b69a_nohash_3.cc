/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/3d86b69a_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_3d86b69a_nohash_3.cc" \
 */
#include "no_3d86b69a_nohash_3.h"


const int g_no_3d86b69a_nohash_3_width = 40;
const int g_no_3d86b69a_nohash_3_height = 49;
alignas(16) const signed char g_no_3d86b69a_nohash_3_data[] = {
  127, 104, 123, 100, 114, 89, 73, 84, 113, 99, 
  112, 86, 106, 83, 92, 77, 81, 71, 81, 76, 
  85, 77, 82, 68, 69, 66, 88, 71, 53, 40, 
  75, 57, 63, 37, 39, 44, 50, 37, 44, 40, 
  110, 88, 103, 65, 108, 89, 98, 60, 69, 39, 
  77, 64, 64, 74, 90, 68, 69, 65, 99, 82, 
  87, 77, 64, 42, 59, 42, 69, 38, 47, 45, 
  84, 61, 40, 40, 69, 59, 59, 43, 36, 22, 
  99, 71, 71, 52, 70, 49, 92, 64, 42, 8, 
  69, 62, 70, 26, 69, 61, 94, 57, 81, 67, 
  81, 67, 72, 30, 50, 34, 44, -1, 27, 27, 
  30, 0, 40, 29, 40, 23, 85, 63, 37, 22, 
  83, 52, 72, 59, 77, 75, 98, 77, 64, -128, 
  32, 30, 69, 78, 85, 66, 89, 59, 57, 53, 
  85, 59, 59, 38, 59, 40, 58, -20, 25, 45, 
  69, 22, 49, 35, 30, 11, 83, 67, 39, 17, 
  80, 48, 66, -128, 82, 75, 94, 75, 54, -128, 
  70, 45, 72, 48, 54, 53, 84, 74, 76, 16, 
  53, 15, 49, 21, 47, 27, 21, -26, 34, 42, 
  63, -37, 26, 11, 28, -14, 62, 46, 25, 11, 
  74, 37, 77, -128, 63, 66, 90, 19, 46, -128, 
  77, 67, 60, 20, 67, 17, 46, 13, 62, 13, 
  49, -20, 52, 34, 50, 15, 34, 12, 58, 5, 
  32, 1, 46, -2, 17, -7, 27, -12, 35, 5, 
  73, 28, 52, -23, 41, -18, 55, -33, 60, 25, 
  84, 57, 45, -29, 51, -29, 42, 24, 43, 37, 
  62, -43, 8, -29, 27, -29, 11, 5, 39, 32, 
  31, -20, 38, 55, 40, 15, 42, -60, 42, -3, 
  78, 51, 48, -14, 55, 6, 54, 10, 36, 4, 
  78, 52, 57, -77, 34, 15, 42, 37, 44, -37, 
  55, -18, 53, 10, 50, -23, -26, 21, 42, -37, 
  -8, -8, 32, 44, 28, 15, 33, -77, 19, -16, 
  82, 55, 84, 36, 66, -128, 57, 56, 55, 39, 
  74, -12, 37, -60, 35, 34, 35, -128, 29, -20, 
  1, -50, 79, 42, 33, -20, -4, 29, 31, 4, 
  -18, 19, 52, 16, 34, 11, 15, -23, 45, 20, 
  67, 29, 60, 34, 24, -26, 75, 63, 92, 44, 
  82, 50, 39, 9, 56, 48, 54, -77, 52, 6, 
  21, -128, 85, 54, 35, -128, 0, 4, 13, -3, 
  -16, -128, 55, 6, 4, -14, -7, -60, 16, -18, 
  68, 30, 66, 40, 45, 10, 76, 65, 65, 33, 
  72, 18, -4, -128, 35, -4, 49, -50, 5, -128, 
  -18, -128, 52, 8, 32, -29, 16, 15, -1, 8, 
  48, 4, 38, -37, 2, -77, -43, -128, -1, -37, 
  65, 31, 64, 42, 57, -8, 57, 45, 39, -128, 
  17, -37, 34, -37, 44, 22, 41, 2, 28, -60, 
  38, -128, 52, 11, 28, -2, 57, -128, 34, -37, 
  24, -77, 25, -37, 45, -43, -50, -128, 4, -43, 
  53, -20, 12, -128, 11, 6, 79, 14, 42, -43, 
  24, -77, 41, -128, 27, 27, 57, -43, 15, -10, 
  41, -20, 19, -77, 16, -26, -50, -128, 51, -60, 
  -7, -128, 4, -14, 59, -8, -14, -128, 14, -43, 
  38, -50, -128, -128, 21, 41, 85, 13, 14, -128, 
  -128, -128, 29, -20, 57, 58, 81, -128, 2, -77, 
  74, 58, 31, -23, 32, -50, -16, -77, 6, -128, 
  -77, -50, -128, -50, -20, -77, -33, -128, -12, -50, 
  -128, -128, -60, -128, -128, 14, 75, -18, 60, -29, 
  -50, -128, 51, -50, 28, 40, 68, -128, -12, -50, 
  39, -16, 35, -8, 41, -33, -4, -43, -43, -128, 
  4, 33, -26, -128, 12, -128, -128, -128, -77, -128, 
  -128, -128, -18, -128, -33, 47, 82, 22, 11, -128, 
  -128, 21, 84, 46, 24, 39, 76, -128, 45, -14, 
  44, -60, -128, -128, 32, -26, 13, 16, 30, -60, 
  34, 54, 11, -128, 40, -128, -77, -128, -128, -128, 
  38, -37, 34, -128, 4, -128, -77, -128, -128, -128, 
  -128, -29, 65, 27, 63, -1, 50, 7, 57, 37, 
  -1, -77, -128, -60, 37, 19, 9, 4, 32, 40, 
  4, 2, 33, -128, 50, 81, 90, 50, 68, -16, 
  49, 2, -7, -128, -128, -128, -128, -128, -43, -128, 
  -128, 0, 58, -37, 13, -128, 21, 72, 67, 30, 
  31, 13, -2, -128, 40, 44, 19, 25, 38, 46, 
  0, -77, 51, 6, 84, 80, 101, 72, 92, 49, 
  36, -50, 9, -7, -23, -128, -128, -128, -60, -128, 
  -20, -128, -43, -14, 59, -128, 26, 55, 55, 11, 
  13, -128, -4, -50, 39, 29, 16, -29, -14, -128, 
  26, -37, 15, -10, 72, 69, 82, 50, 91, 38, 
  49, -2, 48, 40, 54, -128, -128, -128, -128, -128, 
  -128, 4, 46, -10, 60, 0, -2, -128, -128, -128, 
  -77, -43, 42, -50, 27, -3, 13, -128, -77, -128, 
  8, 10, -7, -50, 24, -50, 32, 23, 65, 12, 
  28, -128, 62, 27, 33, -128, -128, -128, 13, -128, 
  -128, 19, 36, -60, 71, 41, 42, -128, -77, -128, 
  34, 16, 42, 0, 51, 50, 42, -7, 23, -12, 
  6, -77, 49, 42, 31, -60, 10, 6, 46, -50, 
  21, -60, -60, -128, 15, -128, -128, -128, 39, -128, 
  -128, -128, -128, -128, 61, 15, 18, -128, 12, -128, 
  -33, -128, -29, -128, 58, 64, 50, -20, 34, -23, 
  41, 1, 4, -128, 6, -128, -20, -37, 1, -128, 
  4, -128, -26, -128, -43, -128, -128, -128, 4, -18, 
  -128, -128, -128, -128, 87, 59, 61, -128, -20, -128, 
  -50, 11, 79, 50, 46, 8, 51, -3, 40, 7, 
  18, -128, -8, -8, 20, -128, -128, -128, -37, -128, 
  52, 31, 88, 45, 68, 19, -128, 9, 44, -77, 
  -128, -128, -60, -1, 64, 40, 69, -128, -77, -128, 
  0, 63, 111, 89, 43, -128, -4, -8, 68, 47, 
  -23, -128, 29, 34, 27, -128, -128, -128, -128, -33, 
  82, 77, 101, 64, 85, 11, -20, -60, 35, 25, 
  -23, -18, 39, -77, 63, 34, -4, -128, 1, -128, 
  37, 45, 89, 75, 95, -60, 45, 37, 97, 74, 
  16, -128, 29, -23, 11, -128, -128, -128, 1, 27, 
  74, 67, 83, 69, 79, 29, 39, -128, -128, -128, 
  -128, 11, 75, 30, -2, -7, 18, -6, 0, -128, 
  26, -18, 94, 90, 113, 42, 50, 46, 99, 75, 
  22, -128, 30, -8, -10, -128, -128, -128, 2, 25, 
  92, 76, 100, 88, 93, 50, 73, 59, 53, -1, 
  4, -2, 75, 1, -43, -128, 33, 69, 68, -23, 
  62, 24, 96, 79, 107, 87, 67, 64, 107, 86, 
  50, 16, 56, -37, 50, -128, 7, 7, 45, 44, 
  76, 67, 99, 84, 96, 68, 66, 31, 4, -26, 
  12, -128, -23, -128, -128, -128, -16, 54, 65, -37, 
  62, 42, 83, 57, 92, 70, 72, 39, 95, 73, 
  63, 13, 54, -12, 45, -77, -12, 2, 39, 38, 
  78, 63, 94, 77, 99, 66, 82, 61, 75, 53, 
  68, 14, 52, -4, -8, -128, -10, -60, 26, 34, 
  42, 25, 65, 63, 94, 72, 82, 20, 66, 31, 
  48, -6, 30, -128, 42, -50, 4, -8, 38, 24, 
  62, 51, 89, 64, 95, 41, 64, 54, 82, 49, 
  61, 14, -10, -43, 9, -43, 19, -50, 48, -33, 
  18, 14, 58, 12, 81, 68, 76, 23, 87, 62, 
  49, 7, 36, 1, 40, -37, 18, 4, 42, 32, 
  58, 46, 89, -1, 75, 67, 72, 8, 9, -128, 
  -23, -128, -29, -77, -128, -128, -128, -128, -33, -128, 
  4, -128, 46, 42, 74, 33, 47, -43, 84, 56, 
  55, -7, 38, 1, 28, -128, 7, -33, 17, 25, 
  47, 39, 85, -8, 65, 62, 74, -14, 54, -33, 
  -12, -128, -128, -128, -128, -128, -128, -128, -23, -128, 
  -60, -128, 65, 4, 64, 44, 34, 22, 65, 43, 
  37, -3, 43, -12, 32, -77, -43, -50, 25, 5, 
  46, 35, 84, 34, 84, 75, 90, -128, 20, -60, 
  45, -128, -128, -77, -43, -128, -16, -128, 39, -50, 
  4, -50, 1, 19, 72, 70, 49, 5, 67, 34, 
  46, -128, 35, -20, 41, -128, -77, -77, 12, 16, 
  36, 19, 75, 46, 86, 69, 88, -128, 28, -16, 
  44, -128, -128, -77, -50, -128, -128, -43, -20, -128, 
  -16, 17, 61, 30, 80, 75, 66, 47, 64, 26, 
  49, 8, 54, -6, 34, -77, -7, -43, 10, -6, 
  32, -14, 65, 49, 88, 70, 94, 61, 67, -128, 
  -77, -128, -128, -128, 56, 35, -128, -128, -128, -37, 
  -6, 47, 92, 47, 82, 67, 83, 27, 28, -60, 
  61, -18, 35, -20, 23, -128, -10, -128, 24, 5, 
  35, -33, 65, 52, 87, 54, 82, 59, 76, 22, 
  27, -50, -50, -77, 77, 66, 37, -128, -77, -7, 
  34, 36, 84, 40, 79, 60, 81, 34, 54, 1, 
  48, -43, 33, -50, 31, -128, -23, -128, 24, 1, 
  -1, -128, 22, -20, 76, 79, 106, 83, 99, 41, 
  74, 51, 56, 50, 86, 72, 46, -128, 18, 16, 
  45, 64, 85, 50, 82, 70, 100, 65, 70, 29, 
  44, -3, 35, -20, 51, -128, -6, -50, 18, -26, 
  -128, -128, -12, -23, 80, 87, 107, 90, 105, 74, 
  99, 63, 106, 87, 92, 71, -128, -128, -128, -128, 
  70, 71, 55, 19, 60, 54, 95, 70, 66, 37, 
  26, -26, 32, -26, 26, -43, 65, 47, 27, -10, 
  -50, -77, 49, 0, 69, 65, 89, 86, 99, 86, 
  110, 84, 115, 92, 78, 46, 67, -128, -8, -77, 
  27, 26, 70, 17, 62, -6, 87, 60, 59, 10, 
  20, -77, 20, -29, 27, -50, 71, 48, 18, -18, 
  -29, -12, 52, -37, 56, 18, 65, 35, 81, 84, 
  102, 85, 105, 71, 65, -16, 6, -128, 0, -77, 
  0, -50, 54, -33, 32, -20, 84, 55, 42, -33, 
  67, 23, 33, 7, 27, -16, 62, 39, 9, -16, 
  38, 14, 49, -128, 12, -10, 83, 58, 79, 74, 
  95, 80, 94, 59, 57, -23, -60, -128, -60, -128, 
  10, 23, 54, -60, -128, -128, 74, 43, 20, -128, 
  64, 15, 12, -29, 27, -60, 44, 17, 16, -16, 
  29, -128, -37, 17, 49, 46, 85, 57, 97, 45, 
  74, 79, 75, -8, 15, -128, -60, -128, -50, -128, 
  44, 4, 21, -77, -16, 0, 80, 57, 53, -26, 
  80, 52, 2, -50, 48, -60, 69, 54, 27, -18, 
  19, -128, -128, -128, 35, 27, 77, 68, 97, 79, 
  107, 86, 34, -128, -128, -128, -10, -50, -128, -128, 
  -18, 46, 60, 14, 22, -23, 60, 59, 61, -7, 
  99, 76, 23, -20, 29, -128, 40, 2, 22, -50, 
  -128, -128, -128, -128, 40, -23, 70, 56, 72, 55, 
  90, 54, 43, -37, 0, -128, 26, 59, 8, -128, 
  45, -77, 34, 0, 45, 20, 63, 47, 56, -3, 
  80, 40, -43, -128, -128, -128, 17, -3, 8, -128, 
  -128, -128, -128, -128, -128, -8, 56, -29, -128, 20, 
  74, 51, 23, -128, -128, -128, 11, 45, 14, -128, 
  9, -128, 19, -50, -10, -128, 11, 14, 24, -128, 
  65, 26, -50, -128, -128, -128, -26, 23, 45, -128, 
  -14, -128, -128, -128, -128, -128, -20, -43, 55, 47, 
  62, 34, -128, -128, -128, -128, -77, -128, -128, -128, 
  -23, -128, -18, -128, -128, -128, -77, 2, -128, -128, 
  32, -43, -128, -128, -128, -128, -128, -128, -77, -128, 
  1, -128, -128, -128, -128, -128, 49, -12, -60, -33, 
  43, -23, -128, -128, -128, -128, 30, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, 1, -77, -128, 
  -128, -128, -29, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -29, -77, 
  -12, -128, -128, -128, -128, -128, 58, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 19, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
