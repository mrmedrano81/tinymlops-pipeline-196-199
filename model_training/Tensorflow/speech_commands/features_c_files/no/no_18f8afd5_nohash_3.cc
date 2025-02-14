/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/18f8afd5_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_18f8afd5_nohash_3.cc" \
 */
#include "no_18f8afd5_nohash_3.h"


const int g_no_18f8afd5_nohash_3_width = 40;
const int g_no_18f8afd5_nohash_3_height = 49;
alignas(16) const signed char g_no_18f8afd5_nohash_3_data[] = {
  80, 83, 96, 88, 100, 82, 80, 84, 83, 58, 
  89, 83, 79, 75, 79, 88, 103, 83, 84, 61, 
  71, 64, 80, 73, 69, 75, 78, 83, 77, 61, 
  59, 50, 70, 67, 65, 63, 65, 59, 56, 57, 
  88, 68, 94, 75, 102, 83, 86, 66, 86, 64, 
  63, 62, 91, 48, 78, 62, 103, 90, 101, 83, 
  81, 62, 77, 66, 87, 75, 83, 73, 91, 69, 
  55, 64, 72, 59, 46, 40, 50, 37, 46, 46, 
  40, 2, 71, 52, 75, 35, 92, 73, 87, 71, 
  87, 71, 85, 41, 53, 56, 83, 67, 90, 77, 
  95, 77, 80, 74, 92, 78, 74, 63, 87, 68, 
  72, 78, 90, 27, 40, 40, 55, 31, 57, 37, 
  32, 49, 75, 64, 76, 46, 72, 57, 84, 72, 
  77, 31, 77, 66, 64, 21, 85, 82, 101, 79, 
  101, 65, 96, 77, 93, 80, 94, 60, 93, 80, 
  91, 82, 102, 55, 47, -7, 63, 63, 82, 67, 
  70, 19, 55, 33, 70, 52, 92, 70, 81, 62, 
  88, 57, 80, 49, 75, 41, 75, 69, 102, 67, 
  84, 64, 82, 61, 84, 70, 85, 64, 90, 70, 
  87, 79, 95, 68, 57, 26, 56, 57, 74, 55, 
  85, 56, 83, 58, 64, -29, 55, 8, 72, 70, 
  91, 67, 85, 43, 61, 49, 66, 42, 87, 48, 
  78, 32, 72, 40, 85, 64, 77, 51, 80, 61, 
  83, 65, 79, 65, 72, 45, 73, 63, 73, 52, 
  65, 31, 27, -29, 74, 55, 68, 40, 69, 24, 
  50, 24, 55, -128, 19, -29, -16, 21, 75, 22, 
  53, 21, 26, -23, 55, 2, 60, 51, 66, 31, 
  76, 37, 64, 46, 58, 24, 51, 38, 55, 45, 
  -20, -128, 13, 23, 60, 22, 82, 49, 59, -23, 
  44, 6, 14, -128, 12, 24, 50, 48, 76, 30, 
  40, -128, -18, -128, 31, 5, 67, -3, 30, -128, 
  4, -128, 32, -23, 23, -18, 27, -2, 29, -4, 
  34, -60, 34, 4, 43, 16, 65, 35, 26, -128, 
  34, -128, -50, -128, 39, -20, -7, -6, 68, -3, 
  -128, -128, 28, -128, 16, -43, 60, 38, 40, -128, 
  36, -128, 19, -128, 23, -60, 4, -128, -1, -128, 
  -6, -60, 11, -128, 11, -128, 19, -128, 9, -128, 
  -128, -128, 32, -60, 26, -128, -43, -128, -23, -16, 
  -128, -128, -128, -128, -7, -128, 16, 0, -8, -128, 
  -128, -128, -128, -128, 4, -18, -4, -128, -3, -128, 
  -128, -50, 18, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -60, -50, -128, 6, -77, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -18, -37, -8, -128, -7, -128, 
  5, -128, -29, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 5, -128, -50, -128, -60, -128, 
  -128, -77, -6, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 4, -128, -60, -128, -77, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -18, -60, -18, -128, -128, -128, 
  -128, -37, -20, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -12, -128, -43, -128, -77, -128, 
  16, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -60, -128, -128, -128, 
  68, 9, 17, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -50, -128, -128, -128, 
  124, 102, 122, 94, 99, 70, 72, 58, 71, 0, 
  -4, -128, -50, -128, -6, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -23, -128, -26, -128, -20, -128, 
  107, 96, 118, 87, 105, 90, 105, 78, 92, 75, 
  67, 76, 84, -16, 27, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, 12, -50, 13, -77, -12, -43, 
  102, 87, 109, 82, 101, 86, 110, 76, 98, 83, 
  82, 81, 97, 67, 75, 61, 87, 42, 49, 55, 
  55, 47, 66, 63, 92, 75, 93, 35, 52, 11, 
  31, -128, -128, -128, 32, 15, 40, -4, 8, -14, 
  81, 61, 88, 68, 91, 91, 115, 95, 113, 85, 
  100, 77, 100, 83, 100, 85, 102, 80, 59, 54, 
  20, 7, 32, 62, 96, 67, 81, 54, 95, 69, 
  75, 42, -4, -128, 27, 34, 62, 21, 59, 14, 
  75, 47, 82, 45, 75, 72, 99, 84, 107, 74, 
  98, 71, 101, 85, 107, 87, 88, 47, 41, 4, 
  -29, -128, 0, 47, 90, 55, 72, 69, 97, 62, 
  65, 37, 21, -77, 26, 2, 42, 34, 69, 40, 
  70, 37, 81, 50, 72, 65, 96, 72, 104, 72, 
  99, 72, 103, 92, 107, 54, 50, -128, -29, -77, 
  -128, -128, -60, 4, 79, 56, 75, 59, 73, 31, 
  67, -37, -14, -128, -26, -43, 39, 16, 55, 44, 
  67, 32, 79, 49, 69, 58, 92, 62, 95, 61, 
  96, 82, 112, 72, 77, -60, 22, -128, -128, -128, 
  -128, -128, -77, -23, 74, 59, 76, 42, 52, -10, 
  59, -60, -128, -128, 1, 7, 46, -43, 32, 33, 
  66, 35, 80, 51, 74, 56, 92, 56, 92, 53, 
  96, 77, 102, 67, 57, -37, 50, -128, -128, -128, 
  12, -128, -128, -128, 55, 47, 80, 43, 24, -16, 
  42, -128, -128, -128, 26, -16, 45, -26, 26, 42, 
  64, 44, 80, 50, 69, 49, 85, 50, 86, 55, 
  97, 70, 78, 39, 59, -128, 32, -128, -128, -128, 
  -14, -128, -60, -128, 29, 16, 74, 32, 19, -50, 
  32, -128, -128, -77, 20, -43, 37, -60, 12, 9, 
  59, 39, 74, 37, 62, 42, 73, 44, 74, 49, 
  92, 57, 69, 4, 40, -128, -2, -128, -128, -128, 
  -60, -60, -18, -128, -128, 11, 65, 8, -7, -128, 
  40, -77, -77, -18, 46, -7, 27, -8, 34, 9, 
  58, 27, 64, 6, 50, 32, 57, 42, 63, 41, 
  82, 15, 47, -77, -20, -128, -128, -128, -128, -128, 
  -12, -128, -77, -128, -128, -43, 60, -23, -23, -128, 
  13, -128, -128, -43, 9, -33, 29, -128, 5, -4, 
  53, 15, 49, -7, 69, 12, 44, 46, 48, 31, 
  87, 19, -1, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 40, -128, -128, -128, 
  51, -128, -128, -128, -6, -128, 8, -60, 19, -6, 
  54, -12, 16, -23, 64, -37, 48, 43, 19, 37, 
  73, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 11, -128, -128, -128, 
  37, -128, -128, -128, -16, -50, 34, -77, 18, -33, 
  55, -10, 17, -33, 54, -128, 52, 14, -50, 17, 
  43, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -128, -128, 
  21, -128, -128, -128, -20, -128, -16, -128, 1, -128, 
  39, -128, -128, -16, 51, -128, 51, -12, -128, -26, 
  -18, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, -29, -128, -23, -128, -29, -128, 
  42, -128, -128, -29, 35, -128, 44, -77, -128, -26, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -50, 
  -37, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -23, -128, -128, -60, -23, -128, 33, 5, 14, -128, 
  30, -128, -128, -128, -14, -128, 8, -128, -33, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -18, -128, 42, -60, 
  6, -128, -128, -128, -7, -128, -128, -128, -128, -128, 
  -26, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -29, -128, 
  -77, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -37, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
  -128, -128, -128, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
