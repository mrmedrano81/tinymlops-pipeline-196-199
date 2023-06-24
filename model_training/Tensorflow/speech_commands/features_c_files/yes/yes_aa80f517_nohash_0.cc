/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/aa80f517_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_aa80f517_nohash_0.cc" \
 */
#include "yes_aa80f517_nohash_0.h"


const int g_yes_aa80f517_nohash_0_width = 40;
const int g_yes_aa80f517_nohash_0_height = 49;
alignas(16) const signed char g_yes_aa80f517_nohash_0_data[] = {
  56, 45, 39, -2, 9, 17, 5, 15, -18, -60, 
  -33, -7, -18, -37, -33, -60, -50, -37, -18, -26, 
  -26, -12, -33, -12, -18, -7, -33, -7, 0, 4, 
  0, 17, 20, -12, -18, 7, -10, -7, 5, 7, 
  50, 39, 24, 18, 27, -23, 8, -43, -50, -20, 
  4, -37, -6, -14, -37, -20, -37, -8, -1, 5, 
  -6, -16, 4, -16, 4, -29, -26, -4, 19, -29, 
  4, -6, 11, 5, 4, -10, -18, -29, -1, -1, 
  21, 36, 54, 45, 23, 11, 31, -2, -26, -77, 
  -50, -6, -12, -77, -26, -23, 19, -10, -14, -18, 
  -7, -50, -2, -23, -29, -33, -12, -12, 2, -12, 
  -29, -43, -29, 1, 11, -18, 4, -6, -14, -33, 
  32, -77, 8, -4, 4, 19, 36, 10, -20, -6, 
  24, 0, -37, -50, -60, -128, -14, -14, 2, -60, 
  -37, -60, -20, -33, -20, -33, 7, -20, -8, -43, 
  -20, -20, 1, -20, -14, -14, -3, -26, -14, -37, 
  70, 33, 19, -10, 19, 0, -12, -60, -37, -60, 
  -16, 1, -14, -128, -128, -60, -37, -37, -29, -29, 
  -20, -60, 22, 27, 5, -20, 34, 29, 4, -43, 
  -16, -29, -10, 0, 35, 14, 5, -2, 5, -37, 
  47, -77, -77, -43, -20, -77, -43, -128, -37, -33, 
  -43, -50, -23, -128, -29, -43, -128, -60, -10, -29, 
  -16, -20, 8, -6, -10, -23, -12, 9, 7, -23, 
  0, -26, 14, 24, 24, -16, -10, -60, -10, -12, 
  31, 12, 22, -23, -128, -128, -20, -128, -16, 26, 
  15, -43, -10, -60, -37, -43, -43, -8, -128, -128, 
  -33, -50, -128, -128, -6, -18, -26, -60, -33, -37, 
  -12, -60, -12, -20, -8, -8, -12, -26, -2, -20, 
  98, 70, 79, 66, 71, 8, 50, 39, 15, 7, 
  -12, -128, -50, -43, -50, -128, -50, -26, -23, -60, 
  28, 7, -7, -77, -18, -10, 1, 4, 28, -2, 
  -43, -60, -77, -128, -10, -77, -18, -50, -3, -60, 
  123, 103, 122, 100, 120, 93, 96, 76, 72, 61, 
  51, 22, 16, 9, 29, 16, 23, 16, 52, 72, 
  82, 84, 95, 79, 102, 92, 107, 90, 104, 90, 
  77, 20, 33, 40, 57, 51, 38, 39, 49, 27, 
  113, 95, 119, 101, 123, 99, 117, 92, 89, 54, 
  67, 52, 45, -10, 45, 54, 67, 71, 107, 95, 
  114, 90, 115, 95, 118, 97, 114, 93, 110, 91, 
  106, 38, 54, 70, 87, 76, 67, 47, 55, 32, 
  104, 83, 107, 87, 110, 100, 122, 86, 111, 82, 
  65, 62, 66, 32, 78, 78, 89, 80, 108, 94, 
  115, 88, 113, 95, 111, 76, 96, 83, 108, 77, 
  66, 60, 74, 76, 94, 72, 79, 57, 72, 59, 
  94, 72, 95, 65, 105, 97, 119, 94, 117, 95, 
  104, 64, 65, 53, 85, 87, 110, 88, 115, 83, 
  95, 76, 107, 82, 90, 36, 84, 74, 94, 47, 
  64, 42, 73, 68, 95, 77, 96, 59, 71, 55, 
  89, 62, 84, 35, 97, 75, 96, 91, 104, 73, 
  87, 62, 70, 65, 98, 80, 103, 82, 86, 50, 
  72, 72, 105, 80, 70, -50, 52, 39, 73, 42, 
  64, 19, 55, 67, 97, 68, 83, 44, 66, 44, 
  84, 50, 87, 56, 94, 55, 96, 82, 83, 70, 
  94, 77, 100, 72, 90, 70, 108, 88, 77, 19, 
  67, 49, 86, 38, -37, -128, 30, -128, 48, 19, 
  38, 17, 75, 57, 89, 64, 86, 60, 62, 44, 
  25, -128, 0, -128, 35, -128, 53, 40, 75, 44, 
  83, -77, 42, 48, 73, 32, 71, 47, 26, -128, 
  -7, 9, -8, -128, -128, -128, -128, -128, 51, -23, 
  45, -3, 61, 46, 73, 49, 74, 62, 86, 67, 
  -20, -128, -128, -128, 40, -12, 30, -77, 34, -128, 
  45, 19, 67, 54, 67, -43, 59, -29, -128, -128, 
  -43, -18, 34, -128, -60, -128, -10, -128, -8, -128, 
  42, 30, 58, 44, 62, 59, 94, 80, 101, 86, 
  -128, -128, -128, -128, -128, -128, -128, -128, -33, -128, 
  62, 45, 61, 39, 56, -37, 62, -18, 37, -128, 
  11, -77, 29, -60, 41, -128, 8, -128, -33, -128, 
  41, 48, 78, 67, 67, 50, 92, 76, 98, 74, 
  -128, -128, -128, -128, -128, -128, -128, -128, -18, 38, 
  75, -20, 67, 37, 59, -16, 50, 19, 44, -60, 
  36, -23, 51, -43, 34, -7, 26, -128, -128, -128, 
  45, 44, 85, 9, 69, 57, 96, 75, 101, 79, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  52, 29, 34, -37, 51, 57, 48, -77, -18, -128, 
  -77, -33, -4, -128, 31, 11, -8, -128, -77, -128, 
  35, 37, 83, 41, 74, 60, 87, 69, 94, 73, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -60, 
  54, -128, 31, 15, 36, 29, 31, -128, 8, -60, 
  13, 20, 44, -37, -43, -128, 9, -128, -128, -128, 
  31, 27, 76, 38, 65, 31, 74, 53, 85, 65, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  5, -4, 14, -128, 29, -128, 34, -60, 28, -128, 
  -77, -77, -60, -128, -33, -128, 27, -128, -77, -128, 
  46, 48, 73, 15, 46, 40, 79, 50, 82, 58, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  39, -26, -128, -128, 14, 11, 46, -18, 16, -128, 
  -128, -128, -128, -128, -128, -128, -12, -128, -128, -128, 
  55, 37, 64, 4, 64, 44, 72, 47, 82, 46, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -50, 
  34, -128, -128, -50, -12, -128, -10, -128, -18, -128, 
  -128, -128, -128, -128, -43, -128, -43, -128, -128, -128, 
  21, -10, 57, -20, 65, 37, 77, 36, 66, 44, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  22, -60, -6, -128, -43, -128, -18, -128, -128, -128, 
  -128, -43, -37, -128, -60, -128, -128, -128, -128, -128, 
  -3, -29, 52, -14, 69, 42, 73, 43, 81, 47, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  52, -128, -128, -128, 0, -128, -8, -128, -8, -128, 
  -128, -77, 19, -128, -3, -128, -128, -128, -128, -128, 
  -50, -14, 45, -10, 50, 37, 65, 25, 62, 27, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  29, -43, -128, -128, -16, -60, -23, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -14, -37, 54, -2, 62, 42, 64, 32, 75, 35, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  46, -128, -128, -128, -23, -128, -50, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 48, -50, 46, 1, 44, -50, 55, -29, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  47, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -43, 11, -128, 10, -43, 16, -77, 29, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -77, -20, -128, -128, -128, -33, -128, -3, -128, 
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
