/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/4fd1443e_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_4fd1443e_nohash_3.cc" \
 */
#include "no_4fd1443e_nohash_3.h"


const int g_no_4fd1443e_nohash_3_width = 40;
const int g_no_4fd1443e_nohash_3_height = 49;
alignas(16) const signed char g_no_4fd1443e_nohash_3_data[] = {
  91, 83, 84, 74, 63, 74, 74, 48, 45, 25, 
  54, 42, 26, 44, 63, 39, 31, 7, 50, 48, 
  44, 15, 17, 30, 29, 45, 54, 47, 57, 44, 
  39, 48, 60, 69, 69, 47, 60, 63, 60, 54, 
  83, 75, 81, 62, 56, 39, 59, 45, 60, 32, 
  60, 53, 11, 31, 52, 46, 15, -10, 39, 28, 
  20, 40, 43, 37, 43, 40, 43, 22, 35, 47, 
  54, 22, 35, 37, 40, 35, 58, 60, 57, 18, 
  95, 76, 74, 16, 53, 57, 68, 40, 30, 37, 
  70, 62, 30, -20, 4, 6, 19, 9, 25, -7, 
  -16, -3, 29, 14, 18, 22, 38, -26, 29, 32, 
  31, 20, 40, 4, 59, 51, 46, 45, 48, 19, 
  89, 60, 84, 48, 67, 55, 67, 56, 75, 52, 
  66, 42, 28, -12, 2, -77, 32, 11, 15, 7, 
  15, -6, 31, -14, 14, -18, 41, 34, 42, 59, 
  42, -60, 28, 25, 47, 25, 28, -23, 40, 25, 
  63, 35, 70, 40, 26, 21, 51, 49, 77, 58, 
  41, -1, 1, -29, -18, -8, 56, 28, 7, 23, 
  16, -23, 11, -10, 20, -20, 26, 29, 29, 43, 
  47, -1, 30, 19, 49, 29, 21, -43, 52, 23, 
  51, 30, 62, 30, 48, -128, 9, 18, 32, 20, 
  23, -16, 29, -60, 14, -50, 19, 34, 31, -3, 
  27, 34, 21, -128, 32, 38, 35, 4, 22, 14, 
  34, 47, 52, -4, 54, 1, 15, -7, 46, 11, 
  8, -128, 65, 61, 65, -128, -10, 11, 49, 39, 
  39, -29, 44, -128, -43, -77, -50, -3, 21, 20, 
  18, 8, 4, -1, 30, -60, 22, 2, 16, 24, 
  45, 31, 44, 5, 47, 21, 35, -16, 25, 11, 
  -10, -128, 49, 16, 73, 31, 37, -6, 50, -29, 
  11, -60, 46, -10, 29, -29, 22, 7, 21, -20, 
  -12, -128, 23, 10, 24, -50, 39, -14, 2, -128, 
  2, -12, 29, 25, 30, -16, 47, 12, 36, 11, 
  122, 99, 120, 92, 107, 70, 70, 36, 54, 31, 
  50, 16, 64, 17, 34, 19, 22, -50, -18, -37, 
  20, 16, 59, 37, 20, -23, 37, 4, 8, -128, 
  27, 15, 11, 15, 47, 2, 42, -23, 55, 48, 
  116, 102, 122, 97, 118, 96, 115, 84, 85, 77, 
  100, 73, 87, 66, 50, 50, 67, 44, 57, 13, 
  39, 31, 59, 37, 55, 38, 49, -3, 16, -16, 
  50, 29, 53, 25, 63, 32, 59, 44, 65, 52, 
  114, 93, 110, 84, 103, 87, 105, 90, 86, 81, 
  99, 73, 94, 78, 88, 80, 85, 29, 47, 35, 
  60, 38, 57, 57, 50, 28, 44, 4, 42, 8, 
  50, 16, 44, 10, 59, 40, 57, 40, 67, 35, 
  108, 84, 100, 75, 98, 74, 100, 75, 86, 65, 
  84, 60, 68, 60, 90, 69, 72, 11, 29, 31, 
  69, 30, 70, 61, 52, 23, 20, 38, 33, -33, 
  19, 9, 38, -43, 37, 12, 57, 36, 47, 23, 
  100, 77, 99, 71, 106, 88, 109, 85, 94, 73, 
  80, 31, 65, 69, 113, 97, 116, 83, 89, 70, 
  92, 65, 97, 77, 73, 72, 72, -128, 42, 30, 
  65, 46, 63, 15, 62, 48, 76, 42, 69, 57, 
  84, 59, 84, 56, 90, 77, 112, 94, 105, 63, 
  84, 74, 94, 81, 108, 87, 105, 90, 110, 75, 
  96, 81, 114, 95, 112, 94, 110, 91, 88, 71, 
  85, 61, 56, 29, 52, 36, 76, 50, 55, 19, 
  79, 51, 76, 19, 74, 48, 106, 85, 102, 68, 
  94, 79, 101, 85, 102, 70, 108, 94, 105, 79, 
  97, 72, 99, 78, 95, 65, 93, 63, 82, 66, 
  87, 40, 67, 63, 88, 66, 87, 45, 78, 51, 
  76, 40, 65, -10, 73, 49, 96, 62, 101, 65, 
  94, 74, 102, 75, 100, 73, 93, 58, 79, 54, 
  74, 73, 85, 50, 88, 62, 80, 39, 87, 63, 
  62, 34, 61, 25, 65, 25, 77, 64, 74, 37, 
  71, 17, 44, 17, 79, 59, 91, 59, 102, 67, 
  95, 63, 70, 58, 92, 66, 83, 6, 74, 36, 
  61, 51, 64, 26, 70, 55, 78, 53, 84, 41, 
  76, 48, 31, 12, 70, 46, 68, 52, 79, 51, 
  60, -60, -14, 9, 76, 45, 72, 23, 88, 68, 
  83, 47, 84, 68, 92, 57, 81, 36, 68, 51, 
  75, 47, 64, 30, 80, 33, 82, 48, 76, 34, 
  58, 10, 37, 40, 79, 49, 79, 52, 82, 57, 
  51, -128, -33, 9, 69, 38, 69, 44, 80, 46, 
  47, -20, 55, 46, 85, 52, 75, 59, 63, 9, 
  75, 51, 75, 47, 69, 25, 74, 35, 54, 35, 
  66, -43, 15, 44, 77, 51, 72, 43, 69, 54, 
  45, -128, -37, 7, 65, 31, 60, 36, 81, 55, 
  72, -128, 57, 44, 74, 40, 84, 54, 74, 31, 
  51, 31, 66, 35, 56, 25, 64, 25, 63, 29, 
  40, -50, 0, -50, 56, 27, 64, 39, 57, 35, 
  48, -128, -128, -50, 61, 34, 60, -128, 51, 13, 
  30, -128, 9, -128, 39, 7, 78, 1, 65, 11, 
  60, 46, 59, -18, 12, -128, 47, 23, 74, -18, 
  33, -10, 25, -37, 19, -12, 62, 30, 66, 31, 
  46, -128, -128, -128, 58, 39, 62, -128, -1, -128, 
  15, -128, -77, -50, 52, 22, 65, 11, 53, 43, 
  80, 52, 19, -128, -128, -128, 1, 40, 82, 7, 
  44, 11, 22, -128, 41, -20, 54, 23, 21, -128, 
  37, -128, -128, -26, 70, 47, 64, -128, -128, -128, 
  -128, -128, -128, -128, -6, -128, 56, 6, -10, 14, 
  78, 42, -60, -128, -128, -128, -20, -8, 70, -128, 
  1, -128, 20, -26, 9, -29, 64, 25, 59, -1, 
  32, -128, -128, 6, 70, 8, 28, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -7, -128, 9, 26, 
  63, -128, -77, -128, -128, -128, -128, -128, 15, -128, 
  -20, -128, -33, -128, -77, -128, 37, -33, 50, -128, 
  31, -128, -50, 20, 66, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -18, -128, -128, -128, -128, -29, 
  62, -128, -128, -128, -128, -128, -128, -128, 60, -50, 
  -128, -128, -20, -128, -128, -128, -29, -128, -60, -128, 
  16, -128, -14, -33, 25, -128, -128, -128, -128, -128, 
  -128, -128, 15, -128, -128, -128, -128, -128, -128, -128, 
  -12, -128, -128, -128, -128, -128, -128, -128, -8, -128, 
  -128, -128, -8, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -23, -50, 17, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -8, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 19, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, 24, 67, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 55, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -18, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -16, -128, -128, -128, -128, -128, -128, -128, 
  -23, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, 34, 13, -37, -60, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -12, -77, -128, -128, -128, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 0, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -6, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -2, 19, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -1, -128, -128, -128, -128, -128, -128, -128, 
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
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
};
