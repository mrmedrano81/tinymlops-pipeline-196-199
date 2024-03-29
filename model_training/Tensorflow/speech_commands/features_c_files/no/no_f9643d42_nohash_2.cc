/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/f9643d42_nohash_2.wav" \
 * --output_c_file="features_c_files/no/no_f9643d42_nohash_2.cc" \
 */
#include "no_f9643d42_nohash_2.h"


const int g_no_f9643d42_nohash_2_width = 40;
const int g_no_f9643d42_nohash_2_height = 49;
alignas(16) const signed char g_no_f9643d42_nohash_2_data[] = {
  89, 71, 74, 67, 74, 69, 72, 47, 44, 62, 
  71, 71, 80, 73, 63, 55, 67, 32, 26, -7, 
  17, 17, 14, -2, 5, 17, 14, -18, -4, -12, 
  -18, -12, 5, -2, 0, -7, 0, 4, 5, -12, 
  78, 69, 66, 59, 59, 45, 74, 55, 68, 55, 
  61, 56, 66, 50, 39, 56, 69, 35, 29, 9, 
  27, -1, 19, -4, 4, 16, -12, -29, -12, -20, 
  -6, -20, -12, -4, -6, -29, -1, -10, 4, -16, 
  65, 49, 26, 17, 67, 57, 57, 58, 74, 37, 
  62, 20, 40, 44, 43, 27, 56, 19, 27, 1, 
  19, 0, -3, -7, 7, 15, -2, -43, -20, -1, 
  -7, -18, -14, -18, -20, -23, 15, -7, -29, -18, 
  71, 9, 57, 48, 59, 50, 55, 51, 52, 7, 
  49, 49, 57, 25, 44, 27, 56, 10, 48, -10, 
  8, -3, 19, 18, 16, 21, -14, -23, -14, -20, 
  -37, -33, -3, -1, 2, -33, -8, -37, -8, -8, 
  64, 29, 5, -23, 42, 33, 31, 37, 49, 5, 
  39, 44, 60, 2, 20, 29, 55, -60, 24, -1, 
  14, -14, 7, -2, -1, -14, -43, -33, -29, -29, 
  1, -14, -16, 0, 5, -14, -23, -50, -16, -23, 
  71, 49, 58, 57, 62, 46, 59, 62, 62, 32, 
  53, 12, 41, -16, 34, 20, 54, -60, -60, -50, 
  -3, -12, -2, 2, 10, -16, 0, -16, -10, -60, 
  4, 0, -16, -26, -6, -29, -23, -23, -10, -37, 
  60, 4, 64, 2, 54, 49, 55, -33, 40, 37, 
  55, -29, 14, 4, 33, -16, 42, 7, 31, -4, 
  7, -14, -3, -16, 26, -14, -12, -18, 4, -26, 
  -12, -26, -23, -4, 2, -8, 19, -26, -12, -43, 
  9, -128, 29, 15, 65, 38, 47, 7, 22, -2, 
  40, 20, 48, 17, 29, 19, 51, 11, 9, -33, 
  28, 12, 4, -23, 16, -8, -7, -77, -7, -33, 
  -12, -29, -2, -33, -43, -33, -3, -20, -2, -50, 
  60, 26, 45, 37, 61, 12, 27, -77, 57, 34, 
  53, 0, 25, -33, 4, 20, 53, -18, -10, -43, 
  -4, -50, -50, -77, 11, -18, -60, -50, -43, -43, 
  -33, -14, -18, -50, -33, -12, -8, -60, -20, -50, 
  40, -26, 55, 39, 50, -77, 29, -4, 52, 29, 
  8, 18, 47, -16, 23, -16, 38, -16, 20, -50, 
  -43, -23, 12, -60, -26, -60, -26, -33, -14, -60, 
  4, -20, 4, -50, -14, -33, -1, -43, -37, -37, 
  21, -50, 52, 34, 19, -77, 35, 12, 39, -6, 
  41, -128, -23, -43, 25, -26, 34, -50, -18, -37, 
  24, -2, 19, -50, -14, -43, -60, -43, -20, -77, 
  -29, -50, 4, -128, -37, -128, -37, -37, -16, -128, 
  18, -77, 11, -23, 46, -77, 32, -10, 4, -29, 
  54, 30, 35, -128, 4, -14, 34, -16, -60, -128, 
  10, -18, -10, -50, -20, -50, -16, -77, -50, -60, 
  -50, -77, -2, -128, -50, -128, -37, -60, -29, -60, 
  51, 15, 37, 17, 49, 14, 43, -128, 47, 11, 
  32, -77, -77, -128, -16, -128, 23, -33, -16, -26, 
  -23, -33, -3, -128, -60, -128, -50, -77, -50, -128, 
  -16, -128, -50, -77, -50, -10, -8, -50, -16, -50, 
  44, -6, 5, -128, 18, -4, 54, -23, 44, -77, 
  19, 4, 42, -14, 9, -26, 26, -23, -12, -128, 
  -18, -60, 4, -77, -43, -60, -23, -128, -29, -128, 
  -60, -128, -60, -60, -29, -77, -26, -60, -23, -128, 
  32, -128, -23, -128, 0, 5, 53, -20, 29, -128, 
  14, -60, 11, -77, -26, -50, 19, -77, -50, -77, 
  -37, -128, -18, -77, -16, -60, -77, -60, -18, -50, 
  -37, -60, -33, -128, -23, -128, -14, -77, -18, -128, 
  44, 1, 40, -43, 34, -6, -16, -50, -60, 24, 
  33, 1, 34, -128, 14, 12, 41, -50, -128, -128, 
  0, -43, -14, -60, -29, -128, -50, -128, -60, -128, 
  -50, -50, -33, -128, -33, -128, -16, -43, -1, -60, 
  -128, -26, -14, -128, 11, -128, -50, -18, 29, 38, 
  53, -37, 23, -29, 24, -33, 24, -14, 4, -33, 
  8, -128, -128, -77, -60, -77, -14, -60, -37, -77, 
  4, -60, -50, -128, -43, -128, -43, -128, -50, -43, 
  4, -128, 37, 21, 21, -128, 38, -23, 22, 13, 
  27, -128, -14, -60, 1, -128, 7, -128, -77, -128, 
  -18, -128, -37, -77, -29, -14, 6, -50, -26, -77, 
  -43, -77, -43, -128, -43, -128, -77, -60, -26, -128, 
  -50, -60, 35, 34, 43, -29, 16, -128, 23, -50, 
  -37, -128, 11, -33, -23, -43, 47, 34, 62, 70, 
  72, 27, 11, -43, 24, 20, 21, -16, -6, -50, 
  -43, -77, -10, -128, -43, -77, -43, -128, -77, -128, 
  24, -10, -29, -128, 24, -128, 45, -8, -128, -128, 
  -18, -4, 22, -77, -18, -128, 11, -20, 25, -50, 
  19, -50, -77, -128, -4, 16, 22, -128, -20, -37, 
  -50, -128, -77, -128, -33, -128, -60, -128, -43, -60, 
  -18, -128, -128, -128, -77, -33, 37, -50, 33, -128, 
  11, -60, -14, -128, 7, -77, -2, -6, -37, -128, 
  38, 8, -128, -77, -33, -26, -43, -128, -77, -128, 
  -50, -128, -43, -60, -29, -128, -60, -128, -77, -128, 
  37, -60, -128, -128, 28, -37, -2, -43, 54, 4, 
  9, -77, -6, -128, 1, -43, 1, -128, -2, -77, 
  -77, -128, -50, -77, -50, -128, -33, -128, -43, -128, 
  -50, -128, -60, -128, -29, -128, -77, -128, -43, -77, 
  32, -14, 19, -50, 25, -60, -12, -18, -60, -128, 
  -2, -43, 17, -26, 24, -29, 18, -128, -60, -128, 
  -128, -128, -37, -128, -128, -128, -50, -128, -37, -128, 
  -128, -128, -77, -60, -43, -128, -29, -128, -29, -60, 
  -128, -128, 16, 4, 17, -37, 15, -128, -128, -77, 
  1, -77, -14, -128, -37, -128, -12, -128, -12, -128, 
  -10, -77, -37, -128, -43, -50, -33, -33, -14, -50, 
  -29, -128, -77, -128, -37, -128, -60, -128, -43, -128, 
  24, -18, -18, -128, 24, -60, 1, -1, 25, -60, 
  25, -128, -37, -50, -26, -128, -23, -77, -10, -128, 
  -128, -128, -128, -128, -29, -128, -128, -128, -60, -128, 
  -29, -128, -128, -128, -128, -128, -37, -128, -77, -128, 
  -50, -128, -23, -60, -33, -128, -128, -128, -128, -128, 
  4, -50, 26, -128, 28, -128, -12, -128, -128, -128, 
  -128, -128, -77, -128, -43, -128, -60, -128, -77, -128, 
  -77, -128, -43, -128, -43, -77, -33, -128, -37, -128, 
  20, 8, 4, 15, 24, -128, 22, -20, -128, -128, 
  -14, 6, 14, -128, -29, -128, -18, -128, -128, -128, 
  -77, -77, -16, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -14, -4, 7, -77, -43, -128, -60, -128, 
  114, 83, 92, 64, 81, 50, 40, -128, -128, -6, 
  27, -128, 30, -128, 40, -10, 1, -6, -43, -128, 
  13, -6, 9, -128, -43, -128, -33, -128, -128, -77, 
  -37, -128, 0, 27, 39, 38, 1, -50, -33, -43, 
  115, 91, 114, 71, 97, 67, 33, 42, 64, 40, 
  16, -128, 34, -16, 61, -4, 40, 55, 30, 21, 
  57, 43, 45, 15, 6, -128, -29, -60, -20, -43, 
  -16, -29, 33, 55, 61, 35, 16, -20, 8, 0, 
  110, 82, 109, 85, 113, 88, 69, 64, 97, 53, 
  14, 36, 32, -60, 46, 0, 49, 73, 59, -50, 
  47, 54, 28, 23, 4, -128, 0, -26, -20, -26, 
  -60, -60, 38, 55, 77, 62, 19, -12, 22, 12, 
  99, 66, 97, 76, 109, 88, 72, 58, 89, 58, 
  42, 30, 52, -12, 61, -6, 68, 60, 41, -23, 
  67, 56, 44, 48, 30, -43, 26, -2, -60, -77, 
  8, -23, 59, 47, 64, 42, 34, 17, 42, 28, 
  87, 50, 80, 54, 97, 81, 87, 43, 75, 52, 
  54, 49, 79, -6, 42, 22, 49, 17, 77, 37, 
  91, 81, 76, 47, 54, -50, -33, -4, 23, -128, 
  -18, -43, 47, 41, 74, 59, 34, 5, 50, 41, 
  86, 54, 72, 60, 105, 92, 119, 87, 101, 85, 
  103, 87, 111, 82, 105, 94, 117, 94, 105, 80, 
  106, 84, 103, 71, 90, 78, 95, 86, 100, 62, 
  47, 48, 79, 43, 61, 49, 94, 85, 102, 82, 
  82, 52, 63, 47, 107, 90, 114, 91, 102, 87, 
  115, 94, 101, 94, 119, 99, 114, 90, 109, 74, 
  95, 80, 109, 84, 108, 87, 115, 96, 110, 79, 
  97, 85, 105, 77, 80, 62, 89, 76, 108, 80, 
  70, 32, 71, 50, 101, 81, 103, 71, 88, 76, 
  108, 83, 107, 88, 104, 57, 70, 44, 90, 77, 
  80, 62, 99, 81, 86, 66, 91, 71, 97, 70, 
  92, 64, 83, 75, 77, 62, 99, 73, 77, 45, 
  68, 9, 43, 63, 100, 70, 85, 57, 96, 68, 
  87, 76, 114, 77, 82, 65, 63, 0, 71, 47, 
  53, 7, 84, 63, 65, 55, 93, 25, 67, 45, 
  68, 29, 59, 11, 91, 68, 80, 55, 45, 0, 
  68, 50, 93, 84, 88, 14, 85, 66, 87, 41, 
  84, 75, 85, 37, 62, -128, 10, -128, 10, -18, 
  54, -50, 41, 47, 53, 4, 64, -20, 37, 4, 
  47, -23, 29, -60, 53, 40, 84, 58, 11, -128, 
  66, 57, 80, 80, 82, -4, 82, 40, 68, 30, 
  79, 44, 45, -128, -128, -128, -128, -128, -128, -128, 
  -7, -128, 54, 42, -3, -4, 55, -128, -60, -29, 
  32, -128, -128, -128, 64, 11, 83, 44, -26, -77, 
  55, 44, 50, -128, -128, -128, 44, -37, 47, 0, 
  59, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, -128, -10, -128, -12, -128, -128, -128, 
  -23, -128, -128, -128, -8, -128, 59, -26, -128, -128, 
  51, -128, 35, -128, -60, -128, -43, -128, -16, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -6, -128, 45, -60, -128, -128, 
  -6, -128, -14, -7, -4, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 24, -128, -128, -128, -128, -128, 18, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 8, -128, -23, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
