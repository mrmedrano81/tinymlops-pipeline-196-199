/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/bb05582b_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_bb05582b_nohash_0.cc" \
 */
#include "yes_bb05582b_nohash_0.h"


const int g_yes_bb05582b_nohash_0_width = 40;
const int g_yes_bb05582b_nohash_0_height = 49;
alignas(16) const signed char g_yes_bb05582b_nohash_0_data[] = {
  57, 64, 74, 59, 53, 64, 72, 46, 43, 51, 
  57, 23, 14, 45, 56, 87, 99, 76, 75, 85, 
  109, 92, 97, 65, 54, 11, 35, 55, 95, 91, 
  84, 69, 91, 89, 99, 97, 109, 89, 117, 100, 
  31, 40, 40, 14, 45, 48, 59, 44, 38, 54, 
  62, 26, 25, 39, 81, 60, 82, 68, 79, 50, 
  73, 64, 89, 59, 51, 31, 47, 49, 78, 75, 
  91, 74, 83, 64, 91, 57, 64, 49, 81, 38, 
  62, 42, 42, 56, 72, 60, 58, 50, 40, 19, 
  40, 24, 1, -4, 42, -14, 6, -33, 40, -2, 
  -14, -128, 5, -77, -3, 11, 43, 19, 40, -18, 
  42, 21, 23, -128, 19, -128, 2, 31, 27, -128, 
  35, 4, 52, 25, 56, 16, 4, 4, 18, -7, 
  32, 25, -16, -20, 26, -29, -12, -26, 19, -128, 
  -128, -128, -128, -33, 14, 23, -14, -10, 16, -128, 
  -3, -128, -14, -128, -2, -128, -60, -128, -128, -128, 
  55, 32, 52, 13, -20, -128, -29, -128, 14, -29, 
  24, 19, 37, -50, -26, -128, -1, -8, 30, -128, 
  -128, -128, -128, -60, 19, 9, 4, 2, 0, -128, 
  -50, -128, -43, -128, -128, -128, -128, -128, -128, -128, 
  52, 27, 44, -128, 11, -128, 15, 6, 37, -7, 
  28, -37, 35, -77, 2, -128, -77, -128, 21, -128, 
  -128, -128, -77, -77, 11, -23, -10, -77, -37, -128, 
  -20, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  63, -26, -12, -16, 27, -1, 34, -26, -8, -128, 
  8, -10, 9, -29, 16, -128, -128, -77, -23, -128, 
  -128, -128, -128, -128, 29, -26, 17, -50, -60, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  29, -37, -2, -1, -10, -128, -37, -128, 1, -128, 
  6, 15, 42, -50, -10, -128, -77, -33, 14, -128, 
  -128, -128, -128, -128, -16, -128, 13, -60, -128, -128, 
  -37, -128, -128, -128, -29, -128, -128, -128, -128, -128, 
  61, -37, -26, -128, -60, -60, -37, -128, -3, -60, 
  -77, -128, -33, -23, -128, -128, -128, -4, -8, -128, 
  -128, -128, -77, -128, -37, -60, -26, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  11, -60, 14, -10, 16, -128, -50, -43, 9, -43, 
  -33, -50, 16, -128, -37, -128, -60, -128, -7, -128, 
  -77, -128, -128, -77, -1, -60, -16, -128, -128, -128, 
  23, -37, -50, -128, -128, -128, -29, -128, -128, -128, 
  -10, -128, 22, -12, 29, -50, -16, -128, -26, -60, 
  -29, -37, -8, -77, -6, -128, -77, -128, -37, -128, 
  -128, -128, -128, -128, -18, -77, -77, -128, -128, -128, 
  46, 34, -33, -128, -128, -128, -77, -128, -128, -128, 
  34, 5, 6, -60, -23, -128, 34, -8, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -6, -128, 
  -128, -128, -128, -60, -26, -128, -23, -128, -60, -128, 
  67, 28, -60, -128, -128, -128, 4, -33, -50, -128, 
  -29, -128, -77, -128, 2, -43, 40, -14, 15, -77, 
  -128, -128, -77, -77, -60, -128, -10, -128, -4, -128, 
  -128, -128, -43, -43, 9, -37, -14, -128, -128, -128, 
  67, 40, -8, -128, 37, -29, 24, 2, 77, 71, 
  118, 99, 119, 97, 110, 68, 50, 26, 32, -128, 
  -50, -20, -29, -10, 2, -128, -43, -128, -128, -128, 
  -43, -128, -77, -128, 1, -50, 69, 75, 60, -60, 
  61, 64, 5, -128, 64, 27, 47, 27, 66, 67, 
  122, 102, 124, 100, 117, 95, 89, 60, 67, 42, 
  46, 34, 40, 5, 1, -43, -6, -23, 35, -43, 
  70, 64, 61, 27, 62, 65, 113, 100, 120, 85, 
  85, 71, 69, 57, 90, 78, 96, 81, 105, 87, 
  105, 84, 101, 90, 113, 90, 100, 65, 82, 72, 
  68, 21, 49, 18, -3, -60, -16, -77, 44, 51, 
  109, 96, 106, 77, 91, 81, 114, 95, 117, 93, 
  94, 62, 79, 75, 106, 80, 112, 92, 90, 65, 
  100, 79, 91, 68, 97, 80, 101, 82, 92, 25, 
  31, 14, 26, -2, 11, -128, -8, 1, 46, 71, 
  102, 84, 107, 68, 78, 76, 104, 78, 97, 73, 
  106, 81, 88, 84, 102, 80, 102, 78, 97, 82, 
  92, 62, 90, 70, 88, 60, 85, 63, 72, 21, 
  55, -16, 38, -1, 37, -26, -7, 36, 77, 70, 
  100, 77, 98, 84, 90, 63, 90, 48, 72, 63, 
  114, 94, 103, 74, 100, 83, 90, 66, 96, 74, 
  95, 67, 101, 77, 92, 56, 97, 71, 87, 67, 
  79, 52, 63, 20, 57, 35, 72, 74, 94, 85, 
  104, 81, 107, 85, 107, 78, 92, 49, 81, 73, 
  101, 69, 82, 29, 82, 67, 71, 52, 91, 65, 
  87, 51, 94, 71, 107, 87, 106, 73, 100, 80, 
  98, 68, 87, 55, 66, 44, 85, 85, 105, 91, 
  111, 89, 107, 80, 110, 84, 98, 44, 83, 71, 
  95, 42, 76, 39, 67, 54, 79, 52, 66, 31, 
  79, 37, 78, 57, 112, 92, 115, 89, 112, 90, 
  106, 90, 92, 62, 67, 81, 108, 92, 114, 89, 
  110, 81, 100, 85, 105, 82, 77, -43, 70, 70, 
  89, 40, 67, 59, 93, 70, 92, 51, 80, 42, 
  70, 29, 67, 35, 95, 74, 109, 86, 102, 80, 
  109, 69, 83, 60, 72, 78, 107, 79, 102, 83, 
  98, 59, 96, 74, 104, 75, 72, 9, 67, 62, 
  85, 36, 58, -26, 41, -26, 50, 16, 64, 2, 
  62, 19, 55, -37, 58, 30, 93, 65, 72, 31, 
  77, -14, 78, 74, 78, 49, 82, 65, 85, 58, 
  83, 28, 75, 40, 71, 56, 62, -128, 8, 29, 
  82, 41, 63, -128, -128, -128, 39, -23, 54, 5, 
  2, -128, -43, -128, 11, -128, 35, -33, 60, -12, 
  34, -128, 55, 48, 50, -29, 17, -128, 52, -128, 
  39, -128, 9, -43, 17, 45, 47, -128, -128, -128, 
  -16, -128, 27, -128, -128, -128, 36, -128, 29, -43, 
  -128, -128, -128, -128, -29, -128, -128, -128, 9, -128, 
  -128, -128, -4, -128, 19, -128, -43, -128, -29, -128, 
  22, -128, -128, -128, -4, -128, -128, -128, -128, -128, 
  -33, 14, 72, 44, 83, 39, 40, -23, 56, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  -128, -128, -77, -128, 16, -128, 4, -128, -128, -128, 
  -128, -128, -128, -43, 47, 13, 43, -128, 36, 32, 
  79, 75, 103, 91, 106, 74, 110, 88, 109, 72, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -7, -128, -60, -128, -23, -128, 
  -128, -128, -128, -128, -18, 40, 52, -128, -1, 17, 
  61, 35, 92, 78, 101, 72, 99, 75, 104, 81, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -33, -43, 
  47, 55, 85, 67, 93, 64, 90, 68, 98, 79, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -16, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  40, -26, 65, 40, 66, 30, 66, 33, 69, 39, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  14, -128, 34, 21, 56, -14, 52, 30, 60, 47, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -10, -6, 38, 16, 43, -10, 21, -50, 59, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 36, -1, 56, 12, 42, -128, 36, -37, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 51, 37, 68, -1, 34, -8, 42, 1, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, 58, 54, 68, -50, 51, 1, 63, 11, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -4, -43, 55, 24, 70, -77, 37, -33, 44, -26, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -10, -60, 56, -8, 50, -26, 36, -60, 21, -29, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  64, 33, 54, -37, 25, -23, 19, -77, 41, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, 32, 25, 49, -128, 5, -37, 37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 24, -33, 40, -33, 28, -29, 50, 2, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 16, -128, -12, -128, 10, -60, 1, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, -10, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -23, -128, -128, -128, -128, -128, 
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
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -26, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
