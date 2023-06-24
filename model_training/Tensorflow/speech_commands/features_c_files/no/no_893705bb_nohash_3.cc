/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/893705bb_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_893705bb_nohash_3.cc" \
 */
#include "no_893705bb_nohash_3.h"


const int g_no_893705bb_nohash_3_width = 40;
const int g_no_893705bb_nohash_3_height = 49;
alignas(16) const signed char g_no_893705bb_nohash_3_data[] = {
  37, 54, 47, 40, 63, 57, 35, 17, -33, -2, 
  35, 25, 14, 7, 23, 7, -26, 7, -10, 15, 
  9, -12, 9, 4, -26, -26, -33, -50, -26, 4, 
  0, -2, 0, -26, -18, -26, -33, -26, -50, -128, 
  56, 51, 44, 16, 15, 32, 35, 19, 4, 0, 
  24, 13, 25, -4, 39, 11, -37, -77, -37, -29, 
  -12, -20, 30, -29, -26, -29, -12, -29, -37, -50, 
  -18, -23, 12, -20, -26, -37, -37, -50, -50, -50, 
  39, 15, 59, 41, 29, -16, -10, 15, 27, -18, 
  16, -2, -14, -60, 0, -33, -18, -10, 8, -43, 
  15, -23, 36, 6, -26, -29, -20, -50, -6, -16, 
  -20, -33, -14, -29, -20, -29, -26, -50, -37, -77, 
  44, 4, 44, 17, 31, -50, 17, -33, -3, -14, 
  -18, -60, -16, -14, -16, -128, -37, -77, -50, -128, 
  -77, -26, 4, -6, -7, -43, -29, -50, -20, -43, 
  -14, -33, -8, -26, -37, -33, -12, -50, -50, -77, 
  33, -50, 38, -26, 42, 19, 36, 15, 24, -12, 
  16, 9, -43, -16, -18, -10, 20, -60, -8, -43, 
  -23, -60, -60, -60, -14, -77, -29, -33, -37, -43, 
  -37, -29, -23, -77, -29, -43, -14, -50, -77, -128, 
  43, 36, 22, -18, 20, 45, 67, 29, 10, -33, 
  -26, -2, -1, -60, -43, 12, 0, -37, -50, -128, 
  -77, -29, -33, -50, 0, 4, -14, -60, -23, -43, 
  -50, -77, -43, -60, -37, -77, -29, -33, -50, -128, 
  59, 59, 72, 39, 34, 28, 45, 15, 11, 10, 
  8, 10, 10, -20, -33, -16, -10, 8, 15, -60, 
  -23, -37, -77, -128, -43, -7, -23, -37, -29, -50, 
  -23, -60, -50, -37, -29, -60, -29, -128, -77, -128, 
  87, 54, 79, 42, 31, -26, 0, -128, -6, -14, 
  -10, -43, -8, 0, 8, -60, -7, 22, 47, 27, 
  4, -77, -60, -50, -18, -60, -33, -60, -50, -128, 
  -77, -60, -43, -60, -50, -60, -33, -43, -37, -128, 
  77, 80, 94, 41, 34, -23, 26, 2, 34, -18, 
  -18, -128, -43, -128, -29, -50, 9, 27, 62, 11, 
  -18, -128, -128, -60, -18, -43, -77, -128, -33, -60, 
  -43, -43, -43, -128, -33, -60, -43, -60, -50, -128, 
  99, 88, 101, 63, 60, 11, 46, -33, 57, 25, 
  24, -3, -6, -33, -50, -128, 4, 25, 47, 27, 
  0, -60, -29, -37, -26, -29, 17, -77, -18, -50, 
  -43, -50, -43, -50, -6, -37, -26, -37, -29, -43, 
  81, 73, 94, 45, 34, 47, 57, -29, 40, 17, 
  35, 40, 40, 30, -2, -50, 16, -37, 29, 35, 
  -1, -3, 19, 7, 4, -10, 12, -33, -18, -33, 
  -2, -60, -60, -26, 6, -10, -7, -33, -33, -77, 
  72, 42, 70, 34, 64, 48, 67, 17, 11, -77, 
  38, 32, 20, 4, 0, -33, -60, -128, -50, -23, 
  -16, -60, -29, -128, -60, -77, -20, -43, -8, -37, 
  -14, -50, -43, -128, -43, -77, -33, -60, -33, -77, 
  9, -128, -10, 25, 68, 67, 70, 15, 36, -14, 
  29, -10, 8, 6, -14, -128, -33, -128, -50, -128, 
  -23, -16, -37, -60, -6, -128, -23, 6, 39, 0, 
  20, -23, -8, -29, -43, -60, -37, -128, -77, -128, 
  -128, -128, -128, -60, 69, 70, 84, 42, 41, 4, 
  19, 1, 47, 18, 44, 9, 10, -128, -50, -128, 
  -37, -33, 31, -23, -23, -128, -29, -7, 29, -128, 
  -10, -16, -29, -128, -16, -43, -20, -77, -60, -128, 
  -29, -128, -26, -50, 63, 11, 44, 38, 62, -3, 
  68, 61, 47, 37, 43, 14, -2, -37, -6, -43, 
  34, 2, 1, -60, 14, -128, -23, -29, 17, -23, 
  11, -33, 2, -26, -37, -37, -16, -77, -77, -77, 
  19, -128, 4, 7, 68, 54, 59, 24, 78, 51, 
  100, 86, 76, 47, 56, 31, 36, 14, 51, 35, 
  29, -10, -128, -128, -50, -77, 24, 11, 4, -60, 
  -8, -50, 17, -33, -16, -77, -29, -60, -26, -128, 
  74, -8, 9, 36, 95, 75, 84, 55, 94, 72, 
  100, 84, 92, 42, 64, 62, 55, 4, 63, 60, 
  -43, -128, -23, -60, -26, -60, 51, 42, 54, 24, 
  2, -128, -33, -50, -18, -60, -37, -128, -60, -128, 
  55, -14, -60, 48, 88, 68, 79, 42, 78, 33, 
  93, 77, 90, 24, 75, 90, 103, 76, 47, -16, 
  -14, -128, -23, -128, -16, -43, 67, 54, 51, 16, 
  16, -33, -20, -26, 4, -77, -77, -77, -33, -77, 
  70, -7, 39, -128, 47, 23, 59, 15, 69, 33, 
  77, 60, 81, 66, 81, 84, 104, 70, 19, -43, 
  -6, -128, -77, -128, -43, -18, 4, -18, 16, -8, 
  -4, -29, -16, -50, -20, -43, -37, -128, -37, -60, 
  75, 50, 61, 4, 19, -37, 41, -20, 54, 11, 
  19, 24, 75, 69, 86, 68, 96, 37, 24, -60, 
  -26, -128, -60, -60, -7, -128, -50, -128, -37, -23, 
  29, -60, -12, -128, -50, -128, -26, -128, -37, -77, 
  67, 46, 72, -6, -128, -128, 12, -43, -33, -3, 
  40, 53, 94, 79, 103, 15, 70, -3, 18, -128, 
  -4, -77, -14, 4, -1, -128, -60, -128, -50, -33, 
  31, -128, -8, -77, -43, -33, -33, -128, -37, -128, 
  -77, -18, 62, 9, -23, -2, 60, -128, 15, 16, 
  69, 74, 105, 70, 96, -43, 33, 26, 65, -128, 
  -23, -37, 23, -16, -14, -60, -128, -128, -50, -128, 
  -14, -128, 29, -43, -60, -77, 9, -77, -23, -128, 
  6, 15, 61, -20, 37, 21, 65, -50, 5, 27, 
  49, 68, 103, 52, 87, -128, 46, 8, 83, 26, 
  19, -77, -23, -43, -60, -18, -128, -128, -43, -77, 
  2, -128, -20, -50, -23, -50, 13, -29, -29, -77, 
  51, 45, 76, 42, 28, -8, 64, -3, -18, 1, 
  39, 65, 99, 5, 75, -128, 65, 68, 110, 73, 
  52, -37, -6, -23, -33, -77, -128, -128, -29, -60, 
  4, -50, -4, -43, 4, -128, -8, -60, -33, -77, 
  34, 24, 63, -7, 19, -8, 60, -33, -128, -60, 
  57, 61, 90, 54, 82, -50, 72, 52, 82, 53, 
  62, 29, 19, -128, -12, -20, -50, -23, 20, -128, 
  -77, 6, 17, -43, 1, -77, -37, -50, -26, -77, 
  14, -3, 51, -37, 33, 30, 66, -4, 37, 20, 
  65, 25, 55, 72, 96, 0, -6, 69, 90, 11, 
  46, -16, 1, -128, -16, 31, 39, 74, 79, 28, 
  36, 66, 48, -60, -16, -128, -50, -77, -50, -128, 
  -8, -60, -4, -128, 44, 23, 60, 35, -6, -128, 
  79, 31, 54, 63, 74, 18, 45, 76, 89, 60, 
  76, 27, -26, -128, -2, 16, 52, 68, 79, 66, 
  74, 64, 62, 10, 32, -50, -7, -128, -33, -128, 
  13, -128, 13, -23, 60, -12, 46, 49, -14, -128, 
  65, -128, -16, 50, 26, 23, 44, 50, 70, 67, 
  74, 11, -4, -128, -3, 29, 61, 59, 77, 52, 
  65, 45, 67, 28, 47, -43, -16, -12, -43, -128, 
  51, -77, -128, -33, 66, 5, 21, -4, 4, -128, 
  21, -128, -33, -60, 58, 54, 49, -3, 72, 56, 
  64, -7, -77, -128, -43, -128, 51, 17, 52, 30, 
  44, 23, 50, 21, 21, -77, -33, -50, -26, -128, 
  -8, -128, -128, 12, 58, -128, -14, 43, 51, -18, 
  -10, -128, -20, -37, 34, -2, 46, 15, 49, -50, 
  8, -128, -50, -128, -128, -128, 4, -128, 30, -128, 
  -20, -50, -20, -33, -12, -128, -128, -128, -77, -128, 
  43, -33, 23, 55, 72, 28, 22, -128, 45, -37, 
  -128, -128, -128, -128, -128, -128, 19, -37, 9, -128, 
  -50, -128, -128, -128, -12, -128, -77, -128, -128, -128, 
  -26, -128, -128, -128, -50, -128, -77, -60, -77, -128, 
  72, 50, 66, -1, 39, 4, 22, 36, 70, 37, 
  -128, -128, -128, -128, -60, -128, 8, -128, -128, -128, 
  -128, -128, -128, -128, -6, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -77, -77, -43, -128, -37, -128, 
  71, 55, 72, 29, -7, -128, -128, 41, 57, 9, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -128, -77, -37, -128, -77, -128, 
  23, -43, 11, -77, -50, -128, -128, -128, 51, 24, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  31, 10, 47, -128, -128, -128, -128, -128, 67, 40, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -16, -128, -29, -128, -128, -128, -77, -128, 
  96, 47, 69, 25, -128, -128, -128, -18, 72, 49, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -50, -50, -128, -128, -128, -43, -128, 
  119, 89, 96, 94, 102, -43, 8, -128, 51, 37, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -77, -50, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -37, -43, -2, -26, 1, -7, 
  104, 57, 105, 89, 87, 44, 47, 47, 64, 58, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -3, -2, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -77, -14, -18, 14, 2, 
  92, 44, 100, 76, 72, 51, 62, 25, 49, 49, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -10, 31, 34, -128, -128, -128, -128, -128, 
  -128, -128, -37, -128, 19, 14, 22, 0, 51, 41, 
  83, 39, 92, 63, 67, 53, 59, 19, 49, 43, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 45, 51, 41, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -50, 0, -77, -2, -43, 
  71, 11, 84, 44, 64, 46, 57, 22, 29, -50, 
  -128, -128, -128, -128, -128, -128, -8, -128, -128, -128, 
  -128, -43, 69, 69, 34, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -33, -23, -10, -128, -3, -20, 
  68, 14, 70, 55, 92, 70, 92, 78, 74, 60, 
  57, -128, -128, -128, -128, 25, 82, 65, 46, -128, 
  -77, 15, 69, 47, 8, -128, -128, -128, -43, -128, 
  -77, -128, -128, -128, -43, 64, 92, 54, 9, -16, 
  65, -14, 74, 39, 80, 71, 96, 94, 101, 86, 
  89, 21, -128, -77, 21, 63, 99, 79, 77, -128, 
  -23, 62, 97, 73, 36, -77, -77, 17, 65, -50, 
  -128, -128, -2, -3, -3, -14, 36, -2, 35, 26, 
  60, -37, 65, 26, 64, 55, 93, 86, 99, 81, 
  87, 34, 70, 65, 74, 67, 80, 31, -60, -128, 
  -14, -43, 45, -8, -26, -4, 22, -128, -43, -128, 
  -128, -128, -60, -128, -50, -50, 32, 0, 42, 9, 
  56, -60, 58, 18, 54, 34, 91, 78, 97, 79, 
  92, 53, 80, 70, 86, 64, 44, -128, -128, -128, 
  -128, -43, 37, -8, -128, 39, 57, -128, -128, -128, 
  -128, -128, -60, -77, -16, -128, -26, -2, 23, 9, 
  48, -128, 51, -4, 63, 45, 92, 71, 93, 73, 
  89, 53, 81, 73, 85, -128, -60, -128, -128, -128, 
  -29, 8, -4, -128, -50, 49, 68, -128, -128, -128, 
  -128, -128, -128, -37, 8, -26, -1, -26, 32, -1, 
  47, -43, 51, -14, 69, 49, 86, 60, 86, 65, 
  81, 50, 90, 58, 54, -128, -128, -128, -128, -128, 
  -128, 40, 37, -128, -128, 12, 68, -60, -128, -128, 
  -128, -128, -43, -60, -43, -128, -23, -128, 27, 11, 
  37, -128, 44, -26, 70, 47, 70, 36, 71, 42, 
  56, -12, 70, 0, -128, -128, -128, -128, -128, -128, 
  -128, 2, -14, -128, -60, -29, 74, 6, -128, -128, 
  -128, -128, -128, -128, -20, -128, -128, -128, -60, -128, 
  34, -128, 42, -50, 71, 49, 57, -29, 57, 14, 
  35, -128, 19, -128, -128, -128, -128, -128, -128, -128, 
  -128, -29, -128, -128, -128, -128, 20, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -50, -128, 
};
