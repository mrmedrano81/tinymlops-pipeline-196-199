/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/893705bb_nohash_11.wav" \
 * --output_c_file="features_c_files/no/no_893705bb_nohash_11.cc" \
 */
#include "no_893705bb_nohash_11.h"


const int g_no_893705bb_nohash_11_width = 40;
const int g_no_893705bb_nohash_11_height = 49;
alignas(16) const signed char g_no_893705bb_nohash_11_data[] = {
  120, 101, 121, 99, 115, 87, 110, 94, 108, 90, 
  104, 92, 107, 89, 102, 89, 96, 54, 76, 80, 
  60, 58, 93, 82, 64, 46, 50, 73, 71, 41, 
  59, 50, 47, 51, 59, 57, 48, 17, -4, -18, 
  107, 75, 108, 84, 95, 80, 96, 83, 90, 53, 
  97, 89, 102, 68, 89, 72, 92, 69, 64, 69, 
  79, 52, 69, 68, 76, 50, 54, 63, 70, 26, 
  66, 61, 65, 57, 44, 21, 42, 19, 9, -14, 
  91, 47, 84, 72, 98, 81, 64, 64, 88, 37, 
  104, 81, 77, 59, 70, 50, 87, 46, 67, 66, 
  79, 45, 78, 91, 102, 45, 64, 62, 70, 70, 
  113, 95, 97, 65, 71, 48, 51, 20, 11, -16, 
  88, 69, 94, 69, 91, 55, 70, -10, 61, 63, 
  84, 49, 76, 50, 58, 50, 69, 19, 52, 19, 
  57, 42, 84, 83, 100, 65, 75, 49, 58, 68, 
  95, 70, 97, 78, 94, 55, 61, 52, 43, 0, 
  92, 60, 78, 38, 61, 20, 62, -29, 21, 22, 
  58, 26, 72, 26, 4, -37, 32, -43, 50, 24, 
  71, 58, 75, 77, 95, 55, 71, 66, 74, 61, 
  77, 57, 87, 77, 93, 61, 69, 74, 87, 17, 
  77, 60, 60, -37, 65, 65, 75, 39, 15, -12, 
  87, 56, 61, 53, 27, -128, -128, 35, 71, 59, 
  81, 37, 74, 45, 75, 46, 67, 36, 64, 39, 
  64, 35, 72, 53, 72, 54, 68, 49, 57, -10, 
  74, 48, 75, 54, 75, 49, 80, 37, 28, 31, 
  84, 54, 71, 57, 64, -60, -14, 47, 58, 11, 
  61, 49, 69, 2, 61, 67, 62, 33, 21, -23, 
  58, 4, 46, 54, 72, 54, 73, 56, 60, -8, 
  64, 49, 92, 46, 60, 49, 69, 25, 59, 34, 
  77, 57, 69, 54, 72, 35, 41, -128, 12, -14, 
  69, 49, 39, -128, -23, 14, 62, 30, 44, -12, 
  41, -37, 18, 9, 61, 61, 69, -4, 49, -20, 
  75, 52, 61, 46, 78, 45, 79, 44, 80, 29, 
  54, 4, 11, -23, 68, 42, -3, -33, 11, -128, 
  55, 29, 52, 4, 66, -77, 74, 42, 54, -8, 
  36, -14, 50, -128, 8, 5, 43, -77, 15, -128, 
  55, 46, 85, 52, 59, 20, 79, 35, 77, 57, 
  34, -128, 9, 34, 77, 42, -26, -128, 13, -20, 
  40, -128, 42, -128, 52, -18, 45, 43, 80, -37, 
  -4, -37, 24, -128, 15, -4, 32, -128, -23, -128, 
  59, -14, 58, -20, 39, -33, 44, 45, 79, 56, 
  41, -33, 45, 46, 80, 24, 26, -29, 6, -128, 
  27, -128, -29, -128, -29, -128, -128, 15, 54, -77, 
  -50, -128, 27, -128, -33, -128, 19, -128, -20, -128, 
  4, -128, 39, -128, 38, -23, 47, 22, 58, 40, 
  35, -12, 78, 30, 75, -77, 9, 40, 74, 8, 
  54, -128, 37, -128, -16, -50, -18, -77, 31, -33, 
  -50, -128, -1, -128, -77, -128, 36, -128, -60, -128, 
  -77, -43, 55, -26, -16, -128, 44, -77, 10, -37, 
  43, 32, 75, -14, 65, 19, 22, 25, 52, -128, 
  -128, -128, -6, -128, -3, 2, 21, -23, 58, 1, 
  -77, -128, 14, -128, -128, -128, -6, -128, -128, -128, 
  4, -128, 19, -128, 48, 24, 35, -128, 20, -128, 
  19, -128, 50, -128, -128, -23, 34, 37, 51, -43, 
  -37, -128, -14, -128, -18, -4, 24, -128, 26, -128, 
  -29, -128, -26, -128, -128, -128, -18, -128, -128, -128, 
  54, 34, 57, -29, 52, 15, 41, -128, -37, -128, 
  8, -128, -14, -128, -1, -29, 44, 35, 56, -4, 
  4, -14, 0, -128, -43, 40, 37, -128, -16, -128, 
  -128, -128, -12, -128, -128, -128, -128, -128, -128, -128, 
  73, 39, 50, -43, 45, -43, 15, -26, 44, 24, 
  42, -43, 45, -20, 55, -50, 16, -128, -2, -29, 
  35, 17, 29, -128, 8, -18, 9, -128, 9, -128, 
  -128, -128, 47, -128, -128, -128, 19, -128, -128, -43, 
  55, 35, 14, -128, -128, -128, 9, -128, 55, 9, 
  42, -7, -60, -128, 47, 41, 44, -77, 34, -23, 
  -7, 18, 32, -128, -10, -33, -43, -26, 27, -60, 
  -128, -128, 43, -128, -128, -128, 23, -128, -128, -128, 
  52, -60, 11, -128, -4, -77, -128, -128, 40, 23, 
  -1, -128, -14, -50, -18, 23, 36, -128, 13, -128, 
  19, -10, 7, -128, -128, -128, -128, -18, 26, -20, 
  -128, -128, 29, -128, -128, -128, -4, -43, -128, -128, 
  -12, -128, -128, -128, 51, -8, -26, -128, 58, 29, 
  -16, -128, 17, -60, 10, -128, -3, 6, 52, -128, 
  37, -7, -43, -128, -128, -128, -77, -128, -26, -29, 
  -128, -128, -33, -33, -43, -128, -77, -128, -128, -128, 
  -14, -128, -128, -128, 62, 40, -29, -128, 37, -20, 
  -50, -77, 30, -128, -128, -128, -3, -10, 31, -128, 
  27, -18, -128, -128, -128, -128, -128, -128, -43, -26, 
  -128, -128, -23, -128, -128, -128, -77, -128, -128, -128, 
  51, 10, -18, -23, 46, -26, 11, -6, 61, -14, 
  -26, -128, -128, -77, 18, -128, -77, -128, -128, -128, 
  24, -50, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -14, -128, -128, -128, 
  39, -4, -23, -128, 22, 5, -3, -128, 32, -8, 
  44, -128, -33, -128, -20, -128, -128, -128, -128, -128, 
  9, -128, -128, -128, -128, -128, -43, -128, -128, -128, 
  -12, -128, -18, -128, -128, -128, 1, -128, -128, -128, 
  9, -37, 19, -128, 30, 41, 33, -60, 27, -128, 
  8, -37, -10, -128, 15, -128, -128, -128, -128, -128, 
  29, -50, -128, -128, -128, -10, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  11, -128, -128, -128, -23, -60, -128, -128, 9, -60, 
  -60, -128, -2, -128, 17, -128, -128, -128, -128, -128, 
  -1, -77, -128, -128, -128, -77, -128, -128, -12, -128, 
  -128, -128, -128, -128, -128, -60, 17, -128, -128, -128, 
  12, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, 9, -37, -128, -128, -128, -128, 
  -23, -128, -128, -128, -128, -128, -10, -128, 12, -128, 
  -128, -128, -128, -128, -128, -128, -23, -128, -128, -128, 
  -60, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -29, -128, -128, -128, -128, -128, 
  47, -16, -43, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -14, -128, -128, -128, 
  23, -128, -128, -128, 38, -43, -33, -60, 44, 4, 
  -7, -128, -128, 21, 55, -128, -128, -128, -128, -37, 
  14, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -50, -128, -128, -128, 
  55, 28, -37, -128, -128, -128, -50, -43, 4, -50, 
  -128, -128, -128, -29, 39, -23, -50, -128, -128, -128, 
  19, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -43, -128, -128, -128, -43, -128, -128, -60, 
  25, -128, 15, -128, -128, -128, 11, -128, 17, -12, 
  -77, -128, -128, -128, -128, -128, 6, -128, -128, -128, 
  42, -12, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  54, 21, -29, -128, 36, -4, -128, -128, -16, 10, 
  -50, -128, -60, -128, -128, -128, -37, -29, -128, -128, 
  -23, -128, -37, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  5, -128, -128, -128, -50, -128, -128, -128, -26, -77, 
  -33, -128, -128, -128, -128, 20, 45, 5, 19, 36, 
  -3, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, -128, -128, -128, -128, -128, -128, 
  55, -2, -77, -128, -128, -128, -128, -128, -43, -128, 
  -12, -77, -128, -128, -77, -77, 2, -18, 34, 48, 
  -6, -128, -128, -128, -128, -128, -3, -12, -60, -128, 
  -128, -128, -12, -128, -128, -128, -128, -128, -128, -128, 
  26, -20, -33, -128, -128, -128, -128, -128, -128, -128, 
  -12, -128, -128, -128, -128, -128, -50, -128, 40, 34, 
  -20, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -29, -128, -128, -128, -128, -128, -128, -128, 
  -37, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -2, -60, -128, -128, -128, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  48, 20, -128, -128, -128, -128, -128, -128, -128, -128, 
  12, -128, -128, -128, -128, -128, -128, -128, -16, -50, 
  -128, -60, 27, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -43, -60, -128, -128, -128, -128, -128, 
  59, 29, -12, -128, -128, -128, -128, -128, -3, -128, 
  29, -20, -128, -128, -128, -128, 24, -128, 29, -60, 
  -77, -33, -3, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -77, -128, -128, -128, -128, -128, -128, 
  39, 4, -77, -128, -128, -128, -128, -128, 7, -128, 
  25, -60, -128, -128, -128, -128, 24, -7, 24, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  6, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -37, 15, -23, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 5, 36, -3, -128, -128, -128, -128, -128, 
  -128, -128, 4, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -16, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  -128, -128, -43, -128, -128, -128, -128, -128, -128, -128, 
  94, 57, 56, 70, 60, -4, -60, -8, 20, -43, 
  -37, -128, -29, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 15, 16, -26, -77, -20, -128, 7, -23, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, 9, 
  85, 9, 93, 84, 69, 65, 53, 4, -128, -128, 
  -60, -128, -128, -128, -20, 8, -43, -128, -128, -128, 
  -128, -128, 31, -60, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -77, -14, 9, 
  83, -8, 76, 55, 67, 60, 38, -50, 1, -23, 
  -33, -77, -128, -128, -37, -60, 5, -77, -50, -128, 
  -128, -128, 52, 32, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 7, -1, 
  74, -6, 58, 32, 73, 64, 56, 31, -60, -128, 
  15, -20, 10, -128, 25, -6, 31, -14, -60, -128, 
  -128, -77, 67, 31, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -12, -14, 
  74, -10, 72, 51, 78, 62, 59, -16, 40, 28, 
  -128, -128, -128, -128, -50, -60, 56, 27, 34, -50, 
  -128, -50, 27, -128, 34, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -60, -23, -20, 
  68, -8, 64, 69, 85, 63, 95, 72, 75, 66, 
  70, 37, 54, 10, -43, 9, 103, 89, 95, 39, 
  6, 60, 78, 41, 48, -128, -50, 34, 82, 61, 
  -128, -128, -128, -128, -128, -26, -12, -12, 35, 29, 
  58, -77, 75, 61, 83, 81, 102, 97, 110, 86, 
  92, 86, 94, 79, 76, 84, 113, 97, 110, 77, 
  63, 80, 99, 63, 39, 54, 59, 85, 110, 89, 
  47, -23, -128, -128, -33, -60, 39, 29, 32, 15, 
  64, -1, 62, 51, 63, 63, 92, 87, 110, 81, 
  99, 81, 100, 89, 95, 85, 109, 86, 89, 78, 
  84, 62, 90, 65, 77, 81, 105, 85, 87, 61, 
  67, 11, -6, 4, 19, 15, 61, 38, 51, 40, 
  65, 18, 54, 40, 60, 50, 80, 77, 100, 79, 
  97, 77, 102, 87, 109, 78, 80, 9, 68, 50, 
  68, 34, 65, 30, 63, 77, 100, 60, 60, 49, 
  55, -43, -43, -26, 24, 4, 6, 21, 49, 34, 
};
