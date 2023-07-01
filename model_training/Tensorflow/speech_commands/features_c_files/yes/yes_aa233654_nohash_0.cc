/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/aa233654_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_aa233654_nohash_0.cc" \
 */
#include "yes_aa233654_nohash_0.h"


const int g_yes_aa233654_nohash_0_width = 40;
const int g_yes_aa233654_nohash_0_height = 49;
alignas(16) const signed char g_yes_aa233654_nohash_0_data[] = {
  117, 96, 110, 87, 80, 54, 26, -7, -33, 53, 
  80, 78, 102, 92, 108, 90, 87, 70, 40, 20, 
  20, 25, 63, 62, 87, 83, 87, 78, 89, 75, 
  85, 66, 17, -12, -4, 7, -18, -18, -10, -18, 
  79, 73, 99, 80, 90, 55, 52, 35, 40, 42, 
  70, 65, 77, 34, 56, -8, 65, 49, 50, 13, 
  4, 2, -1, -7, 49, 16, 47, 52, 63, 58, 
  47, 21, 42, 0, -1, -16, 4, 21, 9, -29, 
  -43, -50, 53, -26, 55, 42, 56, 36, 36, 6, 
  37, 19, 67, -10, 44, 29, 42, -7, 35, -16, 
  2, -1, -77, -43, -12, -128, -37, -8, 38, -77, 
  -43, -128, 0, -7, 7, -26, -7, -26, -14, -29, 
  -43, -128, 36, 29, 45, 0, 19, -1, -1, 2, 
  4, -128, -29, -128, -20, -128, 33, 13, -8, -37, 
  9, -8, -18, -77, -37, -128, -77, -128, -43, -128, 
  -60, -77, -6, -26, -14, -26, -20, -37, -20, -43, 
  -10, -128, 59, 45, 60, 20, 4, 4, 22, -33, 
  -26, -6, 8, -77, -128, -128, -16, -3, 10, -4, 
  4, -128, -43, -128, -60, -128, -43, -128, -128, -128, 
  -29, -50, -2, -50, -29, -37, -3, -50, -29, -128, 
  37, 28, 86, 77, 90, 40, 57, 31, 11, -33, 
  36, -10, -128, -128, -128, -128, -18, 16, 27, -16, 
  -18, -50, -33, -50, -50, -128, -37, -128, -77, -128, 
  -77, -128, -20, -50, -16, -50, -29, -37, -43, -77, 
  -128, -128, 26, 19, 60, 13, 50, -60, -10, -128, 
  -128, -128, -128, -128, -128, -128, -77, -50, 29, -37, 
  -26, -77, -20, -128, -77, -128, -128, -128, -128, -128, 
  -43, -128, -26, -37, -33, -60, -10, -50, -33, -128, 
  -60, -128, 11, -128, 14, -8, 29, -77, -29, 21, 
  30, -128, -128, -128, -128, -128, 9, -128, -6, -16, 
  9, -77, -16, -128, -128, -128, -77, -128, -128, -128, 
  -77, -128, -37, -50, -26, -60, -12, -43, -18, -77, 
  -14, -128, 37, -128, -37, -77, 2, -128, -37, -128, 
  -60, -128, -14, -128, -128, -128, -50, -128, -37, -60, 
  -4, -14, -50, -60, -60, -128, -60, -128, -77, -128, 
  -128, -128, -37, -128, -18, -43, -33, -43, -7, -128, 
  -128, -128, 26, 12, 60, 11, -26, -128, -50, -77, 
  -29, -128, -60, -128, -128, -128, 2, -26, 9, -128, 
  -2, -50, -29, -128, -77, -128, -37, -128, -128, -128, 
  -128, -128, -16, -43, -33, -128, -77, -60, -18, -77, 
  -23, -128, -43, -128, -10, -128, -77, -128, -14, -128, 
  -8, -128, -128, -128, -128, -128, -18, -128, 37, -29, 
  -3, -60, -29, -128, -50, -128, -128, -128, -128, -128, 
  -33, -128, -60, -60, -37, -128, -60, -77, -26, -77, 
  -128, -128, -50, -128, -50, -128, -128, -128, -20, -128, 
  -50, -128, -128, -128, -128, -128, -23, -128, -8, -128, 
  -14, -33, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -77, -43, -77, -37, -128, -60, -128, 
  7, -20, 29, 4, 35, -128, -20, -33, -26, -128, 
  -128, -128, -128, -128, -128, -128, -43, -16, -8, -128, 
  -33, -128, -4, -50, -128, -128, -128, -128, -128, -128, 
  -50, -128, -77, -128, -37, -128, -37, -128, -77, -128, 
  -128, -128, -128, -128, 9, -128, -60, -26, -16, -43, 
  14, -43, -128, -128, -128, -128, -60, -128, -10, -77, 
  -33, -60, -43, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -18, -128, -37, 0, 6, -128, -50, -128, 
  -128, -128, -20, -128, -23, -128, -23, -60, -23, -77, 
  -77, -128, -128, -128, -128, -128, -60, -128, 21, -23, 
  -20, -37, -77, -128, -128, -128, -60, -128, -60, -128, 
  -77, -128, -43, -60, -50, 9, 5, -128, -37, -128, 
  -37, -128, -128, -128, -128, -128, -77, -128, -18, -29, 
  10, -50, -60, -128, -128, -128, -50, -128, -37, -77, 
  -128, -77, -43, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -60, -128, -50, -128, -37, -128, 
  -128, -128, -60, -77, -50, -60, 6, -128, -128, -33, 
  14, -20, -50, -128, -77, -128, -128, -128, 5, -26, 
  -12, -60, -128, -128, -18, -77, -50, -128, -128, -128, 
  -128, -128, -43, -128, -29, -128, -26, -128, -77, -128, 
  -77, -128, -77, -128, -20, -128, -8, -128, -2, -128, 
  -23, -128, -60, -128, -128, -128, -50, -128, -14, -60, 
  -77, -77, -12, -128, -60, -128, -128, -128, -77, -128, 
  -128, -128, -43, -128, -50, -128, -50, -128, -60, -128, 
  -128, -128, -128, -128, -10, -2, -7, -77, 0, -43, 
  -8, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -77, -29, -128, -43, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -50, -128, -60, -77, -37, -128, 
  -128, -14, -3, -77, -33, -33, -26, -128, -26, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -33, 
  -18, -128, -18, -43, -50, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -20, -128, -60, -128, -50, -128, 
  -128, -128, -50, -128, -6, -128, -77, -128, -43, -60, 
  -77, -128, -43, -128, -128, -128, -43, -128, -77, -128, 
  -50, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -60, -33, -128, -77, -128, -50, -77, 
  -128, -128, -16, -128, -128, -128, -128, -128, -50, -37, 
  -29, -77, -128, -128, -128, -128, -128, -128, -3, -60, 
  -50, -128, -128, -128, -60, -128, -60, -128, -128, -128, 
  -128, -128, -77, -60, -60, -128, -77, -128, -60, -128, 
  70, 61, 79, 64, 77, 1, 35, 4, -18, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -18, -77, 
  -37, -128, -77, -128, -12, 51, 65, -10, -50, -128, 
  -3, -3, -8, -128, -43, -128, -50, -77, -26, -77, 
  94, 88, 114, 90, 98, 73, 79, 66, 37, -128, 
  15, -50, -128, -128, -128, -128, -128, -37, -26, -128, 
  -20, -50, -77, 14, 91, 94, 114, 97, 115, 94, 
  113, 96, 105, 71, 107, 83, 17, -10, 59, 56, 
  112, 85, 102, 82, 115, 97, 109, 79, 74, 28, 
  21, -128, -128, -128, -77, -128, -16, -128, -16, -29, 
  1, -29, 7, 70, 102, 80, 106, 84, 95, 67, 
  86, 78, 102, 60, 53, 24, 23, -6, 0, -18, 
  102, 72, 92, 68, 97, 82, 112, 94, 104, 79, 
  81, 50, 4, -128, -128, -50, 25, 19, 54, 35, 
  61, 84, 112, 96, 106, 77, 95, 63, 88, 65, 
  90, 65, 100, 82, 67, -128, -26, -33, -26, 4, 
  94, 63, 75, 44, 81, 58, 106, 90, 110, 91, 
  101, 70, 65, -8, -16, 45, 67, 65, 97, 86, 
  104, 87, 109, 83, 93, 61, 94, 70, 87, 67, 
  86, 61, 90, 83, 86, -128, 9, 30, 28, -26, 
  86, 50, 61, 32, 69, 35, 84, 71, 110, 89, 
  109, 88, 95, 70, 69, -20, 74, 74, 95, 80, 
  109, 94, 110, 66, 81, 61, 89, 51, 65, 36, 
  64, 48, 87, 68, 78, -3, 26, 18, 43, -8, 
  72, 24, 55, 40, 50, 24, 62, 38, 95, 77, 
  100, 82, 98, 79, 88, 79, 96, 80, 99, 74, 
  97, 76, 93, 51, 88, 67, 87, 34, 73, 32, 
  64, -14, 64, 60, 87, 70, 46, 34, 57, -8, 
  -10, -29, 61, 9, 55, -4, 48, 25, 81, 61, 
  101, 75, 91, 73, 83, 50, 82, 63, 90, 72, 
  100, 59, 69, 21, 67, 35, 60, -128, 44, -16, 
  57, 16, 74, 59, 89, 67, 45, 66, 83, 2, 
  4, -43, 44, -29, 32, -128, 36, -16, 54, 28, 
  83, 59, 85, 42, 79, 54, 63, 55, 79, 71, 
  90, -16, 16, -128, 19, -60, 40, -128, 0, -128, 
  -2, -128, 31, -128, 33, -10, 19, 40, 66, -16, 
  -128, -128, -128, -128, -43, -128, -128, -128, -128, -128, 
  25, 15, 71, 2, 37, 4, 37, 6, 62, -8, 
  29, -128, -128, -128, -128, -37, 22, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -8, 53, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  39, 15, 55, 27, 58, 7, 45, -6, 67, 61, 
  59, -128, -128, -128, 40, -60, -12, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -14, -128, 9, -43, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 28, -128, -2, -128, 20, -128, 43, 15, 
  18, -128, -128, -128, 6, -128, -29, -128, -128, -128, 
  -128, -128, 57, -128, -60, 4, 75, 28, 55, 26, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  9, 34, 69, 20, 80, 78, 107, 93, 112, 89, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -60, 
  36, 29, 62, 32, 82, 77, 110, 88, 106, 86, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 40, 22, 
  52, 14, 67, 55, 81, 71, 107, 84, 106, 79, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 18, 2, 
  52, 8, 59, 50, 81, 64, 84, 67, 97, 83, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 18, -33, 
  64, 36, 61, 41, 81, 53, 89, 72, 94, 75, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 27, 24, 
  59, -23, 50, 46, 77, 55, 90, 64, 84, 60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 22, -128, 
  23, -60, 22, 2, 69, 44, 84, 48, 71, 46, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  20, -43, 50, 17, 61, 51, 75, 33, 74, 37, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, 15, 
  50, -50, 29, 36, 62, 15, 56, 13, 64, 45, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 9, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -2, 11, 
  55, -33, 18, -26, 50, 23, 72, 24, 57, -23, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  22, -77, 34, -128, 44, 24, 52, -18, 43, -23, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -7, -128, 5, -12, 60, -3, 50, -128, 22, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -43, -43, 37, 29, 49, -128, -14, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 2, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};