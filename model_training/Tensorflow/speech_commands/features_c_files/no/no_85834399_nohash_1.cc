/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/85834399_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_85834399_nohash_1.cc" \
 */
#include "no_85834399_nohash_1.h"


const int g_no_85834399_nohash_1_width = 40;
const int g_no_85834399_nohash_1_height = 49;
alignas(16) const signed char g_no_85834399_nohash_1_data[] = {
  93, 71, 69, 50, 56, 20, 14, 47, 54, 40, 
  53, 45, 31, 11, 23, 17, 0, 11, 17, 7, 
  0, 11, 14, -2, -10, 17, 31, 20, 33, 25, 
  26, 17, 31, 23, 33, 32, 47, 42, 43, 35, 
  84, 38, 48, 43, 31, 10, 4, 26, 32, 24, 
  50, 52, 42, 34, 21, 30, 30, 14, 15, 4, 
  4, -23, -12, 11, 16, -1, 15, 2, 24, 21, 
  24, 29, 35, 30, 33, 25, 40, 19, 31, 17, 
  71, 57, 70, 43, 29, 20, 7, 0, 44, 29, 
  39, 27, 38, 1, 22, -2, 25, 4, 17, 14, 
  38, 5, 2, 19, 20, 11, 16, 10, 13, 1, 
  22, -2, 19, 11, 27, 20, 25, 34, 36, 8, 
  71, 36, 6, -3, 38, 30, 40, 21, 40, 17, 
  50, 45, 26, 1, 37, 32, -1, -3, 12, 0, 
  40, 26, 9, -50, 12, 20, 44, 4, 20, 9, 
  20, 14, 25, 19, 52, 60, 75, 73, 86, 73, 
  69, 28, 44, 13, 17, 45, 54, 24, 24, -3, 
  15, -50, 7, 8, 5, 0, 22, -26, -12, -26, 
  28, -20, 24, 19, 30, 11, 17, 7, 36, 19, 
  31, 13, 15, 5, 32, -1, 26, -26, 17, -60, 
  5, -43, 42, 0, 47, 13, 18, 9, 12, 31, 
  39, 9, 9, -26, 14, -18, 28, 9, 9, 6, 
  29, 25, 13, -2, 18, -16, -6, -10, 16, -10, 
  27, -2, 10, 10, 11, 9, 24, -50, 6, -60, 
  63, 0, 42, 43, 44, -23, -18, 15, 50, 0, 
  37, 7, 34, -23, -37, -60, -1, -7, 15, -33, 
  -50, -18, 15, -4, 11, -23, 20, -14, 31, 19, 
  17, -29, 31, -1, 2, -33, 28, -18, -1, -77, 
  57, 0, 43, 14, 21, -77, -50, 26, 46, 22, 
  47, -18, 22, 1, 12, -128, -37, -14, 21, -18, 
  -3, -37, 10, -23, 15, -29, 24, 16, 15, -29, 
  -1, -23, -43, -43, -2, -26, 38, -37, -12, -128, 
  48, 28, 48, 34, 11, -43, 6, 8, 43, -2, 
  29, -128, 0, 6, 29, -60, 19, -128, 14, -12, 
  -4, -26, 1, -26, 0, -60, 1, -23, 11, -14, 
  -2, -50, 2, -16, 7, -37, 14, -50, -3, -128, 
  23, 2, 48, -4, 32, -23, 5, -37, 28, -128, 
  -3, 14, 27, -18, 28, -29, 32, 10, 27, -33, 
  -43, -60, -12, -7, 15, 9, 10, -60, 24, -37, 
  4, -37, 8, -50, 11, -29, -1, -128, -4, -128, 
  66, 67, 86, 60, 69, 48, 17, -4, 11, 6, 
  27, -77, -3, -128, -29, -1, 10, -20, 40, -60, 
  -10, -26, 25, -77, 8, -43, 6, -33, -10, -26, 
  17, -12, 12, -60, -20, 7, 47, -77, 4, -77, 
  112, 96, 117, 96, 111, 87, 93, 74, 83, 57, 
  69, 64, 78, 58, 68, 55, 31, 59, 84, 60, 
  69, 67, 76, 51, 63, 31, 22, -20, 21, 32, 
  42, -7, 36, -12, 33, 50, 78, 21, 7, -77, 
  106, 84, 113, 85, 102, 73, 96, 67, 73, 55, 
  88, 67, 82, 65, 75, 50, 60, 56, 92, 59, 
  73, 63, 80, 63, 74, 32, 24, -1, 17, 20, 
  24, -33, 5, -77, 19, -29, 29, -10, 23, -60, 
  95, 73, 103, 72, 90, 69, 89, 53, 67, 56, 
  73, 52, 78, 51, 67, 49, 50, 44, 83, 44, 
  65, 55, 73, 42, 66, 17, 22, -6, 4, -29, 
  -3, 19, 50, -37, 17, -37, 28, -37, 1, -77, 
  87, 68, 95, 63, 82, 57, 82, 49, 67, 50, 
  66, 36, 73, 36, 63, 35, 25, 34, 70, 44, 
  64, 45, 74, 49, 63, 9, 29, -37, 2, 1, 
  7, -33, 9, -29, -8, -37, 43, 0, 29, -77, 
  75, 60, 85, 43, 74, 46, 70, 30, 61, 40, 
  58, 33, 66, 31, 45, -128, -18, 24, 69, 25, 
  56, 23, 56, -3, 46, 34, 47, -37, -26, -77, 
  -8, -60, -7, -33, 16, -18, 38, -29, 28, -26, 
  62, 46, 73, 9, 65, 17, 56, 9, 43, -3, 
  49, 27, 52, -23, 47, -77, 60, 57, 61, 12, 
  47, 28, 64, 24, 54, 24, 2, -77, 11, -128, 
  -37, -50, 19, -77, -8, -128, -4, -77, -33, -128, 
  72, 20, 68, 42, 104, 90, 107, 82, 103, 77, 
  88, 65, 79, 58, 79, 73, 101, 87, 102, 78, 
  95, 69, 92, 89, 112, 93, 110, 80, 83, 57, 
  62, 40, 83, 82, 94, 75, 89, 62, 57, 47, 
  65, 24, 53, 7, 88, 76, 107, 82, 105, 78, 
  94, 71, 82, 68, 89, 79, 105, 85, 94, 63, 
  84, 62, 88, 69, 88, 57, 78, 80, 103, 75, 
  79, 66, 92, 59, 72, -3, 54, 54, 76, 56, 
  57, 13, 45, -10, 79, 59, 96, 78, 96, 68, 
  93, 65, 84, 65, 87, 76, 107, 72, 73, 50, 
  76, 52, 72, 60, 81, 45, 79, 70, 86, 59, 
  63, 30, 74, 21, 27, -29, 21, 48, 68, 39, 
  47, -4, 40, -23, 69, 44, 85, 67, 89, 61, 
  83, 57, 82, 62, 87, 77, 97, 34, 57, 29, 
  63, 16, 62, 57, 75, 25, 69, 55, 74, 46, 
  59, 43, 67, -12, 16, -128, 26, 49, 60, 27, 
  47, -10, 37, -37, 61, 37, 81, 59, 83, 55, 
  78, 48, 75, 56, 89, 71, 80, -29, 23, -29, 
  46, 9, 55, 51, 72, 19, 75, 59, 69, 33, 
  55, 20, 50, -10, 48, -20, -14, 21, 60, 29, 
  49, 4, 38, -33, 59, 34, 75, 54, 78, 48, 
  71, 40, 72, 57, 99, 65, 64, -128, -8, -43, 
  32, -18, 45, 34, 67, 22, 66, 54, 67, 37, 
  65, 4, 41, -128, -26, -128, -128, -16, 53, -60, 
  44, -12, 34, -43, 54, 20, 72, 35, 67, 38, 
  66, 30, 71, 56, 87, 36, 20, -128, -23, -128, 
  24, -37, 31, -3, 55, -14, 54, 35, 59, 17, 
  65, 36, 59, -128, -16, -60, -128, -60, 40, -1, 
  39, -18, 35, -60, 51, 19, 69, 9, 57, 26, 
  60, 32, 72, 63, 85, -60, -37, -128, -128, -128, 
  -12, -128, 25, -16, 49, -37, 45, 30, 35, 4, 
  60, 13, -23, -128, -37, -128, -77, -128, 22, -77, 
  36, -8, 36, -26, 56, 27, 64, -20, 51, 14, 
  56, 33, 78, 65, 54, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, 27, -77, 31, -26, 17, -12, 
  61, 5, -77, -128, -26, -128, -128, -128, -50, -128, 
  40, -7, 39, -14, 63, 28, 51, -77, 47, 9, 
  59, 40, 79, 47, 35, -128, -128, -128, -128, -128, 
  -77, -128, -23, -128, 30, -128, 41, -50, -10, -12, 
  67, -7, -128, -128, 19, -128, -43, -128, -128, -128, 
  34, -29, 30, -37, 61, 20, 32, -128, 39, -23, 
  57, 40, 72, -60, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 29, -77, 35, -128, -37, -77, 
  52, -128, -128, -77, 8, -1, 51, 36, 50, -37, 
  15, -43, 21, -29, 45, -37, -18, -128, -10, -50, 
  49, 32, 56, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  7, -50, 29, -26, 38, -14, -3, -128, 17, -8, 
  48, 14, 38, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 0, -128, -128, -128, 
  6, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -23, -128, -2, -128, 9, -128, -60, -128, -50, -43, 
  12, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -26, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -10, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
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