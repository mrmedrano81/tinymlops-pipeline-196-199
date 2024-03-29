/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/f2e59fea_nohash_3.wav" \
 * --output_c_file="features_c_files/yes/yes_f2e59fea_nohash_3.cc" \
 */
#include "yes_f2e59fea_nohash_3.h"


const int g_yes_f2e59fea_nohash_3_width = 40;
const int g_yes_f2e59fea_nohash_3_height = 49;
alignas(16) const signed char g_yes_f2e59fea_nohash_3_data[] = {
  85, 60, 29, 11, -10, -60, -50, -12, 0, -128, 
  -128, -128, -128, -128, -128, -60, -4, 4, -10, -50, 
  -128, -128, -128, -128, -128, -37, -26, -37, -128, -128, 
  -60, -18, -50, -60, -128, -60, -128, -128, -128, -128, 
  76, 42, 40, 44, 16, -50, -128, 26, 45, -37, 
  -128, -128, -128, -128, -128, -60, -50, 4, -1, -128, 
  -128, -60, -128, -128, -60, 65, 71, -14, -50, -50, 
  37, 60, 9, -37, -60, -60, -60, -60, -128, -128, 
  42, -33, 70, 70, 58, -20, -6, 74, 90, 46, 
  -60, -128, -128, -128, -128, -29, -60, -128, -128, -128, 
  -60, -77, -128, -128, -37, 65, 77, 58, -18, -29, 
  64, 72, 11, -77, -50, -50, -26, -37, -60, -128, 
  -128, -50, 79, 70, 59, -50, -12, 69, 79, 21, 
  -26, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -50, -128, -77, -18, 25, 70, 66, 35, 27, 
  59, 55, -3, -128, -60, -50, -12, -77, -60, -77, 
  -128, -128, 38, 30, 34, -33, 10, 66, 82, 19, 
  -60, -23, -12, -128, -128, -128, -128, -128, -128, -128, 
  -128, -50, -26, -37, -7, 37, 54, 29, 34, 26, 
  47, 10, 4, -128, -60, -50, -50, -128, -128, -128, 
  -128, -128, 65, 47, 43, -14, 24, 54, 70, -4, 
  -50, -33, -37, -128, -128, -128, -128, -128, -128, -128, 
  -128, -50, -29, -33, 1, 52, 66, 13, -18, 4, 
  52, 11, -23, -77, -60, -128, -50, -128, -50, -77, 
  -128, -128, 51, 25, 32, -60, 25, 42, 53, -77, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, -77, -12, 0, 2, 34, -10, 1, -6, 
  20, -77, -128, -43, -29, -77, -20, -128, -77, -128, 
  -128, -128, -128, -128, -60, -77, -8, -26, 1, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -77, -77, -50, -128, -77, -128, -33, -128, 
  -128, -128, -128, -128, -77, -128, -77, -60, -50, -128, 
  -128, -128, -60, -128, -128, -77, 0, -37, 5, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -29, 12, 20, -128, 9, 9, -23, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -26, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  63, 78, 81, 71, 89, 65, 60, -128, -128, -29, 
  -37, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -77, 46, 44, 52, 34, 73, 17, 53, 59, 
  22, -128, -128, -128, -77, -128, -128, -128, -77, -128, 
  120, 102, 124, 97, 118, 95, 116, 79, 66, 70, 
  75, 32, 10, 2, 14, -26, 30, 41, 65, 75, 
  106, 95, 121, 101, 120, 99, 120, 98, 122, 99, 
  107, 47, 44, 6, 35, 19, 39, 25, 37, 30, 
  107, 87, 113, 90, 117, 94, 115, 87, 90, 88, 
  107, 90, 92, 57, 66, 67, 99, 92, 114, 94, 
  116, 100, 123, 99, 122, 101, 122, 100, 122, 99, 
  112, 85, 83, 58, 70, 65, 92, 81, 79, 67, 
  103, 78, 108, 85, 116, 97, 114, 92, 108, 89, 
  115, 95, 116, 93, 115, 90, 108, 93, 111, 90, 
  112, 94, 111, 83, 112, 87, 102, 86, 112, 79, 
  106, 79, 95, 73, 87, 74, 93, 77, 85, 75, 
  97, 64, 97, 70, 106, 90, 113, 91, 109, 86, 
  109, 85, 110, 91, 111, 94, 115, 87, 102, 83, 
  117, 88, 91, 59, 110, 85, 93, 66, 90, 74, 
  109, 61, 89, 68, 85, 75, 93, 77, 82, 63, 
  91, 55, 91, 67, 72, 20, 112, 94, 104, 77, 
  105, 78, 104, 86, 109, 86, 107, 84, 108, 92, 
  113, 70, 58, 52, 94, 68, 87, 67, 93, 68, 
  100, 68, 82, 63, 103, 78, 100, 87, 96, 55, 
  88, 42, 81, 54, 83, 58, 105, 83, 106, 84, 
  103, 77, 101, 77, 100, 78, 100, 77, 104, 90, 
  101, 44, 59, 34, 90, 69, 97, 65, 90, 67, 
  99, 62, 78, 64, 106, 80, 90, 75, 89, 43, 
  83, 23, 68, 36, 57, -18, 67, 37, 95, 76, 
  82, 59, 86, 58, 70, 44, 79, 54, 88, 47, 
  15, -128, 19, -128, 31, -23, 62, -77, 17, -8, 
  75, 49, 46, 42, 81, 52, 65, 26, 51, -77, 
  60, -128, -14, -128, -128, -128, -60, -128, 16, 2, 
  14, 40, 77, -128, 33, -77, 5, -60, 31, -128, 
  -18, -128, -50, -128, -77, -128, 22, -128, -128, -128, 
  63, 83, 114, 88, 106, 92, 105, 56, 78, 40, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -6, -128, 40, -128, 19, -77, -60, -128, 26, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  61, 74, 109, 91, 108, 90, 109, 75, 92, 75, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -6, -128, -43, -128, 8, -128, 24, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  45, 42, 97, 81, 104, 76, 99, 69, 94, 73, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  37, 37, 83, 52, 83, 59, 85, 61, 88, 69, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  4, -23, 75, 47, 74, 60, 86, 59, 99, 70, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -4, 50, 5, 59, 54, 84, 41, 80, 63, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, 31, -26, 71, 36, 74, 17, 76, 56, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 16, 11, 47, -4, 65, 31, 63, 42, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 0, -60, 50, 11, 58, -14, 62, 39, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 32, -77, 45, -128, 37, 8, 35, 4, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 12, -128, 27, -128, 9, -60, 39, -43, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -23, -128, 0, -128, 31, -37, 58, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -18, -128, 17, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -33, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -8, 
  49, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -1, 61, 
  78, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -10, 50, 
  64, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, 34, 
  57, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, 47, 
  65, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -16, 
  27, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -3, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -1, 
  40, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  -18, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
