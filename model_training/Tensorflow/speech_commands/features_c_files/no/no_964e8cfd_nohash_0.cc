/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/964e8cfd_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_964e8cfd_nohash_0.cc" \
 */
#include "no_964e8cfd_nohash_0.h"


const int g_no_964e8cfd_nohash_0_width = 40;
const int g_no_964e8cfd_nohash_0_height = 49;
alignas(16) const signed char g_no_964e8cfd_nohash_0_data[] = {
  90, 73, 67, 72, 75, 82, 95, 64, 58, 4, 
  48, 25, 0, -12, 56, 57, 57, 44, 50, 57, 
  59, 32, 48, 7, 17, 11, -128, -128, -60, -50, 
  -50, -50, -26, -18, -18, -60, -60, -50, -50, -60, 
  80, 52, 73, 62, 55, 55, 77, 49, 40, 35, 
  40, -43, -18, 0, 37, 40, 49, 16, 28, 41, 
  54, 20, 20, 8, -12, -29, -60, -50, -37, -60, 
  -128, -128, -60, -29, -18, -37, -60, -60, -60, -128, 
  37, 29, 74, 68, 74, 41, 49, 34, 39, 44, 
  50, 19, 43, -2, -2, 24, 28, 48, 59, 41, 
  35, -3, 0, 0, -20, -43, -60, -50, -50, -37, 
  -50, -50, -50, -50, -26, -50, -60, -77, -50, -37, 
  -6, 8, 67, 11, 11, 25, 53, -10, 7, 54, 
  55, 20, 9, 13, 9, 27, 48, 35, 39, 19, 
  37, 11, 4, -29, 1, -20, -50, -77, -50, -77, 
  -60, -128, -50, -128, -50, -128, -50, -77, -50, -50, 
  36, 23, 62, 60, 72, -128, 1, -23, 9, 52, 
  56, 48, 41, -18, 0, -26, -26, -29, 36, 4, 
  2, -10, -12, -77, 19, -10, -50, -77, -60, -128, 
  -60, -128, -128, -60, -37, -50, -37, -50, -37, -77, 
  62, 34, 58, -12, 42, -20, 49, -8, 33, 19, 
  45, 51, 52, -50, 16, 11, -6, -77, 1, 2, 
  14, -20, -33, -37, -12, -50, -37, -128, -128, -50, 
  -50, -128, -50, -60, -37, 5, -2, -50, -29, -43, 
  42, 4, 43, 28, 51, -77, 47, 22, 14, 39, 
  56, 36, 33, -16, 4, -20, 14, -77, 12, 19, 
  37, -128, -43, -60, -43, -77, -37, -50, -77, -77, 
  -37, -77, -37, -43, -50, 5, -3, -43, -50, -128, 
  21, 7, 53, -128, 16, -26, -128, -128, 31, -128, 
  -23, 7, 4, -43, 37, 20, 47, 19, -18, 1, 
  29, -60, -77, -77, -33, -60, -20, -60, -77, -43, 
  -37, -128, -50, -128, -50, -1, -10, -128, -77, -128, 
  36, 42, 48, -20, 37, -60, 14, -18, 40, 24, 
  -3, -128, -16, 21, 37, 11, 40, -2, 19, 28, 
  35, -60, -1, -128, -77, -128, -77, -128, -37, -43, 
  -128, -128, -50, -128, -128, -128, -43, -77, -77, -128, 
  41, -16, -12, -60, 30, -77, -77, -128, 37, 9, 
  9, -33, -18, 4, 24, -16, -43, -128, -8, 66, 
  73, -77, -23, -77, -60, -128, -77, -128, -29, -29, 
  -77, -77, -77, -128, -77, -128, -60, -128, -50, -128, 
  -26, -128, -1, 19, 50, -128, -16, -128, -43, -128, 
  10, -50, -37, -77, -37, -128, -29, -128, -8, 54, 
  64, -128, -128, -128, -128, -128, -128, -128, -50, -50, 
  -77, -128, -77, -128, -128, -128, -60, -128, -50, -77, 
  38, 6, -26, -77, 37, -37, -18, -60, -16, -128, 
  -10, -60, -14, -128, -26, -128, -43, -128, -37, 6, 
  33, -128, -37, -128, -77, -128, -128, -128, -128, -128, 
  -43, -128, -50, -60, -77, -128, -60, -128, -77, -128, 
  35, 4, 7, -26, 41, 1, 22, -16, 38, 16, 
  5, -77, -33, -77, 34, -60, 12, 50, 70, 13, 
  84, 77, 78, 21, 10, 46, 55, 73, 89, 40, 
  56, 57, 88, 82, 103, 74, 53, 7, 30, 5, 
  44, 21, 48, 53, 80, 53, 54, 10, 9, 17, 
  68, 20, -4, -128, -26, -128, -14, 12, 53, 24, 
  85, 65, 75, 67, 40, 28, 22, 39, 71, 32, 
  16, 21, 55, 30, 62, 27, 39, -26, -7, -43, 
  13, -16, 45, 51, 83, 54, 19, 19, -128, 11, 
  77, 36, 33, -37, 9, -128, -50, -43, -128, -33, 
  55, 47, 34, -4, 37, -50, -7, -26, 9, 16, 
  1, -33, 1, -77, -77, -128, -4, -77, -43, -77, 
  4, -128, -50, -128, 46, -8, 44, 41, 4, -77, 
  45, 21, 5, -60, 22, -43, -128, -128, -8, -128, 
  19, 2, -14, -18, 10, -33, -77, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  6, -77, -128, -128, -8, -128, -128, -128, -7, -128, 
  -14, -3, 22, -128, -128, -128, -77, -128, -60, -128, 
  14, -128, -128, -128, -29, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -37, -128, -128, -128, 17, -128, -128, -128, -77, -128, 
  -128, -50, -7, -77, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -50, -128, -60, -128, 
  -60, -43, -43, -128, -60, -128, -128, -128, -77, -128, 
  -128, -128, -77, -128, -29, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -26, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -43, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -3, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -77, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -20, -128, -18, -128, -128, -128, -18, -12, -20, -128, 
  -128, -128, 25, -77, -128, -128, -128, -128, -50, -128, 
  -128, -128, -6, -128, -37, -128, -33, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 24, -128, -128, -128, 47, 45, 43, -128, 
  -128, -128, 9, -26, 23, -1, 17, -23, 7, -128, 
  -128, -128, 33, -12, -60, -37, -16, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -7, -18, 37, -26, -7, -128, -10, 39, 82, 32, 
  -37, -128, 8, 0, -6, -20, 24, 45, 61, -33, 
  -128, -128, 54, 37, 19, -128, -16, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -77, -128, -77, -128, 
  94, 69, 39, -77, 23, -60, 42, 23, 31, -128, 
  -29, -128, -128, -128, -128, -128, -6, 6, -6, -128, 
  -128, -23, 17, -50, -23, -77, -12, -128, -128, -128, 
  -128, 7, 20, 34, 60, 54, 50, -16, 45, 55, 
  110, 88, 115, 85, 72, 60, 26, -23, 43, -20, 
  -128, -50, 29, -128, -33, -128, 47, 50, 44, -23, 
  -18, -16, 31, 30, 46, 20, 25, 0, -60, -37, 
  -33, 55, 67, 72, 96, 79, 77, 57, 73, 61, 
  104, 89, 113, 83, 75, 50, -50, -128, 21, -128, 
  -128, -128, -60, -37, 1, -128, 46, 31, 42, -128, 
  32, 20, 31, -20, 4, 16, 34, 7, -128, -128, 
  -16, 14, 49, 55, 86, 66, 74, 49, 69, 54, 
  98, 78, 104, 77, 93, 67, 32, 14, 55, -50, 
  -128, -128, -8, -77, -12, -128, -16, 26, 49, 15, 
  63, 60, 74, -2, 34, 27, 49, 32, 56, 4, 
  -8, 25, 66, 64, 87, 61, 85, 57, 76, 62, 
  89, 69, 96, 68, 97, 75, 78, 46, 66, 17, 
  -128, -128, -20, -43, -33, -128, 39, 56, 77, 2, 
  35, 60, 75, 7, 18, 20, 62, 25, 48, -60, 
  -77, 39, 54, 44, 79, 46, 60, 33, 77, 47, 
  89, 69, 96, 69, 84, 65, 62, 24, 1, -128, 
  -128, -77, -33, -37, -20, 7, 61, 61, 81, 27, 
  34, 30, 70, 34, -8, 24, 77, 55, 59, -43, 
  -77, 5, 47, 12, 61, 26, 68, 45, 60, 31, 
  86, 68, 93, 66, 76, 39, 27, -128, -50, -128, 
  -10, -128, -1, 14, -14, 44, 59, 51, 74, 29, 
  42, 34, 65, 37, 10, 37, 66, 29, 27, -18, 
  -14, -20, 33, -18, 55, 16, 52, 37, 55, 38, 
  102, 79, 109, 94, 115, 99, 121, 102, 120, 99, 
  122, 98, 120, 100, 117, 100, 123, 100, 121, 99, 
  120, 92, 110, 88, 107, 91, 118, 95, 112, 96, 
  118, 97, 112, 54, 48, 52, 92, 67, 94, 81, 
  114, 83, 110, 85, 113, 89, 122, 100, 117, 97, 
  120, 98, 115, 98, 120, 100, 121, 90, 111, 86, 
  110, 86, 106, 88, 113, 97, 115, 84, 104, 92, 
  115, 83, 98, 8, 65, 60, 85, 53, 81, 64, 
  103, 77, 102, 76, 105, 79, 110, 86, 113, 90, 
  110, 87, 109, 88, 112, 86, 106, 71, 83, 71, 
  82, 70, 93, 76, 101, 80, 93, 62, 94, 82, 
  95, 61, 82, -14, 30, 14, 67, 44, 75, 55, 
  91, 70, 91, 58, 97, 68, 102, 70, 109, 83, 
  103, 85, 111, 82, 98, 29, 54, 25, 63, 31, 
  61, 48, 74, 45, 74, 62, 77, 55, 95, 65, 
  82, 49, 83, -16, 19, 25, 56, 25, 57, 35, 
  78, 63, 83, 41, 88, 56, 95, 58, 101, 73, 
  98, 78, 100, 65, 78, -128, -7, -128, 41, -128, 
  39, -43, 36, -77, 59, 37, 78, 62, 87, 40, 
  50, -2, 75, 32, -16, 9, 51, 9, 42, 36, 
  67, 58, 72, 19, 78, 61, 91, 52, 91, 69, 
  88, 69, 84, 24, 61, -128, -128, -128, -43, -128, 
  5, -128, -18, -77, 52, 11, 69, 40, 77, -20, 
  -60, -128, 47, 17, -60, -128, 17, -23, 39, -77, 
  59, 52, 64, -8, 68, 60, 80, 40, 77, 62, 
  72, -26, 63, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 34, -77, 46, -6, 58, -128, 
  -128, -128, 15, -29, -20, -128, 48, 16, 48, -43, 
  48, 40, 50, -26, 55, 52, 69, 23, 66, 45, 
  67, 40, -2, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, 6, -128, 37, -128, 
  -128, -128, -128, -77, -50, -128, 40, -20, 17, -128, 
  41, 23, 39, -128, 39, 30, 50, 11, 58, -14, 
  53, 11, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  32, -18, 6, -128, 31, -37, 2, -14, 51, 19, 
  23, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -7, -128, -33, -128, -26, -128, 
  10, -128, -128, -128, -128, -128, -128, -128, 19, -33, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  0, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
