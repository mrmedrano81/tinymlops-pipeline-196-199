/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/fdb5155e_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_fdb5155e_nohash_1.cc" \
 */
#include "yes_fdb5155e_nohash_1.h"


const int g_yes_fdb5155e_nohash_1_width = 40;
const int g_yes_fdb5155e_nohash_1_height = 49;
alignas(16) const signed char g_yes_fdb5155e_nohash_1_data[] = {
  113, 84, 93, 76, 62, 68, 82, 69, 77, 66, 
  66, 44, 77, 60, 69, 66, 73, 64, 74, 64, 
  50, 42, 72, 57, 59, 58, 57, 66, 55, 50, 
  54, 51, 49, 57, 66, 50, 65, 55, 60, 58, 
  104, 83, 85, 64, 64, 56, 68, 36, 59, 45, 
  66, 65, 80, 50, 77, 63, 67, 48, 50, 49, 
  57, 47, 42, 56, 60, 23, 44, 21, 47, 34, 
  52, 43, 49, 37, 46, 29, 48, 40, 59, 52, 
  59, 40, 48, 32, 54, 22, 62, 70, 65, -1, 
  54, 58, 68, 54, 74, 40, 65, 54, 51, 23, 
  35, 58, 47, 29, 66, 42, 21, 15, 53, 40, 
  39, 35, 52, 25, 50, 35, 47, 37, 54, 48, 
  57, 16, 47, 34, 57, 39, 64, 29, 59, 60, 
  59, 27, 39, 32, 65, 53, 69, 49, 64, 53, 
  43, 6, 52, 29, 35, 27, 47, 22, 27, 9, 
  44, 13, 47, 24, 45, 32, 57, 33, 52, 9, 
  44, 27, 79, 60, 62, 59, 60, 7, 78, 52, 
  46, 4, 51, -7, 40, 30, 39, 29, 53, 19, 
  29, 7, 44, -2, 18, 25, 35, 30, 39, 24, 
  44, 23, 50, 19, 18, 8, 55, 15, 42, -1, 
  67, 45, 68, 61, 77, -7, 28, -18, 24, -4, 
  75, 54, 48, 52, 46, 29, 52, 7, 49, -29, 
  42, 27, 62, -6, 20, -16, 42, 4, 43, 20, 
  28, 19, 42, 24, 46, 31, 52, 30, 39, -16, 
  81, 21, 60, 49, 57, -128, -29, 20, 66, 27, 
  54, -2, 44, -50, 0, -60, 57, 57, 45, -12, 
  39, -6, 46, 24, 26, 8, 19, -50, 15, -1, 
  8, 8, 42, 7, 50, 19, 47, 16, 45, 9, 
  82, 44, 56, 40, 62, 33, 54, -14, -50, 20, 
  53, 35, 50, 5, 44, 20, 59, -10, 49, -6, 
  41, 2, 49, 24, 23, -23, 25, -18, 11, -23, 
  25, -6, 35, -20, 44, 25, 35, 37, 47, 1, 
  77, 50, 45, 9, 48, 14, 47, 4, 46, 42, 
  47, 15, -18, -50, 30, -10, 48, -43, 1, -1, 
  38, -37, 27, -26, 24, -10, 41, -37, 28, -23, 
  31, -10, 23, 4, 29, 11, 36, 14, 48, 10, 
  62, 44, 37, 17, 69, 37, 51, 33, 64, 24, 
  45, 25, 48, -23, 36, -8, -3, -50, 23, 2, 
  25, 14, 12, -18, 14, -26, 26, -60, 32, -7, 
  -1, -10, 21, 9, 2, -18, 17, -33, 28, 17, 
  30, 48, 69, 23, 54, 28, 43, 31, 64, -37, 
  26, 9, 42, -33, 50, -33, 34, -1, 57, -2, 
  42, 16, 26, -37, 32, 4, 10, -29, 35, -43, 
  34, 1, 31, 15, 8, -18, 25, -7, 34, -10, 
  -128, -128, 25, 1, 18, 21, 50, 36, 71, 21, 
  14, -128, 14, -50, 49, 31, 53, -23, 42, -23, 
  32, 1, 32, -128, 17, -33, 23, 4, 16, -37, 
  37, -26, 19, -4, 15, 0, 30, -20, 33, -2, 
  -60, -128, -4, -128, -29, -128, 39, -77, 56, 30, 
  13, 17, 46, 22, 30, 0, -8, -128, -18, -128, 
  10, -50, -6, -128, 24, -2, -6, -50, 6, -128, 
  4, -12, 41, -26, 0, -20, 13, -77, 24, -1, 
  34, 41, 59, -77, 36, 4, 40, -128, 19, -33, 
  2, -50, 13, -26, -4, -3, 14, -29, -16, -60, 
  20, -37, -1, -18, -18, -128, 4, -20, 19, -128, 
  29, -23, 28, -29, 17, -37, 0, -128, 13, -29, 
  20, -77, -20, -128, 29, -128, 11, -128, 13, 28, 
  45, -26, 44, -10, 29, -43, 40, -23, 37, -14, 
  17, -4, 30, -43, 27, -60, 20, -10, -2, -60, 
  19, -23, 16, -6, 37, -43, 4, -26, 11, -7, 
  -128, -128, 8, -128, 7, -128, -128, -128, -23, -128, 
  35, -23, 25, 11, 26, 24, 40, -23, -4, 0, 
  14, 11, 34, -18, 21, -29, 10, -4, 7, -26, 
  32, -50, 20, -29, 37, -60, -4, 4, 20, -50, 
  -29, -3, 26, -128, 20, 29, 44, -6, 25, -128, 
  -12, -3, 34, 5, 45, -128, -7, -128, -3, -10, 
  25, -128, 24, -23, 4, -128, -3, -18, 9, -77, 
  -8, -10, 11, -6, 17, -60, 24, -26, -18, -77, 
  22, -128, -37, -50, 4, -60, 25, -128, -128, -128, 
  54, -18, 0, -50, 12, -128, 44, 15, 36, -128, 
  1, -128, -128, -37, 33, -33, -23, -128, 6, -43, 
  -12, -33, -14, -128, 11, -26, 21, -23, -6, -50, 
  14, -128, -128, -128, -37, -128, 14, -4, 15, -33, 
  34, -29, 9, -2, 27, -37, 16, -14, 4, -77, 
  4, -77, 0, -26, 17, -77, -26, -128, -4, -77, 
  9, -50, 9, -50, 21, -128, -2, -23, 1, -77, 
  -23, -128, -18, -37, 14, -43, 6, -50, 24, -128, 
  -6, -128, -8, -37, 35, 19, -29, -60, 20, -26, 
  -10, 0, 9, -50, 47, -16, 21, -128, 15, 4, 
  34, -20, -23, -128, 2, -128, -60, -128, 2, -33, 
  -128, -128, -128, -50, -7, -29, 2, -128, -128, -60, 
  14, -43, -37, -128, -16, 5, -23, -128, -12, -128, 
  22, -29, -60, -77, -1, -12, -23, -128, 13, -60, 
  30, -33, -26, -128, 14, -29, -10, -128, 11, -60, 
  -128, -43, 52, 20, 35, -50, -33, -16, 2, -50, 
  25, -10, 4, -60, 44, 9, -50, -128, -7, -60, 
  -43, -128, -26, -128, -60, -128, -14, -128, 27, 7, 
  -16, -128, 0, -37, -10, -43, -50, -128, 2, -128, 
  26, -128, 11, 14, 40, -128, 0, -77, 50, 17, 
  44, -50, -6, -29, -1, -128, 24, -23, 13, -16, 
  9, -128, -18, -20, -4, -128, -37, -128, -18, -77, 
  -12, -33, 1, -128, -20, -60, -6, -60, 8, -77, 
  13, -29, 30, -29, 22, -23, 38, -128, -128, -128, 
  -8, 0, -3, -77, 33, -77, 9, -128, -29, -128, 
  -20, -128, 2, -12, 25, -77, 16, -77, 0, -128, 
  15, -128, -6, -77, -12, -128, 1, -26, 37, -14, 
  -77, -50, -77, -128, 25, -128, -20, -128, -37, -128, 
  17, -18, 37, -77, -26, -128, -77, -128, -50, -128, 
  9, -77, 45, -77, -77, -60, 24, -37, -43, -128, 
  -14, -128, -29, -77, 1, -128, -7, -37, -6, -77, 
  -128, -128, -37, -128, -128, -37, 32, -60, 22, -29, 
  -26, -128, 42, -77, 10, -43, 28, -43, -33, -60, 
  29, -29, 28, -60, -8, -77, -26, -20, -23, -128, 
  -33, -50, -7, -50, 9, -60, -1, -77, 9, -20, 
  -43, -43, -18, -128, -77, -128, -128, -128, 9, -14, 
  29, -128, -6, -128, -33, -26, -20, -128, 20, -128, 
  -60, -128, -33, 4, -8, -50, 19, -128, -23, -128, 
  -33, -128, -4, -50, 9, -26, 20, -77, -26, -43, 
  -6, -2, 20, -128, -50, -128, -128, -128, -26, -128, 
  25, -128, 20, -128, 5, -128, 9, -60, -12, -128, 
  -43, -60, -77, -50, 16, -50, -50, -128, -50, -77, 
  -50, -128, -77, -60, -3, -128, -128, -128, 0, -77, 
  44, -37, 29, -128, -43, -77, -18, -128, -50, -33, 
  -8, -128, -128, -128, -60, -128, 10, -77, -60, -60, 
  38, -77, -16, -16, -16, -77, 4, -60, -6, -60, 
  13, -60, -33, -128, 20, -77, -23, -128, 14, -50, 
  52, 22, 4, -128, -50, -128, -26, -128, -12, -128, 
  -77, -60, -37, -128, 24, -128, 19, 10, -43, -60, 
  1, -128, -26, -128, -128, -128, 14, -50, -8, -43, 
  -18, -128, -33, -20, 20, -128, -8, -128, 4, -43, 
  62, -29, -128, -128, -128, -128, 10, -128, 21, -60, 
  -128, -128, -33, -128, -6, 20, 18, -128, -18, -128, 
  19, -128, 39, -128, 6, -60, 30, -33, 5, -20, 
  13, -60, -50, -128, 0, -43, -26, -128, -8, -23, 
  109, 92, 117, 96, 113, 82, 75, 10, 13, -50, 
  -128, -128, -20, 10, 11, -10, 53, 30, 74, 72, 
  81, 49, 57, 62, 96, 80, 68, 50, 71, 60, 
  64, -29, -1, -128, -14, -43, -1, -77, 0, -128, 
  104, 84, 96, 82, 109, 80, 101, 74, 45, -7, 
  7, -33, 27, 9, 29, -50, 71, 44, 90, 82, 
  95, 72, 74, 79, 101, 85, 92, 83, 108, 80, 
  89, 34, 39, -43, -16, -43, -37, -128, 5, -33, 
  103, 88, 105, 82, 115, 99, 121, 94, 71, 74, 
  90, 62, 91, 80, 97, 85, 108, 92, 116, 98, 
  114, 89, 111, 96, 119, 94, 116, 92, 110, 86, 
  97, 67, 50, 19, 21, -8, 9, 29, 30, 0, 
  102, 79, 101, 70, 98, 95, 117, 85, 101, 81, 
  87, 70, 105, 89, 105, 84, 110, 94, 116, 86, 
  102, 76, 95, 78, 99, 64, 90, 61, 101, 79, 
  87, 65, 66, 49, 43, 19, 38, 13, 42, -1, 
  89, 60, 69, 62, 83, 71, 107, 94, 107, 78, 
  101, 65, 89, 61, 93, 69, 91, 75, 106, 60, 
  83, 68, 77, 74, 94, 80, 104, 77, 84, 63, 
  77, 32, 59, 40, 24, -14, 27, 10, 58, 0, 
  54, -50, 67, -2, 61, 60, 106, 92, 98, 70, 
  70, 59, 75, 52, 80, 55, 83, 53, 79, -18, 
  49, 14, 81, 32, 76, -16, 75, 56, 41, -16, 
  71, 39, 59, 44, 45, -43, 25, 39, 77, -16, 
  -128, -128, 57, -26, 50, -16, 55, 47, 100, 64, 
  95, 69, 78, 48, 54, 5, 63, 39, 64, -128, 
  29, 8, 25, -128, 15, -128, 36, 4, 31, -60, 
  60, 62, 88, 68, 90, 74, 90, 69, 90, 69, 
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
