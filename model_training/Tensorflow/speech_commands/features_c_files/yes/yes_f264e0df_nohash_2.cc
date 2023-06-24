/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/f264e0df_nohash_2.wav" \
 * --output_c_file="features_c_files/yes/yes_f264e0df_nohash_2.cc" \
 */
#include "yes_f264e0df_nohash_2.h"


const int g_yes_f264e0df_nohash_2_width = 40;
const int g_yes_f264e0df_nohash_2_height = 49;
alignas(16) const signed char g_yes_f264e0df_nohash_2_data[] = {
  100, 85, 100, 89, 106, 95, 109, 90, 104, 93, 
  104, 94, 100, 84, 97, 82, 94, 83, 100, 84, 
  86, 83, 82, 67, 77, 73, 75, 71, 81, 69, 
  71, 70, 71, 68, 75, 70, 75, 67, 74, 58, 
  100, 80, 88, 67, 69, 33, 84, 62, 84, 71, 
  89, 64, 79, 73, 98, 75, 88, 70, 92, 70, 
  86, 72, 92, 65, 75, 63, 85, 73, 92, 87, 
  99, 71, 91, 71, 72, 68, 84, 62, 74, 60, 
  97, 74, 97, 77, 89, 54, 65, 56, 81, 62, 
  88, 36, 81, 56, 91, 74, 89, 63, 80, 54, 
  86, 63, 70, 65, 69, 57, 70, 60, 79, 62, 
  83, 59, 75, 57, 64, 54, 74, 62, 72, 55, 
  82, 63, 81, 67, 88, 35, 65, 50, 69, 50, 
  79, 46, 74, 55, 79, 48, 80, 47, 67, 54, 
  67, 32, 70, 50, 72, 42, 61, 16, 56, 31, 
  72, 37, 60, 25, 63, 41, 57, 24, 57, 34, 
  74, 42, 72, 46, 65, 12, 54, -12, 62, 38, 
  73, 27, 81, 23, 51, 51, 89, 54, 74, 52, 
  74, 27, 64, 9, 59, 40, 56, 40, 68, -18, 
  51, 27, 40, 32, 63, 19, 25, 37, 55, 17, 
  70, 37, 69, 17, 77, 49, 48, 24, 68, 29, 
  59, 19, 74, 41, 63, 9, 46, 31, 55, 39, 
  62, 37, 61, 43, 63, 42, 52, 2, 29, -26, 
  39, 12, 39, 19, 57, 28, 56, 40, 54, -2, 
  50, -50, 19, -43, 72, 55, 71, 12, 60, 36, 
  52, 1, 71, 27, 65, 48, 61, 29, 62, 20, 
  54, -3, 55, -3, 40, -33, 45, -16, 36, -33, 
  24, -3, 44, -8, 57, 11, 51, 11, 52, 34, 
  39, 35, 61, 55, 77, 35, 43, -16, 51, 35, 
  57, -29, 45, 46, 70, 26, 56, 32, 65, 34, 
  67, 19, 55, 29, 41, 19, 25, -12, 44, -50, 
  29, -29, 41, 21, 51, 2, 44, -16, 55, 8, 
  72, 26, 75, 46, 57, 14, 67, 39, 33, -1, 
  51, 6, 57, -7, 53, 31, 49, 15, 11, 13, 
  60, 8, 47, 17, 57, 8, 30, -37, 30, -26, 
  32, 11, 46, 12, 39, -16, 37, 9, 42, -60, 
  53, 40, 81, 48, 48, 9, 54, 1, 64, 35, 
  57, 25, 59, 29, 46, -29, 45, 19, 44, 40, 
  64, -14, -18, 1, 33, -77, 20, -23, 31, -128, 
  25, -23, 33, 6, 45, 23, 37, -43, 49, 9, 
  73, 26, 39, -77, 4, -128, 10, -16, 54, 16, 
  35, -20, 4, -4, 34, -37, 48, 1, 48, 9, 
  33, -37, 14, 7, 49, 14, 16, -23, 31, -26, 
  40, -50, 39, -18, 4, -128, 37, 17, 29, -3, 
  65, 33, 55, -43, 17, -20, 47, -50, 45, -8, 
  23, 4, 55, -128, 2, -23, 45, -10, 31, 32, 
  64, 10, 43, 5, 25, -43, 41, 7, 32, -1, 
  44, -50, 32, -29, 17, -26, 9, -50, 21, -128, 
  42, -29, 57, 19, 46, 2, -29, 12, 50, 11, 
  17, 15, 65, -128, 54, -20, 39, -50, 10, 16, 
  55, -128, 40, -18, 35, -12, 50, 5, 23, -128, 
  -23, -37, 19, -8, 35, -12, 44, -43, 19, -14, 
  43, 14, 23, 26, 57, -50, 16, -77, 50, -26, 
  -33, -128, 44, -10, 15, -3, -1, -26, 52, -26, 
  47, -33, 43, -77, 14, -18, 26, -18, 10, -128, 
  -7, -128, 6, -43, 34, -128, 29, -6, 31, -60, 
  -6, -29, 36, -43, 37, 2, 37, -128, 50, 19, 
  34, -128, 43, 8, 35, -77, -8, -128, 13, -37, 
  35, -8, 39, 0, 44, -7, 55, -10, -3, -77, 
  20, -128, -16, -60, 37, -14, 7, -50, 4, -43, 
  40, 15, 55, -128, 42, 8, -6, -50, 22, -128, 
  48, 2, 47, 19, 1, -128, 10, -128, 21, -20, 
  1, -8, 50, -50, 4, -128, 14, -128, 22, -128, 
  -29, -37, 9, -128, -7, -50, 24, -43, 7, -128, 
  -33, -128, 4, -77, 30, -43, 58, 20, 14, -60, 
  -77, -128, 2, -128, 31, -50, 4, -29, 19, -50, 
  16, -128, 40, 9, 11, -128, 13, -20, 24, -128, 
  -4, -60, 0, -50, 7, -26, 9, -128, 13, -20, 
  60, 42, 19, -2, 25, -128, 45, -23, 0, -128, 
  43, -128, -16, -50, 26, -128, 19, -26, 39, -26, 
  29, -128, 17, -128, 19, -128, 19, -43, -4, -128, 
  -20, -37, -3, -77, 11, -77, -4, -128, 7, -37, 
  -16, -128, -33, -50, 25, -60, -77, -43, 53, 10, 
  9, -50, 37, -29, 50, -14, -8, 6, 40, -60, 
  25, -10, 21, -23, -10, -50, -23, -77, -4, -50, 
  6, -20, 9, -50, 21, -50, 16, -14, 9, -77, 
  43, -8, 52, -60, -77, -128, -2, -77, 37, -23, 
  20, -77, -50, -43, -4, -1, 45, -18, 39, -37, 
  32, 4, 24, 6, -12, -23, 30, -128, -3, -60, 
  -2, -26, 29, 8, 32, -29, -4, -128, 24, -128, 
  27, -77, 48, 9, 44, -128, -128, -60, 25, -60, 
  23, -128, -128, -128, 9, -50, 14, -43, 17, -14, 
  25, -128, -1, -128, -14, -128, -20, -128, 8, -16, 
  11, -60, -10, -77, 15, -33, 23, -60, 2, -128, 
  5, -128, 14, -18, 34, -7, -23, -128, 16, -33, 
  46, -2, 19, -50, 15, -60, 24, -43, 4, -2, 
  26, -128, -50, -128, -128, -128, 16, -2, 0, -128, 
  -12, -29, 29, -18, 24, -77, 0, -77, 11, -50, 
  27, -77, -33, -128, 6, -128, -77, -29, 11, -128, 
  -7, -128, -7, -60, -29, -128, 15, -18, 35, 0, 
  47, -12, -3, -128, 38, -77, 17, -43, -23, -128, 
  -10, -37, 24, -20, -1, -128, -2, -43, 18, -26, 
  -128, -128, 8, -128, -20, -50, 42, -60, 4, 6, 
  43, 7, 15, -128, 2, -50, 20, -23, -8, -60, 
  -8, -37, 32, -37, 16, -29, 15, -43, 17, -43, 
  8, -33, 14, -128, 19, -60, 23, 4, 19, -50, 
  72, 22, -6, -128, -33, -43, 9, -18, 4, -128, 
  14, -23, -12, -77, 11, -128, 6, 9, 36, -128, 
  22, -6, -3, -50, -3, -128, -10, -60, -7, -77, 
  -3, -128, 1, -37, 0, -60, 11, -77, 2, -60, 
  104, 77, 107, 80, 88, 69, 60, -6, 4, -128, 
  -77, -128, 17, -20, 16, -60, 32, -60, 14, -10, 
  44, 45, 33, -77, 14, -33, 55, 52, 70, 50, 
  -14, 21, 41, -60, -20, -128, -6, -77, -2, -128, 
  98, 84, 110, 79, 98, 72, 59, 13, 31, -128, 
  -60, -8, 25, -26, 23, -128, -60, -37, -1, -128, 
  55, 46, 51, -12, 0, 24, 79, 63, 82, 60, 
  16, 57, 65, -50, 15, -128, 18, -16, 30, -77, 
  96, 76, 106, 79, 87, 69, 68, 52, 67, 4, 
  37, 15, 46, 6, 41, -14, -37, -128, -6, 24, 
  82, 72, 79, 45, 46, 69, 93, 61, 92, 71, 
  44, 59, 74, 49, 43, 6, 8, -60, 44, -23, 
  94, 64, 98, 75, 101, 88, 99, 74, 79, 51, 
  72, 46, 72, 46, 51, -1, 19, -1, 35, 72, 
  105, 72, 92, 75, 88, 67, 84, 60, 87, 54, 
  87, 67, 63, 43, 34, -23, 19, -8, 65, 19, 
  86, 37, 78, 47, 102, 88, 112, 92, 97, 70, 
  89, 65, 89, 67, 70, 44, 59, 25, 82, 79, 
  95, 70, 97, 82, 95, 57, 81, 57, 52, 63, 
  104, 76, 58, 53, 61, 21, 1, -37, 61, 18, 
  79, 27, 67, 24, 84, 49, 110, 92, 112, 84, 
  99, 79, 91, 71, 86, 61, 76, 75, 109, 81, 
  79, 67, 101, 87, 89, 45, 74, 26, 76, 78, 
  101, 42, 80, 59, 56, 31, 42, 25, 61, 23, 
  72, 31, 58, -23, 54, 16, 95, 74, 114, 76, 
  83, 79, 91, 70, 84, 56, 79, 57, 84, -4, 
  68, 40, 78, 45, 75, 30, 63, 19, 87, 74, 
  89, 13, 84, 69, 65, 32, 39, -14, 55, 28, 
  53, -50, -128, -50, 52, 13, 71, 75, 105, 72, 
  92, 60, 87, 65, 84, 68, 92, 81, 85, 29, 
  53, 29, 67, 35, 79, 36, 59, 6, 76, 67, 
  87, 35, 64, 57, 66, 53, 35, -43, 45, 33, 
  -37, -10, -128, -50, 19, -128, 65, 55, 79, 72, 
  84, 57, 75, 48, 69, 59, 83, 67, 62, -128, 
  37, -26, 47, -43, 70, 34, 35, -128, 13, -14, 
  55, 0, 42, 38, 58, 22, 35, -12, 34, -7, 
  -12, 2, -128, -128, -1, -128, 7, -128, 29, -128, 
  57, -10, 57, 16, 40, -77, 14, 48, 69, -128, 
  -37, -128, -128, -128, 37, -50, -37, -128, -128, -128, 
  -128, -128, -18, -128, -33, -77, 35, -1, 37, -33, 
  -128, -128, -128, -128, -128, -128, -128, -128, 20, -128, 
  -3, -128, -128, -128, -128, -128, 37, 33, 29, -128, 
  -128, -128, -128, -128, 32, -128, -37, -128, -128, -128, 
  33, 17, 66, 49, 61, -50, 44, 28, 34, -33, 
  -128, -128, -128, -128, -128, -128, -33, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -26, -18, -23, -128, 
  -128, -128, -128, -128, -20, -128, -128, -128, -10, -23, 
  67, 61, 89, 68, 90, 50, 74, 59, 73, 55, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -14, -43, -60, -128, 
  -128, -128, -128, -128, 32, -128, -128, -128, 8, -2, 
  72, 51, 89, 83, 99, 59, 91, 74, 86, 66, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -16, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -14, -128, -33, -128, 
  58, 45, 80, 61, 80, 66, 91, 71, 87, 55, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 27, -16, 
  45, 47, 76, 42, 80, 46, 79, 55, 84, 60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -33, -23, -128, 23, -8, 
  49, 43, 82, 42, 95, 58, 84, 69, 92, 69, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 1, -128, 14, -128, 
  62, 27, 75, 28, 79, 46, 67, 38, 77, 47, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -77, -77, -128, 4, -2, 
  33, -3, 60, 29, 69, 34, 65, 24, 53, 27, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -43, -128, -128, -6, -128, 
  34, -26, 58, -6, 47, 33, 61, -1, 59, 25, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -20, -128, 
  -12, 23, 67, 9, 26, -7, 43, 9, 62, 24, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, 22, -60, 39, -2, 39, -26, 36, -29, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -16, -128, -43, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
