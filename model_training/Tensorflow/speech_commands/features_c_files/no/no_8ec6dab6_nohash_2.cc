/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/8ec6dab6_nohash_2.wav" \
 * --output_c_file="features_c_files/no/no_8ec6dab6_nohash_2.cc" \
 */
#include "no_8ec6dab6_nohash_2.h"


const int g_no_8ec6dab6_nohash_2_width = 40;
const int g_no_8ec6dab6_nohash_2_height = 49;
alignas(16) const signed char g_no_8ec6dab6_nohash_2_data[] = {
  91, 75, 98, 77, 80, 77, 91, 78, 72, 68, 
  75, 72, 78, 77, 79, 62, 67, 67, 80, 68, 
  76, 67, 82, 75, 85, 69, 75, 66, 84, 78, 
  77, 65, 79, 71, 83, 78, 90, 79, 88, 85, 
  92, 77, 88, 74, 73, 63, 80, 52, 78, 70, 
  68, 59, 87, 55, 70, 63, 68, 52, 67, 62, 
  74, 66, 72, 61, 70, 55, 72, 42, 51, 45, 
  82, 50, 41, 50, 72, 47, 76, 59, 61, 34, 
  66, 64, 71, 69, 89, 53, 50, 15, 61, 57, 
  66, 66, 69, 47, 82, 60, 69, 32, 52, 36, 
  61, 52, 58, 30, 69, 59, 47, 53, 68, 54, 
  67, 57, 69, 41, 57, 27, 53, 42, 55, 19, 
  74, 50, 84, 50, 64, 54, 77, 64, 79, 35, 
  69, 49, 76, 41, 72, 51, 66, 49, 63, 52, 
  69, 50, 56, 32, 52, 46, 66, 48, 61, 0, 
  54, 36, 57, 40, 61, 50, 60, 35, 60, 7, 
  55, -10, 51, 39, 73, 47, 65, 53, 33, 10, 
  42, 31, 61, 25, 55, 23, 62, 47, 71, 48, 
  70, 50, 69, 35, 58, 42, 64, 35, 57, 40, 
  59, 34, 57, 45, 66, 47, 66, 44, 58, -6, 
  119, 97, 117, 94, 116, 96, 119, 99, 122, 100, 
  124, 102, 121, 101, 121, 97, 118, 99, 121, 100, 
  123, 102, 124, 100, 118, 99, 121, 99, 118, 97, 
  121, 100, 120, 99, 121, 98, 114, 96, 115, 90, 
  101, 74, 102, 78, 91, 58, 87, 60, 93, 54, 
  75, 41, 76, 45, 60, 69, 92, 61, 78, 37, 
  30, -6, 59, 46, 79, 50, 81, 56, 70, 51, 
  67, 41, 74, 46, 69, 49, 87, 42, 69, 49, 
  52, 4, 70, 60, 77, 45, 47, -23, 62, 27, 
  20, -29, 48, -33, 42, 20, 74, 47, 60, 2, 
  56, -12, 50, 12, 63, -8, 55, 0, 63, -10, 
  60, 31, 63, 31, 58, 8, 73, 24, 60, -4, 
  46, -128, 34, -77, -43, -23, -8, -128, -7, -128, 
  -43, -128, 30, -128, -77, -20, 19, -37, -12, -128, 
  11, -128, -128, -77, 35, -128, 11, -128, 48, -37, 
  32, -128, 24, -128, -14, -43, 37, -77, 29, -60, 
  -23, -77, 24, -60, 44, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -18, -128, 
  -128, -128, -128, -128, 13, -128, 20, -128, 19, -128, 
  -43, -128, -6, -128, -128, -128, 0, -128, -37, -128, 
  -20, -128, -33, -128, 38, -33, -128, -128, -128, -128, 
  -128, -128, -128, -128, -20, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -33, -128, -128, -128, -4, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -26, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  10, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -18, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -10, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -8, -128, -77, -60, -6, -128, 
  -43, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -10, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -16, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 8, -43, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -20, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -60, 4, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  82, 44, 54, -3, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  89, 77, 89, 68, 72, 49, 56, 30, -29, -6, 
  -23, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -23, 37, 2, -12, -18, 39, -14, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  93, 89, 104, 64, 82, 72, 88, 48, 58, 68, 
  37, -77, -16, -77, -128, -128, 40, 19, -18, -128, 
  18, 66, 76, 66, 60, 57, 70, 24, 34, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  95, 81, 101, 65, 83, 69, 89, 54, 61, 69, 
  53, 4, -23, 2, -128, -128, 65, 49, 27, -8, 
  44, 68, 91, 70, 69, 70, 87, 46, 39, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  100, 72, 104, 81, 100, 88, 100, 77, 90, 67, 
  74, 4, 32, 20, 21, 46, 97, 86, 92, 44, 
  67, 73, 94, 72, 83, 73, 90, 55, 45, 54, 
  2, -128, -128, -43, -128, -128, -128, -128, -128, -77, 
  95, 26, 82, 54, 93, 79, 118, 99, 107, 79, 
  98, 75, 85, 74, 70, 67, 114, 97, 112, 88, 
  93, 87, 107, 86, 103, 92, 105, 91, 90, 77, 
  78, -128, -128, -60, -128, -77, -1, -43, -128, -60, 
  91, 32, 79, 49, 75, 66, 112, 91, 111, 87, 
  100, 78, 94, 80, 81, 80, 112, 79, 98, 72, 
  87, 82, 104, 74, 104, 77, 100, 84, 97, 67, 
  77, -128, -128, -33, 47, 76, 72, 34, -2, 15, 
  85, 22, 75, 47, 67, 47, 97, 75, 102, 80, 
  91, 80, 98, 67, 100, 73, 68, 44, 82, 56, 
  82, 57, 90, 67, 92, 78, 99, 69, 92, 52, 
  36, -128, -50, -77, 69, 77, 80, 44, 19, 24, 
  80, 22, 71, 34, 54, 30, 88, 63, 99, 75, 
  88, 72, 94, 71, 100, 73, 53, -14, 62, 21, 
  65, 44, 68, 57, 92, 74, 93, 57, 84, 39, 
  9, -60, -18, 23, 22, 18, 75, 42, 20, -1, 
  73, 12, 69, 37, 22, 19, 84, 58, 89, 63, 
  94, 60, 86, 72, 99, 73, 47, -7, 57, -20, 
  65, -29, 29, 64, 95, 65, 88, 60, 85, -26, 
  16, -128, -16, 34, 20, 36, 42, -6, 17, -3, 
  65, 11, 62, 9, 37, 47, 82, 47, 88, 54, 
  86, 51, 92, 80, 93, 46, 40, -128, 46, 19, 
  24, -128, 44, 55, 83, 50, 79, 49, 71, -50, 
  31, -50, 0, 11, 1, 21, 43, -7, -6, -50, 
  57, 7, 48, -37, 70, 57, 71, 22, 84, 46, 
  76, 44, 90, 56, 58, 10, 0, -128, 25, -10, 
  -10, -128, 19, 60, 80, 19, 60, -10, 43, -29, 
  56, 13, -3, -6, 9, 4, 53, 19, 9, -37, 
  42, 21, 44, -77, 49, 65, 54, -23, 45, 8, 
  58, 72, 101, 45, 30, -23, -128, -128, -128, -128, 
  -128, -128, 13, 23, 74, 12, 44, -18, 50, -128, 
  -37, -23, -50, -128, -10, -20, 23, -77, -20, -128, 
  -43, -20, -20, -29, 71, 57, 21, -128, -60, -128, 
  63, 70, 75, -77, 57, -33, -128, -128, -128, -128, 
  -128, -128, -128, -128, 35, -128, 7, -128, -7, -60, 
  38, -128, 7, -128, -128, -128, -33, -77, -128, -128, 
  -128, -128, -128, -128, 62, 6, 4, -128, -128, -128, 
  58, -37, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  19, -128, -128, -128, -128, -128, -14, -23, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -60, -7, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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