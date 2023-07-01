/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/b49caed3_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_b49caed3_nohash_1.cc" \
 */
#include "no_b49caed3_nohash_1.h"


const int g_no_b49caed3_nohash_1_width = 40;
const int g_no_b49caed3_nohash_1_height = 49;
alignas(16) const signed char g_no_b49caed3_nohash_1_data[] = {
  -60, -37, -50, -128, -128, -128, -60, -50, -128, -60, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -60, -60, -60, -128, -60, -128, -60, -128, -128, 
  -128, -60, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -50, -50, -128, -128, -128, -50, -37, -60, -128, 
  -60, -60, -50, -60, -128, -128, -128, -60, -128, -60, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -60, -60, -128, -128, -128, 
  -1, -50, -128, -50, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  11, -33, -50, -43, -50, -37, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -60, -29, -77, -60, -128, -50, -77, -128, -50, 
  -26, 20, 42, 4, -1, -37, -50, -128, -60, -16, 
  -37, -37, -18, -23, -37, -77, -128, -128, -128, -77, 
  -128, -128, -128, -77, -128, -128, -128, -128, -128, -128, 
  -128, -77, -77, -128, -128, -128, -77, -128, -128, -23, 
  35, 19, 27, 11, 18, -6, -26, -128, -20, -7, 
  -2, -43, -20, -33, -50, -50, -60, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -77, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -29, 9, 7, -50, -77, -77, -29, -43, 11, -20, 
  -3, -33, -37, -128, -128, -77, 8, -1, -60, -128, 
  -128, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -77, -128, -128, 
  -128, -128, -77, -37, -50, -128, -77, -128, -50, -128, 
  -50, -77, -37, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -77, -128, -128, -128, -77, -128, -128, -128, 
  -43, -128, -77, -128, -128, -128, -128, -128, -128, -29, 
  -16, -43, 1, -60, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -16, -60, -128, -128, -77, -77, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -12, -128, -29, -128, -128, -60, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -12, -77, -128, -128, -77, -128, 0, 4, -29, -60, 
  22, 39, 49, 57, 74, 50, 42, -3, -43, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  1, -33, -128, -128, -77, -77, -10, 18, -20, 9, 
  54, 76, 93, 74, 81, 68, 72, 35, 43, 8, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -77, -50, -77, 
  62, 46, -33, -128, -29, -128, -26, -50, -37, 6, 
  79, 69, 89, 71, 94, 70, 74, 50, 42, 15, 
  -33, -128, -128, -128, -128, -128, -128, -43, -3, -8, 
  -14, 29, 59, 60, 72, 67, 59, 0, -14, -33, 
  58, 36, 7, -60, -128, -128, -77, -128, -77, -4, 
  30, -60, -50, -128, -6, -43, -10, -1, 31, 0, 
  40, 21, 77, 82, 105, 89, 105, 80, 101, 84, 
  98, 80, 107, 90, 107, 92, 100, 86, 90, 84, 
  32, -4, -18, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -14, 77, 76, 
  85, 54, 54, 11, 55, 14, 62, 43, 46, 14, 
  51, 23, 45, -26, 37, 8, 66, 52, 70, 10, 
  21, -50, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, 29, 49, -2, 
  37, -23, 23, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -18, -128, 16, -2, 42, -77, 
  2, -8, 11, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  24, -50, 4, -3, -33, -128, -60, -77, -43, -77, 
  -128, -128, -128, -128, -128, -128, -29, 61, 85, 20, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -7, -128, -77, -128, -10, -50, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -77, -1, -128, 
  -33, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, 1, 40, 49, 9, -20, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  13, -18, 57, 64, 78, 47, 7, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  89, 70, 75, 55, 68, 30, 5, 1, -12, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  124, 102, 124, 99, 119, 96, 110, 88, 100, 82, 
  69, 19, 40, -60, -60, -26, 55, 43, 53, -43, 
  19, 49, 61, 47, 39, -128, -26, 28, 76, 67, 
  15, -128, -128, -128, -128, -128, -60, -128, -20, -50, 
  108, 96, 117, 99, 120, 98, 118, 92, 112, 96, 
  118, 88, 105, 94, 111, 79, 113, 97, 116, 90, 
  85, 91, 116, 97, 105, 64, 77, 88, 110, 87, 
  85, 27, 34, -26, 6, -60, 34, -3, 29, 60, 
  107, 90, 106, 79, 97, 84, 105, 82, 107, 82, 
  101, 66, 93, 76, 92, 81, 98, 78, 103, 70, 
  96, 87, 105, 84, 91, 77, 85, 84, 106, 85, 
  82, 35, 32, -6, 16, 43, 69, 63, 70, 76, 
  100, 82, 101, 74, 96, 73, 97, 84, 96, 71, 
  93, 57, 85, 64, 81, 79, 85, 75, 94, 42, 
  87, 74, 96, 66, 87, 71, 87, 79, 97, 74, 
  85, 40, 52, 46, 58, 60, 85, 59, 74, 71, 
  95, 74, 94, 64, 87, 63, 86, 69, 91, 65, 
  83, 30, 72, 24, 55, 69, 73, 39, 63, 64, 
  87, 64, 94, 70, 86, 61, 85, 73, 95, 57, 
  72, 45, 59, 35, 67, 53, 91, 67, 86, 64, 
  74, 58, 91, 79, 108, 79, 104, 80, 103, 73, 
  96, 87, 97, 57, 83, 71, 87, 77, 112, 93, 
  105, 69, 92, 67, 106, 92, 116, 81, 100, 61, 
  94, 74, 95, 69, 72, 67, 110, 96, 119, 94, 
  71, 47, 74, 43, 88, 84, 104, 75, 102, 73, 
  89, 74, 87, 60, 86, 57, 101, 89, 99, 80, 
  107, 76, 87, 54, 77, 70, 100, 80, 98, 79, 
  94, 65, 51, 19, 74, 70, 84, 70, 100, 75, 
  78, 51, 75, 57, 88, 76, 95, 69, 94, 67, 
  90, 70, 76, 59, 83, 49, 100, 68, 65, 66, 
  96, 74, 78, 25, 72, 63, 88, 64, 89, 70, 
  99, 48, 11, -60, 74, 61, 83, 57, 87, 65, 
  75, 45, 73, 50, 83, 70, 92, 60, 82, 65, 
  88, 57, 84, 58, 87, 66, 85, -50, 53, 47, 
  82, 60, 73, 22, 62, 33, 78, 47, 79, 73, 
  104, 69, 47, -8, 70, 51, 80, 50, 84, 48, 
  79, 46, 66, 35, 92, 74, 87, -23, 73, 51, 
  75, 63, 82, 51, 92, 74, 63, -128, 26, 12, 
  80, 50, 60, -128, 59, -33, 80, 51, 72, 44, 
  77, 35, 38, -128, 15, -50, 72, 32, 78, 48, 
  78, 41, 64, 19, 94, 69, 79, 7, 44, 46, 
  69, 50, 84, 53, 85, 55, 63, 18, 38, -16, 
  65, 49, 55, -43, 57, 14, 56, 23, 60, 40, 
  80, 39, 21, -128, 6, 16, 78, 40, 73, 51, 
  72, 19, 64, 51, 90, 55, 63, 4, 57, 44, 
  55, 34, 81, 54, 100, 73, 63, -128, 4, -33, 
  71, 50, 62, -128, 30, -6, 58, -37, 27, -37, 
  50, 15, 36, 6, 30, -77, 45, -29, 66, 8, 
  64, -37, 69, 55, 85, 40, 68, 44, 63, 44, 
  69, 47, 83, 59, 89, 35, 52, -128, -10, -77, 
  57, 39, 57, -128, 24, -128, 40, -128, 30, -23, 
  19, -128, -8, -128, -50, -128, 25, -128, 35, -33, 
  60, -33, 69, 51, 83, 39, 40, 19, 56, -18, 
  67, -20, 73, 55, 79, -23, 5, -128, -10, -128, 
  27, -77, -60, -128, -128, -128, 40, -128, -23, -33, 
  9, -128, -43, -128, -77, -128, -128, -128, -29, -128, 
  52, -60, 53, 16, 74, 7, -8, 6, 48, -8, 
  65, -16, 77, 62, 67, -43, 4, -128, -128, -128, 
  -77, -128, -20, -128, -128, -128, 34, -128, -128, -128, 
  -14, -128, -60, -128, -60, -128, -43, -128, -37, -128, 
  11, -128, 50, 19, 65, -50, -12, 9, 35, -50, 
  59, -29, 72, 54, 34, -128, -128, -128, -128, -128, 
  -3, -128, 32, -128, -128, -128, -29, -128, -128, -128, 
  17, -128, -20, -77, -29, -128, -33, -128, -26, -128, 
  -128, -128, 54, 19, 51, -128, -128, -60, -6, -128, 
  57, -26, 44, 31, 34, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, 40, -29, 32, -128, -128, -128, -20, -128, 
  49, -128, -14, -20, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, 23, -60, 20, -128, -128, -128, -7, -128, 
  47, -6, 10, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, 37, -6, 28, -128, -128, -128, 14, -128, 
  50, 19, 17, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -23, -128, 37, -14, 2, -128, -128, -77, 25, -128, 
  21, 51, 55, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  5, -128, 24, -43, -16, -128, -128, -128, -16, -60, 
  -128, 7, 18, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  2, -128, -16, -128, -60, -128, -128, -128, -60, -23, 
  19, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -20, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};