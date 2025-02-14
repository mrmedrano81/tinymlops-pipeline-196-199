/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/6e916de8_nohash_2.wav" \
 * --output_c_file="features_c_files/no/no_6e916de8_nohash_2.cc" \
 */
#include "no_6e916de8_nohash_2.h"


const int g_no_6e916de8_nohash_2_width = 40;
const int g_no_6e916de8_nohash_2_height = 49;
alignas(16) const signed char g_no_6e916de8_nohash_2_data[] = {
  106, 91, 107, 85, 76, 72, 77, 68, 76, 74, 
  79, 67, 70, 65, 74, 64, 54, 40, 39, 44, 
  45, 39, 49, 50, 39, 23, 47, 17, 37, 28, 
  39, 25, 35, 45, 47, 17, 52, 47, 31, 39, 
  102, 77, 89, 81, 95, 66, 67, 69, 91, 72, 
  70, 46, 70, 54, 60, 64, 54, 44, 37, 25, 
  47, 35, 36, 28, 31, 6, 20, 37, 33, 9, 
  42, 19, 35, 32, 38, 14, 53, 37, 27, -8, 
  94, 77, 93, 68, 89, 74, 72, 55, 84, 53, 
  58, 55, 59, 59, 72, 44, 47, 39, 47, 48, 
  64, 50, 54, 15, 24, -10, 39, 44, 21, 2, 
  37, 26, 19, 7, 28, 20, 29, 5, 32, 1, 
  77, 72, 87, 37, 87, 67, 65, 44, 59, 53, 
  71, 50, 54, 45, 66, 52, 54, 31, 37, 40, 
  42, 39, 62, 25, 35, 16, 24, 13, 39, 31, 
  41, 17, 29, 14, 34, 21, 43, 28, 35, 11, 
  81, 56, 85, 57, 77, 46, 64, 24, 64, 57, 
  49, -23, 30, 4, 49, 4, 42, 15, 29, 4, 
  44, -7, -26, -50, 8, 4, 22, -7, 37, 11, 
  40, 5, 15, 13, 37, 15, 40, 19, 25, 10, 
  34, -128, 58, 30, 67, 24, 66, 29, 59, 17, 
  46, 42, 70, -12, 37, 9, 39, 14, 31, 0, 
  23, 9, 7, 7, 21, 18, 43, -33, 14, -23, 
  35, -37, 10, 9, 26, -23, 34, 4, 18, 19, 
  57, 6, 63, 24, 50, 51, 70, 27, 53, 9, 
  58, 1, 59, -26, 50, 37, 43, 31, 40, 6, 
  19, -128, -1, -20, 8, 8, 42, 4, 10, -2, 
  25, -26, 1, -2, 19, -4, 25, -23, 24, -6, 
  54, -128, -37, 34, 54, 2, 55, 24, 39, 14, 
  34, -4, 21, -12, 23, 13, 54, -33, 36, 9, 
  21, 16, 37, -8, 23, -18, -4, -26, 5, -23, 
  2, -23, 7, -20, 17, -23, 9, -23, 6, -16, 
  67, -26, 19, -23, 45, 2, 57, -60, 24, -43, 
  33, -77, 37, -10, 49, 43, 76, 53, 45, -33, 
  11, -3, 32, 19, 44, 44, 31, 38, 78, 60, 
  61, 22, 39, 32, 56, 19, 29, 1, 32, -18, 
  72, 15, 23, 8, 63, 13, 37, 11, 47, -26, 
  7, 8, 37, 32, 44, 34, 66, 15, 45, -50, 
  1, -10, 19, -4, 32, 13, 24, 9, 60, 34, 
  47, 11, 15, -43, 22, -33, 6, -33, 5, -43, 
  72, 29, 70, 31, 19, -1, 58, -43, 39, 4, 
  49, -26, -10, 34, 48, -60, 8, -7, 5, -33, 
  35, -1, 14, -12, 5, -50, 4, -77, -4, -77, 
  32, -37, -10, -128, -4, -37, 9, -43, 7, -77, 
  46, -26, 68, 37, 60, -18, 57, -7, 24, 15, 
  18, -8, 29, -50, 30, -29, 16, -20, 15, -128, 
  0, -18, 20, -33, -6, -77, -1, -43, -16, -128, 
  -26, -43, -3, -29, -12, -128, 33, -8, -4, -26, 
  16, 7, 75, 29, -23, -23, 51, -29, -3, -16, 
  41, -77, 37, -43, 6, -128, 15, -26, 23, -50, 
  39, -26, 32, -77, 0, -29, 27, -23, -10, -128, 
  22, -37, -1, -60, 5, -33, 15, -43, 10, -37, 
  105, 66, 11, -20, 52, -16, 30, 19, 19, -2, 
  29, -77, 9, -23, 12, -128, 27, -37, 16, -29, 
  22, -20, 1, -50, -20, -60, -7, -77, -18, -26, 
  -12, -128, -33, -77, -10, -37, 15, -29, -3, -43, 
  97, 81, 104, 67, 85, 40, 54, -12, 8, -20, 
  32, 19, 44, -12, -6, -128, -37, -26, 25, 8, 
  24, -16, -8, -50, 6, -26, -43, -128, -60, -128, 
  -14, -128, -14, -128, -6, -60, -12, -50, 4, -50, 
  96, 83, 100, 74, 85, 78, 84, -18, -4, -16, 
  60, 51, 79, 32, 40, -23, 32, -128, 16, -29, 
  4, -128, 15, 12, 2, -60, 4, -37, -33, -77, 
  -77, -128, -10, -128, -37, -60, 16, -43, -12, -33, 
  97, 72, 92, 62, 94, 77, 80, 37, 24, -20, 
  36, 55, 79, 48, 45, -60, -77, -128, 4, -128, 
  8, -128, 13, 4, 24, 21, 21, -128, -43, -128, 
  -60, -60, -7, -60, -7, -128, 0, -50, -10, -128, 
  86, 67, 93, 70, 92, 66, 92, 40, 14, 29, 
  80, 54, 85, 47, 55, 22, 4, -128, 16, -12, 
  21, -3, 23, 11, 42, 33, 10, -77, -128, -128, 
  -23, -128, -16, -128, -18, -60, -6, -37, 21, -4, 
  82, 62, 89, 50, 78, 45, 84, 36, 44, -1, 
  52, 11, 65, 16, 52, 1, 16, -1, -1, -16, 
  24, -128, -26, -3, 37, -6, 6, -128, -128, -128, 
  -10, -37, -6, -128, 2, -26, -2, -37, 18, -37, 
  65, 54, 80, 27, 42, 51, 83, 24, 10, -50, 
  23, 37, 58, -10, 44, -60, 4, -60, 2, -20, 
  11, -26, -7, -37, 37, -12, -18, -128, -7, -77, 
  -128, -128, -23, -77, 1, -50, -8, -77, -2, -29, 
  70, 34, 72, 11, 84, 50, 68, 60, 80, 20, 
  57, 38, 52, 29, 50, 49, 81, 68, 104, 70, 
  70, -12, 52, 37, 60, 47, 48, 4, 31, -14, 
  15, -10, 38, -29, -26, -33, 5, -29, 14, -37, 
  63, 37, 64, 21, 72, 28, 77, 77, 94, 59, 
  85, 63, 69, 66, 80, 65, 94, 80, 102, 69, 
  65, 26, 60, 15, 73, 54, 50, -2, 31, 23, 
  65, 65, 72, -6, 35, -1, 41, 31, 34, -60, 
  62, 27, 58, 24, 72, 41, 68, 56, 85, 34, 
  79, 52, 74, 60, 80, 67, 95, 75, 68, 53, 
  57, -23, 15, 22, 45, 4, 42, -77, 9, 1, 
  53, 60, 71, -128, 16, -43, 30, -20, 23, -26, 
  47, -10, 42, 20, 57, 20, 52, 42, 69, 25, 
  57, 36, 73, 45, 88, 67, 99, 34, 48, 10, 
  29, -26, 59, 44, 70, 47, 46, 8, 43, -29, 
  30, 40, 50, -77, 15, -23, -3, -33, 5, -18, 
  49, -29, 22, 5, 48, -6, 38, 22, 76, 37, 
  61, 31, 65, 59, 86, 73, 70, -128, -33, -128, 
  7, -128, 32, -20, 30, 32, 34, 0, 31, -50, 
  19, 17, 49, -128, 0, -43, -14, -128, -2, -43, 
  50, 5, 29, -10, 49, 28, 62, 38, 67, 29, 
  70, 25, 64, 57, 91, 50, 60, -128, -7, -128, 
  9, -60, 34, -12, 35, 7, 32, -33, 40, -33, 
  -128, -128, 4, -60, 29, -128, 4, -60, -8, -128, 
  44, 6, 33, -128, 11, -29, 31, -16, 56, 7, 
  21, -37, 45, 29, 68, -26, -128, -128, -128, -128, 
  -60, -128, -60, -128, -77, -128, -33, -128, -37, -128, 
  -60, -128, -128, -128, -7, -43, -14, -128, -4, -77, 
  42, -128, -128, -128, 9, -43, 4, -128, 54, 1, 
  47, -77, 57, 54, 84, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -50, -128, -18, -128, -77, -128, 
  -128, -128, -50, -128, -29, -128, -60, -128, -26, -128, 
  37, -14, 20, -128, 8, -23, 33, -60, 2, -128, 
  25, -18, 57, 61, 73, -128, -128, -128, -128, -128, 
  -23, -128, -128, -128, -128, -128, -128, -128, -23, -128, 
  -77, -128, -29, -77, -20, -128, -29, -77, -2, -77, 
  35, -26, 11, -128, 2, -128, -43, -128, -128, -128, 
  33, -128, 69, 20, -18, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -33, -128, -20, -128, -12, -77, 
  38, -128, -128, -128, 2, -128, -128, -128, -128, -128, 
  -6, -128, 1, -128, -60, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -77, -128, -128, -128, -50, -128, -50, -128, -43, -128, 
  44, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -128, 23, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -37, -128, -128, -128, -60, -128, -50, -128, -60, -128, 
  20, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  8, -77, 13, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -23, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -20, -60, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -43, -128, -77, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -60, -128, -77, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -33, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -77, -77, -128, -37, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, -50, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, -128, -128, -77, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
