/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/cfbedff9_nohash_4.wav" \
 * --output_c_file="features_c_files/no/no_cfbedff9_nohash_4.cc" \
 */
#include "no_cfbedff9_nohash_4.h"


const int g_no_cfbedff9_nohash_4_width = 40;
const int g_no_cfbedff9_nohash_4_height = 49;
alignas(16) const signed char g_no_cfbedff9_nohash_4_data[] = {
  -33, -37, 43, 42, 33, 39, 26, -12, 20, 11, 
  -33, -26, -4, -37, -33, 4, -33, -7, 0, 4, 
  -4, -18, -33, -50, -60, -37, -26, -26, -26, -2, 
  5, -18, -18, -12, 14, -12, -26, -12, 9, -18, 
  32, 13, 10, 14, 29, 26, 42, 44, 32, 25, 
  41, -29, -50, -29, -12, 8, -1, -16, -37, -16, 
  -18, -50, -128, -60, -37, -20, -37, -37, -18, -37, 
  -26, -14, 9, -16, -12, -4, -18, -8, -1, -37, 
  -3, 12, 19, -12, -16, -37, -23, 4, 13, -10, 
  -14, -23, -37, -77, -37, -60, -26, -18, -2, -7, 
  15, -4, -37, -37, -18, -23, -26, -37, -7, -23, 
  -7, -33, 11, -23, -14, -7, -37, -43, -7, -16, 
  -23, -60, 25, 39, 39, -10, -33, -50, -10, 4, 
  38, -2, -20, -43, -77, -128, -2, -60, -29, -43, 
  -14, -60, -37, -43, -12, -43, -50, -23, -14, -26, 
  -3, -7, -8, -20, -20, -60, -37, -33, -20, -12, 
  12, 21, 28, -6, 24, -23, 17, 7, -6, -26, 
  -18, -77, -37, -18, -29, -60, -14, -10, 1, -60, 
  -50, -128, -20, -50, -29, -43, -37, -60, -20, -37, 
  -8, -20, -23, -37, -4, -16, -37, -60, -16, -26, 
  38, -29, -20, -77, -43, -26, 24, -7, 34, 14, 
  -18, -60, -50, -128, -8, -128, -128, -77, -23, -50, 
  -43, -43, -29, -60, -29, -128, -20, -60, -23, -23, 
  -43, -50, -23, -37, -23, -50, -20, -60, -16, -37, 
  17, -29, -10, -12, 10, -128, -16, -77, -1, -37, 
  0, -12, -37, -77, -128, -128, -29, -29, -16, -23, 
  -33, -77, -20, -77, -128, -29, -29, -20, -10, -4, 
  -10, -60, -43, -60, -33, -37, -29, -60, -12, -29, 
  2, 14, 38, -14, -18, -128, -50, -18, 2, -43, 
  -10, -77, -43, -77, -43, -128, -16, -77, -33, -50, 
  -33, -77, -50, -77, -77, -50, -50, -37, -23, -77, 
  -12, -33, -18, -43, -33, -77, -16, -29, -12, -43, 
  39, -16, 9, -50, -3, -50, -23, -128, 0, -26, 
  -10, -33, -77, -50, -77, -77, -12, -77, -18, -33, 
  -33, -128, -29, -77, -29, -128, -43, -60, -43, -77, 
  -60, -128, -43, -77, -60, -77, -10, -50, -26, -43, 
  95, 77, 100, 85, 99, 80, 81, 45, 55, 2, 
  -23, -23, 4, -128, -43, -14, -12, -26, -3, -18, 
  -26, -77, -77, -23, -23, -128, -43, -50, -26, -77, 
  -33, -77, -43, -128, -18, -43, -43, -60, -33, -50, 
  125, 104, 125, 102, 121, 96, 115, 96, 112, 82, 
  64, 35, 24, 12, 7, 30, 71, 67, 53, 38, 
  46, 40, 62, 63, 56, -14, -23, 12, 43, 23, 
  8, 18, 33, 16, 32, 42, 48, 39, 50, 38, 
  113, 84, 114, 93, 112, 90, 107, 89, 105, 80, 
  62, 53, 27, 19, 52, 70, 101, 85, 82, 48, 
  75, 65, 86, 80, 96, 46, 19, 9, 39, 25, 
  16, -43, -10, -16, 18, 25, 54, 40, 59, 38, 
  87, 77, 112, 88, 105, 90, 116, 94, 118, 95, 
  113, 70, 93, 79, 110, 98, 119, 97, 113, 92, 
  103, 87, 117, 99, 118, 90, 97, 90, 107, 87, 
  85, 53, 71, 59, 73, 55, 71, 57, 74, 58, 
  100, 72, 85, 54, 93, 79, 105, 88, 109, 90, 
  113, 91, 112, 87, 113, 89, 114, 83, 88, 86, 
  104, 85, 109, 87, 102, 72, 103, 92, 110, 87, 
  107, 79, 71, 49, 61, 47, 66, 45, 87, 64, 
  95, 67, 87, 34, 79, 66, 97, 77, 104, 86, 
  106, 83, 104, 82, 107, 83, 102, 68, 81, 64, 
  96, 72, 97, 68, 83, 46, 90, 74, 91, 67, 
  101, 71, 60, 57, 69, 45, 65, 45, 66, 49, 
  89, 49, 63, 37, 89, 70, 96, 72, 94, 77, 
  99, 76, 102, 77, 104, 84, 89, 55, 76, 50, 
  77, 63, 93, 62, 81, 24, 77, 55, 80, 61, 
  87, 37, 58, 61, 77, 20, 58, 42, 79, 49, 
  84, 36, 57, 52, 83, 71, 100, 63, 88, 60, 
  81, 64, 81, 66, 99, 73, 79, -77, 72, 45, 
  57, 39, 79, 34, 42, -77, 57, 43, 75, 36, 
  80, 30, 50, 52, 62, 26, 50, 20, 62, 36, 
  79, 35, 59, 63, 89, 72, 97, 50, 72, 25, 
  74, 54, 81, 45, 91, 59, 53, -128, 56, -37, 
  62, 44, 61, -14, -4, -128, 37, -29, 47, -50, 
  22, -60, 52, -12, 41, 4, 54, 15, 57, 21, 
  74, 16, 50, 50, 82, 60, 85, 14, 29, 27, 
  60, -14, 72, 30, 70, 27, 25, -128, 55, -128, 
  23, -37, -16, -128, -18, -128, 4, -77, 16, -128, 
  -60, -128, 7, -128, -23, -50, 19, -14, 79, 36, 
  72, 11, 52, 43, 79, 50, 71, -12, 12, -128, 
  40, -3, 63, 55, 67, -43, 0, -128, 24, -128, 
  -10, -128, 16, -128, -128, -128, -128, -128, -26, -128, 
  -128, -128, 29, -77, 6, 4, 45, 1, 68, 30, 
  65, 21, 59, 48, 83, 41, 40, -26, 60, -20, 
  59, -10, 41, 40, 77, 34, 23, -128, 39, -43, 
  35, 15, 42, -128, -60, -128, 40, -29, -29, -37, 
  18, -128, 37, -26, -20, 2, 45, 7, 68, 44, 
  63, 5, 49, 44, 82, 36, 44, -60, 28, -18, 
  51, 15, 52, 20, 82, 24, 34, -77, 47, -60, 
  29, 32, 46, -128, 14, -128, 52, -29, -26, -2, 
  46, -77, 5, -128, -1, -50, 16, -37, 62, 9, 
  59, 2, 54, 38, 83, 40, 27, -128, -128, -128, 
  -10, -33, 36, 25, 57, -128, -128, -128, -128, -128, 
  -20, -29, -33, -128, -128, -128, -6, -128, -128, -60, 
  -14, -128, -43, -60, 4, -10, 42, 11, 47, -8, 
  49, 2, 47, 23, 64, 10, -128, -128, -128, -128, 
  4, -37, 35, 18, -23, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -20, -60, 31, -128, 
  29, -26, 44, 16, 51, -128, -128, -128, 1, -128, 
  -50, -128, -3, -128, -16, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -12, -60, -1, -128, 
  -2, -77, 49, 30, 58, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -77, -128, 
  -33, -128, 32, -29, 47, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 38, -128, -2, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, -128, -128, -128, -128, -128, -128, -128, 
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