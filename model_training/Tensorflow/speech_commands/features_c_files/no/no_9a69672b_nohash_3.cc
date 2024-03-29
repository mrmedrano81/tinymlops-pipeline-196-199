/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/9a69672b_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_9a69672b_nohash_3.cc" \
 */
#include "no_9a69672b_nohash_3.h"


const int g_no_9a69672b_nohash_3_width = 40;
const int g_no_9a69672b_nohash_3_height = 49;
alignas(16) const signed char g_no_9a69672b_nohash_3_data[] = {
  26, 17, 48, 20, 14, 37, 70, 75, 94, 79, 
  70, 60, 82, 77, 57, 35, 70, 75, 84, 74, 
  72, 54, 69, 69, 77, 57, 74, 77, 70, 62, 
  78, 70, 74, 48, 20, 25, 39, 4, 0, -37, 
  59, 67, 73, 69, 77, 56, 58, 34, 54, 32, 
  55, 20, 37, -6, 61, 49, 68, 70, 90, 55, 
  65, 64, 53, 29, 57, 49, 72, 66, 76, 92, 
  118, 96, 106, 94, 87, 45, 62, 15, 39, 42, 
  38, 19, 89, 82, 95, 62, 62, 27, 55, 27, 
  57, 39, 37, 18, 60, 32, 61, 47, 65, 22, 
  37, 51, 57, 36, 59, 35, 61, 19, 71, 68, 
  101, 84, 92, 70, 56, 44, 32, -4, 35, 54, 
  27, 24, 61, 33, 32, -50, 44, 22, 48, 24, 
  62, 62, 38, -26, 39, 37, 42, -37, 67, 54, 
  42, 26, 68, 42, 34, -3, 48, 24, 60, 17, 
  77, 58, 85, 5, 40, -6, 4, 1, 34, 27, 
  -29, -128, -29, -128, 50, 23, 28, -37, 22, 29, 
  54, 59, 54, 34, 34, 54, 45, -77, 34, 7, 
  46, 25, 75, 52, 52, 25, 39, 6, 50, -29, 
  68, 55, 77, -29, 6, 0, 15, -14, 11, -128, 
  -29, -50, 48, 22, 49, 32, 14, -50, 15, -43, 
  23, -7, 55, 59, 62, 37, 37, -60, -29, -128, 
  46, 15, 69, 4, 53, 36, 34, -43, 30, -12, 
  -33, -128, -29, -128, -16, 4, 7, -23, -37, -128, 
  -33, -128, -128, -128, -37, 52, 68, 5, -4, -43, 
  29, 6, 54, -33, 52, 35, 62, 58, 45, 4, 
  48, 7, 21, -12, 29, 17, 29, -128, 11, -128, 
  -128, -128, -29, -128, 17, 0, 12, -10, -16, -128, 
  -8, -23, -60, -128, -128, -37, 53, -1, 1, -29, 
  40, 21, 48, -23, 52, 49, 59, 40, 40, 37, 
  56, 26, 31, -33, 32, 21, 36, -50, -2, -128, 
  -128, -128, -128, -128, -1, -128, 0, -8, -50, -128, 
  24, -128, -128, -128, -33, -60, 0, -77, -2, -6, 
  29, -77, 16, -29, 18, -8, 19, -128, 18, -60, 
  39, 40, 34, -8, -7, -16, 30, -77, -50, -128, 
  -128, -128, -128, -128, -12, -29, 6, -14, -18, -128, 
  -3, -33, -33, -128, -60, -37, 37, -128, -128, -128, 
  -26, -77, 56, 10, 16, -20, 37, -77, 5, -4, 
  38, -3, 22, -43, 2, -18, 36, -18, 11, -128, 
  -128, -128, -128, -128, -8, -33, -6, -18, -4, -128, 
  31, -33, 23, -29, -50, -128, -77, -18, 27, -60, 
  28, 51, 80, 52, 31, -43, 30, -128, 43, -60, 
  -2, -128, -37, 2, 48, -29, -33, -37, -20, -128, 
  -128, -128, -128, -128, -43, -26, 0, -18, -14, -128, 
  -128, -128, -128, -128, -43, -128, 19, 38, 15, 15, 
  55, 66, 83, 52, 63, -60, -3, 2, -12, -26, 
  39, -128, -23, -26, 50, -33, -14, -60, 46, -128, 
  -128, -128, -128, -128, -4, -33, -33, -77, -60, -128, 
  -60, -128, -128, -128, -128, -77, 4, -18, 14, -26, 
  40, 33, 69, 16, 57, 27, 39, -128, -20, -128, 
  -3, -77, 41, -2, 18, 2, 45, -1, 50, -128, 
  -128, -128, -128, -128, 8, 9, 24, -50, -43, -128, 
  -60, -50, 4, -128, 0, -7, 45, 2, 49, 38, 
  28, -128, -16, -128, 34, -10, 52, -26, 34, 28, 
  65, -18, 13, -7, 23, -12, 35, -23, 42, -77, 
  -128, -128, -128, -128, -10, -43, -14, -33, -29, -77, 
  -1, -60, -20, -128, -10, -50, -20, 12, 69, 11, 
  12, -128, -128, -128, -29, -128, 16, -128, 25, 10, 
  30, -33, 0, -20, 7, -26, 12, -29, 35, -128, 
  -128, -128, -128, -128, -29, -128, -1, -128, -77, -128, 
  54, -14, 4, 6, 11, -77, 23, -50, 46, -20, 
  5, -128, -128, -128, -20, -128, 13, -37, -2, -50, 
  29, 0, 8, -43, -18, -60, 19, -128, 6, -128, 
  -128, -128, -128, -128, 15, -128, -43, -77, -77, -128, 
  33, -77, -77, -77, 9, -3, 0, -128, -77, -128, 
  -4, -128, -50, -128, -77, -128, -8, -128, -43, -128, 
  11, -128, -14, -77, 11, -60, 11, -60, -7, -128, 
  -128, -128, -128, -128, -16, -77, -8, -50, -77, -128, 
  -29, -128, -14, -128, -20, -128, -29, -128, -33, -77, 
  -6, -128, -128, -128, 2, 5, 44, -6, 21, -128, 
  -50, -128, -4, -8, 48, -33, 20, -14, 9, -128, 
  -128, -128, -128, -128, -33, -60, -7, -128, -77, -128, 
  4, -50, -60, -128, 11, -128, -37, 8, 16, -128, 
  24, -77, 11, -1, 37, -128, -6, -128, -29, -128, 
  -6, -128, -12, -77, 19, -128, -8, -128, -18, -128, 
  -128, -128, -128, -128, -8, -60, -33, -50, -37, -128, 
  114, 93, 117, 97, 109, 71, 62, 35, 48, 5, 
  57, -16, -14, -128, -26, -128, -77, -128, -128, -128, 
  -29, -128, -50, -77, -37, -128, -20, -128, -43, -128, 
  -128, -128, -128, -128, -43, -128, -60, -128, -77, -128, 
  122, 97, 123, 102, 119, 98, 117, 86, 104, 94, 
  113, 57, 17, 28, 40, -18, 14, 24, 11, -12, 
  31, -12, 26, 0, 1, -43, -1, -29, 9, -128, 
  -128, -128, 4, -29, 44, 26, 20, -8, 28, 14, 
  113, 87, 106, 89, 112, 91, 115, 92, 116, 88, 
  114, 79, 44, 34, 62, 56, 48, 56, 70, -3, 
  36, -10, -77, -14, 64, 60, 39, 22, 54, 42, 
  -12, -128, 69, 37, 91, 77, 46, 44, 64, 25, 
  107, 84, 98, 84, 110, 84, 111, 82, 110, 77, 
  92, 80, 46, -8, 80, 84, 84, 50, 80, -20, 
  -26, -128, 32, 27, 57, 24, 51, 72, 97, 89, 
  102, 39, 97, 82, 110, 87, 65, 29, 53, 33, 
  100, 78, 87, 78, 109, 77, 107, 81, 107, 82, 
  92, 80, 77, 79, 106, 80, 102, 77, 105, 82, 
  79, 82, 112, 99, 119, 94, 110, 73, 102, 87, 
  108, 95, 103, 85, 112, 83, 87, 42, 60, 41, 
  68, 39, 82, 74, 108, 92, 117, 94, 107, 77, 
  98, 80, 111, 95, 116, 99, 122, 101, 117, 97, 
  118, 99, 122, 99, 119, 99, 122, 102, 120, 97, 
  119, 101, 121, 97, 115, 98, 122, 96, 101, 78, 
  60, 23, 62, 41, 77, 77, 112, 91, 104, 87, 
  102, 84, 113, 87, 113, 95, 116, 70, 81, 70, 
  107, 82, 105, 80, 101, 64, 91, 79, 98, 63, 
  82, 24, 82, 61, 77, 54, 89, 70, 94, 69, 
  50, -12, 55, 32, 69, 70, 100, 73, 102, 79, 
  95, 78, 110, 87, 112, 77, 97, 55, 54, 20, 
  74, 45, 77, 49, 87, 60, 86, 69, 95, 43, 
  72, 13, 88, 63, 77, 48, 76, 59, 99, 78, 
  50, -1, 61, 33, 67, 69, 94, 63, 99, 77, 
  95, 75, 113, 87, 105, 22, 71, 40, 33, -128, 
  76, 35, 59, 26, 79, 30, 78, 59, 87, 29, 
  67, 2, 64, 50, 69, 52, 78, 72, 84, 62, 
  49, -20, 68, 32, 63, 70, 90, 54, 98, 65, 
  98, 73, 103, 55, 66, 23, 54, 6, 11, -128, 
  49, -60, 11, -128, 52, 37, 76, 34, 77, 32, 
  55, -60, 55, 57, 65, 49, 55, 46, 88, 59, 
  41, -29, 69, 11, 49, 67, 79, 50, 89, 41, 
  89, 35, 65, -128, -3, -128, 9, -128, 0, -128, 
  -128, -128, -128, -128, 61, 57, 48, 23, 76, 19, 
  64, -7, 52, 43, 42, 31, 75, -77, 56, 19, 
  16, -128, 51, -128, 60, 54, 49, 37, 56, 37, 
  80, 14, 50, -128, -128, -128, -128, -128, -29, -128, 
  -128, -128, -128, -128, -29, 37, 29, -128, 65, -50, 
  41, -60, 9, -20, -128, -128, 52, -128, -128, -128, 
  -26, -128, 65, -128, 86, 55, 25, 45, 43, 61, 
  72, 49, 27, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -16, 24, 42, -77, 74, -26, 
  45, -4, 9, 11, -128, -128, 14, -3, 46, -128, 
  -128, 19, 57, -128, 87, 22, 25, 20, 57, 19, 
  69, 5, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -2, 14, -128, 74, 19, 
  40, -23, -16, -128, -37, -128, -29, -128, -20, -128, 
  -128, -3, -128, -3, 75, -128, -128, -128, 23, 2, 
  53, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 42, -60, 
  42, 6, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -3, -3, -18, 32, -128, -128, -128, 29, 4, 
  -37, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 4, -128, 
  -16, -16, -29, -128, -128, -128, 19, -128, -128, -128, 
  -128, -128, -16, -128, -20, -128, -128, -128, -128, -128, 
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
