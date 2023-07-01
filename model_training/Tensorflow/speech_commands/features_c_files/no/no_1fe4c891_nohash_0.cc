/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/1fe4c891_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_1fe4c891_nohash_0.cc" \
 */
#include "no_1fe4c891_nohash_0.h"


const int g_no_1fe4c891_nohash_0_width = 40;
const int g_no_1fe4c891_nohash_0_height = 49;
alignas(16) const signed char g_no_1fe4c891_nohash_0_data[] = {
  70, 58, 67, 67, 71, 68, 55, 57, 50, 48, 
  65, 54, 35, 61, 57, 45, 40, 37, 54, 28, 
  42, 57, 57, 44, 59, 40, 43, 44, 54, 59, 
  42, 45, 43, 47, 59, 53, 49, 50, 56, 42, 
  39, 50, 29, 38, 57, 63, 67, 34, 55, 46, 
  39, 28, 43, 48, 52, 27, 26, 39, 48, 50, 
  52, 47, 63, 45, 52, 52, 59, 51, 54, 39, 
  34, 38, 45, 40, 53, 45, 55, 52, 61, 24, 
  63, 67, 84, 63, 68, 60, 67, 50, 58, 38, 
  58, 49, 58, 34, 70, 58, 67, 35, 43, 36, 
  16, 21, 39, 25, 49, 36, 42, 22, 47, 36, 
  40, 4, 32, 20, 45, 34, 47, 41, 47, 14, 
  45, 10, 48, 49, 57, 29, 48, 40, 48, 40, 
  59, 25, 55, 47, 44, 4, 27, 27, 55, 45, 
  41, 24, 36, 34, 49, 20, 45, 35, 51, 30, 
  45, -3, 18, 16, 40, 19, 33, 36, 54, 8, 
  39, 34, 43, 24, 47, 40, 51, 10, 49, 8, 
  -37, -60, 35, 25, 47, 5, 38, 40, 50, 4, 
  25, 7, 44, 19, 47, 15, 37, 32, 57, 25, 
  34, 4, 14, -26, 9, -4, 48, 29, 54, -2, 
  -4, -14, 34, -14, 54, 29, 45, -3, -37, -37, 
  15, 4, 24, -18, 29, -18, -3, -4, 40, -8, 
  25, 21, 41, 15, 27, -16, 22, 25, 38, 14, 
  35, 4, 27, 4, 42, 4, 28, -4, 45, 11, 
  57, 28, 69, 45, 59, 4, 58, 32, 44, 27, 
  26, -7, 39, 21, 59, 10, 62, 34, 29, 11, 
  39, -10, 11, -6, 25, 17, 20, 18, 24, 10, 
  36, 17, 23, -8, 36, 16, 44, 25, 38, -16, 
  44, 7, 29, -128, 51, 44, 39, 9, 40, 14, 
  14, 1, 43, 14, 52, 4, 6, 10, 47, -50, 
  35, 9, 42, -3, 56, 36, 45, -2, 36, -23, 
  26, 19, 27, 0, 30, 4, 10, -7, 16, -37, 
  39, -8, 36, 9, 60, 17, 35, 22, 37, 0, 
  34, -43, 37, -77, -23, -50, 44, 18, 47, -1, 
  11, -37, 30, 13, 38, -29, 18, -3, 24, -29, 
  9, -20, 9, -6, 36, -18, 46, 27, 40, 2, 
  27, -23, 42, 25, 35, -6, 10, -60, 34, 9, 
  48, -4, -60, -128, -128, -60, 24, -8, 37, -43, 
  38, -20, 42, 12, 31, 4, 24, -23, 47, -37, 
  37, -23, 4, 7, 33, -4, 12, -2, 35, -12, 
  46, 19, 11, 5, 49, 9, 47, -18, 6, -10, 
  41, 39, 43, 22, 24, 22, 32, -23, 34, -4, 
  26, 0, 48, 44, 45, -50, -3, -10, 28, -50, 
  15, -18, 14, -12, 17, -26, 31, 5, 46, -8, 
  44, -37, 40, 2, 34, -128, 45, -1, 37, 54, 
  75, 45, 57, 17, 14, -128, -23, -33, 31, -37, 
  26, 24, 27, 25, 14, -12, 14, -60, -2, -8, 
  19, -7, 21, -23, 14, -29, -4, -77, 19, -26, 
  78, 64, 94, 69, 74, 38, 32, -128, 34, 65, 
  94, 65, 76, 34, 45, 19, 32, -7, 39, -1, 
  11, -77, 52, 30, 34, 7, 43, -18, 42, 0, 
  -7, 4, 43, -12, 16, 16, 36, 0, 27, -43, 
  122, 99, 120, 100, 122, 95, 109, 84, 97, 88, 
  114, 94, 104, 65, 56, 19, 61, 44, 73, 54, 
  94, 84, 100, 86, 92, 67, 83, 52, 50, 23, 
  25, -6, 20, -60, 25, -2, 42, -4, 35, 4, 
  85, 80, 101, 96, 119, 99, 123, 98, 118, 91, 
  109, 82, 107, 95, 110, 92, 110, 95, 120, 96, 
  116, 94, 104, 95, 119, 99, 121, 99, 115, 95, 
  114, 72, 75, 34, 47, 17, 47, 15, 44, 24, 
  94, 80, 107, 84, 98, 84, 108, 96, 113, 88, 
  106, 88, 113, 91, 114, 91, 118, 97, 113, 89, 
  109, 90, 110, 89, 105, 74, 102, 80, 99, 69, 
  100, 85, 79, 33, 58, 49, 74, 57, 55, 39, 
  86, 71, 97, 67, 87, 72, 105, 85, 105, 78, 
  99, 79, 104, 84, 105, 85, 111, 79, 98, 77, 
  102, 76, 107, 84, 107, 81, 110, 87, 109, 72, 
  89, 59, 65, 31, 59, 52, 59, 27, 60, 40, 
  84, 65, 91, 54, 81, 60, 104, 79, 103, 65, 
  100, 77, 102, 81, 102, 88, 108, 74, 91, 70, 
  96, 73, 96, 74, 97, 78, 110, 85, 105, 75, 
  97, 60, 68, 50, 85, 86, 100, 60, 67, 40, 
  78, 52, 90, 54, 79, 57, 95, 60, 94, 52, 
  97, 65, 93, 67, 97, 82, 99, 45, 73, 57, 
  82, 54, 95, 64, 87, 55, 90, 53, 77, 59, 
  89, 36, 69, 58, 97, 84, 104, 84, 84, 46, 
  69, 24, 86, 47, 73, 49, 87, 44, 82, 48, 
  77, 37, 86, 56, 84, 60, 69, 16, 52, 29, 
  62, 29, 84, 41, 69, 48, 83, 29, 63, 36, 
  77, -10, 51, 23, 66, 39, 84, 61, 76, 42, 
  69, 28, 82, 36, 70, 54, 86, 33, 54, 4, 
  50, 36, 77, 62, 97, 29, 48, -128, 14, -128, 
  54, 34, 66, -37, 39, 37, 64, -77, 8, -29, 
  49, -128, 39, -37, 15, -128, 52, -8, 60, 17, 
  59, -1, 72, 0, 62, 52, 78, 24, 48, -1, 
  55, 7, 62, 47, 82, -1, 0, -60, -2, -128, 
  25, -37, 56, -60, 19, -12, 29, -128, -128, -1, 
  48, -128, 4, -128, -37, -77, 69, 52, 75, -29, 
  49, -128, 60, -33, 60, 47, 77, 23, 55, 1, 
  56, 15, 69, 58, 65, -128, -128, -128, -128, -128, 
  15, -60, 47, -43, 17, -128, 4, -128, -128, -23, 
  45, -128, 4, -128, 25, -3, 78, 55, 80, -29, 
  40, -128, 42, -128, 62, 38, 58, -33, 29, -33, 
  35, 2, 69, 38, 31, -128, -128, -128, -128, -128, 
  -128, -128, 9, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -20, -77, -37, -29, 61, 40, 72, -77, 
  6, -128, 16, -128, 46, 15, 33, -128, -4, -33, 
  20, -12, 46, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, -128, -128, 
  -128, -128, -18, -128, 18, -77, -16, -128, -77, -128, 
  -37, -128, -26, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -37, -128, -50, -128, -128, -128, -128, -128, 
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
  -128, -128, -77, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 28, -7, 11, -128, -128, -128, -128, -128, 
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