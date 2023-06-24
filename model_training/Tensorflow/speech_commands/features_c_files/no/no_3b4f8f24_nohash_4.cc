/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/3b4f8f24_nohash_4.wav" \
 * --output_c_file="features_c_files/no/no_3b4f8f24_nohash_4.cc" \
 */
#include "no_3b4f8f24_nohash_4.h"


const int g_no_3b4f8f24_nohash_4_width = 40;
const int g_no_3b4f8f24_nohash_4_height = 49;
alignas(16) const signed char g_no_3b4f8f24_nohash_4_data[] = {
  103, 84, 97, 81, 58, 48, 20, 32, 33, 45, 
  53, 50, 50, 20, 76, 78, 47, 23, 70, 62, 
  62, 48, 57, 40, 26, 11, 29, 20, 23, 20, 
  17, -2, 9, -2, -18, -37, -60, -37, -33, -60, 
  88, 78, 85, 64, 65, 44, 11, 23, 37, 41, 
  27, 56, 63, 26, 84, 78, 61, 50, 62, 56, 
  32, 55, 57, 44, 8, -1, -2, 2, 4, 10, 
  -7, -16, -1, -16, 4, -29, -50, -50, -37, -37, 
  80, 65, 89, 65, 44, 21, 50, 4, 21, 38, 
  48, 37, 22, 38, 68, 47, 37, 9, 70, 59, 
  70, 49, 45, 0, 37, 17, 6, 16, 2, -20, 
  -20, -33, 7, -2, 7, -23, -37, -37, -26, -29, 
  71, 25, 72, 44, 43, 40, 72, 47, 27, 1, 
  34, 37, 15, -14, 36, 9, 34, 24, 64, 39, 
  36, 15, 34, 14, 54, -7, -10, 6, 13, -29, 
  -20, -43, -16, -8, -3, -26, -37, -77, -37, -77, 
  43, 14, 41, -14, 24, 24, 47, 1, -4, 29, 
  43, 34, 40, 5, -23, -128, 35, 16, 66, 40, 
  24, 32, 36, 27, 37, -10, 17, -29, 23, 4, 
  -4, -6, 19, 8, -16, -43, -77, -77, -50, -77, 
  61, 23, 54, 19, 34, 16, 60, 4, 29, -12, 
  50, 15, 4, 2, 29, -128, 23, -6, 64, 49, 
  17, -77, 4, -33, 37, -18, -2, -23, 34, 9, 
  4, -50, 7, -7, -16, -43, -50, -43, -50, -77, 
  81, 61, 77, 49, 61, -3, 51, 22, 9, 4, 
  11, 27, 52, -18, 20, -37, -14, -4, 44, 28, 
  54, -12, 38, 9, 28, -20, -8, -50, 40, 9, 
  -60, -33, -7, -43, -6, -37, -37, -77, -37, -60, 
  124, 104, 126, 104, 126, 102, 119, 94, 108, 84, 
  90, 43, 67, 34, 52, 16, 72, 59, 40, 39, 
  77, 31, 75, 44, 65, 36, 41, 20, 70, 27, 
  38, 42, 11, 24, 52, 52, 73, 64, 72, 64, 
  112, 98, 120, 92, 118, 98, 123, 100, 119, 99, 
  118, 92, 96, 84, 76, 48, 84, 79, 103, 74, 
  76, 57, 108, 96, 116, 99, 122, 101, 115, 101, 
  122, 97, 96, 75, 89, 77, 87, 77, 89, 77, 
  107, 84, 90, 72, 97, 88, 109, 97, 119, 89, 
  109, 84, 107, 80, 79, 47, 109, 99, 120, 94, 
  107, 91, 116, 97, 118, 94, 116, 96, 119, 81, 
  100, 90, 113, 81, 85, 58, 74, 63, 80, 66, 
  102, 73, 77, 63, 80, 62, 107, 84, 112, 80, 
  111, 94, 115, 85, 105, 79, 115, 93, 103, 59, 
  102, 79, 104, 82, 107, 75, 104, 82, 96, 52, 
  81, 77, 98, 49, 77, 60, 84, 66, 100, 84, 
  97, 55, 67, 44, 78, 39, 85, 80, 99, 85, 
  107, 82, 101, 76, 112, 97, 112, 33, 56, 61, 
  91, 76, 89, 46, 95, 72, 95, 74, 82, 26, 
  75, 43, 88, 61, 69, 47, 71, 47, 80, 55, 
  89, 30, 32, -23, 51, 14, 80, 54, 87, 58, 
  89, 66, 90, 92, 118, 85, 102, 45, 24, -29, 
  66, 31, 69, 55, 88, 65, 81, 44, 85, 57, 
  48, -77, 51, 16, 50, -1, 42, -4, 84, 60, 
  79, 14, 55, 4, 57, 24, 68, 26, 72, 0, 
  75, 36, 83, 62, 62, 39, 82, 28, 45, -50, 
  55, 22, -26, -29, 67, 47, 81, 30, 54, -43, 
  -128, -128, 55, -29, 49, 9, 51, 0, 61, 16, 
  67, -26, 9, -43, 56, 29, 64, 15, 63, 22, 
  62, 65, 98, 37, 44, -29, 64, -128, 1, -43, 
  57, 32, -128, -128, 8, -43, 0, -128, -37, -128, 
  -128, -128, -128, -128, 47, -20, 34, -128, 17, -128, 
  61, -50, -26, -128, 16, 27, 55, -128, 40, 0, 
  62, 20, 60, -128, 37, -29, 24, -128, -12, -37, 
  37, -60, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -23, -128, 14, -33, -26, -128, -128, -128, 
  -16, -128, -128, -128, -77, 26, 62, -128, 5, -60, 
  32, -128, -29, -128, 31, 33, 44, -128, -8, -23, 
  45, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -16, -128, -3, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -18, -77, -50, -128, 10, -18, 42, -128, -128, -128, 
  41, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, 15, -60, -16, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  4, -60, -128, -128, -128, -50, -23, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -14, -128, -26, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  24, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -50, -26, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  44, -128, -33, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -12, -128, -6, -128, -43, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -7, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -29, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -77, 15, -128, -77, -128, 
  -2, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -37, -128, -128, 
  -18, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -10, -128, -33, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -14, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -33, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 12, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -4, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, 34, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -29, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -8, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 29, 9, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -7, -37, -128, -37, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -2, -128, -23, -26, -128, -50, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -4, 25, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 20, -2, -7, 33, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -77, -128, -128, 
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
  -128, -128, -128, -128, -128, -128, -128, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -14, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 7, -29, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -14, -77, -128, -128, -128, -128, 
};
