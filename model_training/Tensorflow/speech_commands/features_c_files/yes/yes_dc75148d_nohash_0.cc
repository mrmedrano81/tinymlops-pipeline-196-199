/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/dc75148d_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_dc75148d_nohash_0.cc" \
 */
#include "yes_dc75148d_nohash_0.h"


const int g_yes_dc75148d_nohash_0_width = 40;
const int g_yes_dc75148d_nohash_0_height = 49;
alignas(16) const signed char g_yes_dc75148d_nohash_0_data[] = {
  66, 82, 94, 74, 90, 76, 84, 61, 67, 68, 
  74, 68, 74, 65, 68, 73, 88, 80, 85, 72, 
  89, 81, 84, 81, 88, 84, 88, 79, 90, 80, 
  82, 66, 74, 64, 56, 68, 89, 78, 59, 32, 
  72, 57, 74, 64, 80, 70, 70, 45, 82, 74, 
  59, 58, 78, 63, 75, 50, 69, 56, 59, 74, 
  81, 63, 83, 63, 78, 64, 85, 57, 80, 76, 
  78, 58, 62, 60, 64, 57, 78, 61, 48, 17, 
  59, 65, 81, 44, 59, 45, 73, 67, 70, 44, 
  74, 59, 77, 47, 67, 40, 61, 50, 52, 48, 
  86, 57, 72, 42, 76, 59, 80, 49, 77, 54, 
  67, 27, 48, 35, 56, 46, 65, 40, 48, -12, 
  74, 18, 44, 14, 39, 20, 45, 50, 77, 53, 
  55, 34, 57, 50, 66, 45, 42, 14, 76, 52, 
  71, -10, 62, 50, 59, 18, 61, 50, 44, -12, 
  36, 43, 55, 44, 57, 17, 47, 18, 31, -6, 
  52, -1, 30, 43, 79, 37, 47, 19, 58, 39, 
  42, 34, 44, 30, 60, -16, 32, 26, 70, 40, 
  61, 37, 28, 9, 34, 20, 53, 11, 31, 4, 
  54, 35, 56, 39, 48, 20, 25, -18, 34, -4, 
  43, 37, 67, 40, 44, 41, 67, 49, 48, 8, 
  37, 10, 41, 4, 21, -10, 25, -128, 20, 12, 
  17, 12, 64, 29, -2, -43, 28, -23, 25, -77, 
  33, 24, 46, 4, 44, -14, 32, -77, 18, -29, 
  57, 55, 69, 6, 70, 31, 53, 16, 32, -128, 
  10, -14, 49, 11, 40, -128, 30, 15, 40, -50, 
  24, 19, 43, -12, 4, -128, 14, -128, -4, -128, 
  19, 0, 39, -33, 38, -26, 9, -60, 14, -60, 
  55, 28, 32, 0, 51, 15, 40, 17, 39, 12, 
  58, -2, 36, -7, 37, -3, 47, -18, 48, 1, 
  -43, -128, -2, -128, -12, -128, -26, -43, 27, -60, 
  34, 11, 48, -6, 38, -12, 17, -50, -3, -128, 
  -2, -43, 42, 35, 42, -26, 36, -23, 22, -33, 
  11, -60, 39, -23, 27, -26, 1, -128, -14, -128, 
  25, -128, -12, -128, 17, -128, 8, -128, -1, -12, 
  42, -12, 39, -23, 39, -8, -33, -77, 2, -60, 
  46, -128, 41, 20, 58, 29, 56, 19, 17, -18, 
  51, -2, 9, -77, 39, 15, 11, -77, 25, -37, 
  -8, -37, 11, -128, -23, -128, -12, -26, 2, -50, 
  31, -7, 18, -50, 17, -18, 20, -77, -2, -43, 
  9, 11, 56, -12, -4, -26, 25, 7, 61, 6, 
  41, 2, 15, -60, 4, -23, -50, -128, -26, -128, 
  -33, -60, -128, -128, -4, -128, 31, -26, 29, -50, 
  14, -50, 34, -29, 24, -60, 1, -128, 4, -12, 
  28, -10, 59, 9, -16, -128, -37, -37, 8, -60, 
  31, -50, 4, 4, 17, -26, 19, -60, 9, -77, 
  -16, -60, -2, -50, 26, -50, 19, -60, 13, -128, 
  12, -77, -1, -12, 9, -33, 9, -23, -29, -128, 
  40, 27, 48, -128, 14, 12, 49, -60, 36, 1, 
  47, -12, 1, 10, 27, 12, 27, -128, -37, -50, 
  5, -128, -23, 0, 51, -20, 24, -26, 21, -60, 
  29, -23, 4, -43, 22, -128, -20, -60, 22, -50, 
  107, 87, 95, 66, 84, 67, 82, 44, 38, 22, 
  2, -8, 17, -77, 19, -128, 5, -128, 38, -4, 
  -14, -128, 30, 27, 62, 17, 53, 12, 34, -26, 
  43, 11, 30, -20, 31, -37, -29, -128, -14, -77, 
  115, 90, 118, 99, 118, 94, 117, 87, 104, 86, 
  94, 63, 85, 58, 65, 54, 72, 60, 79, 55, 
  85, 76, 107, 94, 116, 94, 114, 92, 103, 84, 
  110, 94, 107, 79, 71, 8, 24, 9, 45, 29, 
  109, 82, -16, 87, 117, 85, 102, 94, 92, 88, 
  106, 81, 95, 78, 91, 75, 93, 79, 95, 78, 
  100, 87, 112, 94, 114, 93, 114, 92, 110, 90, 
  113, 90, 110, 85, 83, 9, 17, -12, 53, 36, 
  103, 77, 4, 78, 106, 77, 106, 92, 102, 83, 
  105, 80, 101, 76, 95, 77, 95, 79, 102, 81, 
  104, 87, 112, 92, 108, 89, 112, 88, 110, 90, 
  113, 89, 110, 87, 97, 46, 63, 65, 82, 60, 
  97, 71, -14, 70, 96, 65, 109, 90, 107, 79, 
  97, 80, 99, 76, 94, 77, 100, 80, 104, 84, 
  109, 92, 114, 73, 101, 81, 104, 77, 102, 84, 
  107, 80, 105, 83, 102, 62, 77, 74, 97, 77, 
  92, 64, 23, 60, 87, 50, 109, 87, 106, 83, 
  101, 83, 102, 78, 95, 77, 101, 77, 103, 82, 
  109, 85, 102, 56, 93, 74, 97, 70, 96, 77, 
  97, 68, 94, 71, 93, 54, 82, 69, 102, 79, 
  85, 53, 45, 52, 74, 14, 98, 64, 100, 85, 
  100, 77, 90, 74, 90, 67, 96, 71, 96, 79, 
  108, 74, 80, 44, 83, 65, 86, 56, 86, 61, 
  84, 55, 81, 61, 84, 42, 75, 55, 90, 61, 
  79, 37, 69, 49, 65, 37, 87, 34, 104, 79, 
  87, 69, 76, 60, 87, 54, 89, 66, 93, 72, 
  100, 59, 66, 6, 71, 52, 75, 40, 76, 47, 
  78, 35, 72, 41, 75, 30, 57, 52, 85, 54, 
  74, 25, 69, 44, 60, 39, 80, 10, 99, 70, 
  81, 63, 73, 53, 83, 48, 82, 55, 88, 67, 
  92, 34, 52, -50, 57, 32, 63, 19, 64, 34, 
  68, 23, 62, 29, 65, 6, 53, 42, 79, 44, 
  69, 16, 72, 38, 54, 39, 75, -10, 94, 62, 
  77, 55, 71, 42, 78, 40, 75, 49, 84, 62, 
  84, 4, 36, -128, 52, 5, 52, -14, 51, 0, 
  56, 7, 52, 10, 67, -43, 38, 27, 72, 35, 
  67, 14, 67, 31, 52, 31, 69, -26, 81, 46, 
  71, 46, 65, 31, 75, 34, 69, 43, 75, 49, 
  76, -50, -3, -128, 34, -12, 47, -128, 30, -128, 
  39, -14, 39, 10, 73, 43, 48, 22, 65, 35, 
  67, 24, 55, 25, 54, 8, 66, -14, 65, 23, 
  62, 36, 70, 46, 69, 29, 67, 34, 61, 9, 
  60, -128, -128, -128, -128, -128, -18, -128, -128, -128, 
  -128, -128, -128, -128, 42, 31, 10, -128, 39, -7, 
  65, 27, 45, 4, 46, -43, 50, -77, 11, -128, 
  17, -43, 19, -128, -43, -128, 0, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -26, 5, -14, -128, 12, -128, 
  40, -77, 4, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -2, 59, 77, -50, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 60, 77, 100, 55, 54, 26, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 49, 68, 86, 59, 65, -1, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 47, 50, 81, 14, 54, 24, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 16, 53, 84, 31, 55, 35, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 6, 8, 55, 9, 43, 12, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 37, 13, 50, 34, 59, 4, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 36, 33, 49, 9, 61, 42, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 51, 38, 56, 2, 57, 46, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 45, 23, 51, 39, 63, 44, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 35, 34, 5, 26, 52, 11, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 31, -12, 19, -7, 39, 9, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 14, -26, 30, -7, 37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 17, 0, -8, -128, 15, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 43, 32, 16, -14, 32, -20, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 24, -43, 30, -20, 34, -16, 
  -128, -128, -3, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -50, 64, -43, 0, -77, 13, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -60, 22, -128, -18, -128, -33, -128, 
  48, 41, 68, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  8, -33, 59, -128, -128, -128, -128, -128, -128, -128, 
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