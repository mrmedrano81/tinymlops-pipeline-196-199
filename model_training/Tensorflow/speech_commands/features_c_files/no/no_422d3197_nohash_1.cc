/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/422d3197_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_422d3197_nohash_1.cc" \
 */
#include "no_422d3197_nohash_1.h"


const int g_no_422d3197_nohash_1_width = 40;
const int g_no_422d3197_nohash_1_height = 49;
alignas(16) const signed char g_no_422d3197_nohash_1_data[] = {
  104, 85, 100, 90, 106, 90, 102, 80, 97, 89, 
  106, 91, 94, 89, 104, 87, 102, 90, 106, 90, 
  101, 85, 95, 85, 100, 84, 102, 87, 96, 87, 
  100, 90, 105, 89, 100, 85, 97, 85, 99, 83, 
  103, 86, 83, 75, 99, 78, 84, 74, 97, 74, 
  91, 65, 96, 79, 93, 78, 80, 64, 86, 76, 
  96, 80, 90, 74, 94, 78, 97, 78, 93, 77, 
  93, 64, 82, 72, 94, 74, 94, 75, 89, 68, 
  98, 78, 85, 56, 89, 69, 87, 76, 96, 68, 
  88, 72, 98, 71, 85, 66, 82, 54, 77, 59, 
  85, 69, 94, 72, 90, 69, 75, 54, 85, 62, 
  85, 62, 84, 63, 82, 60, 82, 59, 79, 59, 
  66, 43, 91, 77, 87, 44, 87, 70, 86, 39, 
  74, 60, 77, 57, 81, 41, 91, 64, 78, 42, 
  70, 62, 83, 60, 60, 63, 82, 59, 82, 57, 
  74, 39, 71, 53, 81, 62, 77, 46, 66, 39, 
  79, 50, 82, 39, 74, 57, 83, 41, 79, 74, 
  78, 34, 73, 37, 78, 64, 79, 61, 71, 22, 
  67, 46, 72, 63, 79, 43, 78, 43, 78, 50, 
  65, 49, 69, 35, 70, 41, 70, 40, 66, 46, 
  80, 35, 37, 41, 77, 50, 85, 65, 45, -77, 
  54, 60, 82, 42, 81, 52, 80, 63, 65, 39, 
  64, 47, 65, 43, 67, 52, 67, 47, 76, 28, 
  58, 36, 69, 47, 69, 37, 55, 46, 74, 27, 
  80, 52, 63, 37, 74, 57, 69, 43, 70, 28, 
  69, -7, 51, 36, 40, 37, 78, 35, 72, 40, 
  70, 20, 69, 23, 59, 37, 50, 15, 64, 43, 
  59, 4, 62, 31, 66, 35, 69, 53, 74, 42, 
  48, 33, 74, -8, -18, -2, 69, 31, 68, 4, 
  49, 18, 67, 2, 55, 13, 61, 26, 63, 27, 
  64, 7, 68, 37, 57, 35, 72, 29, 47, 27, 
  57, 31, 68, 30, 57, 18, 55, -3, 63, 15, 
  72, 5, 33, -4, 57, 21, 46, 5, 50, 6, 
  46, 40, 59, 44, 64, -43, 35, 22, 57, 4, 
  32, -18, 38, 12, 61, -16, 50, 8, 62, 31, 
  69, 33, 46, 4, 62, 37, 66, -6, 55, -1, 
  70, 43, 68, 13, 64, 44, 70, 27, 48, -77, 
  40, -50, 52, -60, 49, 36, 67, 29, 59, 39, 
  67, -8, 49, -4, 60, -10, 52, 41, 60, 33, 
  62, 40, 50, 7, 55, 2, 59, 15, 49, 1, 
  75, 40, 76, 47, 61, 9, 51, 16, 56, 6, 
  62, -4, 49, -6, 54, 14, 57, 31, 65, 9, 
  47, 7, 57, -6, 51, 24, 48, -2, 44, 10, 
  55, 16, 55, 16, 24, 1, 41, -33, 53, 6, 
  9, -128, 42, 21, 48, -60, 51, -29, -1, -3, 
  43, -50, 8, 25, 63, -128, 27, -8, 42, -8, 
  23, 11, 47, 6, 47, -8, 57, 31, 25, -50, 
  49, 4, 52, 7, 40, -16, 24, 4, 46, -8, 
  57, 39, 53, -4, 34, -128, 12, -128, -128, -128, 
  46, 1, 58, -26, 19, -77, 47, -1, 48, -8, 
  53, -6, 34, 11, 20, -20, 44, -77, 31, -128, 
  24, -43, 50, -10, 45, -23, 37, 14, 32, -7, 
  42, -37, 51, -77, -128, -128, 35, -23, 47, -4, 
  50, -77, 11, -50, 17, -33, 30, -128, 36, 1, 
  60, 8, 52, -12, 42, 9, 43, 26, 39, -43, 
  43, -128, 51, -18, 36, -50, 27, -7, 34, -33, 
  34, -50, 17, -23, 25, -128, -29, 20, 63, -1, 
  19, -7, 27, 4, 19, -23, 35, -60, 17, -18, 
  51, -60, 45, -26, 46, -23, 24, -7, 37, -29, 
  45, -8, 24, -33, 47, -1, 47, -8, 36, -60, 
  -6, -128, 52, 29, 53, -26, 24, -128, 24, 21, 
  35, -128, 5, -60, 51, -10, 4, -60, 28, -60, 
  39, -29, 42, 16, 49, 9, 31, -128, 39, -20, 
  31, 12, 49, -16, 42, -29, 34, -60, 39, -20, 
  71, 64, 87, 11, 57, -6, 53, 24, 57, -29, 
  54, -128, -10, -128, 11, 4, 31, -128, 39, -20, 
  27, -20, 49, -8, 32, -2, 47, -29, 48, -18, 
  24, -26, 11, -50, 35, -16, 35, -77, 22, -43, 
  107, 95, 109, 1, 66, 60, 51, -60, 44, 10, 
  -3, -33, 37, -3, 37, -50, 15, -14, 26, -128, 
  26, -8, 40, -50, 44, -10, 39, -26, 44, 5, 
  44, 17, 34, -12, 2, -37, 32, -4, 4, -43, 
  101, 79, 79, 15, 90, 63, -3, 8, 26, -1, 
  60, -128, 8, -128, -18, -128, 36, -16, 43, -18, 
  14, -128, 39, -60, 28, -20, 22, -77, 34, -128, 
  44, 11, 54, -16, 41, -4, 32, -60, 16, -43, 
  90, 69, 84, 51, 86, 75, 88, 75, 89, 50, 
  60, 37, 69, -2, 11, -128, 30, -7, 68, 70, 
  89, 42, 55, 6, 52, 46, 74, 11, 75, 59, 
  70, 39, 53, -128, 37, -16, 25, -50, 13, -60, 
  75, 52, 72, -18, 97, 78, 73, 76, 103, 52, 
  102, 77, 49, -3, 45, 21, 73, 52, 92, 78, 
  100, 28, 60, 46, 78, 59, 80, 25, 64, 67, 
  90, 40, 58, 24, 39, -3, 50, 17, 26, -43, 
  67, 38, 62, 12, 88, 60, 41, 79, 100, 56, 
  103, 75, 80, 53, 58, 39, 83, 63, 96, 67, 
  85, 43, 59, 47, 80, 66, 84, 38, 38, 48, 
  76, 9, 22, -43, 52, 37, 51, -4, 32, -128, 
  65, 17, 31, 49, 82, 39, 74, 83, 94, 81, 
  103, 60, 104, 67, 84, 52, 82, 66, 81, 65, 
  70, 53, 78, 47, 75, 61, 64, 40, 71, 51, 
  74, 2, 14, -20, 60, 39, 62, 18, 20, -77, 
  60, -4, -29, 51, 78, 24, 87, 76, 86, 81, 
  99, 53, 98, 56, 86, 61, 84, 73, 82, 47, 
  59, 42, 65, 47, 85, 64, 68, 45, 60, 51, 
  71, 14, 47, -60, 41, 21, 55, 15, 15, -77, 
  58, -23, -128, 46, 70, -12, 97, 68, 65, 80, 
  90, 58, 89, 57, 90, 69, 79, 70, 72, 31, 
  52, 7, 45, 35, 71, 43, 72, 32, 69, 42, 
  67, 30, 43, -43, 47, 16, 48, 21, 19, -37, 
  55, -33, -26, 44, 67, -26, 92, 62, 61, 68, 
  80, 50, 81, 48, 79, 65, 78, 58, 48, -37, 
  20, -23, 34, 25, 59, 37, 68, 16, 58, 8, 
  51, -3, 1, -50, 31, -10, 45, 1, 37, -60, 
  49, -128, -128, 49, 64, -77, 91, 53, 46, 59, 
  67, 36, 60, 49, 71, 63, 71, 29, -26, -128, 
  2, -128, 46, -50, 26, 29, 52, 4, 46, -26, 
  44, -128, -50, -128, 4, -128, 1, -60, 10, -29, 
  52, -77, -128, 48, 53, -128, 90, 37, 37, 37, 
  20, 35, 48, 37, 62, 55, 38, -128, 34, -128, 
  -37, -60, -23, -128, 18, 10, 14, -128, 17, -50, 
  21, -128, 33, -77, -33, -128, 1, -128, -7, -128, 
  46, -128, -128, 41, 48, -128, 80, 10, 16, -4, 
  -60, 1, 4, -6, 47, 25, -43, -128, -37, -128, 
  -128, -128, -23, -128, 11, -128, -50, -128, 4, -77, 
  -60, -128, 14, -128, -43, -128, -1, -128, 14, -128, 
  43, -128, -128, 21, 39, -128, 72, -7, -37, -77, 
  -128, -77, -43, -50, -4, -128, -128, -128, -128, -128, 
  -128, -128, -23, -128, -50, -128, -128, -128, -77, -128, 
  -128, -128, -16, -77, -18, -128, -60, -128, -20, -77, 
  35, -128, -128, -29, 13, -128, 60, -60, -60, -128, 
  -128, -128, -77, -14, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -14, -128, 
  -128, -128, 5, -60, -3, -128, -43, -128, -20, -128, 
  36, -128, -128, -33, 1, -128, 40, -128, -128, -128, 
  -128, -128, -60, -26, -14, -128, -128, -128, -128, -128, 
  -128, -128, -26, -128, -128, -128, -26, -128, -128, -128, 
  -60, -128, -12, -128, -77, -128, 1, -77, 9, -128, 
  26, -128, -128, -128, -128, -128, -10, -128, -128, -128, 
  -128, -128, -128, -43, -77, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, -128, -77, -128, -128, -128, -37, -128, 
  -18, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -77, -77, -128, -37, -128, 0, -128, 
  -128, -128, -16, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, -33, -128, -77, -128, -23, -128, -10, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -20, -128, -128, -128, -23, -128, -14, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -29, -128, 
  -128, -128, -50, -77, -14, -128, -3, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -77, -128, -14, -37, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
