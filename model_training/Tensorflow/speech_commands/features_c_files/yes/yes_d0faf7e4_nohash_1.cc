/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/d0faf7e4_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_d0faf7e4_nohash_1.cc" \
 */
#include "yes_d0faf7e4_nohash_1.h"


const int g_yes_d0faf7e4_nohash_1_width = 40;
const int g_yes_d0faf7e4_nohash_1_height = 49;
alignas(16) const signed char g_yes_d0faf7e4_nohash_1_data[] = {
  85, 77, 89, 79, 78, 72, 87, 84, 88, 69, 
  82, 79, 90, 78, 95, 89, 102, 84, 85, 80, 
  69, 60, 68, 62, 60, 57, 57, 50, 56, 47, 
  69, 48, 53, 48, 56, 56, 62, 51, 57, 50, 
  82, 65, 77, 62, 84, 70, 77, 47, 66, 68, 
  74, 62, 82, 67, 93, 79, 97, 83, 76, 50, 
  55, 46, 62, 57, 66, 60, 65, 38, 56, 49, 
  51, 47, 55, 32, 44, 37, 58, 44, 52, 43, 
  67, 49, 79, 35, 67, 74, 81, 60, 64, 50, 
  78, 59, 72, 50, 56, 24, 49, 40, 63, 27, 
  60, -4, 30, -16, 49, 37, 49, 44, 45, 30, 
  51, 36, 41, 23, 45, 29, 45, 30, 51, 31, 
  87, 68, 72, 38, 30, 53, 80, 47, 87, 66, 
  75, 62, 81, 55, 54, -60, 38, -37, 70, 21, 
  47, 48, 43, 16, 47, 4, 17, 39, 55, 44, 
  62, 54, 41, 20, 44, 36, 35, 44, 54, 29, 
  80, 57, 87, 57, 79, 79, 103, 65, 83, 68, 
  73, 45, 62, 9, 60, 10, 15, -20, 60, 7, 
  49, 41, 34, -6, 40, 31, 74, 60, 68, 61, 
  88, 61, 46, 37, 55, 39, 49, 4, 32, 39, 
  83, 59, 76, 39, 84, 67, 87, 55, 98, 85, 
  97, 59, 60, 36, 41, -128, -20, -128, 53, 44, 
  48, 56, 70, 27, 42, 26, 54, 40, 44, 57, 
  82, 28, 44, 36, 23, 6, 46, 17, 58, 40, 
  79, -29, 50, 52, 100, 71, 61, 24, 97, 80, 
  82, 23, 19, -20, 24, -18, 54, -14, 36, -26, 
  27, 40, 57, 36, 54, 47, 77, 28, 69, 64, 
  70, 40, 47, 2, 19, 12, 44, 6, 42, -14, 
  77, 51, 64, 65, 76, 47, 70, 45, 100, 79, 
  89, 45, 77, 50, 43, -43, 57, 5, 72, 31, 
  44, 12, 66, 36, 45, 41, 64, -12, 67, 42, 
  69, 29, 52, 33, 54, 31, 36, 1, 47, 8, 
  124, 99, 115, 97, 117, 87, 99, 88, 101, 61, 
  81, 59, 69, 47, 76, 53, 55, 39, 75, 25, 
  81, 79, 105, 73, 97, 85, 97, 60, 83, 59, 
  80, 48, 53, 29, 39, -8, 40, 16, 29, -18, 
  107, 85, 114, 97, 123, 104, 122, 97, 117, 89, 
  114, 74, 77, 80, 107, 82, 95, 84, 104, 87, 
  116, 97, 114, 91, 117, 97, 114, 90, 115, 92, 
  100, 57, 56, 34, 60, 34, 67, 51, 64, 53, 
  95, 88, 104, 73, 118, 95, 118, 95, 106, 88, 
  105, 85, 104, 89, 110, 85, 105, 84, 105, 86, 
  102, 68, 99, 79, 106, 81, 102, 83, 110, 85, 
  98, 53, 74, 59, 77, 59, 86, 63, 70, 62, 
  89, 81, 93, 63, 99, 74, 113, 94, 114, 85, 
  99, 83, 104, 87, 105, 73, 94, 82, 107, 85, 
  99, 74, 100, 76, 98, 71, 91, 77, 98, 69, 
  85, 49, 67, 58, 82, 60, 88, 71, 78, 56, 
  78, 62, 82, 47, 8, 25, 105, 86, 111, 70, 
  93, 85, 107, 82, 102, 72, 100, 76, 109, 88, 
  89, 43, 90, 67, 72, 50, 76, 62, 84, 61, 
  72, 37, 66, 29, 63, 50, 77, 52, 77, 52, 
  76, 51, 64, 24, 48, 7, 87, 80, 106, 73, 
  100, 81, 102, 78, 98, 69, 98, 65, 96, 70, 
  85, 35, 68, 50, 78, 47, 69, 52, 85, 57, 
  27, -20, 61, 37, 65, 34, 70, 39, 74, 40, 
  65, 42, 64, -77, -43, -128, 32, 71, 99, 76, 
  89, 63, 86, 66, 94, 73, 96, 69, 89, 49, 
  79, 46, 80, 57, 62, 9, 63, 52, 73, -2, 
  -29, -43, 64, 32, 60, 35, 57, 9, 63, 34, 
  63, 42, 52, -128, -8, -128, 51, 48, 80, 67, 
  79, 43, 79, 47, 87, 61, 95, 71, 77, 19, 
  66, 19, 61, 29, 67, 9, 42, 34, 66, 9, 
  -20, -37, 61, 23, 46, -10, 47, 15, 62, 37, 
  57, 27, 45, -128, 49, -77, 35, -26, 49, -128, 
  69, 36, 66, 53, 77, 39, 89, 70, 77, -50, 
  35, -128, 19, -33, 36, -60, 17, -26, 34, -26, 
  -8, -128, 5, -128, 22, -77, 23, -128, 19, -128, 
  59, -12, 1, -128, 1, -128, -10, -128, -29, -128, 
  54, 32, 69, -128, 9, -33, 40, 26, 62, -128, 
  19, -128, -128, -128, -29, -128, -128, -128, -128, -128, 
  -128, -128, -23, -128, 29, -29, 47, -128, -6, -128, 
  64, -128, -60, -128, -128, -128, -128, -128, -20, -128, 
  -20, -16, 44, -128, -37, -128, -37, -128, 30, -128, 
  -128, -128, -128, -128, -12, -128, -128, -128, 4, -60, 
  24, 39, 89, 74, 105, 88, 84, 59, 47, -23, 
  41, -128, -37, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -3, -128, -2, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  64, 66, 98, 79, 106, 80, 105, 87, 105, 84, 
  -14, -128, -18, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  49, 44, 85, 69, 88, 56, 100, 72, 99, 75, 
  -128, -128, 9, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  52, 38, 81, 57, 91, 61, 93, 72, 96, 66, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  19, 50, 87, 68, 87, 50, 88, 65, 80, 56, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  9, 24, 86, 55, 82, 37, 80, 49, 84, 64, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -18, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -23, 65, 61, 88, 64, 84, 64, 69, 22, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -128, -60, -128, 
  0, 24, 75, 55, 68, 24, 53, 2, 57, 31, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, -60, -128, 
  40, 6, 58, 21, 58, -14, 59, -8, 44, -1, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, 6, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  14, 12, 44, 14, 54, -128, 40, -43, -3, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -37, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 48, 25, 
  -14, -128, 51, -50, -26, -50, -29, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -10, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  2, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
