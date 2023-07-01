/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/cfbedff9_nohash_2.wav" \
 * --output_c_file="features_c_files/no/no_cfbedff9_nohash_2.cc" \
 */
#include "no_cfbedff9_nohash_2.h"


const int g_no_cfbedff9_nohash_2_width = 40;
const int g_no_cfbedff9_nohash_2_height = 49;
alignas(16) const signed char g_no_cfbedff9_nohash_2_data[] = {
  -10, -18, 43, 42, 29, 17, 20, 20, 40, 42, 
  26, 11, 0, -26, -33, -26, 9, 11, 23, 7, 
  0, -18, -33, -18, -18, -26, 0, -2, -18, -2, 
  -18, 7, -4, 15, 9, -12, -26, -12, 5, -18, 
  42, 9, 26, 33, 49, -6, 24, 2, 14, -8, 
  -2, -23, -26, -77, -50, -29, -26, -29, -7, -77, 
  -18, -37, -37, -20, -12, -29, -6, -23, -12, -37, 
  -26, -23, 12, -1, 19, -20, -18, -8, 22, 24, 
  19, 40, 24, -43, 4, -3, 19, -14, 5, 11, 
  -20, 1, 18, -29, -37, -77, 18, 23, 36, 46, 
  49, 8, 59, 59, 62, 22, 26, 50, 72, 61, 
  55, 33, 29, 8, 10, -1, -12, -6, 10, 17, 
  47, 27, 55, 43, 2, -60, 4, 29, 37, 4, 
  -23, -20, 1, -6, 11, 53, 67, 63, 81, 86, 
  94, 70, 99, 86, 95, 59, 70, 66, 87, 77, 
  85, 64, 46, 35, 21, -33, -14, -14, 66, 67, 
  17, -3, 20, -20, 24, -3, 2, -128, -14, -23, 
  -43, -23, -50, -60, -29, -16, 24, 37, 53, 48, 
  62, 52, 41, -3, 28, -3, 34, 21, 56, 32, 
  50, 24, 37, -14, 20, -10, -14, -29, 42, 21, 
  21, -23, 25, 10, 32, 16, 41, -1, 29, 10, 
  -1, -50, -23, 4, 5, 4, 61, 62, 62, 27, 
  52, -10, 42, -128, -128, -20, 6, -8, 9, -77, 
  -3, -37, -50, -7, 18, -8, -10, -37, -14, -6, 
  -23, -37, 5, -37, 8, -14, 6, -16, 1, 21, 
  22, -60, -23, -60, -16, -43, -23, -16, 39, -60, 
  9, -128, -128, -128, -128, -128, -77, -128, -77, -128, 
  -128, -128, 2, -50, -29, -26, -6, -26, -20, -128, 
  -14, 10, 25, 19, 23, -128, -77, -77, 30, 38, 
  43, -43, -33, -33, 4, 15, -18, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -26, -128, -77, -128, 
  -128, -128, 17, -50, -50, -23, -6, -60, -50, -128, 
  45, 17, 69, 31, 29, -14, 26, -29, -20, -128, 
  -16, -77, -60, -128, -60, -60, -77, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, -60, -77, -33, -77, -128, -128, 
  69, 51, 87, 68, 72, 47, 60, 30, -16, -33, 
  -12, -77, -18, -77, -60, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -26, -128, -16, -77, -26, -77, -50, -128, 
  125, 105, 125, 102, 123, 99, 118, 99, 115, 79, 
  67, 11, -128, 6, 47, 62, 74, 32, 52, 11, 
  56, 57, 91, 79, 80, -7, -16, -128, -128, -43, 
  19, -14, -6, 14, 22, 44, 56, 44, 46, 6, 
  114, 88, 100, 93, 109, 90, 112, 86, 107, 84, 
  85, 56, 49, 29, 67, 68, 86, 69, 54, 39, 
  76, 80, 90, 70, 85, -37, 21, -33, 4, -2, 
  34, -23, 18, -4, 15, 35, 57, 42, 53, 16, 
  102, 74, 113, 88, 111, 79, 104, 83, 105, 79, 
  95, 69, 87, 58, 71, 75, 96, 60, 68, 64, 
  89, 83, 89, 79, 91, 52, 40, 20, -128, 9, 
  37, 15, 47, 40, 60, 52, 71, 54, 66, 49, 
  69, 61, 105, 81, 90, 72, 108, 79, 100, 74, 
  101, 67, 77, 72, 102, 89, 113, 94, 102, 77, 
  91, 77, 102, 93, 114, 88, 59, 49, 25, -37, 
  20, -60, 5, 28, 57, 47, 65, 50, 64, 41, 
  83, 50, 102, 81, 87, 79, 113, 94, 114, 95, 
  113, 89, 110, 91, 116, 98, 119, 90, 110, 82, 
  97, 69, 110, 81, 92, 65, 102, 92, 110, 85, 
  75, 53, 78, 62, 80, 64, 79, 67, 86, 62, 
  67, 58, 89, 45, 78, 71, 107, 86, 114, 82, 
  100, 79, 102, 85, 111, 82, 100, 74, 98, 52, 
  85, 70, 89, 44, 78, 50, 101, 82, 97, 71, 
  79, 62, 57, 47, 62, 35, 58, 21, 63, 26, 
  87, 53, 76, 6, 81, 72, 88, 81, 99, 82, 
  105, 75, 102, 81, 108, 77, 77, 46, 82, 55, 
  82, 66, 64, -20, 60, 32, 80, 62, 90, 61, 
  70, 54, 49, 44, 62, 14, 50, 18, 56, 13, 
  88, 39, 60, 1, 72, 62, 86, 61, 85, 67, 
  98, 74, 102, 80, 104, 65, 58, 29, 69, 35, 
  76, 43, 69, -37, 41, 15, 60, 54, 76, 29, 
  68, 37, 52, 20, 54, 24, 52, 4, 56, 21, 
  80, 21, 47, 29, 85, 67, 88, 32, 73, 62, 
  87, 49, 93, 78, 96, 40, 68, -29, 60, 19, 
  78, 40, 56, -60, 44, 16, 56, 49, 81, 36, 
  70, 52, 46, 5, 37, -7, 39, 24, 69, 9, 
  74, 7, 30, 34, 84, 63, 79, 5, 57, 45, 
  82, 52, 85, 66, 85, -7, 44, -128, 42, 1, 
  73, 42, 52, -60, 31, 16, 61, 46, 77, 41, 
  74, 43, 51, 25, 54, -8, 34, 29, 68, -7, 
  66, -33, 27, 26, 82, 57, 67, 4, 60, 19, 
  67, 33, 79, 60, 69, -3, 46, -50, 60, 32, 
  63, 0, 58, -77, 32, -4, 64, 43, 65, 24, 
  65, 32, 33, 26, 49, -26, 51, 44, 79, 13, 
  57, -29, 40, 29, 81, 51, 64, -10, 48, -4, 
  52, 28, 56, 37, 55, -77, 20, -128, 36, 18, 
  49, 20, 37, -128, -16, -77, 46, 14, 55, 18, 
  71, 23, 20, -26, 29, -16, 36, -37, 37, 2, 
  55, 2, 47, 39, 79, 47, 54, -37, 44, 0, 
  37, -33, 69, 35, 0, -128, -60, -128, 7, -128, 
  37, 23, 10, -128, -43, -128, -20, -128, 34, -128, 
  19, -128, 26, -50, 11, -4, 37, 1, 58, -6, 
  45, -6, 53, 41, 80, 47, 17, -128, 31, -26, 
  -12, -12, 72, 15, -128, -128, -128, -128, -128, -128, 
  17, -26, -20, -128, -128, -128, -29, -128, 19, -128, 
  -2, -128, 32, -128, 11, -33, 33, -8, 51, -20, 
  -2, -23, 57, 36, 79, 40, 35, -128, -43, -128, 
  -26, 44, 72, -3, -128, -128, -128, -128, -128, -128, 
  -128, -128, -18, -128, -128, -128, -128, -128, -10, -128, 
  -128, -128, 28, -128, -6, -26, 37, -37, 17, -37, 
  -128, -128, 54, 42, 86, 9, -77, -128, -50, -77, 
  42, 50, 64, -26, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -50, -128, -7, -128, -20, -60, 15, -77, 4, -37, 
  37, -128, 48, 15, 76, 16, -6, -128, -128, -128, 
  51, 19, 33, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, 0, -128, -77, -77, 15, -128, -20, -60, 
  51, -1, 56, 29, 61, -50, -33, -128, -128, -128, 
  30, 37, -18, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -20, -128, 0, -128, -8, -128, -60, -77, 
  52, 17, 33, 11, 41, -128, -128, -128, -128, -128, 
  20, 21, 2, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 4, -128, -128, -128, -10, -128, -43, -60, 
  25, 10, 0, 8, 19, -128, -128, -128, -128, -37, 
  57, -8, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -4, -128, 16, -77, 1, -128, -128, -77, 
  -6, 23, 10, -4, 44, -128, -128, -128, -77, -128, 
  -29, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  16, 40, 51, -128, 24, -128, -128, -128, -77, -77, 
  28, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -14, -128, -14, -128, -8, -128, -50, -37, 
  27, 40, 61, -128, 2, -128, -128, -128, -128, -128, 
  13, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -14, -128, -60, -60, 
  43, 17, 55, -128, -128, -128, -128, -128, -128, -128, 
  -23, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, 1, -128, -128, -128, 
  24, -128, -4, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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