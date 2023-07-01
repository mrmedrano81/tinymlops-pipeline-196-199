/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/9a7c1f83_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_9a7c1f83_nohash_3.cc" \
 */
#include "no_9a7c1f83_nohash_3.h"


const int g_no_9a7c1f83_nohash_3_width = 40;
const int g_no_9a7c1f83_nohash_3_height = 49;
alignas(16) const signed char g_no_9a7c1f83_nohash_3_data[] = {
  96, 72, 54, 67, 82, 62, 58, 40, 51, 39, 
  72, 64, 43, 54, 63, 48, 43, 39, 54, 67, 
  49, -12, 14, 7, 14, 42, 26, 4, 33, 7, 
  -50, -50, -50, -18, -26, -26, -50, -50, -18, -37, 
  76, 55, 62, 64, 70, 53, 59, 16, 49, 54, 
  55, 40, 57, 59, 68, 46, 54, 35, 62, 62, 
  59, 5, -1, -4, 19, -4, 32, 20, 7, -37, 
  -18, -3, 9, -29, -37, -20, -12, -20, -18, -37, 
  77, 62, 69, 65, 72, 31, 65, 37, 6, 14, 
  64, 57, 32, 0, 37, 16, 38, 23, 77, 63, 
  30, 34, 38, 9, 36, 11, 82, 64, 14, 2, 
  32, 35, 47, -23, -37, -16, -12, -16, -37, -50, 
  71, 58, 70, 77, 97, 58, 27, 14, 37, 17, 
  69, 69, 59, 23, -10, -29, 19, 26, 55, 40, 
  19, 49, 64, 11, 84, 54, 95, 75, 26, -14, 
  -8, 19, 40, 18, 15, 5, 11, -18, -20, -33, 
  59, 45, 82, 60, 69, 46, 29, -1, 27, -1, 
  69, 51, 42, -2, 23, -29, 9, 26, 62, 29, 
  22, 65, 81, 48, 89, 59, 59, 15, 51, 42, 
  27, 49, 77, 66, 58, 40, 39, 19, 25, -12, 
  72, 53, 37, 8, 66, 45, 32, 37, 59, 24, 
  49, 15, 49, -33, 2, -7, 24, -20, 17, -29, 
  25, 22, 35, 30, 76, 40, 43, 14, 36, 9, 
  77, 78, 74, 40, 21, 13, -2, -33, 8, -77, 
  59, 54, 59, -77, 14, -128, 12, -1, 58, 49, 
  44, -16, 42, -6, -10, -43, 2, -50, 34, -77, 
  -16, 37, 51, -3, 22, -23, 9, -37, 25, -23, 
  30, -8, 23, -60, -6, -50, -7, -26, -43, -43, 
  48, 19, 58, -4, 55, 15, 29, -18, 22, 8, 
  40, -3, 19, -128, -20, -2, 42, -37, 11, -128, 
  4, 7, 29, -20, 18, -128, 39, -29, -20, -128, 
  -77, -128, -77, -128, -60, -128, -26, -60, -12, -60, 
  122, 100, 118, 91, 102, 85, 102, 73, 59, 49, 
  69, 32, 31, 32, 20, -128, -43, -60, 31, -18, 
  42, -29, 11, -6, 11, -60, -60, -128, 18, -29, 
  31, 27, 42, -33, 1, -18, 7, -6, 1, 4, 
  123, 94, 122, 101, 118, 100, 119, 94, 110, 72, 
  60, 30, 80, 72, 64, 43, 69, 58, 74, 52, 
  66, 58, 79, 72, 81, 76, 38, -26, 23, 24, 
  72, 70, 82, 17, 48, 34, 59, 44, 49, 37, 
  112, 85, 112, 92, 112, 94, 120, 97, 120, 90, 
  91, 55, 99, 91, 119, 98, 110, 84, 71, 65, 
  109, 87, 104, 87, 110, 93, 109, 97, 119, 96, 
  110, 74, 101, 84, 100, 60, 73, 55, 83, 67, 
  99, 71, 107, 85, 108, 90, 109, 102, 124, 98, 
  122, 95, 116, 95, 119, 96, 118, 92, 103, 67, 
  105, 78, 94, 75, 94, 72, 85, 49, 90, 80, 
  91, 71, 85, 73, 92, 67, 90, 73, 92, 77, 
  95, 70, 84, 61, 92, 74, 105, 82, 113, 92, 
  118, 92, 114, 98, 107, 79, 102, 79, 99, 62, 
  89, 55, 89, 22, 61, -26, 53, 32, 95, 57, 
  80, 64, 82, 59, 91, 69, 91, 70, 84, 61, 
  96, 76, 50, 37, 81, 63, 102, 54, 101, 88, 
  104, 89, 113, 64, 94, 4, 68, 57, 85, 76, 
  93, 59, 72, 16, 64, -23, 7, -33, 67, 41, 
  56, -6, 52, 15, 73, 51, 75, 54, 76, 50, 
  90, 69, 21, 16, 81, 60, 100, 45, 96, 84, 
  103, 82, 64, -29, 64, -43, 60, 66, 66, 47, 
  79, 57, 57, -18, 29, -128, -8, -128, 56, 38, 
  67, 55, 70, 49, 81, 42, 70, 44, 68, 45, 
  86, 64, 39, 33, 79, 49, 91, 47, 96, 79, 
  97, 75, 58, -16, 70, -128, 44, 52, 38, 0, 
  74, 52, 67, 11, 42, -12, -77, -60, 64, 39, 
  67, 56, 80, 53, 70, 38, 74, 30, 59, 37, 
  79, 57, 37, 40, 84, 47, 94, 47, 86, 75, 
  71, 53, 19, -128, 50, -12, 53, 40, 68, -128, 
  63, 53, 55, 31, -18, -128, -2, -128, 52, -43, 
  56, 46, 70, 42, 60, 40, 62, 24, 57, 32, 
  63, 33, 11, 26, 77, 33, 84, 30, 76, 62, 
  44, 11, 4, -128, 22, -50, 49, 42, 65, -128, 
  4, -8, 39, 18, 31, -33, 22, -128, 69, 50, 
  66, 49, 82, 55, 67, 13, 50, -16, 53, -26, 
  51, 4, -14, -18, 60, 19, 74, 21, 81, 57, 
  -3, -128, -128, -128, -128, -128, 33, 45, 47, -128, 
  -26, -128, -26, -128, -7, -60, -60, -128, 37, -1, 
  57, 13, 61, 45, 54, -8, 53, -43, 24, -29, 
  33, -26, -128, -77, 51, 4, 71, 18, 77, 52, 
  -128, -128, -16, -128, -128, -128, -33, -128, 28, -60, 
  26, -29, -128, -128, -128, -128, -128, -128, -128, -128, 
  50, 11, 60, -77, 8, -6, 64, 4, 8, -60, 
  14, -128, -128, -128, 42, -6, 64, -4, 66, 32, 
  -128, -128, 4, -128, -128, -128, -14, -128, -23, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  29, -77, 34, -29, 14, -128, 28, -77, -3, -77, 
  -4, -128, -128, -128, -18, -20, 56, -26, 55, 0, 
  -128, -128, -128, -128, -128, -128, -128, -128, 39, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  39, -128, -43, -60, -128, -128, -60, -128, -7, -128, 
  -60, -128, -128, -128, -43, -29, 55, -60, -29, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -18, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  36, -23, 14, -128, -18, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -18, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -8, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 14, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, 6, -18, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -23, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 39, 36, -128, -128, -128, -128, -60, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 7, -29, -128, -128, -77, -23, 53, 49, 
  15, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 51, 58, -12, -128, -128, -16, 52, 33, 
  14, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -50, 
  -128, -128, 0, -7, -128, -128, -128, -128, -60, -43, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 0, -16, 
  -128, -128, -128, -77, -128, -128, -128, -128, -128, -43, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -50, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 17, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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