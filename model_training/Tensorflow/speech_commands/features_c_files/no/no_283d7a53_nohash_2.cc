/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/283d7a53_nohash_2.wav" \
 * --output_c_file="features_c_files/no/no_283d7a53_nohash_2.cc" \
 */
#include "no_283d7a53_nohash_2.h"


const int g_no_283d7a53_nohash_2_width = 40;
const int g_no_283d7a53_nohash_2_height = 49;
alignas(16) const signed char g_no_283d7a53_nohash_2_data[] = {
  94, 79, 93, 82, 90, 74, 87, 80, 87, 80, 
  87, 82, 90, 78, 81, 69, 84, 80, 79, 75, 
  85, 75, 88, 67, 81, 76, 87, 68, 83, 78, 
  76, 68, 76, 69, 81, 72, 82, 77, 74, 60, 
  97, 80, 90, 81, 86, 67, 67, 31, 77, 69, 
  87, 60, 74, 47, 68, 70, 90, 59, 68, 66, 
  70, 60, 77, 74, 80, 61, 77, 66, 78, 53, 
  77, 70, 83, 65, 72, 60, 68, 55, 77, 59, 
  33, 62, 83, 59, 77, 45, 47, 20, 49, 56, 
  78, 51, 76, 71, 87, 49, 55, 54, 67, 42, 
  70, 48, 52, 58, 72, 52, 72, 63, 70, 38, 
  62, 49, 60, 55, 78, 49, 56, 61, 74, 49, 
  94, 69, 50, 47, 76, 71, 86, 72, 83, 62, 
  65, 47, 79, 49, 63, 34, 60, 43, 59, 50, 
  74, 36, 76, 54, 73, 40, 74, 55, 56, 44, 
  62, 54, 70, 53, 57, 47, 69, 43, 67, 34, 
  86, 58, 61, 42, 77, 60, 66, 60, 80, 14, 
  54, 52, 68, 36, 80, 60, 62, 4, 75, 55, 
  80, 51, 61, 39, 69, 50, 60, 23, 60, 47, 
  63, 47, 67, 17, 52, 30, 71, 39, 64, 45, 
  52, -77, 42, 25, 55, 25, 79, 44, 66, 25, 
  44, 23, 65, 42, 59, 31, 62, 40, 70, 47, 
  46, 14, 67, 30, 56, 32, 55, 48, 60, 45, 
  56, 16, 62, 24, 44, 33, 55, 34, 57, 28, 
  59, 57, 93, 52, 84, 48, 69, 25, 54, 34, 
  73, 19, 54, 40, 57, 23, 45, 42, 65, 14, 
  43, 30, 41, 37, 56, 25, 52, 12, 60, 27, 
  63, 15, 45, 2, 52, 24, 53, 38, 50, 23, 
  64, 39, 62, 12, 53, 26, 68, 34, 69, 19, 
  39, -20, 31, -23, 47, 34, 67, 20, 55, -23, 
  66, 54, 82, 62, 84, 74, 100, 77, 86, 44, 
  53, 22, 58, 29, 45, 25, 49, 11, 57, 6, 
  4, -2, 56, -128, 49, -3, 34, 15, 51, -12, 
  28, 23, 49, -1, 52, 4, 45, -14, 57, 24, 
  45, 4, 23, -2, 43, 9, 51, -2, 46, 9, 
  47, -37, 31, -3, 53, 2, 45, 7, 39, -60, 
  26, -1, 40, -128, 28, -37, 25, -50, 44, -8, 
  51, 1, 68, 11, 45, -18, 40, 9, 41, 6, 
  40, -37, 49, -6, 37, 2, 15, -77, 34, 8, 
  49, 2, 47, 2, 46, 7, 42, -8, 43, 14, 
  40, -8, 57, -7, 50, 23, 55, 1, 21, -18, 
  48, 19, 29, -50, 42, -10, 25, -43, -3, -128, 
  32, 19, 38, -33, 27, -26, 34, -20, 35, -128, 
  40, -23, 17, 6, 54, -20, 47, 4, 42, 18, 
  7, -128, 54, 28, 40, -14, 30, 15, 58, -8, 
  35, -128, 35, -37, 50, 11, 66, 12, 54, 15, 
  44, -2, 43, -60, 47, -37, 17, -77, 31, -4, 
  45, -14, 43, 9, 39, -20, 19, -60, 40, -37, 
  -7, -128, -37, -29, 27, 2, 65, -12, 37, 25, 
  50, 5, 2, -77, 25, -33, 19, -43, 40, -23, 
  43, 1, 45, -20, 35, -33, -14, -128, 20, -12, 
  38, -16, 25, 2, 43, -29, 34, -23, 29, -37, 
  102, 85, 105, 70, 90, 57, 74, 36, 38, -60, 
  44, -33, 38, 16, -2, -33, 45, 15, 52, 23, 
  55, -60, 68, 22, 27, 38, 59, -128, 37, 1, 
  41, -10, 31, -23, 42, -3, 45, 0, 42, -4, 
  98, 90, 110, 67, 88, 72, 90, 42, 57, 21, 
  58, 19, 44, -128, -20, -128, 4, 16, 43, 19, 
  42, 39, 50, -23, 24, 37, 48, -4, 14, -37, 
  25, -3, 57, 2, 35, 10, 33, -23, 33, -12, 
  92, 82, 104, 66, 79, 65, 87, 36, 51, 45, 
  46, 16, 47, -37, 47, -14, -18, -26, 69, 39, 
  54, 14, 69, 37, 47, 34, 60, -1, 38, 15, 
  49, -10, 30, -50, 21, -43, 41, -20, 60, 30, 
  91, 75, 99, 65, 85, 63, 85, 55, 75, 35, 
  46, 42, 68, -20, 56, 27, 34, 40, 68, 42, 
  65, 39, 77, 34, 55, 54, 68, 25, 50, -20, 
  -1, -43, 33, -20, 17, 14, 46, -4, 67, 32, 
  93, 72, 100, 79, 104, 90, 115, 96, 115, 92, 
  96, 80, 101, 70, 91, 65, 101, 85, 119, 94, 
  106, 78, 89, 69, 104, 89, 108, 93, 113, 80, 
  85, 65, 68, -4, 19, 14, 49, 21, 69, 29, 
  88, 64, 87, 67, 92, 76, 96, 90, 110, 85, 
  104, 76, 94, 80, 86, 75, 96, 90, 95, 67, 
  84, 57, 73, 53, 95, 69, 92, 69, 104, 84, 
  79, 48, 74, 60, 52, 16, 50, 43, 79, 35, 
  80, 54, 79, 57, 85, 64, 87, 79, 97, 77, 
  100, 73, 91, 70, 88, 73, 102, 70, 59, 30, 
  53, 47, 63, 8, 85, 42, 75, 52, 95, 70, 
  75, 11, 43, 4, 32, -33, 40, 47, 64, -12, 
  75, 48, 74, 47, 75, 54, 77, 65, 88, 66, 
  92, 66, 87, 67, 87, 80, 97, 60, 55, 11, 
  68, 38, 65, 54, 90, 51, 72, 55, 82, 59, 
  73, 41, 61, 15, 51, 37, 44, 60, 89, 54, 
  72, 39, 63, 41, 71, 50, 75, 46, 77, 51, 
  80, 50, 77, 54, 94, 68, 63, 4, -128, -128, 
  35, -23, 35, -8, 77, 26, 57, 30, 73, 29, 
  39, 20, 59, -29, 18, -10, 28, 43, 73, 41, 
  67, 29, 49, 31, 69, 42, 70, 22, 74, 19, 
  70, 43, 78, 51, 93, 43, 39, -128, -128, -128, 
  16, 2, 45, 25, 58, -33, 39, -23, 46, -128, 
  22, -29, 16, -128, 24, -16, 28, 15, 55, 9, 
  65, 12, 23, 4, 67, 25, 58, -128, 59, -128, 
  49, 15, 66, 39, 22, -128, -128, -128, -128, -128, 
  -128, -128, 29, -128, -60, -128, -77, -128, 42, -29, 
  1, -18, 22, -128, 25, -43, 16, -77, 9, -77, 
  62, -6, 1, -12, 70, 25, 47, -128, 39, -128, 
  49, 17, 65, 20, 12, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -33, -128, -128, -128, -37, -128, 
  -33, -33, -37, -128, 9, -77, 29, -23, 32, -77, 
  56, -20, -4, 1, 69, 21, -77, -128, 20, -128, 
  47, 29, 65, -26, -128, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, -128, -128, -128, -128, -10, -128, 
  -77, -128, -33, -128, 19, -128, -12, -128, -50, -128, 
  51, -37, -6, 16, 70, 16, -128, -128, 8, -128, 
  40, 2, 44, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -20, -60, -43, -128, -128, -128, 
  50, -77, -23, -8, 66, -14, -128, -128, -128, -128, 
  57, -14, -23, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -50, -128, -7, -128, 1, -128, -128, -128, 
  44, -128, -128, -128, 46, -128, -128, -128, -128, -128, 
  46, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -10, -128, -10, -128, -128, -128, 
  4, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 1, -128, -18, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -20, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -43, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -16, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -26, -37, 1, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -8, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, 2, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -77, -128, -33, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -37, -128, -37, -128, -16, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
