/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/a6f2fd71_nohash_3.wav" \
 * --output_c_file="features_c_files/yes/yes_a6f2fd71_nohash_3.cc" \
 */
#include "yes_a6f2fd71_nohash_3.h"


const int g_yes_a6f2fd71_nohash_3_width = 40;
const int g_yes_a6f2fd71_nohash_3_height = 49;
alignas(16) const signed char g_yes_a6f2fd71_nohash_3_data[] = {
  77, 77, 92, 74, 65, 62, 74, 60, 56, 61, 
  67, 66, 71, 69, 82, 67, 68, 56, 40, 49, 
  54, 28, 31, -12, -18, 41, 49, 45, 60, 39, 
  23, 20, 17, -2, 31, 4, 5, 7, 35, 23, 
  67, 58, 68, 67, 81, 58, 68, 52, 67, 61, 
  82, 77, 74, 51, 64, 39, 54, 31, 35, 26, 
  30, 25, 27, 21, 48, 37, 34, 35, 36, 11, 
  8, 7, -1, -23, 29, 0, 19, 15, 24, 6, 
  72, 46, 22, 29, 75, 51, 72, 57, 62, 36, 
  47, 30, 63, 30, 65, 50, 64, 44, 40, 25, 
  46, 44, 32, 26, 48, 27, 50, 34, 21, 8, 
  14, 4, -20, -6, 9, -18, 10, 26, 19, -6, 
  67, 40, 42, 40, 63, 59, 51, 25, 34, 11, 
  49, -23, 61, 59, 57, 44, 72, 63, 35, 19, 
  44, 16, 14, 9, 48, 2, 11, 14, 14, -7, 
  9, 7, 14, -8, 15, 15, 21, -14, 11, 0, 
  76, 61, 73, 67, 66, 24, 55, 28, 44, 9, 
  29, 19, 45, 16, 70, 40, 40, -16, -10, -26, 
  -12, -4, 26, -29, 34, 24, 29, 14, 23, 1, 
  30, 15, 26, -37, -7, 9, 25, -7, -3, 10, 
  67, 65, 91, 41, 55, 17, 47, 33, 71, 44, 
  55, 21, 56, 25, 48, 31, 27, -18, 27, -26, 
  7, -26, 22, 12, 4, -8, 33, 32, 26, -37, 
  9, -20, 36, 4, -20, -4, 38, -2, 23, -37, 
  64, 32, 76, 45, 45, 9, 64, 21, -12, 21, 
  48, 20, 78, 45, -2, -50, -3, -50, 27, 11, 
  30, -60, 1, -23, 31, 39, 38, 47, 71, 49, 
  50, 23, 57, 33, 11, 8, 27, -2, 39, 23, 
  54, 4, 66, 47, 49, -3, 8, -60, 33, -20, 
  -23, -60, 56, 45, 52, 16, 34, -23, 49, 32, 
  47, 33, 67, 44, 66, 63, 76, 85, 108, 83, 
  89, 71, 89, 77, 57, 25, 65, 38, 53, 68, 
  43, 36, 55, -77, 26, -128, 16, 34, 45, 28, 
  46, 8, 51, 13, 66, 28, 30, -1, 40, -26, 
  23, 40, 64, 45, 75, 47, 42, -77, 33, -10, 
  44, 10, 37, 19, 19, -20, 13, 7, 42, 35, 
  44, 34, 69, 26, 19, 31, 50, 22, 63, 45, 
  80, 35, 56, 2, 44, -12, 46, 0, 21, 21, 
  16, 12, 54, 6, 58, 35, 31, -128, 12, -50, 
  15, -77, -1, -43, 7, -14, -16, -3, 23, 37, 
  121, 97, 114, 91, 112, 86, 87, 43, 73, 68, 
  79, 52, 88, 41, 17, -50, 42, -37, 19, -43, 
  39, 22, 52, 13, 31, -18, 17, -128, -50, -128, 
  17, -128, -77, -128, 23, 21, 42, -1, 35, 47, 
  117, 100, 124, 101, 122, 85, 104, 82, 97, 70, 
  74, 65, 87, 60, 79, 54, 71, 68, 97, 85, 
  107, 97, 117, 98, 118, 96, 114, 90, 108, 85, 
  88, 40, 28, 1, 69, 77, 95, 81, 91, 72, 
  107, 92, 119, 94, 114, 100, 119, 87, 103, 84, 
  99, 87, 108, 90, 109, 89, 105, 90, 112, 93, 
  114, 91, 114, 95, 118, 94, 112, 91, 113, 93, 
  102, 52, 57, 47, 81, 86, 102, 86, 107, 77, 
  95, 83, 102, 83, 120, 98, 112, 85, 97, 67, 
  99, 85, 109, 82, 111, 88, 107, 87, 113, 90, 
  116, 94, 116, 97, 117, 89, 110, 89, 109, 85, 
  100, 60, 78, 56, 88, 70, 102, 80, 101, 58, 
  88, 59, 81, 65, 97, 90, 115, 89, 114, 89, 
  105, 87, 110, 86, 107, 89, 110, 84, 114, 92, 
  106, 78, 104, 84, 100, 69, 97, 74, 100, 74, 
  93, 54, 70, 57, 90, 74, 104, 82, 101, 50, 
  69, 45, 65, 20, 81, 64, 117, 98, 105, 81, 
  101, 79, 99, 77, 100, 81, 104, 82, 107, 87, 
  100, 51, 86, 63, 82, 49, 73, 51, 86, 55, 
  83, 61, 83, 62, 75, 38, 83, 61, 80, 52, 
  59, -60, 28, 21, 43, -33, 97, 87, 115, 80, 
  100, 75, 99, 75, 100, 77, 102, 81, 110, 87, 
  96, 54, 81, 36, 82, 51, 73, 55, 71, -16, 
  64, 61, 91, 67, 75, 34, 70, 47, 77, 59, 
  51, -128, -43, -60, -18, -128, 84, 72, 109, 78, 
  102, 71, 95, 72, 97, 78, 101, 87, 106, 80, 
  75, 50, 70, 7, 65, 31, 68, 4, 43, 36, 
  95, 76, 82, 45, 52, 15, 77, 61, 92, 66, 
  39, -128, 23, -18, 21, -60, 56, 63, 101, 79, 
  101, 75, 97, 75, 95, 70, 99, 80, 101, 55, 
  78, 46, 69, -12, 57, 15, 42, -60, 32, 39, 
  95, 69, 77, 22, 47, 2, 66, 47, 78, 44, 
  50, -128, 32, -20, 25, -128, 25, 56, 86, 69, 
  85, 59, 84, 59, 85, 61, 96, 65, 70, -128, 
  48, -29, 27, -60, 29, -128, -29, -128, -128, -37, 
  75, 46, 54, -14, 42, -37, 67, 29, 62, 43, 
  38, -128, -12, -128, -77, -128, -18, -4, 62, 53, 
  68, 46, 69, 21, 65, 32, 66, -37, -23, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  50, 17, 50, -43, -37, -128, -2, -33, 49, -3, 
  27, -128, -37, -128, -128, -128, -128, -128, -14, -77, 
  -10, -77, -16, -128, 15, -128, 27, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  52, -20, 30, -128, 44, -128, -10, -128, 27, 7, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -14, -128, 11, -77, 16, -128, -12, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  33, -7, 84, 75, 108, 80, 90, 64, 93, 90, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -33, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -8, 
  67, 67, 104, 82, 106, 85, 112, 89, 110, 85, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -37, 20, 23, 
  74, 64, 102, 93, 111, 91, 112, 84, 104, 82, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 1, -23, 46, 25, 
  53, 59, 103, 80, 114, 77, 97, 69, 94, 68, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -43, -6, 20, 
  66, 58, 90, 57, 96, 65, 91, 62, 81, 64, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 19, -26, 39, -128, 
  67, 74, 93, 69, 94, 57, 75, 55, 87, 64, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 1, -50, 49, 48, 
  85, 43, 66, 72, 86, 37, 66, 39, 81, 17, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 21, -26, 
  60, 7, 75, 54, 69, 34, 68, 8, 55, 28, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -7, -37, 4, -128, 
  39, 48, 72, 19, 64, 25, 41, -60, 43, -37, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -7, -128, 35, 9, 63, -26, -20, -128, -33, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  4, -128, -20, -128, -33, -128, 7, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -23, -128, -16, -128, -128, -128, 20, -128, -128, -128, 
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
