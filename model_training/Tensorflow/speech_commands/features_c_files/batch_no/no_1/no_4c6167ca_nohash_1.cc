/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/4c6167ca_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_4c6167ca_nohash_1.cc" \
 */
#include "no_4c6167ca_nohash_1.h"


const int g_no_4c6167ca_nohash_1_width = 40;
const int g_no_4c6167ca_nohash_1_height = 49;
alignas(16) const signed char g_no_4c6167ca_nohash_1_data[] = {
  77, 70, 93, 78, 71, 61, 64, 32, 37, 20, 
  20, 23, 29, 30, 35, 15, 0, -7, 5, 17, 
  29, 7, 54, 35, -18, -37, 0, -7, 5, -7, 
  -26, -18, -10, -2, -4, -12, -10, -18, -26, -37, 
  87, 75, 77, 49, 58, 19, 34, 12, 24, 16, 
  24, 28, 44, 12, 24, 17, 16, 9, 8, -16, 
  -2, -16, -16, -26, -12, -8, -26, -29, 4, -29, 
  -50, -37, -37, -37, -18, -16, -18, -14, -12, -8, 
  46, 20, 38, 39, 64, 17, -3, 17, -4, -37, 
  16, -18, -10, 28, 48, 25, -7, 37, 14, -33, 
  14, 31, -4, -60, -50, -10, -12, -1, -2, -43, 
  -37, -37, -26, -6, -20, -33, -20, -33, -20, -23, 
  38, 23, 68, 22, 40, 33, 29, -26, 11, -23, 
  15, -26, -12, 35, 53, 11, 39, 32, 29, -1, 
  4, 31, 7, -16, -2, -8, -7, -33, -29, -60, 
  -20, -43, -7, -43, -7, -18, -2, -26, -14, -26, 
  63, 30, 60, 27, 54, 50, 66, 22, -12, 27, 
  19, 7, 9, 11, 1, -6, 17, 14, 34, 24, 
  -1, 15, -12, -23, -20, 9, 13, -16, -16, -20, 
  -20, -60, -29, -60, -14, -43, -20, -43, -20, -60, 
  71, 42, 74, 43, 56, 1, 19, -23, 21, -6, 
  27, -3, 4, -128, -33, -77, 9, -77, 20, 20, 
  13, -23, -20, -10, -23, 9, -16, -77, -10, -16, 
  -20, -60, -23, -50, 9, -37, -43, -43, -50, -43, 
  51, 44, 84, 53, 42, -2, 19, 7, 27, 16, 
  38, -33, -16, -37, 23, -23, -4, -43, 19, -33, 
  8, -37, -8, -50, -43, -128, -43, -128, -60, -128, 
  -50, -77, -50, -60, -6, -77, -23, 0, 0, -23, 
  49, -1, 60, 28, 57, 11, 37, 22, 34, -50, 
  4, -14, 13, -77, -16, -37, 9, 16, 11, -29, 
  -6, -50, -20, -60, -33, -128, -43, -77, -33, -60, 
  -43, -50, -43, -77, -33, -128, -50, -77, -18, -60, 
  36, -77, -60, 10, 73, 31, 37, 4, -20, 7, 
  9, -60, -18, -20, -43, -50, 37, -43, -1, -37, 
  -2, -128, -16, -16, -23, -37, -7, -60, -33, -43, 
  -23, -60, -43, -43, -33, -77, -43, -50, -26, -50, 
  -23, -43, 51, 32, 62, 15, 5, 41, 54, -18, 
  14, -26, -18, -77, -128, -50, -20, -23, -6, -60, 
  26, -7, -7, -128, 2, -60, -60, -60, -77, -77, 
  -6, -37, -26, -60, -43, -33, -18, -128, -26, -50, 
  44, -128, 37, -4, -26, -43, 16, -60, 20, -128, 
  -12, -23, 2, -128, -18, -37, 16, -60, -7, -50, 
  -6, -50, -18, -60, -3, -26, -14, -23, -20, -128, 
  -60, -60, -43, -128, -26, -50, -33, -77, -26, -29, 
  122, 97, 105, 72, 67, 64, 87, 75, 72, 55, 
  33, 22, 52, 13, 43, 47, 50, 54, 66, 38, 
  64, 53, 65, 17, 45, -3, -1, -14, -26, -77, 
  -26, -60, -18, -23, -10, -43, 9, -6, 11, -60, 
  110, 102, 123, 93, 113, 91, 107, 56, 78, 65, 
  67, 29, 32, 31, 83, 74, 69, 78, 90, 74, 
  90, 81, 94, 72, 84, -37, -6, -26, -4, -29, 
  9, -12, -3, -18, 6, 12, 37, 29, 38, 29, 
  110, 92, 110, 86, 107, 87, 106, 89, 101, 73, 
  72, 6, 68, 69, 104, 87, 96, 75, 97, 78, 
  103, 87, 108, 86, 92, 20, 22, 44, 15, -26, 
  26, 12, 11, -8, 35, 44, 57, 50, 64, 40, 
  104, 86, 106, 75, 99, 85, 109, 96, 119, 99, 
  118, 96, 116, 97, 119, 98, 120, 95, 117, 93, 
  113, 90, 108, 81, 104, 91, 114, 94, 100, 71, 
  59, -10, 48, 47, 60, 35, 90, 77, 77, 50, 
  100, 72, 85, 72, 108, 87, 117, 97, 120, 99, 
  119, 97, 116, 92, 102, 89, 119, 98, 115, 92, 
  112, 86, 102, 90, 113, 92, 118, 97, 117, 84, 
  85, 70, 60, 64, 84, 69, 102, 84, 96, 69, 
  90, 57, 70, 71, 100, 77, 101, 78, 104, 86, 
  105, 84, 106, 82, 98, 80, 107, 84, 99, 80, 
  100, 73, 92, 79, 101, 77, 102, 84, 106, 79, 
  90, 50, 69, 45, 82, 64, 79, 71, 87, 57, 
  87, 49, 63, 59, 93, 67, 92, 74, 97, 74, 
  103, 77, 100, 70, 95, 70, 92, 69, 89, 72, 
  94, 64, 86, 66, 85, 68, 85, 62, 95, 71, 
  76, 47, 63, 44, 86, 69, 86, 76, 89, 59, 
  80, 25, 54, 56, 93, 62, 84, 69, 88, 51, 
  93, 70, 85, 65, 96, 59, 81, 31, 78, 54, 
  79, 41, 71, 59, 77, 27, 76, 55, 85, 55, 
  85, 57, 65, 52, 91, 75, 93, 66, 79, 48, 
  76, 24, 47, 29, 83, 54, 79, 59, 83, 49, 
  80, 58, 85, 60, 88, 46, 54, -4, 68, 35, 
  73, 37, 70, 6, 54, 33, 75, 55, 81, 44, 
  53, 38, 59, 12, 64, 51, 84, 61, 80, 44, 
  72, 0, 35, 18, 67, 47, 77, 49, 80, 46, 
  75, 49, 84, 65, 82, -20, 21, -128, 37, -8, 
  57, 11, 53, 4, 52, 0, 73, 38, 61, 23, 
  59, -2, 44, 1, 57, 19, 71, 37, 83, 37, 
  66, -18, 32, 7, 52, 33, 72, 39, 69, 22, 
  75, 55, 85, 48, 35, -128, -77, -128, 50, 12, 
  61, 30, 68, -128, 24, -50, 72, 29, 51, -77, 
  37, -128, 50, 8, 27, -33, 35, -33, 75, 25, 
  62, -7, 40, -14, 54, 9, 52, 10, 57, 9, 
  72, 38, 45, -128, -128, -128, -128, -128, 13, -43, 
  47, 4, 46, -128, -128, -128, 48, -50, -3, -128, 
  20, -60, 44, -4, 15, -128, -128, -128, 56, -18, 
  36, -128, -23, -128, -43, -128, -6, -128, 11, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -23, -128, -128, -128, -128, -128, -128, -128, 
  -7, -128, 6, -128, -128, -128, -128, -128, -8, -128, 
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
