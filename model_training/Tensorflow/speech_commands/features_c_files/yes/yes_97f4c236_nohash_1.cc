/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/97f4c236_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_97f4c236_nohash_1.cc" \
 */
#include "yes_97f4c236_nohash_1.h"


const int g_yes_97f4c236_nohash_1_width = 40;
const int g_yes_97f4c236_nohash_1_height = 49;
alignas(16) const signed char g_yes_97f4c236_nohash_1_data[] = {
  72, 86, 97, 67, 96, 95, 109, 77, 74, 75, 
  63, 77, 100, 88, 83, 61, 77, 65, 65, 85, 
  101, 87, 112, 95, 95, 58, 98, 95, 107, 90, 
  99, 76, 43, 45, 74, 73, 83, 71, 72, 62, 
  88, 83, 94, 54, 72, 66, 95, 72, 70, 48, 
  45, 74, 97, 70, 84, 74, 75, 67, 92, 77, 
  94, 85, 103, 76, 102, 85, 98, 70, 93, 59, 
  84, 60, 74, 56, 71, 63, 76, 65, 72, 48, 
  46, 44, 77, 49, 67, -29, 58, 38, 62, 51, 
  71, 67, 89, 58, 51, 63, 89, 69, 93, 65, 
  87, 87, 101, 84, 107, 84, 82, 55, 96, 64, 
  72, 61, 79, 53, 76, 64, 80, 53, 70, 44, 
  75, 52, 53, 45, 91, 59, 65, 69, 63, 40, 
  65, 34, 65, 36, 39, 21, 65, 65, 90, 55, 
  90, 72, 85, 46, 89, 59, 85, 42, 82, 62, 
  74, 46, 61, 55, 72, 50, 77, 42, 49, 28, 
  73, 19, 40, 45, 95, 69, 65, 35, 55, 45, 
  62, 32, 51, -50, 50, 47, 75, 65, 85, 47, 
  66, 19, 63, 29, 72, 55, 82, 45, 56, -128, 
  55, 35, 70, 25, 37, 47, 55, 11, 48, 10, 
  72, -10, 53, 44, 78, 37, 55, 45, 61, 46, 
  77, 34, 54, -23, 43, 39, 57, 48, 95, 54, 
  66, 25, 68, 49, 48, 36, 70, 34, 38, 6, 
  56, 24, 61, -4, 27, 22, 56, 8, 16, -60, 
  69, -23, 11, 11, 42, 6, 59, 42, 54, 5, 
  55, 35, 40, 32, 55, 14, 74, 25, 67, -77, 
  52, -20, 30, 18, 57, 34, 59, -16, 40, 11, 
  17, -12, 39, 18, 48, 11, 43, -18, 31, -2, 
  28, -4, 26, 4, 38, -37, 47, 32, 45, -12, 
  23, -77, 25, 32, 56, -50, 63, -26, 47, -7, 
  37, -128, 48, 14, 47, 12, 52, 19, 47, 2, 
  50, -128, 14, -77, 22, -2, -3, -77, -14, -16, 
  19, -128, 19, -128, -29, -128, 29, -20, 58, -18, 
  -12, -128, -43, -128, 44, -50, 44, -128, -50, -23, 
  17, -50, 50, 17, 22, -1, 7, -77, 21, -29, 
  40, -128, -128, -128, 2, -16, 22, -128, -60, -128, 
  33, 33, 55, -77, -43, -128, 34, -128, -16, -128, 
  23, -128, -128, -128, 10, -128, -6, -128, -12, 16, 
  54, 2, 44, -1, 20, -128, -128, -128, 32, -37, 
  19, -128, -128, -128, 5, -60, -29, -128, -77, -128, 
  40, -16, -26, -128, -128, -77, 70, 32, 19, -128, 
  46, -128, -33, -128, -128, -128, -128, -128, -128, -77, 
  30, -128, 29, -128, -12, -77, -23, -128, -128, -128, 
  -26, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  16, -60, 30, -128, -6, -20, 62, 19, 8, -128, 
  -3, -128, -128, -128, -128, -128, -128, -128, -23, -20, 
  1, -128, -43, -128, 5, -43, -128, -128, -128, -128, 
  -23, -128, -128, -128, 9, -128, -128, -128, -60, -128, 
  37, -128, -6, 0, 49, 25, 89, 69, 19, -128, 
  4, -128, -128, -128, -128, -128, -128, -128, 20, 18, 
  24, -128, -128, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -128, 12, 11, -60, -128, 38, 30, 4, -128, 
  40, -128, -18, -128, -128, -128, -128, -128, 16, -20, 
  24, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  45, -128, -128, -6, 30, 20, 64, 54, 74, 35, 
  79, 59, 68, 67, 103, 83, 98, 83, 99, 80, 
  102, 74, 95, 75, 90, 65, 76, 78, 97, 90, 
  108, 93, 113, 95, 111, 86, 102, 84, 84, 81, 
  18, -128, 61, 24, 8, -128, 55, 16, 52, 17, 
  71, 9, -4, -16, 67, 44, 62, 30, 36, 14, 
  19, -128, -2, -128, 29, -50, 33, 6, 60, 22, 
  62, 67, 89, 68, 94, 73, 96, 83, 107, 84, 
  -128, 14, 74, 38, -18, 12, 71, 57, 55, 33, 
  61, -128, -20, -14, 32, -128, -128, -128, -8, -128, 
  -128, -128, -128, -128, -128, -128, -23, -128, -20, -128, 
  13, -29, 32, -77, -10, -128, 31, -26, 75, 51, 
  -14, 24, 72, 27, -128, -128, 71, 54, 34, -26, 
  36, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  -4, -128, 14, -128, -77, -128, -128, -128, 25, -128, 
  -29, -33, 32, -16, -14, -6, 36, -128, -12, -128, 
  -23, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -23, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -23, -128, -128, -128, 
  -29, -128, -43, -128, -128, -128, -128, -128, -43, -128, 
  -6, -128, -128, -128, -128, -50, 40, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 35, -128, -128, -128, 
  -29, -128, 4, -128, -128, -128, -128, -128, -77, -128, 
  27, -128, -60, -128, -128, -18, 50, -33, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -7, -128, -128, -128, 
  -128, -128, 27, -128, -128, -128, -128, -128, -128, -128, 
  56, 44, 51, -8, -60, -128, 14, -60, -26, -128, 
  -29, 4, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, 27, -128, -128, -128, -128, -128, -128, -128, 
  63, 65, 77, 34, 23, -128, -128, -128, -77, -128, 
  -14, 51, 47, -16, 9, -128, -77, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, -128, -128, 
  -128, -6, 59, -128, -128, -128, -128, -128, -128, -128, 
  116, 99, 119, 94, 94, 61, 75, 40, 67, 60, 
  69, 25, 32, -128, -43, 24, 64, -128, -128, -128, 
  -128, -128, -128, -128, -37, 50, 80, 13, -128, -128, 
  54, 64, 89, 40, 35, -10, 36, 17, 29, -128, 
  115, 97, 115, 75, 117, 101, 114, 44, 111, 89, 
  84, 84, 87, 50, 73, 52, 73, 25, 11, -128, 
  29, 15, 65, 61, 85, 85, 106, 73, 74, 65, 
  100, 87, 105, 77, 80, 67, 82, 67, 74, 34, 
  111, 87, 103, 63, 115, 93, 108, 75, 114, 85, 
  108, 87, 79, 82, 79, 72, 65, 60, 51, 40, 
  73, 66, 86, 77, 102, 82, 93, 74, 94, 79, 
  100, 76, 96, 60, 84, 52, 61, 50, 69, 19, 
  107, 78, 90, 53, 109, 79, 84, 89, 113, 74, 
  110, 78, 101, 82, 93, 80, 95, 77, 82, 63, 
  89, 82, 104, 82, 105, 82, 96, 72, 84, 74, 
  91, 73, 84, 54, 90, 54, 51, -12, 55, 4, 
  101, 68, 71, 81, 102, 60, 52, 95, 112, 81, 
  111, 72, 109, 81, 110, 81, 98, 74, 97, 76, 
  102, 81, 105, 73, 87, 45, 83, 71, 92, 62, 
  86, 56, 77, 53, 61, -43, 32, -1, 67, 46, 
  96, 58, 46, 81, 91, 20, 87, 87, 94, 88, 
  106, 62, 103, 57, 93, 49, 78, 77, 84, 72, 
  104, 86, 97, 70, 86, 45, 84, 71, 94, 61, 
  80, 51, 69, 41, 68, -14, 49, -3, 50, -6, 
  89, 34, 16, 69, 67, -128, 88, 63, 83, 85, 
  89, 61, 85, 67, 80, 62, 72, 41, 71, 12, 
  70, 62, 80, 44, 75, 17, 82, 67, 87, 62, 
  83, 59, 83, 32, 52, -43, 42, -50, 65, 16, 
  71, -128, -37, 6, -128, -128, -128, -128, 41, -16, 
  31, 9, 12, 19, 69, 0, 63, 32, 65, 19, 
  57, 49, 64, -26, 6, -128, 22, -33, 62, -10, 
  55, 19, 53, 29, 66, 49, 62, 57, 85, 61, 
  12, -128, -128, -128, -128, -128, -20, -128, -128, -128, 
  -77, -128, -20, -128, 54, -128, 45, -128, 56, 42, 
  59, 48, 57, -6, 13, -128, -43, -128, 45, -33, 
  36, -128, 45, -50, 54, 43, 69, 63, 83, 52, 
  -60, -128, 19, -29, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, -128, 35, -128, -26, -43, 28, -26, 
  7, -128, -3, -77, -6, -128, -77, -20, 59, 21, 
  47, -128, -12, -60, 55, 44, 83, 57, 80, 67, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 15, -128, 7, -26, 
  29, -60, -20, -37, 1, -128, -128, -128, 49, -20, 
  42, -128, 59, -26, 77, 82, 103, 80, 96, 85, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 4, -128, -20, -128, -26, -128, 
  -60, -128, -20, -128, -128, -128, -128, -128, -29, -128, 
  -60, -128, -7, -43, 53, 85, 113, 83, 102, 86, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -29, 58, -128, 9, -60, 
  -12, -128, -60, -128, -29, -128, -128, -128, 23, -18, 
  5, -128, -7, 4, 62, 12, 73, 55, 92, 79, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 0, -128, 24, -43, 13, -12, 
  27, 4, 46, -43, 11, -128, -128, -128, 37, -26, 
  29, -128, -20, 2, 65, -12, 83, 69, 95, 63, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -18, 41, -26, 62, 8, 12, -43, 
  22, -60, 35, -29, -23, -128, -50, -77, 57, 0, 
  0, -128, 46, 27, 69, 39, 74, 56, 89, 55, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -1, 14, 39, -77, -14, -60, 
  4, -128, -20, -50, 38, -43, -128, -128, 65, 41, 
  32, -77, 22, 41, 69, 46, 84, 57, 87, 62, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, 19, -128, 30, -128, 43, -12, 
  46, -77, 22, -128, -128, -128, -128, -60, 26, -33, 
  1, -128, 35, 40, 69, 58, 82, 58, 79, 32, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, 9, -128, -7, -77, 8, -128, 
  -23, -128, -29, -60, 6, -128, -128, -128, -10, -33, 
  33, -16, 58, 49, 92, 63, 57, 5, 64, 15, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -29, -33, 29, -128, 
  41, -128, -128, -128, -2, -128, -128, -128, -16, -128, 
  7, -23, 55, 45, 77, 40, 61, 0, 64, 0, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, 36, 9, 36, -128, 
  20, -128, -128, -128, -128, -128, -128, -128, -6, -128, 
  35, -8, 43, 34, 76, -29, 37, 11, 49, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -37, 4, -60, 20, -50, 34, -12, -3, -23, 
  37, -128, 18, -26, 9, -128, -128, -128, 6, -128, 
  19, 4, 43, -6, 73, 30, 29, -128, 25, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 21, -29, -14, -50, -23, -23, 
  55, -33, 32, -14, 14, -128, -128, -128, -7, -128, 
  22, -1, 45, 6, 72, 30, 0, -128, -8, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 5, -128, 4, 35, 
  61, -37, 29, -37, -14, -128, -128, -43, -14, -128, 
  -128, -128, -77, -128, 27, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};