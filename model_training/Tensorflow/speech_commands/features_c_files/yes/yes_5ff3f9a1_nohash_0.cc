/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/5ff3f9a1_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_5ff3f9a1_nohash_0.cc" \
 */
#include "yes_5ff3f9a1_nohash_0.h"


const int g_yes_5ff3f9a1_nohash_0_width = 40;
const int g_yes_5ff3f9a1_nohash_0_height = 49;
alignas(16) const signed char g_yes_5ff3f9a1_nohash_0_data[] = {
  112, 90, 94, 80, 97, 86, 87, 62, 72, 71, 
  90, 77, 89, 68, 79, 67, 77, 64, 70, 63, 
  80, 67, 72, 61, 76, 61, 49, 51, 50, 41, 
  40, 34, 43, 15, 23, 17, 14, 11, 9, 11, 
  97, 80, 81, 56, 49, 14, 61, 39, 48, 64, 
  82, 61, 55, 44, 79, 70, 70, 58, 66, 49, 
  65, 58, 61, 37, 36, 29, 32, 21, 37, 14, 
  38, 40, 26, 7, 11, -16, 8, -6, 15, -6, 
  91, 42, 81, 52, 65, 56, 65, 45, 53, 59, 
  75, 49, 70, 57, 57, 25, 51, 57, 69, 45, 
  30, 32, 53, 25, 41, 29, 25, 23, 28, 10, 
  11, 11, 12, 0, -14, -8, 10, -8, 6, -26, 
  84, 34, 39, -4, 52, 55, 72, 33, 40, 15, 
  59, 40, 44, 24, 64, 50, 58, 45, 51, 9, 
  26, 30, 50, 31, 55, 33, 44, 17, 28, 0, 
  22, -2, 10, -23, 16, 1, -8, -37, -8, -26, 
  88, 31, 62, -20, 45, -6, 56, 36, 62, -3, 
  -1, 4, 47, 32, 60, 40, 59, 34, 61, 45, 
  56, 24, 34, -8, 14, -1, 18, 6, -10, -29, 
  15, -26, 5, -14, -16, -1, 24, 21, 32, -3, 
  74, 24, 51, 38, 41, 32, 63, 28, 47, 17, 
  58, 44, 68, 27, 49, -14, 48, 28, 67, 1, 
  61, 25, 60, 40, 52, 15, 49, 19, 44, 34, 
  53, 45, 66, 62, 75, 60, 72, 65, 72, 55, 
  58, 36, 39, 42, 67, 30, 48, 46, 66, 28, 
  42, 19, 60, 36, 26, -60, 59, 38, 45, 29, 
  35, 1, 63, 30, 38, -1, 43, 4, 35, -1, 
  12, -60, -33, -77, -16, -77, -2, -60, -43, -128, 
  7, -10, 63, 57, 56, 11, 23, 35, 76, 33, 
  34, 2, 45, -37, 25, 26, 54, -12, 43, 29, 
  54, 22, 55, 19, 58, 41, 59, 25, 40, 34, 
  43, 22, 47, 13, 34, -43, -29, -128, -29, -128, 
  82, 28, 46, 43, 57, 41, 56, 17, 60, 24, 
  55, 15, 27, -4, 59, 28, 37, -3, 51, 16, 
  34, -16, 16, -3, 19, -43, -7, -18, 7, -50, 
  -26, -60, -20, -128, -29, -77, -4, -128, -29, -60, 
  72, -128, 14, -77, 59, -6, 53, -2, 58, -16, 
  -20, -60, 35, 8, 47, 2, 42, 14, 41, 45, 
  54, -1, 15, -7, -10, -50, 25, 2, -16, -128, 
  -10, -77, -26, -128, -16, -50, 35, 8, -4, -77, 
  57, 8, 46, 5, 62, -10, 24, 29, 21, 19, 
  47, -16, 47, 28, 45, 7, 57, 32, 54, -8, 
  42, -7, 27, -50, 0, -77, 8, -29, -4, -128, 
  -37, -128, -16, -128, -128, -128, -33, -128, -43, -128, 
  -20, -23, 64, -43, -43, -3, 44, -20, 27, -37, 
  53, -23, 0, 26, 36, -33, 52, -37, 18, -128, 
  -128, -26, 17, -33, 19, -77, 17, -128, -14, -50, 
  -33, -128, -50, -128, -60, -128, -26, -128, -128, -128, 
  50, -16, 60, 4, 62, 35, 32, 4, -8, -50, 
  2, -43, 21, -77, 2, -77, 39, -50, 10, -2, 
  30, -128, -1, -8, 20, -33, -18, -128, -10, -128, 
  -6, -128, -50, -128, -60, -128, -128, -128, -128, -128, 
  52, -128, 37, 43, 61, -29, 0, -18, 47, -29, 
  22, -128, 19, -128, 4, -12, 50, -12, 2, -128, 
  4, -18, -7, 4, 31, -77, -2, -20, -20, -128, 
  -43, -128, -43, -128, -43, -128, -60, -128, -77, -128, 
  51, -43, 57, -77, 22, -29, 35, -7, 33, -8, 
  52, -14, 17, -29, 25, 9, 40, -60, 18, -128, 
  -6, -60, 42, -2, 18, -60, 2, -128, -43, -128, 
  -14, -128, -23, -50, -33, -128, -128, -128, -60, -128, 
  43, 29, 32, -2, 52, -77, 35, -8, 32, -77, 
  8, -12, 2, -60, 14, -26, 0, -128, 31, -33, 
  0, -14, 28, -60, -8, -77, -4, -60, -20, -128, 
  -50, -128, -43, -128, -60, -128, -128, -128, -60, -128, 
  -128, 25, 59, -128, 7, 0, 34, -29, -10, -128, 
  -43, -128, 22, -60, 19, -128, 34, 4, 42, -50, 
  -16, -128, -20, -33, -18, -128, 5, -128, -7, -77, 
  -4, -77, -50, -128, -43, -128, -60, -128, -128, -128, 
  -128, -128, -23, -128, 4, -128, 37, -18, -23, -77, 
  -43, -128, 25, -128, -43, -128, -10, -128, -16, 0, 
  17, -6, 22, -128, -50, -128, -60, -128, -60, -128, 
  -60, -128, -50, -128, -50, -128, -128, -128, -77, -128, 
  -128, -128, 31, -128, -12, -128, 13, -20, -26, -23, 
  0, -60, 36, -7, -23, -77, -3, -43, 29, -128, 
  -20, -77, 11, -20, -3, -128, 11, -12, -8, -128, 
  -33, -128, -43, -128, -37, -128, -43, -128, -128, -128, 
  -128, -128, -26, -50, 30, -60, -20, -26, 23, -4, 
  43, -77, 9, -128, 17, -16, 40, -16, 7, -128, 
  -10, -26, 7, -16, 29, -33, 4, -60, -77, -128, 
  -50, -128, -37, -128, -50, -128, -43, -128, -8, -128, 
  -50, 16, 34, 35, 47, -128, 14, 6, 29, -128, 
  24, -23, 24, 15, 24, -50, 32, 9, 28, -14, 
  13, -37, 20, 35, 57, 60, 67, 25, 26, 26, 
  54, 35, 56, 46, 48, -14, 19, 14, 28, -16, 
  -3, -2, 51, 9, 9, -128, 1, -60, 17, -77, 
  -23, -128, -20, -128, -4, -77, 34, -128, 17, -33, 
  -29, -14, 34, -77, 1, -20, 54, -14, 17, 30, 
  50, -50, 64, 51, 40, 35, 54, -1, -43, -43, 
  102, 81, 92, 84, 97, 65, 74, -18, 58, 37, 
  23, -128, 22, -60, 16, -128, -50, -128, -14, -43, 
  43, 45, 80, 35, 56, 44, 72, 59, 59, 53, 
  61, 13, 91, 75, 62, 68, 89, 54, 30, 55, 
  93, 93, 117, 89, 109, 78, 97, 63, 69, 39, 
  57, 8, 22, -1, 54, 34, 40, 25, 59, 53, 
  81, 82, 110, 79, 93, 79, 108, 90, 105, 89, 
  107, 80, 110, 89, 96, 72, 99, 76, 64, 67, 
  90, 84, 107, 82, 106, 74, 96, 62, 72, 53, 
  65, 44, 69, 59, 67, 47, 40, 50, 70, 55, 
  83, 83, 109, 77, 95, 80, 102, 77, 97, 79, 
  96, 71, 100, 80, 96, 65, 90, 59, 77, 69, 
  94, 82, 106, 86, 111, 83, 95, 70, 91, 74, 
  69, 70, 85, 57, 87, 54, 74, 48, 85, 72, 
  99, 86, 99, 79, 104, 86, 96, 64, 92, 71, 
  91, 67, 87, 70, 91, 70, 85, 65, 77, 70, 
  86, 67, 86, 80, 104, 91, 114, 80, 104, 80, 
  83, 80, 91, 74, 91, 70, 87, 70, 89, 80, 
  117, 89, 90, 82, 110, 66, 68, 44, 87, 53, 
  61, 22, 36, 2, 54, 5, 74, 51, 82, 64, 
  77, 55, 72, 45, 81, 90, 113, 95, 106, 79, 
  104, 79, 88, 77, 89, 71, 93, 76, 103, 93, 
  107, 62, 82, 80, 90, 31, 53, 11, 75, -14, 
  0, -60, 35, -128, -16, -26, 69, 55, 65, 51, 
  76, 47, 72, 13, 68, 64, 98, 92, 112, 82, 
  100, 74, 100, 72, 96, 75, 99, 85, 113, 86, 
  89, 50, 92, 71, 70, 25, 60, 34, 71, -16, 
  28, 40, 65, 5, -16, -128, 33, 21, 40, 27, 
  74, 50, 65, 34, 68, 40, 91, 76, 114, 82, 
  100, 80, 97, 79, 99, 82, 104, 90, 111, 80, 
  79, 49, 92, 57, 67, 19, 59, 42, 75, -3, 
  26, 57, 80, 44, -20, -50, 2, 22, 58, -50, 
  38, -26, 53, -128, 4, -128, 56, 62, 97, 77, 
  85, 55, 77, 59, 80, 64, 87, 77, 86, 16, 
  44, -16, 59, -43, 14, -128, -33, -77, 23, -128, 
  -128, 35, 63, 7, -128, -128, -128, -128, 15, -128, 
  66, 37, 58, 17, 49, 13, 77, 55, 98, 72, 
  97, 72, 81, 70, 89, 75, 99, 75, 82, 23, 
  62, 39, 77, 35, 47, -60, 38, 18, 53, -128, 
  -3, 51, 72, 14, -14, -128, 0, -4, 29, -128, 
  58, 19, 44, 18, 49, -6, 73, 51, 87, 59, 
  92, 42, 87, 55, 87, 59, 89, 44, 74, -50, 
  45, -26, 60, -18, 17, -128, -33, -128, -8, -128, 
  -128, 7, 42, -128, -10, -77, -128, -77, 25, -128, 
  57, 15, 42, 1, 54, 0, 73, 46, 79, 30, 
  74, 33, 72, 40, 76, 50, 86, 51, 62, -77, 
  9, -128, 49, -128, -23, -128, -128, -128, 7, -128, 
  -128, -23, 45, -128, 4, -128, -128, -128, 17, -128, 
  57, -128, 45, -50, 31, -16, 56, 9, -8, -128, 
  25, -128, 37, -37, 25, -4, 61, -50, -7, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -20, 47, -128, 52, -77, -128, -128, 24, -128, 
  51, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -26, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -26, -128, 
  36, 7, -18, -128, 65, 57, 75, 49, 74, 37, 
  -37, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, 25, 17, 79, 68, 
  79, 62, 67, 54, 104, 85, 92, 75, 102, 78, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -60, 28, 30, 
  75, 40, 74, 65, 99, 76, 86, 60, 92, 64, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, 25, 45, 
  72, 54, 80, 68, 89, 67, 94, 65, 82, 14, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -1, -77, 38, 26, 
  62, 39, 70, 32, 85, 55, 78, 44, 82, 42, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 29, -6, 50, 27, 
  61, 42, 67, 32, 72, 32, 66, 37, 72, 10, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -23, -128, 17, -77, 44, 19, 
  51, 36, 66, 34, 77, 40, 60, 29, 67, 37, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 5, -128, -43, -77, 10, 11, 
  29, 14, 38, 6, 57, -23, 36, -77, 22, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -3, -128, 6, -128, -33, -128, 
  49, -43, 42, 14, 57, -23, 43, -50, 31, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
