/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/7e1054e7_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_7e1054e7_nohash_0.cc" \
 */
#include "yes_7e1054e7_nohash_0.h"


const int g_yes_7e1054e7_nohash_0_width = 40;
const int g_yes_7e1054e7_nohash_0_height = 49;
alignas(16) const signed char g_yes_7e1054e7_nohash_0_data[] = {
  69, 53, 56, 55, 74, 56, -10, -50, -33, -60, 
  -26, 48, 80, 81, 88, 79, 90, 81, 47, -18, 
  -60, -60, -33, 30, 82, 73, 80, 66, 61, 44, 
  23, -12, -26, -60, -50, -60, -60, -60, -60, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  24, 36, 50, 34, 47, 24, -1, -37, -18, -50, 
  -60, -29, -10, -128, -128, -128, -43, -128, -50, -77, 
  -128, -128, -128, -77, -60, -77, -60, -128, -128, -128, 
  -37, -77, -128, -77, -128, -77, -60, -77, -60, -128, 
  56, 13, -20, -14, 1, -43, -37, -77, -128, -128, 
  -60, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -50, -77, -37, -77, -128, -77, -60, -77, -37, -77, 
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
  -128, -128, -128, -128, -77, -77, -29, -77, -128, -128, 
  -50, -33, 7, 4, 4, -128, -60, -43, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -10, -33, -23, -23, 
  8, -10, -77, -128, -12, -7, -23, 0, 34, 7, 
  -16, 14, 87, 87, 87, 49, 84, 94, 109, 85, 
  -29, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -77, -128, -37, -128, -29, 10, 2, -128, -12, -128, 
  84, 59, 75, 52, 42, -1, -20, -29, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, -77, -128, -128, -128, -77, -128, -128, -77, 
  -50, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  41, -77, 12, -33, -60, -128, -128, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -37, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  -77, -128, 67, 55, 47, -50, -128, -128, -128, -128, 
  114, 96, 116, 92, 102, 74, 75, 54, 32, -12, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -6, -60, -128, -37, -10, 22, 14, 
  7, 5, 75, 77, 91, -4, -128, -128, -128, -128, 
  112, 91, 104, 90, 110, 89, 88, 71, 57, 8, 
  -29, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  -77, -128, -77, -8, -14, -50, 11, 34, 54, 28, 
  5, 15, 74, 72, 95, 28, -77, -128, -128, -128, 
  92, 73, 109, 89, 104, 82, 80, 65, 64, -29, 
  -8, -50, -50, -128, -128, -128, -128, -128, -128, -128, 
  -77, -37, 9, 13, 13, 8, 45, 48, 57, 2, 
  -26, -50, 54, 62, 93, 54, -37, -128, -128, -128, 
  85, 59, 107, 89, 105, 77, 97, 74, 75, 14, 
  21, -23, 9, -60, -50, -128, -77, -128, -18, 6, 
  8, 28, 52, 35, 44, 55, 94, 84, 88, 50, 
  22, -18, 50, 59, 91, 67, 17, -128, -128, -77, 
  77, 43, 99, 75, 107, 88, 93, 79, 87, 65, 
  68, 37, 55, -18, -8, -33, -12, 17, 46, 48, 
  74, 84, 104, 79, 92, 87, 107, 82, 92, 60, 
  45, -20, 50, 54, 93, 77, 89, -128, -26, 63, 
  77, 44, 81, 60, 110, 91, 112, 84, 93, 74, 
  78, 75, 82, 42, 47, 35, 56, 61, 91, 82, 
  103, 90, 104, 75, 97, 79, 97, 72, 91, 67, 
  56, 15, 37, 40, 82, 64, 90, -60, 14, 53, 
  79, 44, 46, 2, 72, 61, 114, 92, 101, 87, 
  101, 80, 94, 75, 82, 72, 90, 83, 104, 87, 
  111, 90, 79, 62, 97, 77, 93, 60, 80, 53, 
  62, 23, 22, 35, 76, 67, 83, 0, -3, -77, 
  75, 40, 34, -77, 4, 14, 104, 82, 113, 87, 
  97, 82, 101, 82, 97, 81, 97, 78, 104, 87, 
  100, 55, 70, 56, 83, 58, 69, 25, 59, 37, 
  53, 43, -4, -60, 63, 62, 104, 86, 80, 22, 
  75, 31, 31, -128, 26, -60, 73, 62, 108, 83, 
  103, 75, 99, 74, 102, 76, 95, 76, 104, 85, 
  94, 1, 52, 60, 89, 49, 60, 10, 77, 69, 
  58, 19, 14, 18, 65, 27, 87, 74, 93, 50, 
  72, 17, 16, -50, 23, -128, 50, 42, 95, 80, 
  92, 80, 97, 73, 92, 78, 95, 81, 103, 74, 
  77, 19, 56, 54, 85, 54, 60, 16, 70, 57, 
  64, -14, 10, 9, 67, 14, 79, 73, 75, -60, 
  61, 2, 15, -50, 6, -128, 56, -14, 84, 57, 
  89, 62, 81, 62, 82, 64, 90, 72, 92, 62, 
  70, -43, 36, 52, 72, -12, 34, -50, 55, 49, 
  65, -18, -60, -37, 49, -3, 36, 63, 85, 0, 
  55, -14, -2, -77, -18, -128, 43, -6, 80, 30, 
  74, 38, 48, 49, 75, 54, 88, 65, 99, 33, 
  39, -128, 17, -77, 46, 14, 30, -128, -37, -128, 
  4, -128, -60, -128, 28, -60, -7, 19, 60, -128, 
  36, -60, 11, -128, -18, -128, 22, 16, 64, 34, 
  70, 40, 72, 42, 69, 11, 75, 63, 84, -50, 
  8, -128, -77, -128, 15, -128, -23, -128, -128, -128, 
  -20, -14, -128, -128, -12, -128, -37, -2, 62, -128, 
  -12, -60, 20, -128, 23, -128, 39, -2, 29, 10, 
  36, -1, 69, 11, 48, 21, 74, 55, 57, -26, 
  -20, -128, -128, -128, 50, 25, -33, -128, -128, -128, 
  24, -128, -128, -128, -43, 0, -43, 11, 59, -128, 
  -12, -128, -23, -128, -14, -128, 29, -128, -77, -128, 
  -3, -128, -4, -128, -4, -128, -10, -33, 33, -128, 
  -60, -128, -128, -128, 44, 2, -37, -128, -128, -128, 
  34, -128, -77, -128, 11, 21, -128, -50, 68, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  12, -128, -128, -128, -77, -128, -37, -128, -128, -128, 
  -128, -128, -128, -128, 29, -60, -77, -128, 1, 37, 
  85, 65, 94, 41, 59, 52, 61, 45, 97, 85, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, 38, 57, 
  100, 84, 99, 67, 83, 72, 104, 84, 107, 89, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -43, 55, 31, 
  88, 69, 89, 71, 90, 62, 89, 70, 90, 71, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, 6, 39, 46, 
  84, 45, 85, 26, 68, 55, 80, 49, 71, 44, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 19, 30, 61, 40, 
  72, 65, 93, 52, 68, 60, 73, -10, 74, 31, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 38, 30, 64, 32, 
  59, 71, 95, 48, 72, 50, 54, -14, 59, -23, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -8, 31, 57, 14, 
  60, 47, 79, 55, 70, 32, 52, 6, 63, 16, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 11, 19, 54, 31, 
  75, 40, 85, 49, 72, 58, 60, -37, 48, 1, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 40, 26, 47, 52, 
  76, 46, 74, 46, 66, 32, 64, -18, 30, -20, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -7, 5, 46, 10, 
  50, 42, 68, 24, 62, -29, 36, -128, 37, -2, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, 44, 43, 
  57, 25, 62, 36, 50, -43, 45, -128, 25, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 47, 46, 
  74, 21, 58, 40, 64, -128, 19, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 53, 36, 
  52, -8, 42, -128, 24, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -37, 44, 5, 
  -2, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -29, -128, 
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