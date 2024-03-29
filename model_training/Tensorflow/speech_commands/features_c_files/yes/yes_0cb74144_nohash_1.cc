/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/0cb74144_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_0cb74144_nohash_1.cc" \
 */
#include "yes_0cb74144_nohash_1.h"


const int g_yes_0cb74144_nohash_1_width = 40;
const int g_yes_0cb74144_nohash_1_height = 49;
alignas(16) const signed char g_yes_0cb74144_nohash_1_data[] = {
  75, 71, 79, 62, 79, 80, 84, 87, 99, 80, 
  60, 54, 85, 85, 100, 84, 80, 55, 39, 67, 
  94, 84, 80, 79, 98, 87, 106, 89, 107, 90, 
  99, 85, 103, 91, 107, 90, 99, 91, 103, 80, 
  89, 53, 47, 38, 61, 43, 50, -50, 19, 59, 
  73, 56, 75, 64, 85, 65, 69, 46, 70, 62, 
  84, 63, 67, 67, 90, 75, 88, 67, 67, 69, 
  90, 65, 96, 64, 85, 69, 96, 66, 72, 43, 
  79, 67, 73, 59, 66, 51, 36, -128, 12, 24, 
  51, 15, 74, 53, 74, 6, 55, 32, 16, 32, 
  43, -14, 25, 15, 48, 30, 59, 42, 67, 35, 
  66, 39, 66, 33, 59, 36, 82, 56, 72, 44, 
  80, 51, 35, 36, 61, -1, 13, -128, -29, 10, 
  44, 2, 53, 39, 49, 10, 49, 32, 49, 20, 
  24, -12, 35, -18, 39, 9, 40, 19, 59, 34, 
  69, 27, 61, 11, 52, 42, 63, -43, 27, -50, 
  68, 44, 64, 44, 29, -128, 16, -2, -8, -26, 
  49, 37, 47, 12, 52, -1, 32, 8, 45, -16, 
  30, -4, 67, 43, 63, 33, 58, -128, 0, -128, 
  20, -23, 31, -60, 24, -14, 39, -128, 1, -37, 
  71, 66, 70, -26, 16, -33, 32, -50, -43, -50, 
  27, 23, 66, 16, 38, -37, 19, 11, 36, -33, 
  9, -20, 17, -33, 45, -14, 15, -128, -128, -128, 
  -77, -128, 29, -60, -128, -128, -16, -128, -128, -128, 
  68, 51, 26, -60, 16, -128, 43, -14, 28, -128, 
  14, -60, 9, -60, 24, -33, -16, 6, 20, -128, 
  1, -60, 9, -128, 5, -128, -128, -128, -128, -128, 
  -128, -128, -8, -128, -128, -128, -128, -128, -128, -128, 
  67, 54, 55, 13, 13, -60, 34, -4, -43, -50, 
  8, -128, -60, -128, -10, -128, 7, -50, -128, -128, 
  -128, -128, 15, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  50, 52, 76, 9, 19, -33, 27, -128, -77, -128, 
  -12, -128, -128, -128, -77, -128, 2, -77, -60, -128, 
  -20, -128, -23, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  64, 44, 65, 31, 27, -60, 30, -128, 8, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -1, -43, -77, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  65, 31, 75, 56, 55, 26, 44, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -29, -128, -77, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  32, -18, 72, 34, 32, -128, -10, -128, -60, -128, 
  -128, -128, -37, -128, -128, -128, -128, -128, -50, -128, 
  -37, -128, -33, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -23, -60, 39, -14, 34, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 23, -10, 49, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, 0, 55, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -18, -33, -50, -50, 4, -77, -7, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -16, -128, -128, -128, 
  -128, -128, 0, -60, 38, 8, 25, -128, -2, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -128, -128, -128, 28, -23, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  34, -3, 31, -37, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  114, 95, 117, 98, 117, 94, 107, 82, 70, 62, 
  58, 9, -16, -128, -128, -12, 50, 72, 100, 87, 
  97, 72, 83, 77, 92, 62, 54, 80, 100, 55, 
  -12, -128, -77, 56, 99, 80, 87, 78, 86, 59, 
  120, 102, 122, 101, 124, 103, 120, 96, 109, 96, 
  113, 86, 88, 62, 85, 88, 108, 94, 116, 97, 
  113, 94, 112, 94, 107, 79, 93, 89, 114, 87, 
  81, 60, 78, 84, 104, 87, 107, 87, 104, 78, 
  105, 84, 101, 82, 114, 98, 120, 97, 117, 92, 
  114, 92, 102, 92, 107, 86, 107, 94, 119, 93, 
  106, 93, 118, 80, 95, 72, 94, 84, 109, 90, 
  88, 69, 88, 77, 107, 82, 104, 87, 110, 88, 
  100, 69, 92, 69, 99, 65, 112, 92, 115, 89, 
  97, 67, 110, 87, 106, 82, 111, 92, 109, 78, 
  103, 83, 103, 69, 92, 48, 80, 72, 95, 74, 
  94, 70, 90, 78, 104, 82, 101, 71, 89, 66, 
  96, 62, 81, 35, 82, 62, 103, 87, 114, 80, 
  99, 84, 105, 79, 101, 85, 113, 92, 103, 74, 
  108, 80, 91, 51, 84, 55, 89, 64, 81, 73, 
  111, 80, 89, 72, 99, 89, 107, 76, 88, 79, 
  82, 30, 86, 49, 75, 15, 92, 80, 108, 81, 
  100, 70, 105, 80, 105, 85, 109, 75, 80, 51, 
  95, 75, 94, 59, 65, 57, 69, -1, 63, 68, 
  114, 92, 86, 51, 85, 75, 97, 70, 95, 75, 
  72, 15, 83, 42, 64, 9, 74, 65, 95, 57, 
  87, 69, 86, 72, 99, 79, 100, 58, 76, 18, 
  89, 61, 81, 48, 59, 18, 44, -7, 71, 58, 
  106, 93, 109, 47, 60, 38, 85, 67, 90, 67, 
  59, -26, 67, -18, 47, -60, -14, -128, 37, 34, 
  74, 8, 69, 47, 85, 58, 79, 32, 67, 31, 
  70, 26, 69, 39, 68, -50, -1, -77, 58, 26, 
  67, 68, 90, 46, 9, 14, 63, 36, 82, 52, 
  28, -37, -1, -128, -128, -128, -128, -128, 1, -60, 
  46, -128, 6, -128, -3, -20, 40, -128, -10, -128, 
  -128, -128, 0, -128, -50, -128, 4, -128, -14, -128, 
  1, -18, 74, 42, 7, -128, -43, -128, 37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -4, -128, -29, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -50, 48, 20, 64, 42, 
  91, 67, 91, 69, 73, -7, 67, 26, 80, 50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -43, -128, -14, -128, 
  -128, -128, -128, -128, 35, 8, 49, 55, 85, 68, 
  95, 76, 97, 68, 93, 61, 82, 46, 83, 61, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, 9, -128, -37, -128, -33, -128, -128, -128, 
  -128, -128, -128, -128, -8, -14, 69, -2, 102, 77, 
  86, 62, 92, 64, 83, 22, 71, 36, 73, 59, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -7, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -33, -128, 48, -128, 53, 30, 
  86, 9, 64, 45, 63, -60, 55, 7, 68, 25, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 36, -50, 10, -128, 
  47, -128, 35, -128, -4, -128, 11, -128, 41, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -1, -14, -29, -128, 
  -6, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
