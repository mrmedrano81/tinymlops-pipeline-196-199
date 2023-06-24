/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/6736bc64_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_6736bc64_nohash_0.cc" \
 */
#include "yes_6736bc64_nohash_0.h"


const int g_yes_6736bc64_nohash_0_width = 40;
const int g_yes_6736bc64_nohash_0_height = 49;
alignas(16) const signed char g_yes_6736bc64_nohash_0_data[] = {
  114, 91, 89, 81, 90, 65, 63, 55, 77, 59, 
  80, 62, 52, 47, 53, 15, 44, 42, 50, 52, 
  52, 34, 40, 45, 49, 51, 33, 4, 14, 17, 
  31, 30, 26, 32, 26, 17, -10, -18, -10, -12, 
  87, 71, 90, 57, 77, 65, 76, 68, 74, 64, 
  79, 57, 52, 32, 48, 4, -8, 14, 32, 35, 
  46, 23, 17, -1, 39, 40, 24, 20, 15, -10, 
  2, 1, 27, 20, 27, -10, -1, -20, -37, -50, 
  77, 72, 77, 61, 82, 55, 51, 42, 42, 37, 
  84, 69, 78, 67, 53, 44, 56, 22, 47, 8, 
  38, 43, 61, 47, 42, 15, 22, -20, 2, 14, 
  20, -2, 13, 11, 16, 8, 7, -6, -12, -23, 
  82, 65, 72, 36, 65, 40, 54, 31, 62, 48, 
  59, 35, 72, 41, 69, 29, 48, 39, 53, 20, 
  34, 14, 42, 27, 47, 6, 17, -7, 5, -12, 
  -1, -14, -16, -33, -10, -18, 6, -14, -2, -33, 
  73, 52, 68, 41, 47, 54, 84, 52, 23, 37, 
  63, 37, 57, 44, 49, 7, 30, 7, 31, 28, 
  46, 31, 26, 34, 39, 20, 21, -1, 17, -10, 
  7, -10, -12, -37, 14, -18, -4, -2, -20, -77, 
  90, 57, 53, 21, 55, 57, 71, 36, 55, 19, 
  27, 15, 37, 28, 42, 17, 22, -7, 50, 34, 
  47, 20, 30, -43, 49, 17, 17, -16, 1, -12, 
  16, 10, 9, -6, 21, -20, 4, -18, 4, -60, 
  57, 17, 67, -7, 34, -29, -3, -20, 55, 34, 
  73, 48, 55, 41, 62, -43, -12, -50, 10, 13, 
  46, -7, 22, 9, 43, -12, -2, -37, 0, -3, 
  41, 18, 35, 12, 19, -29, -18, -43, -18, -60, 
  -128, -128, 52, 28, 54, 0, 48, 52, 72, 36, 
  52, -14, 9, -128, 40, 19, 6, -3, 22, -37, 
  48, 18, -6, -12, 25, 9, 17, -20, 11, -6, 
  34, -20, 15, 6, 9, -50, -43, -43, -7, -128, 
  47, -50, 18, 4, 50, 16, 45, -128, 39, 1, 
  -3, -7, 42, -43, 38, -23, 43, 28, 34, -29, 
  -2, -20, 12, -33, -7, -14, 12, -23, 17, -29, 
  24, -23, 19, 0, -4, -60, -14, -43, -18, -77, 
  19, 15, 59, 33, 44, -16, 48, -7, 32, 19, 
  52, -26, 10, -128, -26, -43, 17, -50, 20, 1, 
  2, -26, 17, -43, 27, -6, -6, -29, -8, -33, 
  10, -16, -6, -16, 2, -43, -14, -77, -14, -128, 
  -4, -29, 55, -128, 37, 0, 60, 21, 50, 8, 
  32, 11, 39, 29, 47, 16, 16, -50, 13, -128, 
  11, -43, -43, -20, 19, -33, 29, -20, -1, 0, 
  2, -29, 1, -26, 16, -23, -16, -37, -60, -77, 
  24, 20, 51, -128, 57, 33, 11, -77, 33, -60, 
  52, 4, 42, -26, 27, 17, 45, 16, 14, -43, 
  -12, -60, 11, -43, -20, -128, -2, -29, -6, -50, 
  19, -77, 0, -10, 22, -29, -23, -128, -37, -77, 
  32, -128, 40, -60, 1, -77, -37, -128, 17, -37, 
  6, -50, -29, -20, 34, -14, 19, -50, -50, -37, 
  15, -43, 1, -60, -16, -37, -10, -128, -12, -33, 
  -20, -128, -4, -43, 10, -43, -18, -77, -37, -128, 
  -128, -128, 44, 4, 59, 34, 52, -4, 6, -128, 
  36, -43, -3, -128, -2, -26, 19, 2, 17, -77, 
  11, -60, -3, -128, 9, -77, -37, -77, -37, -37, 
  -50, -60, -10, -50, -20, -60, -26, -77, -37, -128, 
  -128, -128, 5, 11, 40, -128, 24, 29, 54, -37, 
  52, 39, 42, 19, 46, -3, -7, -77, -16, -128, 
  12, -10, 9, -29, 14, -29, 48, 4, -8, -43, 
  -2, -128, 0, -29, -1, -26, -1, -12, 9, -60, 
  45, -128, 15, -50, 41, 31, 51, -60, 4, -14, 
  14, -37, 31, -26, 44, -16, 17, -7, 26, -77, 
  -29, -18, 9, -77, -50, -128, 7, -26, 11, -128, 
  -23, -128, -26, -33, -18, -50, -10, -77, -18, -128, 
  67, 22, 38, 35, 49, 30, 48, -128, 9, -50, 
  44, -43, -4, -128, -77, -128, -77, -2, 28, -33, 
  10, -33, -1, -18, -14, -43, -18, -128, -20, -128, 
  -43, -26, -14, -77, -18, -77, -29, -128, -20, -128, 
  99, 82, 96, 62, 71, 5, -43, -128, -14, -128, 
  -37, -128, 17, -77, -3, -7, 19, -77, 13, -29, 
  0, -128, 0, -26, -2, -12, 38, -37, 29, 9, 
  -1, -33, -6, -33, -16, -128, -7, -50, 5, -50, 
  120, 93, 122, 101, 112, 89, 102, 56, 69, 67, 
  69, 25, 29, 19, 59, 38, 5, -43, 54, 54, 
  86, 86, 107, 81, 102, 94, 116, 93, 115, 97, 
  112, 83, 80, 17, 30, 32, 57, 58, 92, 75, 
  98, 86, 111, 91, 119, 87, 97, 88, 88, 64, 
  75, 30, 34, -23, 37, -16, 45, 14, 74, 76, 
  111, 94, 114, 91, 112, 97, 111, 85, 109, 86, 
  106, 83, 83, 47, 63, 79, 97, 82, 101, 81, 
  69, 77, 104, 75, 113, 95, 117, 95, 119, 91, 
  106, 84, 102, 74, 77, 79, 95, 80, 102, 91, 
  114, 88, 109, 91, 117, 89, 110, 94, 112, 85, 
  103, 78, 94, 69, 85, 80, 106, 83, 104, 80, 
  84, 59, 74, 37, 90, 71, 112, 90, 115, 92, 
  111, 89, 116, 93, 104, 92, 115, 88, 116, 86, 
  92, 64, 86, 68, 98, 70, 95, 84, 104, 71, 
  92, 65, 99, 74, 91, 70, 100, 82, 94, 72, 
  57, 39, 75, 53, 94, 75, 102, 96, 116, 90, 
  110, 81, 109, 89, 107, 82, 110, 90, 112, 82, 
  77, 39, 68, 43, 87, 53, 85, 69, 84, 19, 
  74, 67, 91, 60, 101, 53, 81, 60, 86, 49, 
  58, -77, 38, 14, 80, 71, 110, 89, 112, 85, 
  110, 79, 101, 87, 107, 85, 116, 95, 96, 58, 
  84, 61, 81, 43, 76, 49, 76, 42, 70, 23, 
  74, 57, 80, 55, 83, 42, 74, 57, 85, 50, 
  38, -16, 33, -33, 57, 14, 79, 73, 96, 70, 
  97, 72, 95, 67, 97, 77, 100, 82, 84, 63, 
  74, 48, 88, 54, 60, 31, 73, 42, 45, -128, 
  52, 37, 71, 59, 89, 56, 60, 47, 59, -1, 
  30, -128, -128, -128, 30, 38, 66, 49, 75, 21, 
  61, 57, 80, 31, 90, 67, 79, 37, 79, 4, 
  52, 6, 54, 1, 61, -6, 35, -128, -128, -128, 
  -1, -128, 60, 60, 58, 22, 22, -60, 35, -60, 
  17, -128, -128, -128, -128, -128, -3, -128, -20, -128, 
  42, 20, 40, 2, 60, 31, 69, 47, 58, 22, 
  16, -128, 36, -128, 25, -128, 11, -128, -43, -128, 
  -37, -128, 49, 39, 58, 35, -3, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, 14, -128, -43, -128, 
  40, -16, 36, -128, -50, -128, -4, -128, -43, -128, 
  -23, -128, -37, -128, -50, -128, 39, 18, 60, 57, 
  92, 75, 98, 84, 102, 80, 96, 70, 84, 57, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -33, -128, -50, -128, -10, -128, -128, -128, 4, -128, 
  -29, -128, 18, -43, 11, 16, 64, 9, 78, 79, 
  113, 87, 102, 85, 111, 92, 113, 97, 115, 89, 
  -128, -128, -128, -128, -128, -128, -43, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -77, 10, -50, 52, 35, 80, 62, 
  87, 71, 112, 92, 107, 89, 104, 77, 104, 79, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -60, -23, -128, 47, -10, 67, 54, 
  79, 64, 97, 69, 98, 77, 99, 74, 92, 60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -77, -128, 20, -128, 54, 36, 
  73, 60, 93, 64, 94, 67, 93, 67, 99, 59, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 15, -77, 44, 37, 
  61, 57, 89, 40, 77, 20, 78, 58, 87, 56, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 1, -29, 46, 35, 
  50, 47, 76, 51, 78, 39, 82, 52, 72, 42, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -128, 45, -37, 
  42, 4, 50, 47, 82, 17, 72, 23, 53, 27, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 41, 5, 
  35, -60, 8, -29, 44, -37, 40, -26, 30, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, 39, -20, 
  71, 35, 43, -77, 26, 1, 25, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -26, -128, -6, -20, 70, 44, 
  69, -12, 15, -128, -12, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -33, -128, 15, -33, -3, -128, 
  -37, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
