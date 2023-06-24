/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/7257420c_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_7257420c_nohash_0.cc" \
 */
#include "no_7257420c_nohash_0.h"


const int g_no_7257420c_nohash_0_width = 40;
const int g_no_7257420c_nohash_0_height = 49;
alignas(16) const signed char g_no_7257420c_nohash_0_data[] = {
  96, 80, 92, 80, 97, 82, 77, 76, 93, 77, 
  79, 51, 48, 60, 55, 41, 70, 71, 63, 60, 
  58, 17, -10, -2, -18, -37, -26, -26, -26, -60, 
  -50, -50, -128, -60, -60, -60, -60, -60, -128, -128, 
  -6, -3, 43, -20, -6, -128, -20, -33, -37, -50, 
  2, -37, -8, -26, -16, -77, -60, -128, -23, -128, 
  -50, -77, -50, -128, -50, -50, -37, -50, -37, -60, 
  -50, -60, -128, -60, -128, -60, -128, -60, -128, -128, 
  -6, -26, 28, -23, 15, -37, -1, -60, -37, -43, 
  -37, -18, -50, -43, -33, -77, -18, -77, -33, -60, 
  -10, -23, -50, -128, -50, -50, -60, -128, -128, -77, 
  -37, -77, -128, -128, -128, -77, -128, -128, -128, -128, 
  8, -6, 0, -43, 4, -10, 36, -37, 7, -3, 
  1, 8, 21, -10, 23, -20, -20, -128, -26, -128, 
  -23, -77, -60, -128, -60, -128, -128, -128, -60, -50, 
  -50, -128, -128, -128, -128, -77, -128, -128, -128, -128, 
  -16, -128, -50, -128, -50, -128, -26, -128, -60, -128, 
  -43, -128, -26, -128, -33, -29, -43, -128, -33, -77, 
  -33, -128, -77, -77, -50, -43, -50, -128, -50, -50, 
  -77, -128, -128, -128, -128, -128, -50, -77, -60, -128, 
  26, -33, -4, -7, -60, -128, -6, -60, -60, -128, 
  -33, -37, -33, -60, -14, -128, -60, -128, -26, -128, 
  -33, -77, -77, -77, -77, -77, -37, -50, -50, -77, 
  -37, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  4, -18, -37, -128, -77, -128, -33, -128, -50, -128, 
  -43, -60, -20, -128, -26, -60, -37, -77, -128, -77, 
  -3, -77, -128, -128, -77, -128, -128, -128, -50, -128, 
  -50, -128, -128, -128, -128, -128, -60, -128, -60, -128, 
  16, -37, -20, -37, -128, -128, -33, -128, -23, -128, 
  -77, -128, 0, -128, -60, -50, -6, -128, -60, -60, 
  -43, -60, -50, -128, -128, -77, -77, -77, -77, -128, 
  -50, -128, -128, -128, -60, -128, -50, -128, -128, -128, 
  -60, -33, 29, 4, -2, -60, -8, -128, -128, -128, 
  -128, -128, -50, -128, -29, -33, -37, -128, -29, -128, 
  -16, -60, -50, -77, -77, -128, -29, -77, -50, -128, 
  -128, -77, -77, -128, -128, -128, -77, -128, -128, -128, 
  -26, -128, -20, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -10, -43, -60, -128, -60, -77, -60, -128, 
  -50, -60, -128, -128, -77, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  2, -128, 2, -50, -50, -128, -18, -128, -128, -60, 
  -26, -50, -50, -128, -128, -60, -77, -128, -37, -128, 
  -37, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -60, -60, -10, -128, -128, -128, -50, -37, -43, -128, 
  -16, -60, -23, -128, -77, -128, -60, -128, -60, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  30, -43, -128, -128, -33, -60, -7, -128, -50, -128, 
  -77, -128, -33, -128, -50, -60, -43, -128, -60, -128, 
  -77, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  4, -60, 5, -60, -128, -77, 18, -3, -77, -128, 
  -23, -20, -33, -128, -37, -60, -20, -128, -29, -128, 
  -50, -77, -33, -128, -128, -128, -128, -60, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -8, -128, -18, -128, -128, -128, -128, -128, 
  -60, -128, -14, -128, -77, -43, -33, -128, -60, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -20, 4, 29, -26, -33, -128, -77, -128, -128, -128, 
  -29, -77, -6, -128, -77, -128, -128, -128, -60, -128, 
  -77, -128, -60, -128, -77, -128, -128, -128, -50, -128, 
  -128, -128, -77, -128, -77, -128, -128, -128, -128, -128, 
  114, 100, 121, 95, 94, 87, 104, 70, 50, 51, 
  42, 48, 55, 26, 47, -20, -16, -50, -4, -23, 
  -26, -77, -26, -77, -50, -77, -77, -77, -43, -128, 
  -77, -60, -128, -128, -77, -77, -50, -77, -77, -77, 
  112, 97, 120, 91, 75, 80, 102, 54, 89, 87, 
  90, 44, 60, 27, 58, 45, 31, 33, 56, 36, 
  49, 5, -60, -23, -77, -128, -43, -77, -128, -128, 
  -77, -128, -128, -128, -50, -50, -10, -12, 0, -16, 
  109, 90, 110, 80, 89, 90, 110, 71, 97, 83, 
  85, 79, 99, 62, 98, 65, 89, 63, 90, 63, 
  95, 59, 44, -6, 40, 70, 66, 20, -7, -23, 
  -43, -128, -43, -6, 28, -3, 29, 25, 37, 27, 
  107, 83, 102, 67, 103, 87, 104, 52, 107, 80, 
  76, 86, 100, 78, 99, 62, 87, 72, 97, 77, 
  86, 74, 59, 40, 77, 79, 88, 61, 5, -16, 
  -33, -60, -50, 4, 26, -16, 20, 15, 37, 9, 
  100, 75, 95, 60, 101, 80, 98, 44, 99, 72, 
  74, 76, 91, 80, 97, 64, 91, 64, 84, 70, 
  87, 79, 69, 43, 77, 70, 85, 54, 40, 5, 
  5, -12, 39, 35, 41, 29, 54, 45, 54, 44, 
  91, 67, 90, 57, 85, 68, 91, 34, 87, 60, 
  66, 60, 85, 54, 84, 47, 77, 41, 75, 58, 
  77, 42, 58, 19, 49, 59, 74, 41, 11, -4, 
  -8, -128, -60, 21, 40, 20, 48, 22, 49, 45, 
  85, 60, 86, 52, 77, 61, 89, 47, 82, 59, 
  69, 55, 82, 42, 79, 30, 71, 54, 85, 58, 
  80, 32, 55, 42, 68, 68, 77, 40, 17, -7, 
  19, -50, -4, 9, 38, 30, 44, 29, 51, 33, 
  77, 54, 83, 59, 92, 48, 92, 93, 91, 70, 
  102, 49, 81, 53, 78, 57, 77, 67, 90, 72, 
  102, 83, 109, 93, 96, 71, 102, 75, 90, 73, 
  56, 15, 49, 26, 40, 25, 46, 20, 42, 22, 
  49, 35, 81, 65, 42, 60, 102, 85, 90, 91, 
  119, 54, 109, 84, 88, 86, 96, 85, 112, 95, 
  115, 93, 107, 93, 116, 77, 105, 84, 99, 67, 
  77, 48, 32, 27, 42, 26, 44, 5, 30, -18, 
  35, 15, 74, 53, 19, 53, 92, 70, 84, 89, 
  113, 67, 109, 84, 100, 89, 98, 81, 112, 90, 
  96, 73, 93, 76, 101, 78, 89, 69, 89, 69, 
  84, 41, 60, 48, 67, 46, 65, 43, 64, 50, 
  36, 9, 69, 44, 15, 49, 87, 61, 89, 81, 
  104, 70, 104, 78, 100, 82, 99, 80, 102, 80, 
  84, 57, 78, 66, 93, 72, 70, 54, 81, 61, 
  80, 40, 38, 18, 49, 34, 62, 36, 53, 32, 
  35, 8, 68, 40, 14, 46, 83, 55, 89, 75, 
  97, 64, 98, 72, 93, 74, 92, 72, 87, 62, 
  76, 49, 76, 52, 85, 64, 67, 40, 70, 55, 
  75, 39, 45, 23, 54, 32, 49, 32, 57, 37, 
  35, 4, 64, 33, -7, 41, 77, 46, 80, 61, 
  85, 61, 91, 62, 85, 61, 89, 66, 76, 44, 
  65, 24, 57, 46, 79, 59, 62, 24, 62, 45, 
  71, 35, 24, 11, 57, 9, 48, 19, 56, 13, 
  34, -1, 60, 24, -3, 37, 73, 37, 81, 54, 
  78, 56, 85, 52, 78, 49, 90, 65, 65, 20, 
  60, 10, 46, 31, 72, 47, 57, 6, 54, 38, 
  68, 20, 40, 5, 47, 9, 40, 19, 49, 17, 
  30, -7, 55, 15, -29, 34, 72, 36, 72, 49, 
  76, 44, 78, 42, 82, 54, 90, 64, 52, -12, 
  59, 6, 65, 27, 65, 29, 61, 19, 63, 44, 
  68, 22, 45, 24, 45, 19, 51, 2, 46, 17, 
  29, -16, 52, 4, 42, 35, 70, 29, 82, 49, 
  70, 42, 72, 26, 82, 52, 90, 59, 40, -77, 
  57, -7, 66, 0, 59, 18, 68, 17, 70, 46, 
  59, 14, 55, 9, 44, 2, 37, -23, 39, -12, 
  30, -18, 47, -12, -18, 29, 64, 1, 79, 37, 
  59, 45, 67, -14, 77, 35, 80, 35, 17, -128, 
  39, -128, 32, -26, 55, 6, 50, -8, 64, 47, 
  57, 5, 46, -8, 37, -16, 36, 2, 37, -12, 
  40, -12, 45, -37, 36, 27, 55, -77, 80, 17, 
  32, 47, 57, -128, 73, 4, 55, -128, 2, -128, 
  -6, -128, -77, -128, 50, -50, -1, -128, 51, 45, 
  11, -26, 25, -29, 37, 5, 20, -14, 44, -2, 
  42, -10, 41, -60, 51, 21, 49, -128, 75, -10, 
  -8, 42, 51, -128, 71, -8, 37, -128, -128, -128, 
  -128, -128, -128, -128, 44, -128, -26, -128, 43, 13, 
  -77, -128, -12, -128, -3, -128, -29, -128, -26, -128, 
  43, -18, 34, -128, 59, 15, 39, -128, 75, -20, 
  -60, 49, 50, -20, 73, -128, -3, -128, -128, -128, 
  -128, -128, -50, -128, 35, -128, -128, -128, 45, -26, 
  -128, -128, -29, -128, -33, -128, -20, -128, -33, -128, 
  47, -26, 19, -128, 74, 10, 19, -128, 72, -128, 
  -128, 51, 40, 35, 70, -128, -14, -128, -128, -128, 
  -128, -128, -128, -128, 27, -128, -128, -128, 8, -128, 
  -128, -128, -26, -128, -26, -128, -37, -128, -20, -128, 
  48, -43, -6, -128, 79, 6, -4, -128, 64, -128, 
  -128, 44, 9, 50, 69, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -128, -128, -23, -128, 
  -128, -128, -50, -128, -50, -128, -37, -128, -33, -128, 
  52, -60, -50, -128, 83, -2, -60, -33, 60, -128, 
  -128, 15, -128, 35, 30, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, -26, -128, -50, -128, -29, -128, -37, -128, 
  52, -128, -128, -128, 82, -18, -128, -23, 50, -128, 
  -128, 15, -128, -50, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -26, -128, -43, -128, 
  52, -128, -128, -128, 79, -37, -128, -29, 29, -128, 
  -128, -18, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  50, -128, -128, -128, 72, -128, -128, -77, -10, -128, 
  -18, -6, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  49, -128, -128, -128, 71, -77, -128, -128, -29, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  44, -128, -128, -128, 63, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  39, -128, -128, -128, 51, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  33, -128, -128, -128, 1, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  42, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
