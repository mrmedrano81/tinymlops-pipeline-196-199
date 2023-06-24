/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/9a7c1f83_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_9a7c1f83_nohash_0.cc" \
 */
#include "no_9a7c1f83_nohash_0.h"


const int g_no_9a7c1f83_nohash_0_width = 40;
const int g_no_9a7c1f83_nohash_0_height = 49;
alignas(16) const signed char g_no_9a7c1f83_nohash_0_data[] = {
  62, 51, 48, 62, 83, 80, 75, 64, 55, 64, 
  47, 34, 26, 30, 43, 39, 72, 72, 82, 49, 
  60, 39, 23, 30, 47, 65, 66, 61, 74, 65, 
  62, 17, 0, 7, 5, 17, 17, 17, 14, -37, 
  87, 80, 72, 62, 81, 52, 46, 34, 52, 49, 
  56, 42, 52, 52, 65, 70, 72, 53, 79, 61, 
  55, 46, 34, 35, 49, 58, 48, 39, 38, -2, 
  8, 4, -12, -23, -6, -10, -1, -10, 4, -29, 
  69, -7, 68, 66, 77, 54, 77, 10, 69, 64, 
  51, 22, 46, 48, 66, 60, 65, 18, 49, 35, 
  51, -3, 34, 2, 45, 40, 40, 24, 39, -33, 
  -26, -43, -20, -33, -20, -43, -2, -26, -14, -29, 
  72, 7, 37, 66, 86, 69, 91, 50, 56, 14, 
  59, 45, 65, 52, 67, 68, 69, 22, 51, 31, 
  41, 29, 51, 31, 58, -14, 28, 9, 46, 23, 
  24, -6, 49, 55, 58, 23, 25, 2, -14, -43, 
  29, 34, 54, 52, 73, 47, 65, 25, 12, -128, 
  54, 57, 57, 46, 55, 32, 55, 49, 71, 50, 
  62, 24, 47, 21, 57, 7, 34, -7, -18, -60, 
  -29, 4, 19, 11, 26, 8, -23, -37, -16, -26, 
  78, 47, 42, -3, 72, 61, 62, -77, 8, 5, 
  40, -8, 47, -37, 49, -77, 45, 56, 66, 35, 
  37, 15, 25, -4, 19, 15, 42, -33, -18, -128, 
  -50, -50, -14, -23, -37, -37, -12, -50, -50, -77, 
  80, 46, 44, 37, 50, 14, 25, 22, 64, 37, 
  59, 44, 57, 25, 66, -37, 42, 32, 60, 21, 
  2, 11, 31, 38, 63, 58, 97, 75, 74, 40, 
  52, 24, 27, -43, -1, -128, -3, -26, -6, -43, 
  123, 100, 120, 96, 103, 70, 69, 59, 82, 67, 
  86, 64, 39, 56, 92, 52, 39, 44, 62, 9, 
  4, -10, 35, 4, 49, 49, 79, 22, 10, -14, 
  2, 56, 71, -37, 1, -50, 0, 5, 13, 0, 
  122, 94, 123, 101, 117, 98, 116, 95, 105, 59, 
  90, 67, 68, 50, 67, -3, 65, 44, 62, 48, 
  65, 44, 65, 71, 82, 62, 63, 1, 46, 10, 
  41, 63, 93, 54, 52, 40, 60, 43, 58, 44, 
  111, 83, 112, 91, 110, 90, 116, 99, 122, 95, 
  114, 94, 114, 94, 115, 94, 114, 90, 103, 88, 
  109, 91, 106, 90, 110, 88, 105, 95, 115, 89, 
  102, 88, 104, 80, 72, 63, 78, 59, 66, 62, 
  100, 76, 105, 87, 110, 88, 112, 100, 124, 100, 
  122, 97, 120, 100, 120, 96, 107, 79, 94, 76, 
  98, 81, 104, 79, 97, 69, 87, 73, 85, 74, 
  104, 80, 87, 67, 87, 70, 88, 71, 88, 72, 
  94, 72, 84, 67, 98, 72, 102, 84, 112, 86, 
  112, 92, 116, 90, 100, 75, 91, 69, 93, 69, 
  104, 80, 100, 67, 98, 74, 79, 54, 92, 89, 
  109, 76, 82, 60, 90, 62, 89, 68, 86, 63, 
  95, 71, 67, 53, 91, 60, 99, 57, 98, 80, 
  106, 86, 113, 45, 79, 56, 87, 61, 86, 59, 
  92, 70, 84, 60, 92, 65, 57, -128, 66, 79, 
  102, 75, 84, 64, 102, 77, 84, 57, 76, 57, 
  90, 71, 60, 53, 93, 68, 103, 39, 94, 78, 
  99, 69, 75, 49, 72, 34, 86, 26, 72, 56, 
  84, 61, 87, 56, 77, 33, 49, -14, 69, 74, 
  96, 64, 79, 63, 96, 60, 79, 51, 74, 49, 
  86, 64, 52, 28, 72, 50, 88, 45, 91, 69, 
  95, 60, 66, -10, 67, 24, 77, 57, 60, 32, 
  57, 43, 74, 50, 69, -2, 17, -128, 44, 52, 
  87, 58, 93, 66, 88, 63, 80, 44, 67, 44, 
  81, 54, 55, 27, 65, 34, 67, 54, 83, 60, 
  97, 52, 59, 10, 65, -23, 81, 59, 40, -7, 
  65, 49, 73, 27, 73, -128, -128, -128, 39, 37, 
  74, 57, 75, 52, 77, 47, 83, 35, 62, 29, 
  77, 47, 50, 5, 53, 34, 70, 56, 82, 49, 
  83, -6, -50, -37, 43, -128, 85, 54, 39, -37, 
  56, 39, 59, -14, 48, -20, -128, -128, 20, 23, 
  81, 54, 87, 56, 63, 47, 74, 30, 54, 19, 
  67, 21, 60, 13, 49, -128, -33, 58, 72, 22, 
  63, -128, -12, -50, 27, -60, 72, -26, 47, -77, 
  43, 4, 60, -128, 40, -29, -77, -128, -128, -128, 
  69, 55, 68, 37, 67, 40, 62, -60, 16, -128, 
  45, -50, 41, -128, 4, -128, -23, 54, 70, -20, 
  34, -128, -128, -128, -8, -128, 8, -3, 43, -37, 
  25, -128, 34, -128, -29, -128, -14, -128, -128, -128, 
  12, 9, 48, 20, 50, 43, 63, -29, 22, -128, 
  -10, -128, -128, -128, -128, -128, -37, -14, 47, -128, 
  -128, -128, -128, -128, -60, -128, 24, -60, 19, -128, 
  -128, -128, 19, -128, -128, -128, -128, -128, -128, -128, 
  -20, 20, 69, 11, 29, 29, 62, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -29, -128, -10, -128, 19, -128, 
  -43, -128, -10, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 34, -128, -60, -128, 35, -128, -128, -128, 
  -128, -128, -60, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  -6, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -23, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  19, -128, -128, -128, -128, -128, -128, -128, -1, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -6, 
  31, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -60, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -43, 17, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -26, -128, 
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
