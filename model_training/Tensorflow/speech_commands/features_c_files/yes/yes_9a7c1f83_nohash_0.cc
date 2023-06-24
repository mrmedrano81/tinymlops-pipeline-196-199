/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/9a7c1f83_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_9a7c1f83_nohash_0.cc" \
 */
#include "yes_9a7c1f83_nohash_0.h"


const int g_yes_9a7c1f83_nohash_0_width = 40;
const int g_yes_9a7c1f83_nohash_0_height = 49;
alignas(16) const signed char g_yes_9a7c1f83_nohash_0_data[] = {
  75, 73, 74, 70, 80, 47, 39, 40, 39, 40, 
  43, 32, 20, 25, 33, 25, 9, 50, 68, 23, 
  20, 17, 9, -2, 59, 64, 58, 44, 0, -26, 
  -50, -26, -33, -37, -18, -26, -33, -37, -26, -37, 
  57, 61, 71, 47, 52, 60, 75, 26, 37, 32, 
  6, -3, 8, 2, 18, 6, 25, 31, 43, 32, 
  24, 14, 15, 0, 76, 60, 31, -1, -6, -20, 
  -12, -29, -18, -29, -50, -29, -12, -37, -26, -60, 
  85, 53, 50, 8, 41, 65, 76, -1, 26, 23, 
  25, 2, 32, 45, 30, -16, 10, -23, 29, 14, 
  16, -26, -20, -18, 50, 48, 40, -3, -37, -77, 
  -26, -77, -37, -37, -50, -77, -7, -37, -26, -29, 
  59, 49, 72, 46, 45, 55, 69, -3, 39, 29, 
  11, -1, 8, 40, 35, -18, -16, -29, 25, 15, 
  -6, -23, -8, -60, 55, 16, 27, -10, -14, -50, 
  -50, -43, -60, -50, -29, -50, -37, -50, -29, -50, 
  57, 4, 63, 23, 20, 19, 52, 11, 45, 24, 
  19, -43, 14, -43, -33, -33, 4, -1, 10, -20, 
  11, 24, 4, -10, 56, 45, 9, -8, 1, -60, 
  -50, -43, -50, -43, -14, -12, 1, -33, -29, -33, 
  64, 39, 60, 50, 72, 4, 8, -3, 28, 9, 
  31, 1, 25, -10, 34, 42, 74, 79, 94, 73, 
  62, 47, 60, -18, -6, -77, 21, 2, 33, 48, 
  42, 40, 29, 16, 39, 81, 99, 87, 100, 75, 
  -12, -50, 42, 35, 42, -33, 16, -20, -2, -20, 
  41, 52, 40, -20, 79, 77, 81, 70, 93, 67, 
  72, 31, 65, 32, 19, 35, 59, 37, 67, 74, 
  77, 55, 47, 33, 46, 66, 87, 57, 80, 55, 
  55, 40, 70, 15, 34, -60, 0, -77, -3, -128, 
  37, 11, 46, -2, 73, 67, 72, 12, 69, 32, 
  69, 44, 69, 52, 52, 35, 77, 57, 73, 58, 
  67, 22, 44, 28, 37, -128, 0, -60, -1, -128, 
  67, 37, 48, 11, 17, -128, -26, -23, 21, -12, 
  29, 13, 53, -18, 42, -3, 57, -128, 16, 11, 
  52, 13, 59, 65, 66, 30, 79, 58, 59, 50, 
  58, 12, -2, 16, 29, -128, -33, -128, -33, -128, 
  26, -1, 40, 24, 25, 0, 29, 4, -14, -2, 
  -20, -128, 37, 0, -20, 9, 59, -23, 49, 21, 
  35, -33, 60, 62, 61, 25, 53, 54, 58, 51, 
  48, -26, -23, -33, -4, -128, -128, -128, -128, -128, 
  47, 25, 51, 37, 52, -12, 23, 5, -77, -128, 
  -16, -128, 40, 19, 0, -8, 15, -128, 59, 39, 
  56, 45, 70, 71, 80, 41, 70, 27, 31, 23, 
  54, -8, 38, 29, 5, -128, -128, -128, -128, -128, 
  116, 96, 114, 101, 124, 100, 119, 99, 110, 82, 
  74, 63, 62, -4, 39, 43, 64, 51, 89, 94, 
  118, 92, 112, 92, 106, 60, 91, 70, 68, 33, 
  72, 85, 105, 78, 80, -14, 17, -14, -3, -29, 
  123, 98, 122, 101, 119, 102, 127, 100, 119, 95, 
  118, 93, 113, 82, 92, 82, 101, 82, 107, 95, 
  121, 99, 115, 93, 118, 91, 103, 85, 100, 87, 
  109, 85, 109, 85, 87, 59, 82, 69, 64, 48, 
  111, 81, 110, 81, 97, 98, 118, 86, 117, 89, 
  110, 87, 108, 79, 99, 74, 100, 87, 110, 84, 
  109, 86, 107, 86, 111, 92, 101, 72, 103, 90, 
  114, 81, 99, 81, 87, 67, 93, 70, 77, 60, 
  102, 74, 95, 70, 91, 85, 108, 83, 112, 90, 
  102, 79, 104, 77, 97, 78, 90, 72, 99, 74, 
  99, 63, 94, 69, 90, 57, 78, 57, 89, 55, 
  75, 60, 86, 67, 86, 69, 90, 68, 78, 55, 
  94, 68, 82, 64, 89, 58, 98, 82, 104, 90, 
  100, 79, 101, 85, 100, 72, 97, 65, 104, 79, 
  89, 60, 94, 65, 86, 53, 62, 35, 77, 65, 
  91, 69, 84, 55, 68, 59, 81, 56, 73, 45, 
  90, 64, 71, 57, 87, 34, 87, 71, 104, 86, 
  98, 80, 89, 73, 95, 75, 102, 70, 106, 71, 
  86, 62, 85, 56, 86, 50, 76, 32, 89, 82, 
  107, 90, 105, 78, 81, 24, 63, 27, 65, 42, 
  84, 58, 78, 62, 89, 50, 89, 69, 94, 77, 
  90, 69, 79, 63, 92, 64, 93, 72, 107, 63, 
  74, 52, 70, 36, 74, -37, 51, 58, 86, 66, 
  91, 73, 94, 62, 72, 67, 77, 57, 72, 31, 
  83, 59, 70, 59, 89, 23, 80, 59, 78, 58, 
  79, 53, 88, 72, 85, 58, 94, 75, 104, 68, 
  27, 6, 48, 21, 63, -128, 40, 29, 74, 34, 
  73, 58, 75, 27, 93, 82, 98, 69, 84, 44, 
  82, 57, 61, 38, 76, 2, 63, 22, 2, -128, 
  82, 62, 77, 58, 89, 55, 83, 65, 88, 40, 
  -29, -128, 49, -6, 48, -128, 24, -128, 29, -128, 
  -7, -14, 54, 6, 92, 71, 90, 71, 92, 59, 
  75, 39, 33, -128, -6, -128, -128, -128, -128, -128, 
  24, -77, 27, -77, 32, 28, 66, 40, -6, -128, 
  -128, -128, -18, -128, -29, -128, 0, -43, -29, -128, 
  -128, -128, 1, -128, 73, 49, 75, 44, 66, 44, 
  25, -128, -37, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 34, -128, -128, -128, 
  -128, -128, -29, -128, -37, -128, 42, -12, 48, -128, 
  -8, -128, 54, -23, 88, 65, 94, 75, 101, 78, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -3, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, 11, 23, 68, 11, 
  38, -37, 72, 54, 102, 89, 109, 85, 108, 85, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -29, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 37, 14, 60, -37, 
  29, -23, 46, 49, 89, 64, 94, 78, 95, 68, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 26, 14, 57, -7, 
  36, -33, 58, 49, 90, 60, 90, 64, 89, 61, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, -77, -128, -128, -77, -128, -128, -128, 
  -128, -128, -43, -128, -128, -128, 52, 26, 64, 9, 
  40, 2, 54, 29, 76, 46, 80, 54, 85, 50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 53, -16, 50, -128, 
  -12, -128, 25, 6, 75, 44, 79, 49, 75, 56, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 24, -33, 29, -128, 
  -77, -128, 34, -7, 49, 33, 74, 29, 80, 54, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 19, -33, 4, -128, 
  1, -128, 21, -2, 57, -1, 54, 39, 71, 59, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 4, -128, -128, -128, 
  -77, -50, 44, -60, 44, -7, 74, 49, 66, 25, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 34, -29, 15, -128, 
  -16, -128, 1, -10, 54, 9, 65, 12, 64, 35, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -77, 34, -33, 16, -128, 
  -6, -128, -12, -128, 24, -60, 25, -77, 48, 2, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 33, -23, -6, -128, 
  -128, -128, -50, -128, -18, -128, 39, -33, 29, -23, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 21, -128, 
  -128, -128, -33, -128, 9, -128, 19, -20, 46, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -128, -20, -128, 
  -128, -128, -128, -128, -29, -128, -14, -50, 22, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 30, -128, -128, -128, 
  -128, -128, -128, -128, -20, -128, 1, -128, -8, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 9, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, 2, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -23, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 11, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 1, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 1, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -8, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -23, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -18, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 38, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -1, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -10, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
