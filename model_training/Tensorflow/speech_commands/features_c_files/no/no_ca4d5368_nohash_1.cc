/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/ca4d5368_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_ca4d5368_nohash_1.cc" \
 */
#include "no_ca4d5368_nohash_1.h"


const int g_no_ca4d5368_nohash_1_width = 40;
const int g_no_ca4d5368_nohash_1_height = 49;
alignas(16) const signed char g_no_ca4d5368_nohash_1_data[] = {
  120, 98, 117, 99, 117, 94, 113, 94, 97, 90, 
  107, 90, 98, 82, 99, 91, 109, 94, 104, 82, 
  98, 85, 99, 90, 99, 86, 100, 80, 88, 82, 
  94, 76, 79, 78, 89, 79, 86, 75, 83, 61, 
  109, 80, 78, 34, 78, 66, 96, 69, 83, 53, 
  91, 81, 98, 84, 96, 78, 88, 64, 90, 79, 
  83, 62, 87, 70, 89, 69, 75, 70, 87, 75, 
  80, 62, 86, 67, 76, 65, 80, 65, 77, 49, 
  86, 69, 97, 65, 76, 45, 40, 23, 88, 63, 
  70, 35, 68, 35, 58, 41, 76, 17, 70, 62, 
  84, 71, 81, 55, 81, 47, 62, 67, 79, 52, 
  82, 62, 80, 51, 79, 61, 68, 60, 77, 48, 
  82, 57, 87, 42, 84, 70, 65, 49, 48, 30, 
  85, 52, 80, 77, 85, 49, 87, 51, 82, 74, 
  84, 38, 65, 45, 77, 49, 72, 44, 69, 53, 
  60, 52, 74, 44, 60, 45, 66, 56, 71, 37, 
  62, 0, 79, 57, 73, 37, 79, 29, -18, 35, 
  62, 11, 60, 57, 81, 47, 67, 46, 65, 2, 
  78, 58, 66, 32, 59, 20, 71, 45, 57, 32, 
  68, 30, 62, 36, 55, 1, 61, 32, 54, 2, 
  57, 25, 60, -20, 67, 15, 54, -23, 58, 41, 
  54, 29, 84, 58, 78, 49, 78, 39, 68, 38, 
  68, 41, 62, 30, 59, 40, 57, 17, 60, 17, 
  54, 35, 60, 5, 43, 15, 54, 35, 57, 22, 
  48, 7, 68, 45, 66, 42, 59, -77, 17, 14, 
  40, 38, 75, 47, 75, 31, 69, 47, 78, 33, 
  56, 34, 66, 27, 65, 44, 58, 37, 58, 2, 
  49, 20, 59, 34, 58, 9, 49, 17, 67, 20, 
  49, -26, 50, 39, 54, 56, 77, 9, 47, -50, 
  46, 34, 73, 31, 59, 47, 76, 32, 47, 15, 
  64, 30, 54, 33, 65, 44, 69, 26, 54, 27, 
  59, 24, 49, 4, 60, 24, 50, 4, 45, 22, 
  19, -77, 47, 26, 57, 24, 67, 31, 55, 44, 
  68, 39, 68, 39, 74, 31, 51, -3, 52, 37, 
  65, 43, 68, 13, 46, 2, 52, 4, 63, 20, 
  50, 2, 52, -6, 53, -23, 45, 23, 56, 7, 
  77, 40, 65, 38, 54, 1, -16, -50, 36, -37, 
  49, 17, 63, -77, 40, 9, 52, -128, 62, -3, 
  16, 2, 50, 12, 52, 36, 65, 24, 61, 19, 
  40, 17, 37, -20, 44, 2, 67, -3, 50, 27, 
  54, -26, 65, 51, 67, -33, 59, 13, 64, 41, 
  49, -128, 40, -33, 54, 4, 41, -60, 39, -26, 
  36, -29, 35, -14, 44, -4, 40, -29, 35, -23, 
  16, -43, 32, -1, 21, -20, 33, -43, 14, -23, 
  -4, -77, 31, 11, 68, 10, 61, 20, 44, -1, 
  55, 11, -26, -37, 41, -128, 39, -23, 39, 14, 
  39, 34, 50, -8, 32, -20, 19, -4, 45, 9, 
  35, -60, 35, 4, 32, -29, 39, 19, 39, -12, 
  49, -26, 71, 37, 49, 36, 49, -14, 49, 52, 
  71, 38, 37, -128, 46, 8, 38, -128, 19, -128, 
  -18, -37, 59, 19, 49, -50, 29, -128, 9, -50, 
  -14, -128, 28, -60, 35, -8, 26, 0, 45, -26, 
  53, -60, 5, -20, 50, 19, 62, -23, 25, -43, 
  67, 39, 32, 11, 78, 25, 52, 32, 55, -33, 
  54, 7, 53, 1, 37, -37, 39, -37, 19, -29, 
  34, -7, 14, -50, 4, -6, 44, -20, 38, -8, 
  18, -16, 29, -128, 44, -128, 7, -20, 40, -33, 
  -50, -128, 42, -6, 40, -128, 2, 19, 52, -77, 
  27, -50, 14, -128, 27, -128, 29, -12, 5, -128, 
  35, -12, -2, 2, 40, -128, 36, -10, 44, -8, 
  37, -10, 0, -128, 56, 35, 40, -128, 41, -8, 
  29, -128, 63, 31, 48, -128, 50, 5, 51, -128, 
  -14, 1, 54, 23, 50, -128, 50, 44, 59, 15, 
  39, -16, 44, -43, 16, -12, 40, -18, 2, -128, 
  -77, -128, 50, 2, 34, -50, 29, -37, -20, -6, 
  25, -3, 45, 4, -20, -128, -128, -23, 31, -29, 
  31, -128, 29, -3, 24, -12, 31, -43, 30, -20, 
  39, -7, 30, 0, 27, -37, 14, -26, 46, -16, 
  25, 30, 57, 29, 60, 4, 9, -77, 40, -23, 
  2, -7, 33, 5, 55, -128, -60, -128, 15, -60, 
  0, -128, -23, 2, 17, -18, 27, -7, 40, -128, 
  9, -18, 11, -77, 23, -29, 40, -10, 21, -33, 
  44, -60, 19, -60, 45, -37, 40, -77, 43, 35, 
  60, 17, 50, -37, 7, -77, -7, -50, 10, -43, 
  15, 20, 52, -2, 32, -20, 42, -23, 19, -26, 
  21, -77, 11, -77, -14, -50, 22, -60, -1, -128, 
  100, 76, 89, 56, 71, 59, 67, 42, 69, 28, 
  12, -128, 50, 29, 46, 12, 49, 29, 55, 12, 
  49, 34, 75, 51, 52, -3, 40, -4, 56, 40, 
  70, 43, 53, -2, 47, 19, 34, -16, 40, -1, 
  86, 79, 100, 71, 107, 75, 86, 43, 59, 19, 
  23, -7, 24, 8, 53, 29, 40, 31, 66, 21, 
  58, 59, 83, 71, 71, 13, 55, -33, 75, 68, 
  78, 47, 75, 45, 40, -10, 53, 21, 48, 34, 
  80, 81, 105, 72, 96, 60, 69, 44, 76, 17, 
  54, -7, 54, -128, -14, -8, 67, 46, 47, 27, 
  82, 69, 95, 67, 61, 37, 53, -8, 69, 50, 
  59, 39, 65, -16, 51, 9, 56, 29, 60, 32, 
  86, 78, 107, 72, 94, 81, 103, 85, 111, 65, 
  75, 69, 75, 62, 85, 77, 97, 77, 91, 55, 
  75, 69, 87, 66, 79, 47, 71, 69, 92, 73, 
  87, 67, 87, 69, 93, 70, 90, 71, 100, 80, 
  80, 74, 100, 67, 97, 74, 110, 89, 110, 80, 
  96, 78, 85, 64, 92, 73, 80, 59, 77, 55, 
  61, 28, 65, 55, 77, 40, 73, 68, 92, 45, 
  52, 69, 96, 83, 95, 67, 80, 54, 90, 63, 
  74, 65, 94, 60, 93, 69, 102, 82, 106, 78, 
  94, 82, 102, 77, 100, 83, 68, 44, 65, 48, 
  75, 58, 34, -23, 68, 36, 79, 71, 96, 0, 
  52, 77, 99, 77, 97, 76, 79, 24, 79, 66, 
  67, 54, 87, 56, 89, 67, 102, 78, 98, 72, 
  93, 70, 95, 81, 107, 43, 57, 11, 44, 20, 
  57, 39, 57, -50, 45, 40, 72, 74, 87, 31, 
  46, 64, 92, 67, 82, 66, 79, 43, 69, 52, 
  66, 14, 75, 52, 89, 69, 100, 77, 87, 65, 
  91, 56, 100, 75, 74, 9, 22, -128, 32, -29, 
  55, -8, 28, -128, 26, -14, 46, 36, 64, 21, 
  50, 43, 77, 50, 67, 42, 71, 4, 55, 32, 
  72, -43, 61, 46, 92, 66, 87, 60, 77, 56, 
  84, 64, 88, 53, 52, -128, -128, -128, 23, -33, 
  59, -43, 32, -20, 17, -16, 43, 1, 55, -128, 
  42, 14, 73, 29, 64, 47, 67, 16, 59, 39, 
  64, 14, 68, 50, 90, 64, 55, 17, 67, 54, 
  89, 66, 78, -128, 14, -128, -128, -128, -23, -128, 
  43, -128, 34, -37, 11, -128, 16, -8, 50, -128, 
  33, 9, 64, 4, 46, -18, 59, 20, 53, 39, 
  57, 16, 68, 50, 90, 64, 47, -10, 67, 50, 
  86, 37, 58, -128, -128, -128, -60, -77, 27, -37, 
  5, -128, 23, -128, -50, -16, 49, -128, 1, -128, 
  1, -77, 49, -128, 45, 15, 47, 4, 46, 0, 
  47, 11, 63, 50, 87, 56, -33, -128, 63, 41, 
  77, -3, 31, -128, -128, -128, -16, -128, -37, -128, 
  -128, -128, -43, -128, -128, -128, -7, -128, -29, -128, 
  -128, -128, 36, -77, 33, -43, 36, -14, 32, -12, 
  41, 22, 57, 46, 79, 41, -37, -128, 55, 15, 
  42, -60, -60, -128, -128, -128, -29, -128, -43, -128, 
  -7, -128, -23, -128, -50, -128, 2, -128, -33, -128, 
  -43, -128, 32, -128, -8, -128, 9, -128, 8, -43, 
  32, -29, -2, -37, -18, -128, 34, -128, -77, 20, 
  36, -128, -128, -128, -128, -128, -77, -128, 28, -37, 
  24, -128, -3, -128, -33, -128, -26, -128, -26, -128, 
  -2, -128, -128, -128, -8, -50, 18, -128, -37, -128, 
  -128, -128, -33, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -8, -128, 21, -77, 
  13, -128, -33, -128, -14, -128, -3, -128, -77, -128, 
  -29, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -128, -50, -37, 
  14, -128, -128, -128, 8, -77, -77, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 31, -23, 
  15, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -8, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -12, -128, -128, -128, -18, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -26, -128, 
  -37, -128, -128, -128, 4, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -77, -128, 
  -50, -128, -128, -128, -60, -128, -18, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -4, -128, 
  -128, -128, -128, -128, -128, -128, -14, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 25, -77, -50, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -4, -128, -77, -128, 
  -33, -128, -128, -128, -60, -128, -50, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -60, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
