/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/2796ac50_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_2796ac50_nohash_1.cc" \
 */
#include "yes_2796ac50_nohash_1.h"


const int g_yes_2796ac50_nohash_1_width = 40;
const int g_yes_2796ac50_nohash_1_height = 49;
alignas(16) const signed char g_yes_2796ac50_nohash_1_data[] = {
  100, 82, 79, 74, 70, 64, 75, 67, 74, 69, 
  69, 63, 74, 64, 68, 59, 75, 62, 63, 73, 
  73, 63, 64, 58, 57, 60, 69, 64, 71, 58, 
  60, 53, 66, 57, 58, 44, 47, 42, 29, 41, 
  83, 63, 89, 64, 72, 41, 74, 56, 68, 40, 
  44, 44, 63, 37, 51, 51, 57, 48, 75, 54, 
  57, 56, 72, 56, 64, 49, 60, 54, 61, 62, 
  63, 49, 61, 51, 62, 43, 49, 42, 46, 24, 
  65, 58, 64, 52, 63, 39, 50, 60, 64, 60, 
  84, 56, 51, 40, 69, 39, 55, 37, 64, 53, 
  48, -8, 46, 31, 39, 40, 62, 46, 62, 32, 
  54, 32, 60, 34, 42, 29, 64, 33, 45, 31, 
  61, 46, 66, 42, 57, 35, 54, 31, 59, 42, 
  68, 60, 85, 53, 44, 24, 66, 47, 64, 1, 
  53, 26, 44, 52, 66, 38, 37, 5, 58, 21, 
  47, 34, 59, 35, 37, 17, 40, 28, 51, 29, 
  69, 49, 65, 31, 29, -26, 61, 45, 62, 30, 
  40, -29, 45, 49, 56, 22, 41, 24, 48, -6, 
  49, 27, 38, -3, 27, 44, 55, 17, 43, 24, 
  57, 26, 59, 30, 44, 38, 38, -14, 39, 1, 
  48, 4, 59, 47, 60, 50, 52, 22, 64, -3, 
  41, 40, 57, 1, 47, 37, 15, 5, 36, -50, 
  51, 38, 36, 9, 57, 19, 65, 34, 47, 14, 
  29, 19, 43, 4, 35, 19, 40, 6, 29, 6, 
  57, -3, 21, -1, 59, 44, 63, 44, 55, 7, 
  44, 43, 44, -20, 29, 33, 56, 18, 35, -37, 
  43, 1, 49, 18, 37, -3, 40, -12, 14, -4, 
  37, 17, 35, -3, 46, 7, 22, 11, 41, -26, 
  43, -26, 51, 2, 68, 14, -37, 32, 56, 15, 
  28, -33, 19, -7, 42, 18, 47, 0, 30, 14, 
  48, 12, 54, 8, 39, -6, 44, 4, 36, -6, 
  14, -2, 40, 0, -12, -2, 16, -10, 16, -29, 
  42, 17, 59, 36, 48, 20, 47, -77, 14, -37, 
  47, -18, 21, 4, 44, 19, 32, 5, 36, 12, 
  32, -2, 51, -18, 14, 11, 17, -43, 17, -60, 
  12, 4, 35, -33, 9, -60, 21, 9, 21, 4, 
  28, 10, 36, -77, 2, -3, 57, 34, 50, 33, 
  47, 37, 54, 27, 35, 26, 40, 19, 32, -128, 
  11, 0, 31, -3, 45, -7, 36, 4, 11, -8, 
  13, -43, -20, -20, 12, -33, 17, -33, 30, -6, 
  31, -128, 11, 4, 57, -77, 5, -12, 20, -8, 
  31, -60, 37, 23, 37, -29, 22, -50, 38, -12, 
  27, 7, 26, -10, 40, -12, 30, -50, 18, -128, 
  2, 4, 21, -60, -2, -43, 9, 6, 17, -29, 
  66, 40, 43, -4, 58, 4, 46, -16, -2, -77, 
  7, 2, 41, -77, 22, -60, 29, 5, 37, -7, 
  18, -43, 34, -1, 23, -60, 1, -60, -26, -77, 
  -4, -33, 25, -18, 12, -37, 8, -33, 11, -60, 
  26, -16, -43, 4, 55, 17, 41, -50, 21, -128, 
  -26, -50, -33, -128, 24, -16, 38, -10, 43, -10, 
  14, -128, 7, -26, 17, -37, 6, -33, 19, -26, 
  15, -77, 14, -60, 23, -14, 4, -37, -20, -77, 
  11, -128, -1, -18, 18, -77, 40, 7, -18, -43, 
  43, -128, 8, -50, 42, -77, 20, -4, 29, -50, 
  10, -3, 22, -128, 24, -128, 11, -43, -8, -10, 
  -16, -128, -14, -77, -23, -20, 16, -77, -6, -128, 
  52, -3, 21, -128, 30, 23, 33, -7, 39, -128, 
  48, -18, 40, -60, 20, -60, 19, -26, 11, -128, 
  -23, -10, 15, -33, 25, -128, 14, -128, -10, -128, 
  29, -7, -18, -128, 6, -12, 4, -37, 13, -77, 
  6, -37, 28, -14, 34, -77, -14, -128, 42, 27, 
  31, -6, 36, -60, 19, -60, 2, -128, 11, 6, 
  45, -60, 25, -43, 18, -43, -8, -50, -10, -43, 
  15, -50, 1, -60, -3, -128, -6, -16, -6, -50, 
  40, -128, 7, 8, 50, 20, 26, -43, -37, -50, 
  14, -7, 11, -43, 37, -128, 11, 14, 34, -16, 
  31, -77, -2, -43, 30, -2, 30, -60, -60, -128, 
  24, -26, 19, -43, 4, -128, -18, -60, 9, -128, 
  40, -29, 2, -128, -37, 4, 54, -26, 39, -26, 
  21, -128, -33, -77, 4, -4, 38, -50, -33, -77, 
  7, -128, 14, -43, 22, -77, 0, -77, -14, -77, 
  12, -60, -2, -77, -8, -29, 11, -77, -8, -77, 
  114, 95, 102, 48, 66, 27, 52, -77, -37, -77, 
  -60, -128, 21, 9, 30, -128, -12, -77, -4, -20, 
  23, -26, 6, -8, 37, -37, 9, 29, 52, -7, 
  -2, -60, -2, -43, -16, -43, 11, -77, 12, -50, 
  116, 87, 97, 84, 102, 59, 98, 66, 72, 50, 
  49, 29, 20, 4, 21, -50, -18, -60, -12, -128, 
  32, -23, 63, 78, 105, 72, 91, 82, 100, 74, 
  64, 7, 51, 63, 69, -16, 10, -16, 40, 24, 
  110, 84, 69, 79, 93, 63, 99, 68, 92, 74, 
  56, 31, 53, 36, 29, 31, 64, 29, 56, 40, 
  63, 56, 92, 89, 114, 82, 105, 91, 114, 93, 
  109, 85, 98, 86, 104, 69, 78, 55, 73, 70, 
  107, 83, 89, 89, 111, 74, 99, 74, 92, 76, 
  64, 51, 68, 59, 71, 52, 77, 60, 76, 54, 
  85, 79, 103, 87, 105, 87, 109, 91, 110, 88, 
  109, 81, 91, 74, 99, 62, 74, 71, 94, 77, 
  102, 84, 99, 86, 117, 96, 93, 85, 84, 84, 
  103, 77, 94, 74, 89, 77, 88, 74, 99, 80, 
  102, 87, 114, 93, 103, 89, 113, 88, 106, 81, 
  110, 87, 92, 51, 89, 74, 75, 42, 77, 64, 
  92, 77, 102, 85, 119, 100, 101, 87, 95, 82, 
  110, 80, 106, 77, 105, 84, 104, 87, 107, 90, 
  113, 95, 121, 89, 108, 95, 114, 82, 101, 81, 
  108, 83, 102, 51, 75, 57, 69, 44, 70, 61, 
  85, 63, 80, 83, 108, 80, 110, 97, 117, 89, 
  115, 88, 112, 85, 110, 89, 110, 92, 113, 94, 
  118, 100, 113, 86, 113, 94, 113, 84, 107, 91, 
  114, 90, 112, 87, 100, 72, 87, 62, 85, 67, 
  77, 52, 70, 69, 92, 58, 115, 97, 119, 87, 
  107, 88, 109, 86, 107, 87, 107, 86, 111, 94, 
  117, 92, 97, 75, 106, 82, 100, 71, 99, 79, 
  102, 74, 100, 80, 89, 57, 86, 68, 90, 49, 
  73, 43, 58, 57, 79, 24, 103, 83, 106, 94, 
  115, 87, 109, 82, 103, 82, 103, 81, 114, 95, 
  113, 60, 85, 68, 102, 71, 87, 62, 93, 72, 
  92, 56, 79, 45, 86, 86, 113, 92, 111, 83, 
  67, 23, 32, 54, 71, -20, 92, 44, 85, 93, 
  109, 86, 99, 75, 91, 76, 103, 78, 107, 79, 
  92, 32, 77, 55, 94, 59, 78, 57, 89, 65, 
  90, 53, 77, 49, 69, 61, 94, 73, 98, 73, 
  66, 9, 70, 55, 62, -128, 84, -29, 102, 84, 
  93, 84, 87, 80, 96, 69, 107, 81, 98, 68, 
  66, -12, 65, 46, 82, 51, 69, 46, 79, 54, 
  82, 37, 69, 61, 99, 75, 105, 83, 97, 78, 
  62, -26, 87, 50, 49, -18, 77, -128, 99, 51, 
  95, 82, 92, 72, 98, 74, 100, 80, 86, 34, 
  54, -128, 54, 33, 78, 44, 64, 31, 77, 55, 
  80, 37, 58, 35, 84, 65, 92, 64, 88, 63, 
  62, -29, 87, 48, 44, 24, 74, -37, 96, 40, 
  85, 59, 88, 54, 92, 70, 92, 67, 67, -50, 
  31, -128, 37, 2, 67, 32, 54, 4, 62, 42, 
  67, -1, 62, 4, 54, 18, 58, -1, 57, 1, 
  62, -43, 86, -12, -128, 25, 51, -26, 63, -128, 
  50, -128, 51, 15, 57, 10, 56, -26, 0, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -2, -128, 28, -128, -128, -128, -128, -128, 
  -128, -128, 4, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -33, 47, -6, 57, -7, 13, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 52, 53, 89, 62, 87, 76, 79, 40, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 30, 45, 87, 76, 94, 60, 84, 32, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 69, 73, 99, 72, 81, 51, 89, 56, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -26, 76, 72, 98, 69, 82, 65, 86, 52, 
  -128, -128, -3, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  1, -60, 79, 67, 84, 66, 93, 55, 75, 58, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -1, 23, 96, 77, 91, 60, 74, 45, 71, 49, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  19, 27, 67, 43, 77, 12, 66, 26, 65, 23, 
  -128, -128, -18, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -20, 65, 27, 50, 25, 60, 35, 61, -12, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, 67, 47, 54, -29, 43, -37, 43, -3, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, 59, -60, -6, -128, -8, -128, -29, -128, 
  -128, -128, 0, -128, -128, -128, -128, -128, -128, -128, 
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
