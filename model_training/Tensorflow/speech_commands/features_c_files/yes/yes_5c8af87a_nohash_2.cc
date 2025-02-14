/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/5c8af87a_nohash_2.wav" \
 * --output_c_file="features_c_files/yes/yes_5c8af87a_nohash_2.cc" \
 */
#include "yes_5c8af87a_nohash_2.h"


const int g_yes_5c8af87a_nohash_2_width = 40;
const int g_yes_5c8af87a_nohash_2_height = 49;
alignas(16) const signed char g_yes_5c8af87a_nohash_2_data[] = {
  -33, -37, -50, -60, -60, -128, -128, -128, -50, -37, 
  -18, 17, 45, -7, -50, -18, -60, -50, -128, -128, 
  -128, -128, -128, -128, -60, -60, -50, -50, -128, -128, 
  -128, -60, -128, -128, -128, -128, -128, -60, -128, -128, 
  4, -3, 4, -14, -6, -50, -128, -128, -128, -128, 
  -50, -23, -3, -29, 25, 15, -26, -60, -60, -128, 
  -60, -60, -128, -50, -60, -128, -128, -60, -50, -60, 
  -128, -128, -128, -60, -60, -128, -60, -128, -128, -128, 
  4, -33, -60, -37, -50, -128, -26, -29, -50, -128, 
  -128, -128, -23, -23, 2, -18, -26, -128, -128, -60, 
  -128, -60, -60, -50, -50, -37, -60, -128, -60, -50, 
  -128, -128, -128, -50, -60, -128, -128, -128, -128, -128, 
  -14, -26, -20, -128, -60, -77, -128, -29, -1, -23, 
  -26, -60, -23, -43, -37, -43, -60, -128, -50, -50, 
  -128, -128, -128, -50, -37, -50, -60, -77, -50, -77, 
  -128, -50, -37, -128, -37, -77, -128, -37, -60, -128, 
  -37, -60, -37, -77, -37, -50, -50, -23, -14, -50, 
  -20, -60, -50, -128, -77, -128, -77, -128, -60, -128, 
  -60, -77, -128, -77, -29, -128, -37, -50, -50, -23, 
  -26, -16, -1, -50, -50, -50, -50, -50, -26, -128, 
  -128, -128, -50, -33, -20, -77, -60, -128, -37, -60, 
  -3, -20, -2, -20, -23, -128, -128, -128, -50, -128, 
  -128, -128, -60, -77, -20, -43, -37, -77, -50, -128, 
  -60, -26, -20, -128, -37, -43, -26, -50, -60, -128, 
  -29, -23, -128, -128, -77, -128, -77, -43, -50, -128, 
  -29, -18, 19, -77, -43, -60, -29, -128, -77, -128, 
  -60, -128, -60, -60, -29, -33, -77, -128, -50, -26, 
  -29, -77, -37, -60, -29, -43, -50, -43, -37, -128, 
  -1, -23, 5, -10, -23, -77, -77, -128, -50, -43, 
  -50, -77, -4, -60, -128, -128, -37, -43, -50, -77, 
  -77, -128, -29, -43, -37, -128, -77, -77, -29, -77, 
  -77, -77, -50, -43, -20, -77, -29, -77, -50, -128, 
  -128, -77, -50, -60, -50, -60, -128, -128, -50, -128, 
  -43, -60, -60, -77, -43, -128, -128, -128, -128, -77, 
  -77, -128, -77, -20, 0, -20, -29, -43, -29, -77, 
  -37, -60, -23, -128, -37, -43, -37, -128, -37, -77, 
  -128, -128, -128, -60, -33, -20, 6, -77, -33, -50, 
  -33, -128, -128, -128, -33, -128, -128, -128, -37, -77, 
  -77, -128, -128, -128, -50, -77, -37, -128, -77, -128, 
  -50, -128, -77, -77, -128, -77, -50, -60, -77, -128, 
  -60, -128, -60, -77, -77, -60, -50, -128, -43, -50, 
  -12, -128, -128, -128, -128, -128, -50, -43, -29, -128, 
  -29, -43, -77, -60, -23, -128, -128, -60, -29, -128, 
  -50, -128, -128, -128, -50, -128, -77, -128, -128, -128, 
  -60, -128, -60, -128, -128, -128, -128, -60, -33, -60, 
  -33, -128, -128, -77, -33, -60, -77, -128, -128, -128, 
  -37, -60, -128, -128, -77, -128, -50, -37, -43, -60, 
  -43, -128, -77, -77, -77, -60, -43, -77, -29, -128, 
  -77, -128, -77, -128, -77, -128, -77, -128, -60, -77, 
  -77, -128, -128, -60, -14, -77, -43, -128, -128, -128, 
  -128, -128, -37, -128, -77, -128, -77, -50, -77, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -20, -77, -33, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -60, -128, -43, -128, -50, -128, -60, -50, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, -50, -128, -77, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -37, -77, -77, -128, -43, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -60, -60, -33, -60, 
  -77, -128, -128, -128, -128, -128, -26, -128, -77, -128, 
  -23, -128, -128, -128, -77, -128, -128, -128, -77, -128, 
  -50, -77, -43, -128, -128, -128, -43, -77, -128, -43, 
  -29, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -50, -77, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -77, -128, 
  -50, -77, -128, -128, -60, -128, -77, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -77, -128, -77, -128, -128, -60, -128, -128, -128, 
  -128, -60, -33, -60, -33, -128, -60, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -16, -43, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -77, -6, -43, -128, -128, -128, -128, -77, -128, 
  -60, -60, -26, -50, -33, -128, -26, -77, -77, -128, 
  -29, -77, -77, -37, -26, -128, -128, -60, -37, -128, 
  -23, -18, -77, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -77, -128, -60, -128, 
  -128, -128, -29, -60, -16, -33, -43, -50, -43, -128, 
  -60, -128, -128, -128, -128, -60, -60, -77, -77, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -77, -128, -60, -128, -128, -128, -128, -128, -128, -14, 
  -3, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -20, 
  -4, -128, -128, -128, -128, -128, -128, -1, -60, -128, 
  -77, -128, -60, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -77, -77, 6, -20, -77, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -10, -8, -43, -60, -77, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  31, 37, 54, 39, 45, -16, -33, -128, -128, -128, 
  -128, -128, -128, -128, -29, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  118, 98, 119, 101, 121, 96, 92, 60, 50, -29, 
  -43, -37, -18, -4, 0, -37, -37, -16, -60, -20, 
  -20, -26, -60, -77, -1, 19, 42, 14, 57, 36, 
  11, -77, -60, -77, -43, -33, -37, -60, -43, -60, 
  104, 90, 115, 82, 105, 95, 113, 79, 59, 52, 
  62, -4, -26, 2, 31, 9, 32, 39, 79, 84, 
  95, 59, 56, 54, 87, 85, 102, 74, 87, 71, 
  79, -6, -50, -77, -29, -37, -6, -29, -20, -60, 
  110, 94, 112, 96, 113, 90, 112, 89, 99, 71, 
  78, 69, 57, 69, 66, 34, 77, 80, 112, 96, 
  115, 89, 102, 87, 111, 95, 115, 94, 112, 89, 
  105, 54, 36, 35, 33, 20, 34, 21, 34, 23, 
  97, 79, 100, 85, 109, 91, 115, 91, 109, 81, 
  94, 76, 76, 82, 90, 75, 97, 88, 110, 93, 
  114, 87, 110, 94, 116, 84, 102, 85, 98, 87, 
  109, 73, 66, 33, 55, 62, 65, 48, 62, 52, 
  89, 68, 89, 66, 99, 90, 113, 90, 111, 89, 
  107, 89, 100, 85, 103, 87, 104, 85, 111, 82, 
  106, 83, 96, 80, 99, 60, 85, 63, 87, 75, 
  99, 68, 76, 30, 62, 69, 77, 67, 72, 52, 
  77, 50, 79, 41, 91, 73, 100, 91, 105, 87, 
  110, 84, 100, 75, 101, 77, 101, 89, 110, 74, 
  84, 68, 102, 84, 89, 44, 88, 74, 80, 51, 
  79, 64, 69, 12, 64, 80, 97, 76, 82, 61, 
  65, -6, 75, 47, 81, 53, 100, 83, 100, 80, 
  98, 67, 102, 73, 84, 74, 98, 78, 90, 37, 
  73, 62, 85, 61, 71, 22, 59, 20, 71, 25, 
  61, 66, 78, 34, 56, 42, 77, 56, 76, 33, 
  -26, -128, 66, 22, 42, -6, 87, 61, 98, 25, 
  78, 56, 80, 47, 82, 25, 85, 67, 61, -77, 
  27, -128, 7, -77, 44, -23, 39, 6, 77, -10, 
  -8, 65, 88, 60, 72, 19, 77, 54, 71, 17, 
  70, -23, -3, -128, 38, -12, 16, -128, 0, -10, 
  48, 32, 54, 20, 52, -128, 42, -77, 5, -128, 
  -26, -128, -18, -128, 22, -128, -12, -77, 61, -128, 
  -128, 15, 64, 52, 70, 17, 50, 21, 67, -128, 
  -6, -128, 22, -128, -26, -128, -128, -128, -4, -128, 
  -60, -128, 9, -128, -29, -23, 34, -128, -7, -128, 
  13, -14, -26, -128, -26, -128, -2, -128, 17, -7, 
  -23, -43, 55, 54, 73, -12, 66, 22, 57, 32, 
  -128, -128, -6, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -8, -128, -29, -23, 32, -128, -128, -128, 
  -23, -128, -37, -128, 7, -128, -50, -128, 30, 39, 
  50, 48, 92, 85, 105, 70, 96, 79, 98, 80, 
  -33, -128, -50, -128, -12, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, 9, -128, -128, -128, 
  -128, -128, -3, -128, -128, -128, -128, -128, 42, 29, 
  38, 61, 80, 65, 100, 70, 103, 81, 102, 74, 
  -128, -128, -26, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -43, -128, -128, -128, 
  -128, -128, -37, -128, -128, -128, -60, -128, -77, -77, 
  -12, -37, 69, 52, 84, 62, 103, 69, 85, 66, 
  -128, -128, -7, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 11, -128, 
  18, 15, 54, 49, 81, 71, 102, 71, 90, 67, 
  -128, -128, -10, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -2, -77, 
  8, 15, 61, 51, 79, 72, 77, 29, 68, 29, 
  -128, -128, 42, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -12, -128, 
  -10, 13, 72, 34, 70, 48, 60, 19, 56, -3, 
  -128, -60, 48, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -26, -128, 
  -60, -16, 49, 42, 80, 22, 41, -37, 32, 4, 
  -128, -50, 37, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -1, -128, 
  1, 4, 44, 55, 63, 11, 50, -50, 41, -2, 
  -128, -128, 16, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, 60, 20, 35, 1, 29, -128, 25, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -6, -128, 
  -128, -77, 49, -128, 40, -43, -128, -128, -10, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -26, -128, 
  -128, -12, 17, -60, 16, -50, -26, -128, -10, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -23, -128, 
  -128, -128, -26, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
