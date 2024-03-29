/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/563aa4e6_nohash_3.wav" \
 * --output_c_file="features_c_files/yes/yes_563aa4e6_nohash_3.cc" \
 */
#include "yes_563aa4e6_nohash_3.h"


const int g_yes_563aa4e6_nohash_3_width = 40;
const int g_yes_563aa4e6_nohash_3_height = 49;
alignas(16) const signed char g_yes_563aa4e6_nohash_3_data[] = {
  -10, -7, 49, 44, 26, 23, 62, 45, 17, 45, 
  86, 90, 98, 34, 82, 84, 79, 74, 52, 20, 
  5, 11, 14, 20, 56, 65, 52, 20, -33, -37, 
  -18, -7, 0, 7, -10, 52, 80, 57, -10, -60, 
  -18, 26, 42, 32, 34, 47, 60, 50, 48, 42, 
  73, 76, 97, 45, 34, -14, 48, 10, 19, -2, 
  25, -1, -20, 30, 57, 56, 70, 44, -37, -60, 
  -37, -29, -1, -16, 4, 40, 62, 35, -1, -60, 
  15, 51, 58, 22, 27, 24, 54, 45, 60, 43, 
  50, 39, 77, 21, 18, -6, 44, 40, 4, -14, 
  17, -3, 15, 55, 81, 34, 27, -50, -50, -77, 
  -18, -23, -7, -33, 11, 19, 68, 46, 7, -77, 
  -8, 34, 65, 55, 47, 30, 30, -18, 49, 20, 
  17, 35, 72, 37, 8, 11, 63, 35, 40, -7, 
  12, -2, 30, 54, 74, -33, 14, -50, -50, -77, 
  -77, -33, -14, -60, 22, 24, 69, 42, 23, -77, 
  0, 37, 65, 30, -1, 54, 66, 35, 35, -37, 
  -1, -128, -1, -60, 0, -26, 52, -6, -10, -33, 
  -23, 5, 73, 44, 62, -18, -6, -43, -29, -128, 
  -2, -8, -29, -29, 56, 42, 64, 54, 32, -128, 
  26, 35, 25, 1, 60, 45, 57, -26, 25, 19, 
  -33, -128, -128, -18, 23, -8, 49, 20, 30, 15, 
  2, 37, 72, 31, 29, -128, -33, -77, -37, -50, 
  -37, -12, 0, -77, 34, 7, 49, 33, 42, -128, 
  16, -128, 7, 0, 4, 20, 44, -6, 32, -18, 
  0, -128, -43, 1, 9, -128, -10, -8, 42, 22, 
  35, 18, 82, 61, -26, -77, -33, -77, -37, -60, 
  -50, -60, 20, -50, 55, 11, 37, 34, 47, -43, 
  11, -33, -18, -128, -1, -60, 44, 11, 48, -20, 
  -77, -128, -128, -77, -8, -128, 13, -50, 32, 9, 
  48, 0, 58, 43, 36, 4, -4, -128, -50, -128, 
  -50, -20, 32, -8, 40, 8, 31, -18, 34, -128, 
  -10, 9, 49, 11, 20, -4, 53, 24, 40, 1, 
  -37, -128, -128, -29, -8, -128, -12, -128, -23, -37, 
  46, 21, -23, 8, 45, -18, 5, -60, -43, -77, 
  -33, -4, 10, -20, 12, -26, 13, -4, 34, -77, 
  22, 4, 26, -2, 6, -29, 31, 5, 47, -23, 
  12, -128, -128, -26, -128, -128, -20, -128, -10, -43, 
  6, 46, 30, -1, 51, 32, -26, -128, -50, -60, 
  -18, 2, -12, 25, -33, 12, 29, -6, 26, -128, 
  -33, -128, -128, -128, 15, -3, 45, -10, 39, 49, 
  64, -128, -128, -60, -50, -128, 11, -18, 7, -7, 
  44, 48, 52, 17, 35, 15, -16, -128, -33, -60, 
  -60, -128, -23, 51, 23, -128, 34, -29, -37, -128, 
  2, -128, -128, -128, 33, -50, -23, -33, -12, 13, 
  35, -128, -43, -77, -37, -128, 6, -128, -33, 4, 
  37, 26, 63, 51, 67, 29, 18, -37, -6, -77, 
  -77, -128, -33, 11, -23, -128, 9, 1, 30, -128, 
  -10, -4, -20, -128, -37, -128, -60, -43, 29, 27, 
  40, -128, -128, -128, -29, -128, -14, -50, 13, -4, 
  33, -12, 34, -3, 15, 17, 24, -50, -77, -128, 
  -128, -128, -50, -128, -128, -37, -23, -128, -29, -128, 
  20, 19, 24, -77, 25, -128, -12, 7, 30, 46, 
  70, -128, -128, -128, -37, -128, 23, 25, 33, -1, 
  27, 4, -18, -128, -77, -128, 12, -37, -77, -128, 
  -43, -128, -77, -128, -128, -128, -33, -128, -43, -128, 
  14, 6, 19, -77, 4, -128, -128, -128, -77, -37, 
  37, -128, -128, -128, 19, -60, -3, -50, -43, -128, 
  -33, -128, -128, -128, 4, 2, -43, -128, -128, -128, 
  0, -37, -20, -128, -128, -128, 44, 43, 27, -128, 
  -10, -3, 6, -128, 5, -128, -6, 2, -6, -128, 
  9, -128, -128, -77, -14, -128, -60, -60, -18, -33, 
  8, -128, -128, -128, -43, -43, -26, -128, -77, -128, 
  45, 34, -43, -128, -128, -60, 65, 54, 39, -128, 
  -50, -128, 27, -14, 34, -7, 4, -128, -29, -128, 
  -128, -128, -128, -128, -60, -128, -29, -77, -3, -50, 
  -26, -128, -128, -128, -29, -128, -128, -128, -128, -128, 
  21, 4, -43, -128, -128, 0, 65, 51, 14, -128, 
  -128, -128, 11, -26, 19, 23, 46, -128, -6, -20, 
  -128, -128, -128, -128, -128, -128, -23, -43, -77, -128, 
  -33, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  30, 5, -18, -128, -43, -29, 81, 69, 58, -128, 
  2, -50, -37, -60, 13, 47, 58, -26, 17, -12, 
  -26, -128, -128, -128, 5, -128, 1, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  37, 11, -128, -128, 14, 6, 45, 2, 17, -128, 
  -77, -128, -128, -128, -12, 18, 52, -128, -10, -20, 
  -60, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -128, -43, -128, 10, 11, 72, 57, -128, -128, 
  -128, -128, -128, -128, -33, 26, 41, -128, -77, -128, 
  -77, -128, -128, -128, -128, -128, -128, -77, 0, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -43, -128, 15, 22, 61, 32, -43, -128, 
  -60, -1, 39, -43, 18, -23, 47, -4, -128, -128, 
  -128, -128, -128, -60, -43, -128, -50, -128, -18, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -128, 
  -128, -128, -23, -77, -1, -12, 40, -7, -77, -128, 
  0, 22, 36, -18, 31, 35, 65, 8, -23, -128, 
  -128, -128, -128, -128, -26, -128, -128, -128, 4, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -20, -128, -43, -128, 49, 14, 20, -128, 
  -26, -128, -128, -128, -33, -6, 40, -128, -33, -128, 
  -128, -128, -128, -128, -60, -128, -43, -77, 34, -23, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -77, 
  -128, -128, -37, -128, -50, -128, -128, -128, -60, -128, 
  112, 90, 98, 66, 89, 49, 61, -7, 4, -26, 
  -128, -128, -128, -128, -12, -60, -37, -128, -26, -128, 
  59, 42, 52, 24, 33, -128, -128, -77, 9, 1, 
  -26, -77, -20, -128, -77, -128, -128, -128, -128, -128, 
  122, 102, 122, 100, 121, 97, 107, 75, 69, 4, 
  12, -29, -50, 12, 66, 42, 0, -50, 77, 80, 
  117, 100, 120, 99, 120, 94, 100, 80, 113, 95, 
  96, 55, 50, 34, 15, -128, -128, -128, 25, 35, 
  104, 94, 121, 99, 117, 85, 109, 90, 92, 46, 
  61, 53, 47, 58, 76, 25, 45, 36, 101, 90, 
  116, 95, 113, 90, 115, 90, 107, 87, 111, 92, 
  112, 83, 91, 77, 69, 29, -3, -128, 71, 71, 
  98, 84, 115, 83, 110, 91, 108, 92, 107, 84, 
  91, 80, 93, 69, 75, 47, 64, 65, 81, 83, 
  109, 80, 110, 88, 111, 87, 104, 79, 107, 79, 
  104, 81, 109, 83, 81, 20, -29, -128, 63, 62, 
  98, 72, 108, 84, 112, 95, 108, 89, 109, 87, 
  100, 80, 102, 89, 101, 89, 110, 74, 108, 93, 
  112, 79, 102, 85, 100, 82, 95, 89, 103, 79, 
  94, 74, 103, 69, 86, 51, 45, -14, 75, 67, 
  86, 41, 90, 65, 109, 94, 112, 76, 108, 92, 
  103, 77, 103, 89, 108, 87, 110, 91, 114, 90, 
  94, 62, 91, 64, 78, 51, 92, 87, 95, 63, 
  70, 75, 102, 73, 92, 59, 65, 9, 87, 62, 
  82, 28, 82, 56, 100, 78, 107, 96, 115, 94, 
  105, 86, 113, 91, 111, 89, 115, 97, 119, 84, 
  79, 68, 92, 57, 67, 30, 106, 84, 95, 63, 
  73, 76, 98, 77, 92, 72, 88, 50, 93, 69, 
  75, 21, 75, 42, 87, 57, 104, 88, 107, 81, 
  104, 79, 102, 84, 106, 84, 105, 89, 106, 67, 
  71, 48, 85, 26, 31, 5, 103, 69, 89, 50, 
  60, 67, 91, 58, 87, 70, 86, 50, 85, 59, 
  70, 11, 67, 25, 77, 35, 100, 77, 97, 69, 
  102, 75, 97, 72, 98, 75, 99, 79, 93, 54, 
  62, 46, 80, 19, 14, -20, 88, 39, 70, -3, 
  16, 43, 80, 65, 86, 56, 70, 32, 72, 49, 
  70, 27, 65, 26, 70, 0, 89, 57, 90, 58, 
  98, 69, 85, 65, 88, 67, 94, 71, 82, 49, 
  74, 30, 76, 7, -18, -50, 72, 15, 39, -16, 
  36, -128, 59, 34, 69, 31, 55, 11, 57, 42, 
  64, -29, 11, -128, 6, -128, 43, -128, 16, -128, 
  67, 25, 51, -60, 54, -10, 47, -128, 16, -128, 
  -26, -128, 42, -60, -128, -128, 10, -128, -128, -128, 
  -128, -128, -60, -43, 56, 17, 47, -33, 20, -29, 
  -14, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -16, -128, -33, -128, -128, -128, 
  22, -128, 11, -26, 75, 65, 73, 59, 80, 57, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -16, -60, 15, -128, -60, -128, 
  47, 25, 46, 47, 83, 58, 77, 69, 92, 68, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  10, -10, 54, 32, 74, 56, 83, 65, 88, 69, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -128, -128, -128, 
  11, -128, 35, 39, 73, 50, 84, 68, 89, 65, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  21, -77, 38, -7, 70, 47, 65, 28, 74, 50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  19, -77, -7, 6, 69, 44, 63, 39, 83, 51, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  4, -14, -7, 9, 57, -4, 45, 24, 74, -7, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -50, 17, -16, 63, -23, 55, 14, 63, -23, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -1, -16, -14, -77, 40, 1, 54, 9, 44, -2, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, 5, -29, 43, -8, 66, -8, 10, -16, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, -128, -7, -128, -33, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
