/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/aa80f517_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_aa80f517_nohash_3.cc" \
 */
#include "no_aa80f517_nohash_3.h"


const int g_no_aa80f517_nohash_3_width = 40;
const int g_no_aa80f517_nohash_3_height = 49;
alignas(16) const signed char g_no_aa80f517_nohash_3_data[] = {
  73, 28, 39, 50, 47, 39, -4, 4, -26, -18, 
  0, -12, -18, -2, -10, -37, -26, -37, -10, -7, 
  -18, 15, 14, 11, -18, -18, -50, -18, 9, -2, 
  -10, 4, -10, -60, -33, -26, -33, -18, -10, -12, 
  59, 21, 20, 19, 17, -14, 30, 20, -1, -8, 
  -37, -16, -26, -10, -26, -37, -50, -29, -18, -8, 
  -18, -1, 4, -77, -60, -29, -18, -14, -18, -37, 
  -18, -29, -12, -7, -18, -8, 9, -29, -18, -16, 
  39, 62, 73, 55, 54, 49, 52, 45, 35, 28, 
  -7, -128, -50, -77, -26, -37, 8, 0, -12, -12, 
  19, -8, 7, -2, -12, -29, -12, -33, -20, -43, 
  -7, -33, -7, -1, 22, -10, -14, -16, -7, -2, 
  55, 53, 71, 65, 70, 59, 71, 53, 59, 35, 
  6, -43, -37, -33, 21, 19, 47, 11, -20, 0, 
  -20, 11, 37, 21, -29, -43, -29, -33, -29, -43, 
  6, -43, 6, -14, -8, -33, 6, -18, -7, -20, 
  19, -20, 47, 9, 55, 31, 46, 30, 33, -18, 
  13, -26, -7, -77, -37, -29, -10, -50, -3, -29, 
  -29, -50, -6, -60, -14, -60, -14, -60, -37, -33, 
  -29, -43, -23, -20, 0, -20, -4, -20, -23, -23, 
  -2, 11, 41, 9, 39, -50, -128, -128, -37, -77, 
  -33, -20, -20, -77, -50, -60, -18, -50, -43, -77, 
  -43, -43, -43, -60, -29, -26, -50, -29, 0, -29, 
  -23, -29, -33, -60, -6, -37, -6, -23, -16, -37, 
  39, -33, 0, -128, -37, -128, -1, -16, 34, -20, 
  -33, -7, 0, -37, -23, -50, -14, -50, -16, -60, 
  -23, -128, -43, -60, -29, -37, -16, -37, 4, -50, 
  -10, -60, -10, -18, -2, -37, -12, -33, -6, -50, 
  9, -77, -10, -6, 26, -128, -14, -128, -77, -14, 
  22, -128, -50, -77, 4, -33, -43, -128, -23, -60, 
  -33, -50, -43, -128, -50, -128, -33, -33, 6, -37, 
  -43, -77, -18, -50, -33, -43, -18, -60, -2, -33, 
  15, -7, 31, -128, 19, -37, -128, -128, -16, -77, 
  -8, -77, -1, -4, -7, -77, -37, -16, -7, -60, 
  -43, -60, -77, -60, -50, -128, -43, -43, -33, -128, 
  -60, -50, -18, -43, -20, 0, -14, -50, -7, -50, 
  17, -128, -128, -128, -128, -128, -37, -128, -50, -128, 
  -77, -128, -26, -60, -60, -128, -43, -29, -60, -128, 
  -33, -128, -43, -77, -43, -37, -26, -60, -20, -43, 
  -43, -60, -26, -128, -43, -43, -43, -37, -43, -77, 
  -50, -128, -77, -128, -50, -77, -60, -60, -77, -128, 
  -77, -128, -33, -60, -128, -77, -50, -128, -33, -50, 
  -128, -128, -50, -77, -43, -128, -60, -128, -20, -16, 
  -33, -50, -26, -77, -20, -128, -60, -128, -43, -77, 
  -128, -128, -18, -128, -128, -128, -33, -128, -77, -128, 
  -1, -77, 8, -77, -77, -128, -77, -128, -77, -128, 
  -77, -128, -16, -128, -128, -128, -33, -60, -29, -29, 
  4, -128, -37, -77, -37, -128, -29, -60, -20, -77, 
  52, 38, 50, 13, -20, -128, -33, -50, -43, -6, 
  -18, -43, -60, -128, -128, -60, 31, -1, -20, -77, 
  0, -128, 1, -60, -60, -128, -33, -77, -60, -60, 
  -37, -77, -23, -60, -77, -77, -23, -128, -10, -77, 
  69, 65, 57, -60, -20, -128, -43, -128, -128, -29, 
  8, -37, -128, -128, -37, -3, 27, -20, -77, -128, 
  -29, -16, 46, 33, 5, -60, -128, -128, -60, -128, 
  -60, -77, -37, -60, -29, -128, -37, -50, -37, -128, 
  121, 99, 117, 84, 99, 76, 74, 43, 45, 12, 
  -50, -77, -23, -128, 2, 54, 53, 16, 36, 17, 
  43, 62, 80, 63, 40, -50, -29, -77, -37, -128, 
  -29, -16, 19, -33, -12, -23, 4, -33, -3, -29, 
  120, 101, 115, 87, 112, 94, 109, 81, 80, 74, 
  59, -4, 9, 24, 82, 78, 102, 80, 74, 78, 
  100, 92, 112, 92, 97, -8, -37, 19, 61, 64, 
  40, 76, 87, 59, 31, 38, 39, 29, 54, 28, 
  105, 89, 113, 93, 112, 93, 104, 84, 85, 64, 
  61, 39, 28, 36, 97, 87, 103, 90, 94, 72, 
  99, 85, 109, 88, 99, 39, 35, 30, 92, 82, 
  55, 67, 88, 66, 39, 57, 60, 47, 56, 37, 
  100, 81, 107, 90, 105, 84, 106, 78, 88, 49, 
  45, 35, 45, 40, 88, 82, 104, 83, 89, 64, 
  93, 77, 92, 66, 89, 47, 39, 24, 79, 67, 
  79, 71, 92, 70, 57, 42, 49, 35, 49, 32, 
  93, 69, 101, 85, 105, 70, 98, 76, 95, 51, 
  51, 21, 42, 44, 59, 60, 102, 75, 87, 61, 
  85, 43, 90, 63, 82, 56, 40, 40, 85, 64, 
  73, 64, 84, 61, 62, 55, 64, 47, 64, 42, 
  91, 39, 95, 75, 107, 70, 107, 84, 102, 66, 
  80, 52, 52, 13, 72, 45, 91, 63, 96, 74, 
  78, 37, 88, 66, 82, 59, 62, 57, 54, 25, 
  73, 44, 68, 7, 54, 37, 63, 49, 62, 37, 
  89, 52, 92, 69, 95, 84, 112, 90, 112, 77, 
  105, 78, 87, 74, 94, 71, 99, 88, 107, 84, 
  99, 65, 75, 69, 95, 64, 88, 91, 96, 42, 
  92, 46, 40, -6, 72, 59, 57, 37, 64, 45, 
  82, 61, 91, 58, 86, 80, 103, 85, 102, 72, 
  107, 78, 85, 72, 85, 61, 95, 74, 94, 60, 
  89, 53, 67, 17, 76, 72, 76, 75, 89, 38, 
  86, 47, 32, -8, 73, 52, 70, 59, 78, 60, 
  72, 49, 80, 60, 87, 74, 90, 64, 82, 70, 
  89, 48, 70, 61, 92, 77, 86, 24, 66, 43, 
  88, 70, 85, -29, 56, 62, 81, 59, 89, 58, 
  91, 55, 35, 34, 68, 35, 77, 18, 45, 8, 
  59, -8, 41, 59, 89, 68, 84, 63, 74, 75, 
  94, 57, 93, 77, 97, 55, 59, 17, 71, 8, 
  68, 45, 71, -128, 31, 23, 77, 53, 86, 50, 
  84, 48, 47, 24, 58, 24, 58, 8, 36, 7, 
  63, 32, 58, 17, 85, 40, 75, 44, 76, 38, 
  57, 39, 70, 77, 85, -60, -7, -77, 53, -37, 
  35, 29, 51, -128, -29, -128, 63, -12, 59, 42, 
  79, 21, 19, 5, 63, -33, 29, -8, 41, 14, 
  38, -128, 9, -128, 26, 19, 71, -128, 28, 14, 
  63, 52, 89, 73, 61, -128, -77, -128, -77, -128, 
  -50, -128, -20, -128, -128, -128, 21, -60, 55, -37, 
  51, -29, -128, -77, 43, -29, -128, -128, -128, -128, 
  -128, -128, -128, -128, 63, -8, 11, -128, 29, 4, 
  50, 16, 89, 32, 49, -128, -128, -128, -128, -128, 
  -10, -128, -128, -128, -128, -128, -128, -26, 42, -60, 
  4, -128, -128, -128, 10, -128, -60, -128, -77, -128, 
  -128, -128, -128, -128, 43, -128, -128, -128, -128, -128, 
  5, 47, 70, 43, 25, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -23, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -33, -128, 
  -60, -60, 14, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -3, -128, -128, -128, -128, -128, -128, -128, 
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
