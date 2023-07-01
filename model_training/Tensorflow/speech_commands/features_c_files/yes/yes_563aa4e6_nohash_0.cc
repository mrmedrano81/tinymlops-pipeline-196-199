/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/563aa4e6_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_563aa4e6_nohash_0.cc" \
 */
#include "yes_563aa4e6_nohash_0.h"


const int g_yes_563aa4e6_nohash_0_width = 40;
const int g_yes_563aa4e6_nohash_0_height = 49;
alignas(16) const signed char g_yes_563aa4e6_nohash_0_data[] = {
  48, 79, 89, 67, 73, 44, 23, 15, 72, 63, 
  43, 39, 26, 48, 84, 70, -10, -18, -10, -7, 
  9, -26, -10, 4, 37, -7, 29, 20, -18, -18, 
  -60, -50, -33, -26, -26, -50, -60, -50, -60, -128, 
  32, 47, 55, 64, 80, 51, 35, 4, 70, 61, 
  17, 47, 40, 11, 70, 50, 36, -14, -6, -29, 
  -6, -8, -6, -37, -37, -37, -37, -128, -37, -37, 
  -50, -60, -128, -77, -60, -60, -60, -50, -128, -60, 
  11, -23, 42, 57, 64, 30, 24, 24, 70, 62, 
  24, 2, 37, -26, 0, 22, 14, -1, 15, -33, 
  -29, -6, -7, -128, -29, -77, -128, -128, -128, -128, 
  -50, -128, -60, -50, -50, -128, -60, -77, -60, -77, 
  13, 14, 50, 35, 34, -4, -1, 26, 52, 2, 
  19, -1, 31, -16, 31, -43, -16, -8, -29, -26, 
  -29, -43, -77, -77, -77, -77, -37, -77, -50, -50, 
  -60, -37, -128, -128, -128, -77, -60, -128, -60, -128, 
  15, -1, -3, -60, 20, -18, 34, 34, -6, -1, 
  30, 10, 34, -14, 6, -77, -18, -60, -50, -77, 
  -77, -77, -50, -77, -77, -60, -77, -77, -50, -128, 
  -128, -128, -128, -128, -60, -128, -60, -128, -128, -128, 
  -16, -128, 12, 11, 56, 33, 30, -26, 34, -7, 
  -6, -23, -7, -128, -128, -128, -33, 0, 9, -60, 
  -50, -43, -50, -60, -50, -77, -77, -128, -50, -77, 
  -37, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  12, -20, 15, -50, 29, -12, 43, -77, -50, -128, 
  40, -12, 11, 22, -29, -128, -18, -60, -50, -128, 
  -128, -60, -77, -43, -50, -128, -37, -128, -128, -77, 
  -77, -128, -77, -128, -77, -128, -128, -128, -60, -128, 
  -8, -77, 20, -128, 16, -29, 11, -10, -43, -128, 
  -6, -60, 6, -26, -12, -128, -26, -26, 7, -50, 
  -50, -128, -50, -128, -77, -128, -128, -128, -77, -128, 
  -77, -128, -128, -128, -77, -77, -128, -128, -128, -128, 
  -60, -128, 40, 34, 71, 31, 0, -10, -18, -77, 
  -60, -128, -3, -33, -60, -128, 25, -29, -20, -18, 
  15, 6, 36, 39, 65, 54, 54, 36, 32, 10, 
  28, 44, 46, -8, -29, -43, -37, -26, 7, -7, 
  -33, -128, 42, 48, 77, 37, 31, -77, -33, -128, 
  -20, -128, -23, -50, -50, -128, 23, -10, -60, -77, 
  -33, -1, 1, -60, -29, -26, -14, -60, -12, -8, 
  -6, 4, 4, -60, -37, -128, -77, -43, -37, -77, 
  26, -12, 9, 32, 71, 49, 60, 6, 9, -128, 
  0, -50, -37, -20, -33, -128, 36, -14, 4, -7, 
  54, 47, 79, 80, 89, 54, 7, -77, -26, -43, 
  7, 19, 31, -18, -16, -43, -50, -128, -77, -128, 
  77, -29, 45, 55, 85, 68, 64, 51, 48, -50, 
  -8, 13, 11, 1, -16, -128, 54, 19, 43, 40, 
  93, 80, 106, 94, 110, 78, 89, 67, 84, 80, 
  86, 88, 114, 91, 95, 73, 81, 57, 43, 17, 
  122, 100, 112, 94, 114, 91, 102, 72, 75, 41, 
  28, -20, -20, -128, -20, -2, 60, 57, 68, 77, 
  108, 87, 102, 81, 102, 82, 101, 85, 109, 91, 
  106, 92, 108, 89, 108, 77, 96, 82, 82, 67, 
  114, 99, 125, 99, 119, 98, 119, 98, 102, 77, 
  100, 75, 79, 49, 61, 55, 91, 78, 107, 95, 
  117, 95, 117, 92, 113, 89, 94, 85, 105, 82, 
  96, 73, 108, 91, 105, 82, 103, 77, 93, 62, 
  105, 90, 115, 90, 113, 91, 114, 92, 108, 89, 
  112, 82, 97, 74, 91, 83, 104, 85, 113, 96, 
  113, 88, 107, 80, 106, 79, 98, 80, 100, 82, 
  105, 68, 94, 58, 85, 68, 96, 77, 97, 63, 
  97, 85, 108, 82, 110, 85, 107, 80, 111, 85, 
  103, 90, 106, 80, 99, 85, 104, 83, 104, 82, 
  103, 80, 96, 73, 95, 73, 92, 75, 94, 70, 
  93, 79, 95, 46, 92, 77, 92, 62, 79, 55, 
  93, 76, 102, 79, 111, 89, 102, 77, 99, 76, 
  102, 82, 106, 86, 107, 85, 99, 87, 111, 89, 
  100, 78, 105, 86, 104, 69, 83, 76, 97, 64, 
  81, 63, 84, 55, 77, 63, 92, 60, 70, 54, 
  83, 54, 89, 65, 104, 85, 96, 73, 98, 78, 
  102, 81, 107, 86, 109, 83, 107, 88, 111, 80, 
  99, 72, 99, 75, 84, 55, 95, 77, 89, 50, 
  74, 47, 71, -26, 48, 49, 84, 59, 79, 58, 
  80, 47, 79, 54, 94, 69, 107, 86, 109, 84, 
  102, 87, 108, 88, 107, 88, 108, 92, 109, 74, 
  95, 70, 97, 62, 72, 37, 109, 77, 92, 49, 
  70, 52, 74, -1, 60, 45, 81, 46, 79, 49, 
  72, 44, 69, 47, 80, 43, 108, 82, 102, 75, 
  99, 85, 103, 80, 100, 83, 108, 84, 100, 62, 
  84, 59, 86, 42, 49, 54, 100, 62, 85, 33, 
  50, 53, 73, -1, 45, 18, 65, 31, 68, 36, 
  59, 29, 57, 31, 65, 31, 99, 64, 95, 74, 
  98, 70, 86, 62, 92, 65, 98, 69, 80, 42, 
  75, 47, 74, -7, 23, 61, 90, 26, 70, 12, 
  33, 25, 54, -50, 17, -26, 37, -77, 37, 17, 
  59, 23, 47, 16, 50, 11, 83, 38, 83, 65, 
  85, 50, 77, 58, 83, 52, 84, 47, 67, 14, 
  58, 42, 67, -128, -128, 15, 63, -33, 40, -128, 
  -16, -18, 48, -33, 34, -8, 48, -6, 54, 14, 
  51, -77, -77, -128, -128, -128, 22, -128, -14, -29, 
  41, -128, 17, -128, -12, -128, -29, -128, -50, -128, 
  -128, -128, -29, -128, -128, -128, -20, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, 1, -128, -77, -128, 
  29, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -7, -128, -1, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, 42, 24, 14, -128, 44, -12, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -23, -128, -128, -128, -128, -128, 
  -128, -128, -1, -128, 45, 14, 34, -128, -16, -128, 
  -128, -128, -2, 14, 66, 50, 85, 59, 85, 55, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 19, -12, 44, -128, -43, -128, 
  10, -128, -128, -23, 63, 51, 76, 60, 85, 69, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, -128, -26, -128, -23, -128, -23, -29, 
  42, -128, -20, 12, 67, 43, 68, 61, 80, 63, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -77, -77, -128, -128, -128, 
  37, -43, 9, -60, 54, 44, 59, 40, 75, 44, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, 62, 36, 54, 29, 79, 65, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -77, 50, -6, 52, 22, 80, 63, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, 51, 4, 49, 35, 66, -1, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -128, -128, -77, 33, 23, 59, 11, 54, -18, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 40, -37, 44, -3, 53, 1, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 16, -43, 54, -14, 13, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 4, -128, 18, -77, 27, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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