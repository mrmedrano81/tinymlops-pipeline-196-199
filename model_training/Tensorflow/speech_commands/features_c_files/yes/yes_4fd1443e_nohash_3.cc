/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/4fd1443e_nohash_3.wav" \
 * --output_c_file="features_c_files/yes/yes_4fd1443e_nohash_3.cc" \
 */
#include "yes_4fd1443e_nohash_3.h"


const int g_yes_4fd1443e_nohash_3_width = 40;
const int g_yes_4fd1443e_nohash_3_height = 49;
alignas(16) const signed char g_yes_4fd1443e_nohash_3_data[] = {
  20, 11, 40, 17, -4, 20, 23, -2, -10, -7, 
  -33, -50, 0, 25, 35, 39, 43, 4, 0, 11, 
  5, 17, 9, -12, 17, 17, 23, 25, 48, 47, 
  17, 23, 35, 25, 31, 37, 37, 34, 48, 39, 
  35, 22, 41, 19, 45, 35, -2, -10, -26, -29, 
  4, 1, 25, 2, 18, 24, 31, -23, 12, 11, 
  12, -10, 4, 18, 39, -1, 4, -7, 1, -2, 
  -1, 6, 11, 24, 45, 44, 41, 27, 30, 8, 
  32, 9, 57, 37, 9, 4, 14, -50, -20, -50, 
  4, 2, 17, -20, -16, -37, 8, 6, 7, -14, 
  -2, -14, -2, 0, 27, -4, 14, -26, 0, -23, 
  20, 9, 34, 4, 30, 30, 37, 13, 26, 8, 
  -23, -8, 61, 60, 34, -33, 31, 8, -7, -33, 
  -14, -14, 0, -7, 9, -14, -6, 2, 19, -23, 
  -29, -16, 19, 5, 27, 4, 12, -16, 35, -2, 
  4, 15, 17, 1, 24, -12, 12, 27, 47, 22, 
  -12, 25, 63, 42, -26, -37, 33, 1, -3, -8, 
  -8, -23, 35, 19, -2, -8, -3, -14, 17, -4, 
  -16, -37, 11, -60, -3, 16, 27, 12, 0, -18, 
  11, -18, 5, -37, 17, -23, 8, 11, 15, -10, 
  1, -37, 24, -8, -20, -77, -20, -33, 29, -23, 
  -77, -128, 20, 28, -26, -128, -20, -20, -26, -10, 
  15, -33, 16, -10, -10, -43, 12, 37, 16, -77, 
  29, -20, 33, 14, 44, -20, 23, 19, 26, 6, 
  42, 17, 22, -128, 14, -14, 7, -29, -2, -1, 
  44, 12, 19, -37, -33, -128, -37, -50, -3, -29, 
  2, 10, 11, -37, -37, -37, -16, -10, -6, -128, 
  -4, -12, 23, 19, 35, -37, 28, 9, 15, -33, 
  32, 30, 9, -14, -6, -33, -16, -77, -43, -33, 
  17, 22, -37, -128, -4, -4, 14, -43, 14, -60, 
  -8, -16, 21, 9, -16, -18, -16, -3, 26, -2, 
  2, -20, 19, 20, 57, 39, 53, 34, 29, -14, 
  11, -60, 0, -128, -77, -77, -23, -43, -33, -50, 
  19, -60, -23, -37, -60, -128, 1, -26, 33, -33, 
  8, -23, 5, -3, -3, -77, -18, -77, -10, -4, 
  11, -26, -6, 6, 38, -4, 37, -1, -2, -29, 
  10, -20, -50, -128, 0, -60, -14, -16, -4, -37, 
  -128, -128, -26, -128, -1, -14, -26, -60, 7, -77, 
  18, -14, -4, -14, 16, -16, -3, -60, -2, -77, 
  -33, -37, -29, -128, -10, -23, 33, -50, 13, -18, 
  21, -128, -43, -128, -43, -128, -8, -77, -29, -50, 
  1, -128, -43, -128, -60, -128, -26, -128, -6, -43, 
  -60, -60, -6, -37, -26, -14, -8, -77, -12, -50, 
  -26, -33, -3, -33, -12, -37, 13, -37, 24, -20, 
  19, -43, -33, -128, -33, -128, -60, -128, -50, -43, 
  -26, -128, -20, -128, -7, -128, -77, -77, -43, -29, 
  -8, -128, 1, -26, -43, -128, -128, -77, -4, -26, 
  2, -4, -4, -50, 15, -128, -37, -50, 16, -16, 
  37, -16, -3, -128, -2, -50, -43, -128, -37, -128, 
  -20, -37, -77, -128, -33, -26, -20, -60, -43, -23, 
  15, -60, -37, -37, -29, -128, -33, -128, -23, -18, 
  20, -33, 8, -60, 2, -43, -12, -128, -77, -77, 
  -18, -60, -128, -128, -7, -43, -43, -23, -50, -128, 
  -33, -37, 16, -33, -14, -60, -43, -29, -43, -128, 
  -2, 4, -23, -77, -37, 4, -16, -128, 35, 47, 
  56, 60, 82, 30, -20, -60, -23, -128, 14, -16, 
  4, -43, -29, -128, -43, -60, -7, -20, 16, -60, 
  -77, -128, -43, -77, -20, -128, -29, -26, -128, -77, 
  -23, -77, -43, -128, -77, -128, -7, -33, -23, 20, 
  48, 4, 51, -8, 0, -26, -14, -128, 11, -23, 
  -20, -128, -77, -128, -23, -23, -60, -128, -26, -128, 
  -77, -77, -14, -128, -128, -128, -50, -33, -77, -128, 
  -23, -60, -128, -128, -8, -20, 6, -60, -50, -128, 
  6, -50, -3, -20, -7, -128, 1, -128, -33, -50, 
  -23, -29, -26, -128, -60, -128, -128, -128, -77, -128, 
  -77, -128, -14, -37, -10, -128, -128, -128, -29, -77, 
  23, 9, -18, -43, 22, -60, -77, -50, -14, -128, 
  -50, -128, -60, -128, -23, -128, -37, -128, 6, -14, 
  51, 9, -6, -33, -2, -128, -128, -128, -128, -128, 
  -23, -50, -26, -43, -23, -128, -60, -128, -29, -50, 
  12, 6, 4, -128, 31, -20, -6, -128, -1, -77, 
  -128, -128, -128, -128, -37, -77, -26, -77, -20, -128, 
  114, 92, 103, 89, 105, 79, 71, 50, 32, -20, 
  -8, -128, -60, -128, -43, -43, -29, -128, -37, -60, 
  -50, -50, -33, -128, 20, -29, 21, 10, 60, 59, 
  14, -128, -37, -128, -16, -60, -26, -29, -37, -50, 
  123, 101, 125, 100, 118, 96, 112, 84, 67, 24, 
  8, -20, -33, -43, -8, -10, -23, -26, 21, -12, 
  1, -29, -1, -60, 10, 2, 40, 61, 86, 51, 
  -8, -128, -20, -43, -10, -50, -8, 29, 23, -20, 
  106, 99, 118, 87, 113, 89, 116, 88, 99, 67, 
  69, -50, 5, -10, 24, -4, -3, -60, 32, 4, 
  45, 59, 59, 41, 60, 76, 94, 90, 99, 70, 
  56, -50, 16, -20, 36, -4, 32, 23, 24, 11, 
  100, 90, 109, 84, 111, 88, 110, 78, 100, 74, 
  67, 51, 73, 59, 51, 47, 71, 57, 84, 87, 
  115, 93, 90, 80, 105, 95, 113, 68, 75, 21, 
  48, 24, 43, 35, 55, 43, 61, 56, 64, 50, 
  94, 75, 94, 91, 119, 87, 101, 81, 101, 72, 
  91, 62, 90, 75, 88, 82, 99, 88, 109, 95, 
  115, 89, 105, 88, 118, 95, 111, 60, 79, 61, 
  63, 20, 49, 39, 54, 42, 77, 79, 82, 54, 
  83, 51, 72, 86, 112, 90, 110, 88, 102, 74, 
  103, 78, 88, 76, 102, 89, 112, 92, 117, 94, 
  113, 82, 117, 96, 109, 69, 80, -1, 62, 49, 
  62, 1, 39, 12, 50, 49, 82, 71, 88, 52, 
  79, 43, 56, 34, 74, 80, 105, 89, 92, 84, 
  99, 73, 85, 81, 99, 81, 99, 74, 94, 78, 
  87, 75, 102, 79, 80, -20, 11, 6, 68, 30, 
  24, -23, 52, 42, 85, 67, 79, 64, 89, 48, 
  80, 32, 36, -3, 39, 21, 92, 77, 110, 79, 
  102, 85, 96, 71, 102, 73, 108, 89, 112, 74, 
  80, 57, 90, 59, 70, 14, -37, -77, 51, 38, 
  65, -4, 27, 14, 79, 60, 80, 25, 65, 36, 
  73, 12, 47, -23, 23, 9, 85, 72, 111, 88, 
  93, 74, 98, 69, 92, 68, 98, 81, 105, 62, 
  71, 55, 86, 58, 62, -50, 31, -37, 4, -128, 
  70, -128, 9, 16, 67, 56, 64, -7, 52, 25, 
  51, -128, 47, -50, 21, -26, 65, 66, 98, 85, 
  95, 69, 100, 53, 91, 77, 97, 70, 93, 40, 
  75, 62, 92, 57, 75, -14, 35, 5, -23, 28, 
  83, 9, 27, 22, 74, 47, 62, -10, 48, 11, 
  -60, -128, 25, -128, 2, -128, 59, 47, 85, 65, 
  93, 56, 94, 72, 88, 61, 90, 65, 71, 30, 
  62, -23, 64, -10, -77, -128, 26, 4, -16, -128, 
  67, 10, 30, 45, 67, 37, 62, -20, 50, -37, 
  0, -128, -128, -128, -128, -128, -20, -60, 58, 27, 
  71, 30, 68, -37, 57, 40, 59, -26, 54, -128, 
  14, -43, 52, -43, -37, -128, -37, -3, 29, -128, 
  58, 34, 47, 41, 48, 41, 65, -1, 50, -29, 
  -128, -128, -128, -128, -128, -128, -128, -128, 53, 17, 
  70, -37, 32, -60, 43, -20, 38, -128, 34, -128, 
  -128, -128, 2, -128, -29, -128, -128, 29, 37, -128, 
  18, 32, 48, 24, 50, 28, 77, 42, 58, -16, 
  -128, -128, -128, -128, -128, -128, -20, -128, 2, -128, 
  74, 4, 48, -50, -43, -10, 39, -128, 56, -60, 
  -128, -128, 11, 4, 10, -128, -128, -128, 37, -128, 
  37, 39, 71, 44, 40, -50, 54, 25, 59, 19, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  34, -43, -128, -128, -128, -128, -128, -128, -33, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  34, 21, 66, 31, 22, -128, -77, -128, 9, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  14, -128, -128, -128, 4, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -20, 26, 54, 49, 
  89, 82, 94, 65, 76, 23, 60, 49, 80, 51, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 19, 34, 67, 70, 
  107, 91, 109, 85, 104, 74, 96, 79, 90, 81, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 33, 56, 80, 62, 
  89, 78, 107, 83, 84, 63, 94, 68, 98, 80, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 42, 28, 72, 45, 
  94, 77, 92, 59, 77, 67, 94, 65, 92, 75, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 25, 35, 71, 47, 
  74, 74, 91, 45, 68, 44, 80, 50, 77, 65, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 41, 40, 70, 50, 
  82, 39, 79, 52, 73, 59, 84, 56, 79, 57, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 42, 16, 67, 47, 
  70, 45, 82, 40, 60, 32, 78, 50, 82, 61, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -16, -50, 58, 27, 
  77, 41, 72, 40, 68, 37, 74, 31, 70, 53, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 17, -128, 40, -23, 
  63, 42, 55, -6, 52, -4, 45, 18, 70, 28, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 42, 23, 
  74, 27, 56, -7, 34, -128, 53, -50, 54, 21, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 43, -7, 
  40, 11, 64, -8, 29, -23, 56, 14, 53, 24, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, 33, 10, 
  52, 0, 50, -12, 53, -77, 57, 13, 50, -23, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -77, 31, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 49, 22, 
  37, -18, 24, -29, 4, -128, 1, -50, 9, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -7, 61, 44, 
  75, -128, 35, -128, -60, -128, -14, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -60, 62, 41, 
  -128, -128, -18, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 38, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
