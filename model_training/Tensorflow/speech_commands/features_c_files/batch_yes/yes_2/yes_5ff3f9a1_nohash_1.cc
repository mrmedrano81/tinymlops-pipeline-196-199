/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/5ff3f9a1_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_5ff3f9a1_nohash_1.cc" \
 */
#include "yes_5ff3f9a1_nohash_1.h"


const int g_yes_5ff3f9a1_nohash_1_width = 40;
const int g_yes_5ff3f9a1_nohash_1_height = 49;
alignas(16) const signed char g_yes_5ff3f9a1_nohash_1_data[] = {
  100, 90, 78, 74, 85, 70, 77, 78, 77, 73, 
  87, 70, 79, 65, 75, 63, 83, 73, 73, 77, 
  82, 70, 69, 63, 63, 59, 59, 57, 56, 45, 
  42, 25, 29, 20, 17, 30, 35, 17, 35, 35, 
  85, 69, 90, 75, 90, 79, 65, 50, 82, 48, 
  46, 52, 60, 46, 52, 54, 65, 56, 79, 54, 
  61, 51, 59, 47, 57, 30, 44, 25, 37, 20, 
  20, 19, 7, -12, -7, -7, 7, 7, 18, 4, 
  80, 53, 82, 71, 79, 30, 67, 35, 55, 48, 
  51, 32, 50, 37, 60, 50, 54, 36, 59, 4, 
  20, 49, 69, 43, 43, 13, 34, 1, 6, -33, 
  19, -2, 14, 17, -2, -16, 1, -26, -23, -29, 
  83, 57, 67, -33, 58, 57, 70, 51, 67, 46, 
  45, 24, 59, 21, 27, 24, 60, 39, 56, 19, 
  53, 27, 50, -2, 40, 11, 19, -26, 34, 15, 
  34, 21, 9, 0, 16, -7, 4, -10, -16, -128, 
  49, 19, 67, 40, 59, 34, 74, 50, 51, 34, 
  56, 31, 43, 22, 58, 43, 42, 34, 62, 29, 
  45, 22, 54, 25, 35, 18, 19, -23, 13, 9, 
  15, -6, -2, -26, 15, -10, 7, -23, -16, -77, 
  61, 21, 62, 32, 71, 54, 52, 28, 38, 11, 
  65, 39, 65, 41, 54, 40, 49, 11, 32, -16, 
  47, 16, 59, 5, -2, -33, 20, 4, 29, 10, 
  13, -26, 1, -18, 2, -18, 9, -26, -60, -77, 
  67, 36, 42, 2, 32, 13, 57, -1, 51, -23, 
  51, -43, 53, 28, 59, 19, 59, -2, 64, 9, 
  32, -14, 37, 13, 47, 19, 16, -8, 12, -50, 
  -12, -23, 4, -60, 5, -26, -26, -43, -26, -77, 
  61, 7, 62, 46, 64, 10, 50, -18, 62, 40, 
  57, 7, 42, 14, 34, -18, 51, -8, 43, 19, 
  29, 12, 50, 12, -3, -43, 29, 0, 4, -43, 
  14, -16, -20, -26, -4, -77, -20, -77, -26, -60, 
  48, -43, 47, -60, 47, 44, 57, -6, 47, 18, 
  51, 27, 52, 9, 36, -23, 55, 25, 45, 26, 
  65, -4, 19, -26, 32, 5, 34, 39, 40, -77, 
  6, -60, -2, 29, 57, 31, 24, 32, 32, -50, 
  75, 35, 47, 8, 39, -33, 55, 17, -20, -7, 
  38, 35, 48, 21, 46, 25, 46, -6, 30, 32, 
  49, -18, 26, -77, 41, -4, 13, -18, 4, -128, 
  -16, -77, -12, -50, -6, -50, -29, -77, -37, -77, 
  68, 46, 33, -128, 29, -29, 62, 21, 22, -77, 
  7, -12, 36, 6, 48, -50, 4, 4, 35, -26, 
  27, -2, 16, -4, 16, -128, 9, -77, 2, 0, 
  -23, -128, -8, -60, -16, -128, -18, -77, -29, -128, 
  40, -2, 53, 22, 55, 24, 28, 5, 63, 30, 
  15, -43, 47, 9, 54, -2, 44, -20, 19, -50, 
  39, -14, -14, -43, 6, -33, 7, -77, 7, -60, 
  -4, -50, -20, -50, -18, -77, -14, -128, -50, -128, 
  -10, -128, 40, 17, 58, 7, 25, -26, 31, -60, 
  23, -77, -1, 10, 59, 10, -20, -8, 35, 9, 
  0, -77, 28, 14, 5, -26, 17, -50, -14, -12, 
  1, -37, -20, -128, -37, -128, -50, -60, -23, -77, 
  -16, -128, 44, 7, 27, -77, 36, 28, 34, -128, 
  19, -37, 49, 11, 53, 22, 5, 21, 18, -128, 
  14, -20, -2, 9, 33, -43, 4, -37, -20, -128, 
  17, -43, -50, -77, -29, -50, -6, -128, -18, -77, 
  39, -8, -6, -128, 4, -128, -50, -128, -6, -14, 
  57, 39, -16, -128, 32, -18, -29, -33, 25, -33, 
  9, -33, 50, -60, 1, -37, -20, -37, -2, -77, 
  -43, -77, -3, 4, 37, -8, 10, -16, -8, -77, 
  42, -50, 43, -50, -18, -8, 60, 6, 42, -60, 
  41, -33, 29, -37, 23, 4, 27, -128, 24, -50, 
  26, -60, -33, -77, 9, -33, -16, -26, 15, 17, 
  23, -20, 38, 24, 60, 40, 53, 46, 37, -60, 
  7, -37, 25, -128, 14, 0, 43, -23, 29, -128, 
  23, 4, 39, -43, -8, -128, 9, -33, 16, -128, 
  15, -60, -37, -128, -26, -77, -7, -77, 1, -77, 
  -29, -128, -20, -128, -128, -128, -128, -128, -60, -128, 
  42, -33, 15, -26, -3, -128, -60, -128, -23, -20, 
  9, -60, 49, -16, 1, -37, 37, -10, 30, -14, 
  -4, -128, 9, -33, 0, -29, 23, 15, 28, -4, 
  -43, -128, -37, -8, 42, -2, 30, -60, -60, -128, 
  95, 63, 90, 57, 73, 47, 50, -43, -8, -3, 
  18, 2, 41, -23, 8, -128, 21, -33, 10, -8, 
  31, 29, 64, 38, -1, 6, 59, 43, 54, 27, 
  43, -18, 17, 62, 70, 70, 90, 63, 24, 14, 
  110, 97, 119, 91, 97, 81, 99, 64, 85, 80, 
  103, 74, 78, 71, 64, 32, 55, 7, 40, 32, 
  80, 85, 100, 64, 73, 65, 98, 87, 101, 83, 
  98, 70, 94, 76, 99, 75, 100, 61, 59, 59, 
  98, 85, 108, 70, 93, 58, 86, 52, 82, 72, 
  87, 64, 55, 55, 78, 41, 34, -10, 61, 49, 
  82, 77, 96, 61, 79, 62, 95, 80, 96, 74, 
  90, 63, 91, 71, 93, 70, 93, 48, 58, 54, 
  91, 79, 102, 71, 97, 65, 88, 31, 69, 47, 
  89, 61, 69, 19, 73, 16, 14, 10, 56, 40, 
  80, 74, 96, 67, 85, 72, 103, 72, 88, 71, 
  88, 59, 94, 67, 89, 54, 72, 48, 67, 54, 
  91, 75, 94, 86, 110, 78, 90, 36, 70, 23, 
  72, 48, 74, 34, 64, 50, 79, 60, 77, 64, 
  99, 79, 98, 71, 99, 88, 100, 55, 86, 70, 
  84, 57, 92, 72, 94, 42, 89, 66, 72, 70, 
  89, 65, 82, 87, 109, 91, 105, 75, 98, 57, 
  67, 41, 79, 49, 78, 63, 82, 65, 88, 77, 
  111, 84, 85, 82, 112, 82, 75, 31, 84, 63, 
  74, 52, 75, 70, 92, 40, 52, 38, 82, 72, 
  84, 56, 72, 60, 100, 94, 114, 86, 107, 70, 
  79, 69, 88, 66, 90, 68, 89, 70, 98, 91, 
  109, 47, 90, 85, 100, 36, 63, 36, 85, 59, 
  65, 48, 58, 47, 75, 19, 58, 59, 74, 64, 
  77, 40, 55, -2, 82, 60, 97, 92, 104, 67, 
  89, 68, 84, 72, 84, 75, 94, 80, 110, 82, 
  79, 41, 91, 80, 88, 19, 45, 15, 78, 40, 
  57, 27, 64, 34, 15, -77, 58, 69, 76, -4, 
  73, 24, 40, -14, 65, 2, 92, 83, 108, 80, 
  95, 64, 92, 72, 92, 74, 102, 80, 107, 66, 
  69, 23, 85, 67, 68, -37, 38, -8, 67, 19, 
  41, -10, 53, 30, 19, -128, -12, 31, 62, -128, 
  67, 0, 27, -37, 46, -77, 70, 74, 103, 85, 
  94, 64, 90, 70, 97, 77, 102, 83, 88, 49, 
  52, -33, 79, 43, 43, -77, 8, -33, 42, -128, 
  18, -50, 44, 15, 9, -128, -128, -60, 51, -128, 
  63, -12, 25, -37, 38, -128, 60, 61, 91, 80, 
  89, 58, 84, 64, 90, 70, 98, 79, 78, 27, 
  39, -50, 66, 28, 34, -128, 8, -43, 54, -60, 
  -6, -43, 44, -7, -6, -128, -128, -77, 19, -128, 
  62, -23, 19, -77, 34, -128, 52, 55, 85, 70, 
  79, 51, 76, 42, 74, 62, 95, 70, 51, -77, 
  1, -128, 65, 23, 40, -128, -6, -128, 49, -128, 
  -33, -128, 57, 29, 16, -128, -128, -37, 42, -128, 
  56, -60, 20, -128, 9, -33, 61, 38, 70, 40, 
  60, 43, 62, 36, 70, 50, 81, 39, 49, -128, 
  -77, -128, 63, -20, -43, -128, -128, -128, -37, -128, 
  -77, -128, 42, 22, 10, -128, -128, -128, 30, -128, 
  46, -128, -60, -77, 33, -60, 36, -128, -37, -128, 
  -29, -128, 14, -128, -4, -128, -3, -128, -60, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -18, -128, -128, -128, 42, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -29, -128, -29, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 2, -29, 41, 35, 
  65, 64, 80, 59, 87, 88, 100, 76, 100, 72, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, 38, 25, 
  73, 70, 95, 82, 95, 82, 105, 86, 108, 76, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -7, 34, 
  65, 56, 104, 83, 100, 73, 95, 62, 79, 56, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -16, -18, 
  56, 46, 70, 57, 96, 64, 73, 43, 78, 35, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, 15, 40, 34, 
  73, 64, 85, 14, 88, 59, 76, 39, 69, 41, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 11, -77, 37, 6, 
  64, 52, 75, 10, 61, 15, 45, 4, 60, 26, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -26, -77, -2, -77, 47, 37, 
  55, 54, 93, 36, 75, 47, 50, 21, 69, 19, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -8, -128, 
  -128, -128, -128, -128, -128, -128, -33, -18, 40, -33, 
  46, 52, 61, 53, 73, -26, 40, -77, 33, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 2, -43, 32, 36, 
  65, 60, 67, -128, 9, -128, -14, -128, 12, -43, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 11, 15, 
  7, -37, -128, -128, -128, -128, -128, -128, -128, -128, 
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