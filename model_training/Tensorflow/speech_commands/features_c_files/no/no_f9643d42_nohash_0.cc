/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/f9643d42_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_f9643d42_nohash_0.cc" \
 */
#include "no_f9643d42_nohash_0.h"


const int g_no_f9643d42_nohash_0_width = 40;
const int g_no_f9643d42_nohash_0_height = 49;
alignas(16) const signed char g_no_f9643d42_nohash_0_data[] = {
  85, 65, 75, 77, 79, 60, 56, 65, 75, 63, 
  68, 70, 67, 66, 61, 59, 57, 45, 49, 23, 
  23, 20, 5, 15, 14, 25, 5, -2, 20, 7, 
  -4, 17, 20, 15, 23, 11, 9, 17, 20, 11, 
  75, 59, 72, 61, 65, 60, 74, 53, 53, 52, 
  73, 50, 38, 39, 48, 37, 72, 44, 19, 2, 
  37, 34, 30, -6, 25, 13, 8, 28, 19, -4, 
  25, 14, 27, 11, 15, 22, 15, -1, 24, 17, 
  68, 50, 75, 34, 53, 41, 36, 45, 58, 19, 
  55, 48, 65, 33, 45, 37, 61, 1, -10, -37, 
  -16, -12, 10, 8, 1, 2, 11, -4, -14, -18, 
  10, -8, 5, -14, -8, -16, 2, 0, 14, -14, 
  59, 49, 46, 43, 72, 52, 64, 40, 62, 47, 
  69, 52, 66, 34, 24, 31, 62, 20, 45, -23, 
  8, -6, 15, -18, -23, -4, -4, -37, 0, 7, 
  16, -18, 0, -12, 4, -37, -4, -60, -10, -16, 
  64, 45, 52, 13, 62, 32, 66, 53, 64, 21, 
  52, 17, 50, 16, 46, 26, 63, 42, 33, -37, 
  -7, -4, 17, -14, -10, 4, 4, 2, -10, -50, 
  -1, -33, -33, -18, 8, 4, -6, -37, 4, -26, 
  77, 67, 73, -10, -7, -10, 45, -6, 13, 39, 
  57, -2, 36, 19, 37, 8, 60, 11, 25, -33, 
  1, -3, 18, -3, -26, 9, -2, -50, -18, -43, 
  -12, -50, -2, -7, -18, -16, 2, -33, -18, -33, 
  69, 40, 39, -60, 11, 29, 58, 12, 60, 9, 
  48, 44, 55, 8, 34, 38, 57, -43, 23, -3, 
  -8, -77, -16, -23, -18, -14, -18, -37, -12, -50, 
  -20, -37, 1, -23, -14, -37, -26, -33, -20, -37, 
  59, -16, 52, 14, 46, 6, 58, 9, 55, 35, 
  49, -20, 29, 31, 60, 16, 39, -2, -33, -29, 
  4, -4, -2, -77, 5, -33, -14, -26, -60, -50, 
  -26, -23, -8, -20, -8, -37, -3, -29, -8, -77, 
  54, -128, 30, 37, 54, 24, 54, -2, 37, 12, 
  46, 9, 38, -29, 7, 4, 47, -14, 0, -16, 
  -7, -37, 11, -43, -8, -18, -8, -50, -33, -18, 
  -43, -37, -20, -77, -6, -37, -8, -77, -20, -37, 
  0, -128, -12, -26, 32, 29, 48, -20, 60, 8, 
  10, -128, -7, -128, -4, -33, 37, -77, 9, -43, 
  28, -12, -14, -77, -6, -26, -6, -50, -43, -77, 
  -16, -60, -37, -77, -10, -77, -16, -37, -16, -50, 
  -10, -128, 19, 0, 53, 4, 20, 16, 49, 47, 
  61, -16, 39, -60, 16, -2, 37, -12, -10, -37, 
  15, -26, -50, -60, -37, -37, -60, -128, -16, -37, 
  -12, -128, -50, -128, -37, -60, -29, -33, -3, -50, 
  -128, -50, 40, -26, 24, -26, 46, -37, 25, -23, 
  17, -50, 41, 29, 42, -128, 14, -77, -10, -50, 
  -33, -77, -43, -128, -29, -77, -50, -128, -16, -60, 
  -12, -77, -50, -60, -77, -128, -23, -50, -8, -60, 
  47, -128, 16, -33, 2, -60, 15, -4, 20, -128, 
  -33, -14, 34, 6, 25, -20, 26, -128, -33, -128, 
  -77, -77, 19, -77, -33, -37, -50, -128, -23, -128, 
  -33, -60, -50, -128, -37, -60, -37, -60, -14, -77, 
  46, -6, -128, -128, 10, -60, -33, -128, 21, -50, 
  -3, -6, 26, -60, -50, -128, -8, -128, -26, -60, 
  -29, -128, -18, -50, -14, -128, -33, -77, -37, -128, 
  -60, -128, -50, -128, -43, -77, -43, -128, -33, -128, 
  14, -128, -37, -77, 19, 17, 27, -37, 19, -50, 
  -10, -128, -20, -77, -16, -60, -4, -128, -33, -60, 
  -43, -77, -14, -37, -33, -77, -14, -128, -37, -128, 
  -26, -77, -43, -128, -77, -128, -60, -128, -33, -60, 
  55, -18, 29, -60, 42, -14, 23, -37, -18, -128, 
  6, -18, -10, -128, 19, -37, 20, -60, -77, -128, 
  -60, -128, -77, -128, -50, -77, -43, -50, -33, -128, 
  -43, -128, -26, -128, -6, -128, -43, -128, -33, -128, 
  34, -77, 11, 6, 34, -128, 4, -128, -18, -77, 
  33, -128, -14, -60, -26, -128, 4, -77, -18, -50, 
  -10, -60, -128, -128, -60, -50, -16, -128, -50, -128, 
  -50, -128, -128, -128, -128, -60, -20, -128, -29, -77, 
  -128, -128, -29, -128, -50, -128, 9, -43, 9, -26, 
  20, -16, 10, -128, -50, -43, 34, -33, -29, -77, 
  -50, -128, -20, -128, -50, -77, -12, -128, -33, -128, 
  -128, -128, -77, -128, -128, -128, -50, -128, -37, -128, 
  43, -29, 17, -128, -20, -128, -43, -128, -23, -128, 
  -23, -4, 40, -1, 11, -23, 10, -128, -43, -37, 
  -37, -128, -77, -77, -43, -50, -77, -128, -50, -128, 
  -60, -128, -60, -128, -77, -128, -128, -128, -77, -128, 
  -29, -128, -23, -77, 9, -2, 29, -12, -1, -128, 
  45, -37, -14, -60, 15, -128, 2, -43, -33, -128, 
  -50, -128, -33, -50, -23, -128, -77, -128, -128, -128, 
  -50, -128, -77, -128, -60, -128, -77, -128, -77, -128, 
  42, 22, 21, -128, 32, 2, -18, -128, 5, -33, 
  -4, -128, 32, -16, -12, -128, 0, -12, -128, -128, 
  -12, -14, -16, -128, -43, -77, -77, -128, -128, -128, 
  -50, -60, -77, -128, -77, -128, -29, -128, -37, -128, 
  -29, -128, 15, -128, 22, -128, -60, -128, 27, -77, 
  -77, -77, 4, -128, -128, -128, -60, -128, -77, -33, 
  -14, -37, -77, -128, -77, -77, -77, -128, -77, -128, 
  -128, -60, -23, -128, -77, -128, -77, -128, -77, -128, 
  -2, -77, 14, 29, 34, 9, 2, -29, 35, -128, 
  -43, -2, 33, -128, -20, -77, 2, -60, -33, -20, 
  -50, -128, -50, -128, -60, -128, -43, -128, -128, -128, 
  -43, -128, -77, -128, -23, -77, -60, -128, -50, -128, 
  19, -8, -26, -37, 10, -128, -128, -128, 9, -37, 
  -26, -10, 4, -128, -16, -77, -20, -33, 12, -128, 
  -10, -128, -60, -128, -60, -128, -77, -128, -128, -128, 
  -60, -77, -43, -60, -77, -128, -60, -128, -77, -60, 
  -43, -29, -20, -128, -77, -60, 17, -128, -23, -128, 
  -18, -128, -33, -43, -14, -33, 22, -37, -43, -128, 
  -1, -37, -43, -77, -26, -128, -77, -128, -18, -77, 
  -128, -128, -29, -77, -128, -50, -29, -128, -128, -128, 
  48, -33, -128, -77, -23, -128, 15, -128, -16, -128, 
  19, -128, -50, -14, 17, -2, 35, -14, -16, -37, 
  31, 14, -37, -128, 6, -77, -14, -128, -60, -128, 
  -77, -128, -18, -29, -77, -128, -37, -128, -26, -128, 
  -3, -50, -77, -29, 4, -128, -6, -128, 14, -128, 
  11, -77, -14, -128, 5, 22, 47, 21, 11, -16, 
  73, 44, -4, -16, 8, -128, -50, -128, -77, -128, 
  -77, -77, -26, -43, -37, -128, -26, -128, -50, -128, 
  17, -29, 27, 13, 54, 29, 50, -33, 35, -12, 
  32, -16, 34, 47, 56, 56, 72, 48, 24, 27, 
  75, 56, 31, 14, 52, -18, -26, -77, 34, 7, 
  -37, -128, -33, -29, -14, -128, -60, -77, -77, -128, 
  16, -128, 22, -26, -2, -128, 16, -29, 7, -37, 
  -10, -128, 20, 23, 63, 34, 36, -33, -77, -7, 
  61, 15, 1, 13, 54, 0, -8, -128, 51, 23, 
  -37, -128, -26, 42, 38, -128, -60, -128, -43, -77, 
  111, 84, 67, 54, 82, 59, 52, 0, 1, 29, 
  30, -12, 34, 28, 41, 44, 61, -6, 12, -16, 
  22, 10, -16, -33, 33, -29, -77, -128, 54, 24, 
  -50, -128, -23, 41, 43, -37, 1, -43, -23, -128, 
  115, 83, 96, 85, 100, 79, 88, -4, 2, 32, 
  33, -128, -26, -23, 35, 15, -26, -128, 11, 0, 
  70, 56, -14, 9, 39, -128, -3, -12, 39, -7, 
  -33, -60, -23, -50, 14, -10, 14, -6, 15, 4, 
  105, 75, 94, 77, 97, 85, 91, 63, 69, 45, 
  50, -20, 55, -128, -18, 20, 38, -29, 42, 16, 
  16, 15, 34, -4, -1, -128, 27, 19, -2, -128, 
  1, -33, 16, -20, -10, 9, 34, 18, 34, 24, 
  92, 78, 103, 77, 95, 85, 106, 72, 95, 65, 
  72, 45, 78, -8, 72, 80, 83, 53, 55, -1, 
  45, 9, 15, -23, 17, -43, 26, 69, 84, 4, 
  27, 4, 22, -60, -2, 34, 78, 52, 50, 29, 
  87, 76, 101, 78, 111, 94, 112, 86, 114, 89, 
  98, 82, 105, 74, 111, 87, 109, 89, 89, 40, 
  75, 65, 64, 72, 102, 75, 87, 96, 114, 67, 
  77, -12, 30, 4, 89, 88, 101, 82, 98, 71, 
  83, 71, 94, 60, 101, 79, 99, 87, 110, 80, 
  98, 84, 105, 90, 116, 79, 76, 57, 82, 54, 
  77, 47, 67, 75, 92, 80, 95, 82, 99, 59, 
  74, 25, 37, 15, 77, 64, 79, 75, 95, 68, 
  75, 69, 80, 21, 98, 69, 93, 79, 93, 74, 
  93, 80, 103, 90, 107, 37, 31, -20, 34, 38, 
  60, 35, 52, 63, 75, 60, 92, 9, 56, 31, 
  81, 49, 30, 19, 82, 52, 59, 45, 84, 53, 
  65, 58, 75, 50, 92, 53, 83, 62, 74, 73, 
  85, 74, 92, 46, 82, 0, -43, -128, -10, -12, 
  32, -18, 51, 47, 67, 42, 84, -1, 31, 1, 
  72, 39, 1, -33, 70, 31, 64, 44, 74, -1, 
  54, 47, 77, 60, 96, 59, 85, 47, 50, 51, 
  79, 68, 75, -20, 41, -128, -128, -128, -128, -128, 
  -77, -128, 46, 9, 42, -77, 61, -43, -50, 18, 
  57, -50, 2, -77, 43, -29, 69, 19, 66, 8, 
  42, 22, 75, 59, 81, 5, 75, 34, 53, 2, 
  88, 60, 40, -128, -8, -128, -128, -128, -128, -128, 
  -128, -128, 19, -12, -10, -128, 56, -128, -128, -3, 
  52, -29, -20, -128, 32, -128, 42, 0, 26, -60, 
  0, -128, -18, 49, 76, -16, 54, -16, -128, -50, 
  80, 42, -20, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, 38, -128, -128, -128, 
  -37, -128, -128, -128, 18, -128, 29, -43, 0, -128, 
  42, -43, 21, 37, 68, 2, 22, -128, -128, -128, 
  65, -128, -128, -128, -128, -128, -128, -128, -8, -128, 
  -128, -128, -60, -128, -128, -128, -37, -128, -128, -128, 
  -37, -128, -18, -128, 29, -128, 6, -18, -6, -128, 
  -29, -128, 50, -128, -128, -128, -128, -128, -128, -128, 
  19, -128, -128, -128, -128, -128, -128, -128, 16, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, 40, -128, -128, -128, -23, -128, -2, -50, 
  -128, -128, -60, -128, -29, -128, -128, -128, -128, -43, 
  19, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -18, -128, -128, -128, -128, -128, -6, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, 9, 35, -128, -128, -128, -128, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, 2, -128, -128, -128, -128, -128, -128, -26, 
  -50, 25, 47, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, -128, -128, -128, -128, -128, -37, 4, 
  37, 43, 46, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 5, 15, 
  13, -18, -37, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
