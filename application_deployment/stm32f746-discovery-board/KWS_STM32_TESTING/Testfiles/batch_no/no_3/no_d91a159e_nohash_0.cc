/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/d91a159e_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_d91a159e_nohash_0.cc" \
 */
#include "no_d91a159e_nohash_0.h"


const int g_no_d91a159e_nohash_0_width = 40;
const int g_no_d91a159e_nohash_0_height = 49;
alignas(16) const signed char g_no_d91a159e_nohash_0_data[] = {
  73, 73, 79, 60, 58, 51, 67, 62, 54, 53, 
  55, 51, 39, 54, 74, 69, 69, 58, 53, 11, 
  23, 7, -10, -2, 14, 15, 31, 32, 23, -2, 
  -4, -18, -26, -12, 0, -2, -10, -26, -33, -60, 
  62, 64, 78, 39, 57, 47, 54, 40, 43, 34, 
  25, 11, 56, 41, 48, 41, 63, 37, 19, 4, 
  34, 31, 30, 30, 55, 53, 55, 54, 52, 20, 
  44, 32, 36, 18, 56, 54, 16, 49, 74, 70, 
  75, 63, 70, 39, 60, 23, 44, 38, 52, 19, 
  35, 13, 45, -33, 24, 47, 68, 30, 26, -14, 
  25, -29, -8, -1, 11, 15, 41, 7, 11, -26, 
  -8, -60, -3, -20, -6, -43, -7, 0, 33, 10, 
  60, 35, 53, 27, 64, 40, 50, -1, 38, 35, 
  47, 19, 16, 1, 35, 14, 48, 34, 30, 5, 
  20, -12, -16, -23, 24, 6, 25, 9, 29, -23, 
  -43, -37, -16, -37, -2, -50, -29, -60, -29, -128, 
  31, 18, 60, 45, 56, 17, 43, -1, -14, -128, 
  14, -14, 9, -8, 7, -128, 44, 20, 4, -2, 
  -3, -128, -23, -20, 17, 5, 15, 11, 45, -12, 
  -77, -128, -77, -77, -43, -77, -37, -128, -37, -128, 
  26, 31, 50, -29, 26, 8, 50, -8, -20, -128, 
  -1, -37, -14, -18, -60, -128, 23, -8, 34, -8, 
  0, -33, 4, -43, -23, -128, -14, -43, 8, -77, 
  -50, -37, -23, -50, -60, -128, -77, -128, -77, -128, 
  30, -20, 29, -77, -23, -20, -7, -8, 53, -6, 
  -16, -37, 2, -43, -37, -128, -10, -77, -4, -26, 
  -37, -50, -2, -18, -37, -128, -50, -128, -77, -77, 
  -43, -77, -43, -60, -77, -128, -50, -128, -128, -128, 
  5, -33, -4, -18, 4, 20, 52, -77, -60, -128, 
  1, -43, -33, -128, -60, -128, -128, -128, -14, -50, 
  -23, -128, -77, -60, -23, -128, -77, -128, -128, -128, 
  -33, -128, -77, -128, -77, -128, -77, -128, -128, -128, 
  -43, -128, -60, -128, 11, -3, -16, -128, -16, -128, 
  -43, -43, 4, -128, -60, -128, -77, -128, -128, -29, 
  -18, -37, -20, -128, -77, -128, -128, -128, -77, -128, 
  -33, -50, -43, -128, -128, -128, -43, -128, -77, -128, 
  27, -77, -20, 7, 31, 24, 46, -128, -26, -20, 
  6, -18, -18, -128, -77, -128, -60, -128, -43, -128, 
  -50, -128, -60, -128, -33, -128, -77, -128, -128, -50, 
  -60, -128, -33, -60, -77, -128, -26, -128, -50, -128, 
  31, -43, 47, -18, 32, -12, -43, -128, -60, -128, 
  13, -2, -14, -128, -37, -128, -16, -128, -77, -20, 
  0, -128, -37, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -77, -128, -128, -128, 
  37, -23, 38, 6, 2, -3, 19, -50, 19, -18, 
  9, -43, -2, -60, -33, -128, 9, 1, 0, -14, 
  9, -16, 42, 32, 51, 42, 49, 43, 56, 23, 
  17, -23, -60, -128, -77, -128, -33, -60, -6, -60, 
  49, -128, 7, -37, 11, 0, -3, -128, -14, -50, 
  -50, -128, 0, -60, -33, -128, -43, -128, -37, -128, 
  -60, -128, -33, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -77, -128, -77, -128, -128, -128, -128, -128, 
  42, 25, 47, -26, -50, -128, -33, -128, -77, -128, 
  -128, -128, -77, -128, -60, -128, -50, -128, -8, -128, 
  -128, -128, -128, -128, -77, -128, -77, -128, -128, -128, 
  -77, -128, -43, -128, -77, -128, -43, -77, -128, -128, 
  59, 1, 50, -26, -128, -128, -14, -128, -60, -77, 
  -77, -128, -12, -128, -128, -128, -43, -50, 4, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -77, -77, -60, -128, -128, -128, -60, -128, -128, -128, 
  115, 90, 90, 69, 69, -1, 21, -77, -29, -128, 
  -2, 1, 24, -33, -29, -128, -128, -77, -37, -128, 
  -43, -77, -26, -128, -128, -128, -128, -128, -50, -128, 
  -50, -20, -6, -77, -60, -77, -60, -128, -128, -128, 
  110, 84, 112, 84, 107, 80, 63, 54, 65, 14, 
  71, 62, 71, 55, 62, 32, 25, 28, -26, -23, 
  37, 36, 53, 34, 15, -77, -10, -16, 35, -60, 
  -29, -33, -18, -60, -37, -50, -1, -33, -20, -60, 
  92, 83, 104, 77, 97, 50, 72, 59, 65, 28, 
  71, 45, 64, 55, 55, 16, 50, 4, -2, 6, 
  42, 29, 46, 26, -20, -128, -128, -37, 31, -77, 
  -128, -128, -50, -77, -37, -77, -23, -60, -7, -37, 
  84, 75, 95, 68, 86, 46, 73, 50, 45, 35, 
  72, 41, 64, 47, 65, 19, 41, -12, 9, 2, 
  41, 35, 52, 16, -8, -77, 6, 8, 53, -33, 
  -8, -43, -33, -60, -77, -50, -7, -23, -29, -37, 
  79, 69, 87, 60, 78, 40, 63, 38, 45, 34, 
  60, 19, 44, 5, 47, 5, 9, -50, 16, -1, 
  54, 40, 19, -10, 21, -60, -18, 0, 34, -128, 
  -33, -50, -4, -50, -14, -43, 0, -18, -18, -50, 
  84, 67, 97, 83, 109, 94, 111, 74, 96, 75, 
  79, 70, 80, 58, 83, 79, 105, 92, 108, 86, 
  100, 87, 114, 96, 114, 92, 100, 77, 97, 82, 
  66, 9, 30, 5, 22, 38, 68, 55, 63, 62, 
  84, 73, 85, 74, 94, 90, 113, 87, 107, 80, 
  89, 80, 94, 81, 102, 88, 112, 91, 107, 80, 
  101, 87, 110, 82, 100, 87, 109, 84, 102, 80, 
  78, 37, 44, 9, 42, 47, 67, 60, 79, 53, 
  79, 60, 74, 62, 83, 64, 95, 87, 107, 74, 
  99, 75, 95, 72, 103, 86, 109, 63, 84, 68, 
  89, 70, 95, 62, 76, 56, 100, 80, 82, 70, 
  103, 71, 46, 35, 39, 10, 54, 27, 57, 30, 
  75, 52, 68, 53, 77, 49, 95, 81, 104, 70, 
  92, 71, 94, 80, 109, 81, 81, 39, 70, 50, 
  75, 56, 89, 53, 75, 47, 87, 50, 66, 58, 
  95, 55, 48, 33, 46, 32, 40, -14, 47, -1, 
  70, 43, 62, 48, 75, 47, 94, 74, 97, 66, 
  83, 58, 95, 84, 105, 55, 42, -128, 54, 25, 
  67, 37, 66, 17, 60, 34, 75, 1, 58, 59, 
  90, 42, 32, -14, 18, -29, 0, -10, 44, -1, 
  63, 34, 59, 39, 70, 42, 94, 67, 88, 65, 
  72, 46, 94, 82, 97, -77, -2, -128, 14, -43, 
  37, -50, 47, -12, 34, 36, 69, 14, 52, 44, 
  71, -4, 27, -18, 13, -77, 40, 9, 57, 22, 
  60, 22, 54, 35, 75, 50, 92, 61, 80, 61, 
  70, 67, 100, 58, 44, -128, -128, -128, -128, -128, 
  4, -33, 50, 11, 46, 30, 54, -77, 41, 44, 
  68, -50, 4, -50, -2, -60, 59, 17, 37, -2, 
  57, 13, 51, 31, 82, 54, 86, 47, 60, 50, 
  79, 63, 77, -77, 1, -128, -128, -128, -128, -128, 
  -128, -128, 38, -37, 44, 16, 26, -128, 32, 21, 
  50, -128, 14, -128, -16, -26, 40, -128, 30, -16, 
  51, 0, 52, 33, 84, 52, 68, 15, 42, 51, 
  92, 29, 17, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, 42, 9, 11, -128, -10, -16, 
  40, -128, 10, -50, -20, -128, 32, -60, 13, -20, 
  46, -23, 53, 32, 85, 52, 50, -43, 52, 57, 
  82, -43, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 23, -14, 7, -128, -77, -26, 
  34, -128, -18, -128, -10, -77, 32, -128, -20, -128, 
  41, -43, 55, 35, 83, 40, -1, -77, 54, 42, 
  38, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 17, -20, -3, -128, -128, -128, 
  -43, -128, -128, -50, -77, -128, -10, -128, -128, -128, 
  40, -77, 57, 31, 77, 11, -128, -60, 50, 16, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -60, -60, -37, -128, -128, -128, -128, -128, 
  27, -128, 44, 0, 61, -128, -128, -128, 23, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -7, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
