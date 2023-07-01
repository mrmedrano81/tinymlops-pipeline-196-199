/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/d1a4fb3f_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_d1a4fb3f_nohash_0.cc" \
 */
#include "yes_d1a4fb3f_nohash_0.h"


const int g_yes_d1a4fb3f_nohash_0_width = 40;
const int g_yes_d1a4fb3f_nohash_0_height = 49;
alignas(16) const signed char g_yes_d1a4fb3f_nohash_0_data[] = {
  14, 4, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -26, -128, -128, -128, 
  -128, -128, -128, -60, -128, -128, -26, -60, -128, -128, 
  -60, -128, -128, -128, -128, -60, -60, -128, -128, -128, 
  8, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -60, 
  14, -77, -128, -128, -50, -128, -128, -7, -18, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -77, -23, -26, -128, -128, -128, -128, -16, -12, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -77, -60, -128, -60, -128, -128, -128, 
  -128, -128, -60, -128, -128, -77, -128, -128, -128, -128, 
  -128, -50, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -77, -37, -128, -128, -128, 
  -128, -128, -128, -77, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -37, -50, -128, -12, -50, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -77, -128, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -29, 
  -60, -128, -128, -128, -128, -128, -14, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 34, 33, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -50, -26, -128, -128, -128, -29, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 37, 34, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -2, -29, 
  -128, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  30, -60, -29, -50, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -26, -77, 
  -50, -60, -77, -128, -128, -128, -128, -128, -128, -128, 
  80, 21, 25, -23, -60, -77, -128, -128, -128, -128, 
  -128, -77, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -14, -37, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  101, 35, -6, -8, -2, -128, -128, -128, -128, -128, 
  -128, -77, -14, -128, -37, -128, -128, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  88, 42, 2, -60, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  97, 83, 88, 85, 92, 53, -26, -128, -128, -128, 
  -128, -60, -29, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  112, 92, 119, 97, 118, 91, 78, -7, -3, -33, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -50, -2, 38, -128, -128, -14, -50, -128, 
  -128, -128, -77, -128, -77, -77, -50, -60, -50, -60, 
  111, 86, 115, 90, 113, 99, 118, 91, 99, 39, 
  -8, 19, -10, -128, -50, -128, -128, -128, -37, -43, 
  23, 38, 106, 97, 116, 87, 97, 85, 52, -12, 
  -37, -128, -37, -20, 5, -14, -16, -20, -77, -26, 
  102, 79, 112, 87, 114, 98, 120, 99, 114, 92, 
  107, 90, 59, 29, -50, -33, 57, 54, 92, 90, 
  102, 97, 122, 102, 120, 97, 118, 96, 109, 88, 
  94, 39, 49, 49, 59, 53, 55, 44, 42, 48, 
  90, 79, 96, 55, 100, 64, 109, 96, 117, 95, 
  118, 89, 106, 80, 33, 37, 78, 80, 105, 90, 
  106, 87, 112, 77, 98, 79, 100, 76, 92, 74, 
  94, 47, 24, 5, 24, 9, 37, 25, 37, 17, 
  78, 75, 81, 38, 74, 10, 89, 69, 114, 94, 
  114, 95, 117, 94, 86, 62, 106, 93, 112, 91, 
  109, 69, 69, 19, 75, 56, 90, 60, 71, 38, 
  61, 9, 30, -16, 14, 0, 29, 1, 21, 1, 
  54, 56, 46, 0, 35, 1, 54, 44, 96, 84, 
  110, 82, 105, 81, 90, 67, 91, 74, 99, 71, 
  99, 59, 36, -128, 26, -12, 74, 29, 63, 0, 
  34, -50, 29, 2, 23, 2, 24, 6, 39, 13, 
  44, 29, 27, 7, 38, -128, 8, -50, 82, 71, 
  101, 75, 99, 77, 92, 65, 93, 71, 91, 52, 
  83, 40, -128, -128, -10, -18, 61, 22, 35, -37, 
  -4, -60, 2, -20, 23, -6, 18, -18, 9, 0, 
  25, 13, -3, -128, -2, -128, -16, -128, 43, 42, 
  79, 63, 89, 59, 84, 42, 91, 54, 72, 56, 
  80, -8, -128, -128, -128, -128, 9, -128, 10, -128, 
  6, -128, -33, -128, -37, -128, -37, -128, -20, -128, 
  -128, -128, -128, -128, -43, -128, -128, -128, 4, -16, 
  58, 47, 72, 8, 58, 10, 48, 2, 65, 9, 
  29, -128, -128, -128, -128, -128, 21, -128, 20, -37, 
  18, -77, -33, -77, -60, -128, -29, -128, -37, -128, 
  25, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -8, -23, 47, -128, -33, -128, 55, 4, 44, 49, 
  70, -128, -128, -128, -128, -128, -12, -128, -128, -128, 
  -3, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, -128, -128, -128, -26, -128, -37, -77, 
  -7, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -26, -6, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -33, -128, 
  -128, -128, -128, -128, -29, -77, 77, 79, 30, 5, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, 58, 62, 20, 52, 29, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -2, 40, 79, 85, -128, 42, -37, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, 2, 20, 73, 84, -77, 35, 20, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, -128, 27, 51, -128, -8, -18, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -43, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, 74, -26, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -26, -77, -29, 103, 63, -23, -50, -23, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -77, -77, -60, 16, -128, -26, -60, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, 17, 50, -128, 39, 24, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -26, 46, 49, -128, 27, -26, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -20, -7, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 6, 55, 20, -20, 
  5, -77, 2, 51, 69, 0, 25, -14, -16, -128, 
  -128, -128, -128, -128, -128, -128, 34, -8, -7, -128, 
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
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  0, 54, 62, 60, 55, -10, 44, 58, 66, 45, 
  40, 36, 70, 85, 110, 98, 109, 94, 113, 94, 
  107, 89, 82, 59, 82, 93, 96, 82, 107, 85, 
  85, 90, 112, 95, 86, 70, 91, 69, 88, 27, 
  -128, -128, -128, -12, 7, 4, 57, 55, 61, -18, 
  61, 49, 56, 41, 81, 41, 82, 9, 16, -128, 
  48, 8, -77, -128, 23, -50, 18, -37, 50, 31, 
  51, 61, 70, -4, 32, 11, 50, 19, 29, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 13, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -14, -37, 24, -128, -128, -128, -60, -128, -60, -128, 
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