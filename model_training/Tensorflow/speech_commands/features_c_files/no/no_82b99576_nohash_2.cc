/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/82b99576_nohash_2.wav" \
 * --output_c_file="features_c_files/no/no_82b99576_nohash_2.cc" \
 */
#include "no_82b99576_nohash_2.h"


const int g_no_82b99576_nohash_2_width = 40;
const int g_no_82b99576_nohash_2_height = 49;
alignas(16) const signed char g_no_82b99576_nohash_2_data[] = {
  112, 98, 117, 93, 114, 95, 93, 84, 97, 92, 
  113, 89, 102, 88, 100, 85, 105, 92, 102, 93, 
  109, 87, 90, 82, 104, 90, 86, 80, 99, 82, 
  88, 79, 87, 66, 81, 66, 63, 58, 65, 34, 
  91, 77, 101, 75, 95, 67, 83, 63, 78, 68, 
  89, 67, 84, 81, 107, 82, 88, 62, 94, 82, 
  101, 68, 93, 67, 98, 74, 81, 64, 76, 59, 
  82, 64, 83, 67, 72, 61, 75, 64, 71, 29, 
  96, 48, 91, 80, 102, 65, 94, 39, 100, 79, 
  66, 70, 81, 79, 103, 77, 89, 60, 92, 61, 
  84, 68, 90, 54, 72, 48, 80, 64, 59, 47, 
  70, 66, 76, 55, 82, 70, 64, 44, 55, 30, 
  68, 44, 66, 79, 104, 71, 84, 44, 78, 62, 
  77, 60, 82, 66, 87, 59, 80, 58, 72, 28, 
  59, 34, 69, 50, 67, 54, 66, 43, 60, 34, 
  75, 59, 77, 47, 70, 44, 65, 58, 49, 27, 
  76, 25, 53, 58, 89, 63, 80, 22, 41, 27, 
  80, 57, 95, 60, 64, 32, 68, 39, 64, 23, 
  55, 43, 72, 22, 63, 32, 67, 60, 67, 66, 
  77, 62, 73, 56, 73, 55, 58, 45, 63, 16, 
  96, 52, 71, 58, 55, 28, 104, 87, 87, 40, 
  89, 65, 79, 45, 64, -12, 70, 65, 47, 34, 
  77, -20, 35, 49, 55, 14, 73, 50, 62, 52, 
  74, 6, 60, 31, 52, 16, 72, 55, 70, 11, 
  54, -29, 35, -12, 15, -33, 76, 62, 75, 38, 
  87, 52, 55, 11, 59, 36, 74, 44, 57, 7, 
  50, 11, 61, 54, 39, 30, 74, 35, 74, 31, 
  54, -26, 45, 49, 52, 13, 61, 26, 48, -16, 
  32, -128, 46, 11, 33, -16, 71, 54, 58, 64, 
  92, 32, 49, 19, 41, 21, 82, 27, 37, -7, 
  16, 46, 76, 54, 65, -8, 62, 22, 43, 37, 
  59, 16, 42, 20, 47, 16, 52, 7, 43, -18, 
  49, -128, 48, -14, 14, -60, 37, 4, 54, 65, 
  91, 37, 46, -2, 55, 34, 71, 54, 71, -2, 
  33, 20, 56, 44, 63, -18, 21, -8, 44, 19, 
  69, -14, 55, -33, 28, 4, 55, 29, 40, -16, 
  26, -128, -33, -128, 2, -128, 51, 26, 19, 48, 
  79, -2, 31, -50, 44, 56, 60, -23, 55, -29, 
  40, -20, 37, 47, 70, -50, 49, -37, 40, -7, 
  49, 4, 30, -1, 47, 6, 54, 15, 45, -26, 
  50, 4, 28, -60, -26, -12, 53, -128, 42, 39, 
  61, -10, -37, -77, 62, 57, 67, 39, 51, -128, 
  -7, 15, 44, 34, 60, -23, 29, 14, 59, -4, 
  44, -7, 19, -6, 30, -18, 42, -37, 30, -20, 
  64, 51, 50, 14, 60, -23, 17, -128, 32, 20, 
  52, -29, 54, -29, 55, 44, 58, -1, 45, -128, 
  15, 6, 62, -8, 39, -18, 36, -50, 34, 8, 
  70, 44, 13, -60, 43, -2, 37, -77, 30, 7, 
  56, 38, 67, 27, 31, -128, 48, 6, 17, 59, 
  74, -128, 39, -1, 60, 2, 46, -43, 35, -4, 
  25, -128, 28, -128, 32, 15, 52, -23, 30, -43, 
  40, -12, 33, 1, 32, -37, 25, 15, 45, -77, 
  59, 46, 61, 32, 40, -50, -50, -128, 19, -4, 
  35, -128, 47, -10, 18, -33, 39, -128, 22, -3, 
  -33, -77, 7, -37, 42, 14, 16, -26, 49, -20, 
  12, -77, 11, -1, 25, -50, 23, -33, 14, -77, 
  5, -128, 0, -128, -128, -128, -128, -128, 2, -43, 
  47, -128, -29, -128, 45, -128, -12, -128, 9, -20, 
  -128, -23, 32, -18, 37, -18, 18, -18, 32, -33, 
  40, -37, 19, -128, 38, -77, 17, -33, 35, -77, 
  -26, -128, -128, -128, -128, -128, -128, -128, -1, 14, 
  47, -128, 27, -50, 15, -128, 11, -128, -8, -128, 
  -43, 24, 27, -128, 19, -128, 39, -33, 35, -77, 
  29, -23, 38, -6, 25, -18, 4, -128, 29, -10, 
  99, 70, 85, 62, 86, 65, 78, 48, 53, 30, 
  44, -128, 58, -7, 47, 2, 45, -128, 8, -77, 
  19, 42, 54, 13, 56, 55, 53, -128, 56, -26, 
  33, -26, 52, 2, 20, 7, 56, -60, 1, -20, 
  114, 77, 100, 84, 82, 81, 99, 73, 100, 44, 
  61, 9, 74, 19, -50, -128, -29, -20, 48, -128, 
  37, 20, 67, -37, 62, 52, 67, -60, 55, -50, 
  51, -7, 21, -33, 32, -7, 59, -3, 4, -20, 
  109, 77, 100, 82, 88, 83, 99, 75, 97, 25, 
  59, 45, 62, -18, 55, 38, 37, -1, 11, 16, 
  47, 41, 72, 8, 35, 57, 88, -26, 20, -14, 
  23, 19, 14, 24, 19, 24, 44, -50, 7, 9, 
  102, 72, 92, 64, 77, 76, 95, 59, 84, 28, 
  47, 49, 52, -29, 56, 45, 64, -128, -3, -37, 
  -12, 32, 62, -18, 32, 52, 81, -37, -29, -128, 
  33, -37, 27, -20, 14, -43, 20, -77, 8, -10, 
  97, 65, 90, 63, 77, 70, 86, 66, 85, 62, 
  71, -128, 1, -60, 27, -7, 30, -4, 60, -29, 
  5, -29, 32, -60, 42, -77, 37, -128, 1, -128, 
  11, -3, 59, -2, 20, -4, 15, -29, 15, 4, 
  93, 59, 80, 44, 80, 67, 85, 59, 74, 19, 
  17, 20, 10, -37, 27, -128, -26, -50, 46, -128, 
  -77, -128, 11, -128, 8, -128, 42, 9, 40, -7, 
  25, -128, -2, -128, -8, -128, -20, -128, -3, -8, 
  87, 56, 79, 52, 72, 64, 89, 26, 69, 52, 
  45, 47, 69, 39, -128, -128, 1, 1, 50, 25, 
  58, 13, 15, 9, 40, 1, 32, 44, 40, -20, 
  19, -128, 42, 5, 42, -50, -1, -77, 17, -12, 
  84, 52, 88, 64, 93, 82, 104, 69, 90, 80, 
  96, 62, 69, -8, -77, -128, 40, 55, 97, 93, 
  103, 49, 72, 47, 82, 9, 59, 68, 57, 12, 
  -23, 21, 76, 46, 42, -16, 29, -12, 44, 36, 
  78, 37, 80, 48, 92, 74, 92, 78, 94, 80, 
  95, 83, 96, 72, -7, -128, 82, 71, 109, 90, 
  90, 39, 86, -26, 67, 74, 80, 11, 43, -43, 
  -77, -16, 49, 44, 62, -37, 36, -26, 40, 32, 
  71, 25, 80, 36, 87, 54, 74, 81, 95, 69, 
  80, 83, 92, 61, 69, -77, 80, 77, 96, 55, 
  70, 5, 52, -128, 83, 75, 72, 10, 35, -43, 
  64, 43, 47, 52, 72, -128, 20, -12, 42, 5, 
  65, -14, 74, 21, 79, 21, 76, 77, 93, 64, 
  92, 82, 90, 70, 97, 20, 89, 64, 82, 14, 
  51, -18, 16, -128, 87, 71, 92, -26, 37, 16, 
  17, 1, 61, 26, 64, -23, 8, -33, 30, 21, 
  53, -37, 65, -33, 82, 33, 79, 71, 85, 38, 
  91, 73, 78, 54, 73, 53, 88, 64, 93, 34, 
  62, -60, 34, -128, 81, 67, 86, 19, 34, -128, 
  -14, -29, 54, 57, 78, -43, 11, -20, 27, 19, 
  52, -43, 62, -26, 81, 37, 76, 60, 88, 57, 
  89, 67, 83, 55, 77, 67, 97, 61, 86, 32, 
  37, -23, 63, 4, 58, 49, 71, 31, 39, -128, 
  -128, -128, 50, 43, 78, -26, -12, -50, 40, -4, 
  43, -60, 62, -10, 80, 32, 77, 56, 87, 53, 
  86, 61, 85, 55, 76, 62, 84, -4, 70, -20, 
  17, 19, 49, -128, 59, 9, 40, -43, -18, -43, 
  19, -7, 65, 67, 88, -77, -20, -77, 24, 4, 
  46, -60, 54, -43, 74, 29, 74, 54, 81, 45, 
  77, 51, 81, 48, 72, 50, 85, 57, 80, 9, 
  -128, -18, 10, -128, 61, 44, 61, -128, -7, -50, 
  5, -128, 35, 65, 80, -8, 2, -43, 14, -18, 
  47, -29, 48, -60, 70, 26, 70, 54, 66, 25, 
  66, 38, 69, 20, 64, 51, 82, 71, 78, 9, 
  -77, -128, -8, -37, 29, -14, 15, -128, -33, -128, 
  11, -77, 35, 50, 72, -43, 14, -77, 11, -20, 
  47, -29, 52, -14, 62, 23, 68, 53, 55, -26, 
  35, -4, 50, -23, 44, 27, 66, 71, 79, -128, 
  -128, -128, -33, -20, 65, 4, 16, -128, -50, -43, 
  -33, -128, 9, 20, 62, -60, -20, -77, 10, -16, 
  41, -77, 40, -33, 50, -4, 64, 44, 45, -128, 
  -128, -128, 61, -77, 5, 34, 58, 57, 69, -128, 
  -128, -128, 23, 22, 29, -128, -128, -128, -29, -128, 
  -128, -128, -29, -128, -1, -128, 2, -128, 2, -37, 
  35, -60, 37, -37, 43, -14, 34, 4, 41, -77, 
  -23, -128, 33, -77, 30, 32, 73, 29, 54, -128, 
  -128, -7, 32, 32, 58, -128, -128, -128, -18, -128, 
  -1, -128, 24, -50, 4, -128, -26, -37, -4, -26, 
  33, -60, 25, -128, 32, -43, -2, -128, 10, -128, 
  -1, -50, 27, -3, 66, 57, 75, -18, 11, -128, 
  -128, -128, -43, -128, -128, -128, -128, -128, 28, 2, 
  -60, -128, 64, -18, -128, -128, -29, -128, -128, -128, 
  35, -60, 15, -77, -18, -128, -77, -128, -37, -128, 
  -128, -128, -26, -128, 52, 65, 46, -128, -16, -128, 
  -128, -128, -128, -37, -128, -128, -128, -128, -16, -2, 
  13, -128, 10, -128, -128, -128, -7, -77, -37, -128, 
  20, -128, 2, -77, -33, -128, -60, -128, -128, -128, 
  -128, -128, -10, -128, 35, 24, -10, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -16, -128, -128, -128, -128, -128, -60, -128, 
  23, -37, -33, -128, -43, -128, -33, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -60, 
  40, -128, -128, -128, -128, -128, -3, -77, -77, -128, 
  11, -128, -33, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -16, -50, 
  -77, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -10, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 4, -60, 
  15, -128, -128, -128, -128, -128, -50, -128, -37, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -26, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  -77, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -6, -128, -128, -128, -128, -60, -18, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -77, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -128, 
  -37, -128, -128, -128, -128, -128, -43, -77, 0, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -77, 10, -14, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -26, -128, -128, -128, -60, -128, -128, -128, 
};