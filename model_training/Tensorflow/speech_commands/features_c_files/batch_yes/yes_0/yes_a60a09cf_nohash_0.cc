/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/a60a09cf_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_a60a09cf_nohash_0.cc" \
 */
#include "yes_a60a09cf_nohash_0.h"


const int g_yes_a60a09cf_nohash_0_width = 40;
const int g_yes_a60a09cf_nohash_0_height = 49;
alignas(16) const signed char g_yes_a60a09cf_nohash_0_data[] = {
  107, 94, 101, 88, 100, 86, 95, 73, 79, 73, 
  94, 83, 93, 71, 85, 80, 95, 80, 89, 82, 
  91, 88, 92, 84, 92, 79, 89, 81, 90, 85, 
  82, 86, 91, 83, 95, 81, 88, 79, 87, 73, 
  101, 84, 94, 60, 77, 69, 78, 68, 87, 73, 
  79, 59, 84, 75, 88, 70, 81, 70, 87, 76, 
  96, 64, 80, 64, 87, 71, 82, 82, 92, 69, 
  91, 72, 94, 77, 85, 69, 81, 67, 79, 52, 
  87, 62, 61, 53, 69, 45, 77, 69, 80, 65, 
  79, 60, 69, 51, 68, 61, 82, 63, 74, 59, 
  87, 69, 85, 39, 66, 56, 74, 57, 74, 61, 
  82, 49, 81, 70, 96, 77, 92, 64, 75, 54, 
  73, 62, 85, 39, 73, 43, 84, 64, 87, 64, 
  84, 63, 75, 43, 74, 56, 65, 54, 77, 45, 
  75, 55, 74, 51, 78, 65, 79, 47, 74, 44, 
  78, 53, 81, 40, 61, 35, 75, 41, 72, 57, 
  73, 34, 69, 44, 86, 61, 74, 45, 42, 48, 
  69, 46, 76, 49, 50, 24, 69, -6, 79, 56, 
  64, 19, 70, 4, 49, -8, 62, 38, 77, 44, 
  65, 29, 62, 35, 59, 34, 60, 39, 62, 30, 
  60, -3, 84, 59, 71, 34, 67, 60, 57, 50, 
  73, 32, 66, 49, 67, 57, 70, 45, 51, 48, 
  80, 43, 61, 47, 64, 35, 56, 40, 73, 30, 
  60, -2, 34, -10, 54, 22, 50, 27, 61, 1, 
  67, 14, 51, 44, 74, 59, 67, 36, 72, -8, 
  38, 6, 48, 11, 68, 24, 52, 32, 60, 28, 
  50, 6, 52, 26, 35, 14, 51, 16, 68, 19, 
  62, 40, 54, 11, 45, 1, 46, 26, 59, 25, 
  58, 5, 61, 42, 62, 9, 57, 46, 59, 34, 
  72, 12, 74, 44, 54, 7, 49, 25, 57, 19, 
  44, 32, 62, 39, 59, 25, 65, 30, 59, -6, 
  65, 31, 50, 56, 86, 58, 71, 23, 55, 24, 
  67, 21, 52, 2, 62, 20, 69, 53, 80, 0, 
  17, 38, 65, 19, 73, 25, 60, 37, 53, -18, 
  29, 0, 49, -18, 44, -1, 44, 9, 55, -6, 
  14, -128, 32, -20, 33, -20, 45, 4, 43, 2, 
  25, -37, 36, 34, 73, 27, 38, -6, 47, -128, 
  57, 12, 41, 36, 56, 30, 49, -12, 54, 4, 
  23, -77, 60, 13, 50, -33, 45, -8, 22, -37, 
  49, -12, 40, -29, 19, -37, 30, -2, 49, -8, 
  62, -26, 46, -26, 59, 4, 36, -43, 43, 19, 
  44, -26, 1, 14, 74, 18, 25, 0, 46, 28, 
  45, -23, 52, -14, 47, -3, 72, 47, 71, 72, 
  97, 72, 93, 79, 94, 66, 78, 25, 54, 11, 
  43, -60, 63, 34, 52, -16, 34, -23, 4, -1, 
  55, 9, 53, 34, 0, 6, 52, -3, 21, -77, 
  31, -4, 58, 11, 49, -16, 42, -128, 7, 0, 
  49, 20, 34, -128, 38, 1, 24, -23, 38, -14, 
  54, 26, 52, -128, -33, -33, 27, -50, 49, 43, 
  46, 26, 35, 1, 60, -23, 25, -4, 7, -77, 
  41, 6, 28, 5, 38, 11, 54, -128, -2, -128, 
  16, -60, 5, -128, -20, -128, 22, -20, 31, 2, 
  29, -14, 40, 1, 60, -16, 39, 27, 49, -60, 
  -29, -128, 9, -77, -77, -43, 29, -29, 46, -128, 
  -10, -29, 46, -50, 35, -8, 23, -26, 32, -50, 
  43, -20, -3, -128, -18, -128, 17, -77, 24, -50, 
  35, -29, -7, -29, -18, -128, -10, -128, 46, -4, 
  57, -20, 21, -43, 34, -37, 46, -23, 39, -26, 
  -20, -128, -50, -4, 42, -43, 35, -20, 12, -128, 
  -60, -77, 34, -128, -37, -128, 31, 8, 9, -60, 
  59, -7, 4, -43, 44, -6, 44, -128, 30, -18, 
  37, -77, 15, -12, 37, -26, 54, -37, 22, -60, 
  26, -128, 10, -128, 37, -60, 36, -26, 23, -128, 
  17, -20, 37, -128, -20, -128, 11, 0, 31, -60, 
  100, 73, 69, 70, 85, 49, 65, -4, 32, 27, 
  50, 9, 26, 19, 29, 4, 37, -10, 6, -128, 
  13, -128, 40, 24, 51, 14, 28, -128, 51, 43, 
  55, 19, 60, -60, 8, -128, -12, -43, 21, -37, 
  96, 90, 119, 90, 114, 86, 109, 70, 75, 19, 
  60, 35, 31, -29, -3, -128, 5, -128, -26, -128, 
  42, -3, 24, 15, 88, 76, 80, 52, 92, 84, 
  98, 68, 94, 62, 62, 36, 39, -26, 29, -29, 
  97, 79, 110, 82, 109, 87, 102, 75, 77, 51, 
  79, -26, 40, -8, 39, -77, 35, 6, 42, -23, 
  27, 14, 71, 67, 102, 77, 89, 71, 97, 75, 
  92, 74, 97, 70, 79, 55, 60, 14, 24, -60, 
  98, 59, 103, 80, 107, 93, 91, 72, 86, 69, 
  92, 62, 36, 22, 51, 35, 64, 45, 66, 43, 
  60, 56, 89, 85, 111, 81, 94, 77, 104, 79, 
  92, 74, 90, 66, 86, 58, 56, 20, 24, -37, 
  93, 35, 88, 65, 104, 87, 100, 82, 101, 82, 
  94, 70, 76, 58, 75, 54, 77, 62, 86, 55, 
  75, 68, 94, 84, 100, 74, 97, 80, 100, 54, 
  74, 54, 80, 60, 92, 72, 69, 1, 45, -12, 
  89, -2, 73, 50, 82, 63, 92, 90, 108, 86, 
  93, 75, 97, 73, 91, 50, 88, 67, 86, 60, 
  89, 66, 106, 81, 90, 62, 91, 76, 93, 42, 
  74, 62, 94, 80, 98, 70, 79, 36, 45, -20, 
  82, -10, 65, 34, 56, 24, 84, 78, 107, 93, 
  105, 79, 105, 76, 94, 68, 94, 72, 93, 76, 
  95, 86, 105, 68, 69, 51, 92, 62, 81, 42, 
  79, 50, 84, 54, 79, 67, 83, 54, 42, -12, 
  77, -14, 62, 26, 48, 0, 71, 44, 102, 84, 
  107, 89, 105, 80, 100, 73, 97, 76, 97, 79, 
  104, 85, 99, 42, 57, 34, 87, 55, 68, -7, 
  50, 9, 66, 40, 86, 59, 82, 32, 55, -10, 
  72, -43, 54, 11, 44, -14, 65, 33, 94, 69, 
  104, 83, 96, 69, 89, 71, 91, 67, 94, 74, 
  104, 71, 79, 2, 53, 18, 75, 47, 65, 11, 
  47, 32, 65, -3, 60, 41, 75, 37, 32, -6, 
  74, -33, 53, 31, 29, 4, 57, 44, 77, 63, 
  87, 74, 85, 61, 85, 60, 79, 55, 85, 67, 
  89, 57, 50, -33, 35, -6, 67, 45, 54, -6, 
  55, 18, 68, 18, 74, 29, 62, 0, 32, -2, 
  72, -12, 59, 35, 39, 11, 64, 46, 70, 46, 
  68, 37, 67, 38, 75, 40, 70, 35, 76, 50, 
  65, -18, 6, -128, -16, -29, 56, 24, 65, -12, 
  61, 38, 69, 6, 54, 12, 62, -18, 9, -43, 
  60, 6, 44, -43, 35, -128, 64, -26, 60, -37, 
  41, -128, 38, -77, 36, -4, 37, -20, 28, 6, 
  -7, -128, -128, -128, -128, -128, 7, -33, -33, -128, 
  -128, -128, 57, 27, 37, -128, 49, -50, 10, -50, 
  -128, -128, -128, -128, -128, -128, -10, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -128, 25, -3, 4, -128, 28, 42, 66, 51, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -6, -60, 68, 43, 62, -14, 85, 82, 104, 81, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  21, -16, 60, 53, 84, 25, 79, 75, 101, 79, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  42, 24, 60, 37, 65, 43, 82, 55, 94, 83, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  37, 7, 67, 34, 70, 23, 67, 59, 94, 74, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  9, -8, 50, 31, 65, 34, 72, 46, 82, 64, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  4, -12, 53, 24, 60, 9, 62, 44, 84, 56, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  6, 9, 53, 39, 44, -29, 55, 56, 87, 60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  14, -60, 37, 29, 54, 44, 57, 40, 77, 44, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  4, 1, 60, 25, 50, -60, 64, 51, 74, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  28, -26, -10, -60, 42, -128, 47, -16, -16, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -77, 35, -60, -18, -128, 51, -23, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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