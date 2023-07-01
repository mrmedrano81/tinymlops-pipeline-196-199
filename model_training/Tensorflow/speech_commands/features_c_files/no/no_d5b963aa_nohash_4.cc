/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/d5b963aa_nohash_4.wav" \
 * --output_c_file="features_c_files/no/no_d5b963aa_nohash_4.cc" \
 */
#include "no_d5b963aa_nohash_4.h"


const int g_no_d5b963aa_nohash_4_width = 40;
const int g_no_d5b963aa_nohash_4_height = 49;
alignas(16) const signed char g_no_d5b963aa_nohash_4_data[] = {
  14, 4, -50, -128, -128, -60, -128, -50, -33, -18, 
  -33, -60, -10, 4, -26, -18, 0, -37, -33, -50, 
  -33, -60, -60, -60, -33, -37, -26, -26, -33, -26, 
  -26, -26, -4, -26, -26, -12, -33, -50, -60, -60, 
  19, -37, -60, -128, -128, -128, -37, -3, -37, -37, 
  -50, -29, -37, -50, -37, -50, -18, -14, -12, -7, 
  -37, -37, -26, -7, -12, -60, -60, -37, -6, -37, 
  -12, -37, -18, -50, -26, -16, -12, -7, -37, -50, 
  25, -12, 19, -20, -60, -3, -12, -50, -60, -50, 
  -1, -16, -37, -128, -50, -77, -37, -50, -37, -77, 
  -60, -128, -37, -37, -60, -77, -60, -77, -50, -29, 
  -37, -37, -20, -37, -12, -23, -20, -50, -50, -77, 
  -43, -128, -7, 11, -18, -77, -37, -43, -26, -18, 
  -29, -50, -128, -77, -50, -77, -50, -33, -37, -23, 
  -20, -23, -20, -33, -37, -50, -26, -23, -20, -33, 
  -37, -33, -20, -50, -20, -43, -37, -50, -60, -128, 
  -10, -33, -20, -128, -60, -60, -77, -77, -37, -43, 
  -20, -43, -7, -77, -37, -77, -29, -77, -77, -128, 
  -77, -128, -128, -128, -29, -43, -37, -33, -8, -60, 
  -20, -33, -20, -33, -8, -60, -50, -60, -50, -128, 
  -12, -37, -16, -43, -50, -128, -50, -60, -37, -128, 
  -50, -43, -20, -26, -77, -128, -50, -128, -77, -60, 
  -50, -128, -77, -60, -37, -33, -14, -43, -23, -77, 
  -8, -43, -29, -20, -23, -20, -29, -33, -29, -50, 
  -18, -50, -50, -77, -37, -128, -128, -77, -77, -128, 
  -128, -128, -29, -37, -50, -77, -128, -77, -8, -128, 
  -50, -128, -37, -60, -29, -60, -77, -43, -16, -60, 
  -23, -10, -16, -37, -43, -29, -37, -128, -29, -128, 
  28, -60, -43, -50, -37, -128, -77, -37, -37, -77, 
  -29, -128, -50, -60, -29, -60, -50, -77, -50, -77, 
  -50, -60, -50, -77, -50, -128, -37, -60, -33, -23, 
  -10, -50, -50, -128, -43, -60, -10, -50, -50, -128, 
  23, -20, -33, -128, -128, -128, -29, -128, -50, -77, 
  -77, -128, -128, -128, -50, -128, -77, -128, -50, -77, 
  -29, -77, -77, -77, -29, -128, -128, -128, -77, -128, 
  -33, -43, -60, -60, -43, -60, -43, -77, -77, -77, 
  8, -77, -77, -128, -128, -128, -77, -128, -43, -37, 
  -128, -77, -50, -60, -29, -77, -77, -128, -50, -77, 
  -77, -77, -50, -128, -23, -60, -50, -77, -77, -60, 
  -43, -60, -77, -77, -33, -128, -60, -60, -50, -128, 
  -128, -77, -26, -50, -128, -77, -43, -128, -23, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, -33, -77, -77, -77, -60, -50, 
  -43, -77, -33, -77, -26, -128, -128, -128, -50, -128, 
  -4, -128, -43, -50, -37, -128, -77, -128, -77, -128, 
  -43, -60, -60, -128, -77, -128, -77, -60, -43, -50, 
  -43, -128, -128, -128, -43, -128, -50, -128, -77, -128, 
  -128, -128, -60, -60, -33, -128, -43, -77, -50, -128, 
  11, -77, -60, -77, -128, -128, -50, -128, -77, -128, 
  -128, -128, -77, -128, -77, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -77, -128, -128, -128, -77, -128, 
  -128, -128, -60, -50, -60, -128, -77, -128, -128, -128, 
  -50, -37, -8, -128, -128, -128, -128, -128, -77, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -77, -77, -128, -128, -128, -77, -128, -43, -128, 
  -77, -77, -26, -50, -37, -128, -60, -128, -60, -128, 
  -8, -4, -77, -128, -77, -128, -60, -128, -43, -26, 
  -43, -60, -12, -128, -43, -77, -60, -128, -128, -128, 
  -77, -128, -60, -77, -77, -128, -60, -128, -43, -128, 
  -60, -128, -77, -128, -29, -37, -20, -50, -60, -128, 
  -77, -50, 2, -43, -18, -50, -33, -128, -77, -128, 
  -128, -128, -77, -50, -43, -77, -77, -128, -77, -128, 
  -60, -128, -128, -128, -77, -128, -128, -128, -77, -128, 
  -43, -128, -128, -128, -29, -77, -26, -77, -43, -128, 
  -128, -128, -37, -37, -128, -77, -26, -50, -60, -128, 
  -77, -43, -43, -128, -60, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -60, -77, 
  -43, -128, -77, -128, -37, -128, -43, -128, -43, -128, 
  -23, -50, -18, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -77, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, -128, -128, -77, -128, -77, -128, 
  -37, -128, -60, -77, -60, -128, -128, -128, -128, -128, 
  46, 15, 40, -26, -7, -43, -43, -128, -128, -128, 
  -43, -128, -128, -128, -77, -128, -33, -128, -77, -128, 
  -77, -128, -60, -26, -60, -128, -33, -60, -60, -60, 
  -2, -37, -23, -128, -128, -128, -128, -128, -128, -128, 
  124, 101, 120, 99, 115, 95, 107, 74, 83, 77, 
  92, 74, 78, 72, 61, 62, 72, 74, 82, 72, 
  84, 67, 61, 44, 49, 45, 40, 36, 59, 61, 
  100, 82, 75, 60, 75, 60, 66, 59, 72, 55, 
  103, 99, 123, 97, 122, 94, 114, 87, 104, 91, 
  108, 91, 109, 88, 88, 82, 98, 76, 92, 87, 
  97, 77, 85, 63, 85, 60, 79, 79, 83, 72, 
  87, 75, 79, 71, 91, 80, 88, 74, 92, 68, 
  109, 87, 110, 85, 112, 89, 104, 80, 105, 83, 
  103, 89, 109, 79, 89, 77, 96, 84, 91, 80, 
  99, 81, 89, 71, 87, 67, 83, 72, 94, 69, 
  88, 68, 87, 72, 74, 69, 91, 65, 84, 49, 
  101, 87, 102, 78, 98, 83, 98, 69, 99, 67, 
  102, 82, 93, 65, 95, 82, 80, 67, 90, 59, 
  84, 53, 75, 45, 97, 77, 80, 40, 67, 59, 
  89, 61, 89, 52, 78, 47, 87, 55, 79, 60, 
  84, 71, 94, 77, 102, 93, 118, 96, 115, 85, 
  110, 88, 102, 85, 112, 96, 121, 95, 110, 80, 
  99, 70, 89, 88, 106, 87, 110, 86, 99, 60, 
  57, 57, 99, 75, 107, 85, 89, 70, 85, 64, 
  90, 66, 77, 57, 91, 77, 104, 92, 103, 89, 
  109, 82, 99, 71, 108, 84, 113, 74, 100, 76, 
  98, 66, 81, 66, 88, 52, 91, 77, 102, 74, 
  68, 45, 95, 76, 84, 76, 91, 59, 89, 54, 
  82, 60, 75, 57, 85, 66, 96, 82, 96, 64, 
  92, 68, 94, 67, 104, 72, 91, 68, 90, 65, 
  87, 61, 89, 63, 69, 22, 72, 62, 90, 61, 
  54, 45, 74, 61, 82, 67, 89, 52, 81, 60, 
  81, 51, 63, 40, 80, 57, 95, 69, 95, 76, 
  89, 63, 97, 69, 102, 72, 67, 57, 87, 58, 
  86, 10, 82, 52, 65, -60, 55, 31, 79, -20, 
  33, 39, 72, 32, 67, 56, 79, 46, 82, 65, 
  84, 48, 61, 42, 79, 43, 87, 56, 92, 67, 
  87, 47, 82, 70, 103, 68, 69, 4, 68, 36, 
  72, 34, 79, 49, 50, 14, 31, -50, -4, -128, 
  -33, -23, 72, 47, 77, 54, 78, 50, 82, 62, 
  70, 36, 57, 34, 62, 33, 60, 48, 79, 37, 
  82, 40, 71, 59, 90, 56, 4, -50, 45, 29, 
  64, 16, 64, 30, 50, -43, 49, -43, 13, 30, 
  70, 26, 61, 37, 70, 43, 56, 35, 61, 28, 
  65, 26, 65, 14, 63, 9, 69, 42, 65, 40, 
  72, 19, 76, 63, 90, 14, 17, -29, 39, 6, 
  39, 20, 37, -18, 6, -50, 53, -14, -29, -29, 
  62, 10, 55, 34, 56, 27, 64, -29, 34, -18, 
  59, 14, 59, 32, 59, 35, 63, 48, 65, 34, 
  80, 23, 78, 62, 64, -60, -3, 4, 54, -4, 
  24, -26, 61, -4, 43, -43, 58, -20, -128, 0, 
  57, 19, 58, 21, 53, 36, 64, 2, 52, 30, 
  58, 12, 52, 34, 61, 34, 61, 39, 68, 39, 
  70, 36, 82, 69, 74, -77, -20, -29, 54, 24, 
  47, 12, 44, -2, 27, -26, 58, 15, -20, -128, 
  -18, -128, 63, 31, 46, 26, 70, 27, 52, 19, 
  55, 5, 48, 30, 60, 23, 72, 22, 56, 38, 
  61, 40, 81, 64, 68, -128, -37, -77, 46, -7, 
  57, 12, 59, 29, 35, -128, 52, 9, 16, -26, 
  56, 16, 46, -128, 19, -128, 23, 1, 47, 6, 
  32, -14, 49, -3, 42, 13, 49, -14, 53, 17, 
  59, 31, 72, 47, 39, -128, -128, -128, 24, -50, 
  46, -50, 60, 20, 17, -128, -50, -128, -60, -4, 
  36, -77, 15, -128, -1, -77, 42, -77, 43, 22, 
  0, -128, 19, -128, -29, -128, -60, -128, 11, -37, 
  42, -77, 66, 2, -128, -128, -128, -128, 6, -37, 
  13, -128, -128, -128, -4, -50, -60, -128, -16, -77, 
  34, -4, 25, -128, -16, -43, 52, -33, 54, 5, 
  -12, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -12, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -77, 
  36, -128, -18, -128, -20, -128, 5, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -77, -128, -128, -128, -128, -29, 
  43, -128, -37, -128, 23, -128, -77, -77, 17, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, -33, -128, -77, -128, -77, -128, 
  37, -20, -33, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -60, -37, -128, -128, -128, -128, -128, -23, -33, 
  2, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  4, -128, -50, -128, -128, -128, -60, -60, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -60, 
  8, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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