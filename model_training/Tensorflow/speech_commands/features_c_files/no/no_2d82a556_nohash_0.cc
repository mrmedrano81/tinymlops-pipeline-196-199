/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/2d82a556_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_2d82a556_nohash_0.cc" \
 */
#include "no_2d82a556_nohash_0.h"


const int g_no_2d82a556_nohash_0_width = 40;
const int g_no_2d82a556_nohash_0_height = 49;
alignas(16) const signed char g_no_2d82a556_nohash_0_data[] = {
  102, 90, 97, 84, 94, 78, 99, 85, 94, 84, 
  89, 87, 96, 75, 84, 75, 88, 82, 99, 85, 
  95, 84, 93, 82, 81, 68, 84, 80, 99, 83, 
  98, 79, 76, 73, 80, 71, 82, 72, 72, 58, 
  92, 63, 77, 74, 87, 69, 88, 76, 76, 73, 
  95, 74, 82, 74, 83, 73, 90, 57, 65, 69, 
  80, 73, 84, 64, 87, 67, 74, 70, 94, 69, 
  88, 73, 81, 65, 74, 68, 82, 63, 83, 60, 
  64, 54, 85, 35, 56, 59, 88, 74, 78, 59, 
  79, 43, 74, 46, 82, 59, 74, 69, 76, 58, 
  79, 59, 82, 64, 79, 62, 78, 44, 79, 49, 
  80, 48, 56, 39, 54, 41, 59, 42, 65, 43, 
  93, 73, 81, 68, 83, 71, 84, 45, 49, 25, 
  68, 45, 72, 52, 62, 49, 53, 54, 81, 62, 
  82, 32, 69, 46, 75, 54, 67, 46, 64, 34, 
  70, 42, 73, 39, 61, 29, 55, 42, 59, 25, 
  82, 61, 84, 39, 75, 68, 63, 21, 65, 51, 
  69, 51, 65, 52, 57, -7, 76, 45, 65, 56, 
  69, 34, 60, 19, 60, 32, 66, 28, 48, 34, 
  62, 37, 57, 32, 62, 35, 50, 21, 53, 29, 
  77, 55, 83, 46, 83, 54, 73, 32, 68, 9, 
  68, 49, 70, 54, 64, 45, 72, 42, 55, 6, 
  45, 27, 65, 33, 44, 24, 60, 40, 45, 46, 
  58, 28, 64, 36, 60, 16, 52, 37, 56, 20, 
  17, 1, 64, 20, 71, 35, 47, -33, 77, 57, 
  71, 50, 69, 57, 78, 47, 63, 47, 65, 39, 
  62, 4, 52, 42, 65, 39, 55, 5, 45, 42, 
  56, 39, 70, 42, 65, 54, 74, 49, 62, 9, 
  9, -128, 46, -29, 63, 72, 85, 16, 67, 38, 
  59, -50, 64, 25, 54, 11, 55, -16, 61, 46, 
  54, 26, 55, 1, 40, 30, 55, 4, 44, 1, 
  54, -3, 48, 13, 48, 11, 54, 11, 53, 15, 
  36, -3, 55, 28, 69, 38, 68, 36, 60, 34, 
  63, 44, 54, 13, 69, 11, 58, 16, 41, -33, 
  57, 13, 50, 31, 50, 14, 55, 20, 27, -14, 
  25, -8, 46, 5, 52, 1, 40, 11, 29, -26, 
  51, 11, 63, -16, 20, 0, 55, -60, 63, 38, 
  62, 41, 64, -50, 44, 10, 64, 7, 40, 25, 
  58, 4, 53, 15, 48, -29, 44, 35, 31, 4, 
  44, -33, 46, -3, 44, -7, 23, -4, 55, -12, 
  53, 29, 64, 16, 47, 40, 62, -60, 47, -4, 
  74, 68, 71, -37, 52, 41, 45, -12, 32, -128, 
  23, 20, 55, 21, 33, 8, 49, -12, 52, 29, 
  67, 9, 52, 9, 51, 4, 29, -20, 38, 16, 
  -14, -4, 56, 14, 45, -128, 35, 14, 68, 40, 
  55, -37, 37, -4, 63, 29, 13, -23, 46, -43, 
  32, 9, 36, 4, 51, -23, 25, -43, 53, 42, 
  66, 4, 42, -37, 14, -29, 8, -26, 33, -26, 
  42, 30, 46, 14, 61, 41, 54, -23, 40, -77, 
  34, -77, 12, -18, 64, 20, 35, -23, 42, 11, 
  39, -77, 50, 16, 47, 7, 31, -12, 39, 27, 
  42, -37, 29, -33, 32, -20, 32, -10, 37, -128, 
  40, -23, 39, -128, 53, 14, 32, -12, 49, -50, 
  21, -50, 31, -128, 25, -128, 38, 20, 44, 14, 
  33, -10, 20, -26, 40, -23, 52, -77, 21, -29, 
  19, -43, 24, -10, 57, -43, 20, -43, 16, -77, 
  28, -128, 24, -128, 42, -50, -6, -128, 30, -128, 
  30, -128, -26, 0, 22, -128, 19, -12, 2, -18, 
  39, -20, 40, -1, 50, -10, 34, -12, 22, -37, 
  20, -77, 25, -43, 29, -77, 4, -29, 6, -23, 
  49, -33, 27, 19, 46, -128, 0, -8, 59, -43, 
  30, -43, 57, -33, 9, 2, 55, -77, 1, -128, 
  -3, -18, 27, -33, 16, -128, 31, -128, -33, -128, 
  -2, -50, 24, -26, 11, -43, -23, -128, -16, -77, 
  85, 58, 65, 44, 56, 15, 42, 4, 55, -12, 
  -14, -128, 34, -3, 51, 33, 44, -128, 45, -50, 
  43, -128, 13, -128, 19, -128, 9, -50, -37, -128, 
  -43, -26, 23, -33, 4, -128, 34, -50, 8, -10, 
  16, -4, 55, 24, 23, -128, -50, -128, 4, -33, 
  27, -128, -10, -37, -16, -50, 2, -29, 27, -128, 
  -4, -128, 35, -33, -7, -128, 24, -50, -16, -128, 
  -60, -128, 7, -16, -1, -37, 19, -50, 14, -12, 
  99, 79, 72, 36, 77, 5, 47, 38, 50, -23, 
  45, -77, -128, -14, 44, -29, 52, 20, 45, -50, 
  47, 35, 35, 31, 74, 12, 13, -37, -12, -128, 
  -12, -50, 19, -3, 32, -50, 10, -26, -8, -128, 
  97, 76, 74, 54, 82, 42, 60, 42, 60, -29, 
  32, -128, 72, 38, 67, 24, 54, 40, 62, -50, 
  35, 0, 44, 45, 65, 0, 32, -14, 21, -43, 
  -128, -29, 29, -3, 52, -8, 9, -29, -10, -23, 
  90, 72, 83, 65, 84, 52, 56, 35, 65, -20, 
  39, -3, 66, 50, 62, 5, 61, 35, 52, -128, 
  31, 19, 58, 47, 67, 22, 32, -33, 32, -60, 
  -37, -37, 39, 16, 35, -128, 15, -77, -16, -128, 
  84, 65, 81, 61, 84, 53, 65, 54, 69, -23, 
  -128, -128, 57, 28, 53, -12, 61, 20, 44, -3, 
  53, 35, 61, 49, 68, -26, 13, -2, 52, -3, 
  26, -43, 4, -77, -12, -128, -14, -60, -10, -128, 
  82, 54, 70, 47, 79, 42, 63, 39, 61, 28, 
  53, -20, 62, 24, 57, 27, 60, 5, 57, 5, 
  52, 42, 53, 47, 77, 25, 36, 7, 56, 19, 
  12, -18, 9, -26, 2, -128, 2, -50, -7, -77, 
  78, 50, 64, 42, 76, 51, 83, 61, 59, 40, 
  67, 40, 51, 24, 51, -33, 86, 69, 67, 46, 
  65, 40, 56, 59, 92, 61, 53, 19, 82, 84, 
  94, 5, 39, -2, 17, -23, 46, -3, 32, -16, 
  72, 27, 32, 19, 67, 35, 90, 89, 103, 75, 
  87, 61, 84, 62, 74, 61, 103, 87, 96, 65, 
  71, 51, 93, 83, 109, 87, 92, 82, 106, 87, 
  97, 56, 33, -128, -6, -3, 25, -128, -23, -50, 
  60, -20, 46, 28, 67, 36, 83, 63, 107, 82, 
  93, 72, 91, 65, 84, 76, 104, 79, 94, 73, 
  82, 67, 98, 52, 87, 79, 102, 85, 99, 59, 
  80, 63, 55, -60, 37, -26, -29, -60, 29, -16, 
  59, -16, 40, 17, 59, 30, 75, 57, 99, 77, 
  94, 67, 91, 65, 90, 81, 101, 54, 85, 62, 
  74, 52, 89, 40, 83, 73, 93, 70, 85, 44, 
  74, 58, 59, -14, 56, 40, 44, -26, 11, -29, 
  57, -10, 26, 1, 58, 26, 72, 52, 92, 67, 
  86, 60, 83, 62, 89, 78, 93, -3, 61, 54, 
  64, 28, 67, 44, 65, 52, 82, 61, 75, -6, 
  50, 26, 63, -8, -10, -43, -4, -128, 10, -33, 
  55, -12, 39, -10, 49, 23, 67, 45, 89, 61, 
  85, 57, 86, 62, 94, 59, 61, -50, 64, 27, 
  55, -128, 50, 40, 55, 40, 80, 59, 69, -60, 
  36, 4, 67, 1, 0, -43, 6, -8, 54, 4, 
  55, -20, 55, 10, 37, -12, 56, 37, 80, 37, 
  80, 38, 80, 60, 94, 30, 15, -128, 36, -20, 
  34, -128, -29, -2, 34, 9, 68, 39, 47, -128, 
  7, -20, 52, -16, -8, -128, 7, -29, 20, -50, 
  44, -128, -60, -18, 22, -128, 40, 23, 54, 12, 
  62, 25, 71, 65, 86, -33, -12, -128, 49, -26, 
  45, -128, -128, -128, -128, -128, 28, -37, -60, -128, 
  -128, -128, 69, 50, 50, -128, -3, -77, -33, -128, 
  6, -128, 5, -43, -29, -128, -128, -128, 16, -128, 
  5, -26, 46, 15, 21, -128, -128, -128, -128, -128, 
  -12, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -23, -128, 6, -60, 5, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -50, 47, -128, -2, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -43, 38, -60, -43, -128, -29, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, -14, -77, 4, -128, -18, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 9, -128, -37, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -7, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, -128, -128, -29, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -18, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -33, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
};