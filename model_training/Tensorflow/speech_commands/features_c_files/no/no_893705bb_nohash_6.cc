/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/893705bb_nohash_6.wav" \
 * --output_c_file="features_c_files/no/no_893705bb_nohash_6.cc" \
 */
#include "no_893705bb_nohash_6.h"


const int g_no_893705bb_nohash_6_width = 40;
const int g_no_893705bb_nohash_6_height = 49;
alignas(16) const signed char g_no_893705bb_nohash_6_data[] = {
  107, 89, 95, 78, 77, 62, 55, 66, 70, 46, 
  67, 77, 89, 67, 62, 46, 42, 63, 63, 35, 
  26, 25, 35, 17, 17, 20, 5, 50, 60, 35, 
  14, 17, 0, -18, 0, 11, 20, -12, -33, -50, 
  109, 89, 85, 24, 70, 59, 55, 51, 62, 37, 
  50, 37, 76, 54, 78, 63, 46, 61, 72, 55, 
  15, -7, 18, 4, -26, 26, 19, 32, 24, 27, 
  8, 4, -37, -14, -1, 22, -7, -29, -12, -37, 
  93, 54, 79, 69, 85, 65, 72, 69, 91, 66, 
  26, 25, 69, 49, 49, 37, 35, 32, 60, 40, 
  1, 7, 5, -20, 15, 5, 14, 37, 33, 26, 
  17, 19, -2, -50, 15, 7, 7, -10, -26, -50, 
  90, 73, 68, 71, 89, 69, 95, 61, 69, 64, 
  24, -4, 31, 34, 18, 4, 17, 30, 72, 62, 
  54, 24, -10, -29, -8, -26, 0, 16, 22, 13, 
  12, 12, 10, -2, 13, -18, -8, -33, -14, -77, 
  64, 65, 93, 79, 100, 65, 74, 59, 99, 76, 
  71, 50, 17, 15, 53, 30, 24, 6, 35, 32, 
  52, 30, 23, 15, 19, -29, 8, 4, -16, -50, 
  11, 18, 51, 47, 37, 28, 33, -4, -8, -77, 
  70, 43, 96, 89, 111, 84, 102, 66, 89, 69, 
  72, 69, 89, 76, 92, 64, 58, 52, 66, 63, 
  51, -7, 42, 2, 17, 13, 39, -77, -50, -29, 
  78, 81, 101, 91, 101, 79, 95, 74, 45, -18, 
  -8, 11, 67, -10, 62, 34, 62, 46, 54, -2, 
  67, 63, 76, 47, 83, 75, 78, -26, 45, -60, 
  20, 2, 15, -26, -33, -6, 38, -43, -18, 15, 
  73, 70, 89, 72, 92, 67, 87, 51, 46, -14, 
  66, 57, 86, 14, 38, 40, 57, -33, -2, 17, 
  70, 46, 62, 19, 64, 47, 90, 32, 65, 40, 
  18, -16, 26, -23, -8, -77, 14, -4, 16, 46, 
  70, 42, 78, 45, 67, 37, 78, 17, 19, -37, 
  18, -60, 62, -18, 60, 37, 76, 11, -128, -128, 
  46, 35, 61, 15, 65, 50, 84, 36, 60, 25, 
  35, -18, 11, -128, -10, -77, 20, -20, 9, 44, 
  64, 7, 54, -33, 26, 11, 42, -43, -18, -128, 
  39, -128, 19, -43, 64, 21, 67, -18, -128, -128, 
  42, 29, 56, 30, 42, 51, 74, 27, 58, 42, 
  22, -128, 7, 4, 9, -128, 1, -128, 37, 47, 
  59, -3, 27, -128, 27, -6, -33, -128, -33, -77, 
  39, 16, 40, -128, 63, 44, 37, 24, -29, -128, 
  -16, -128, 47, 16, 72, 48, 74, 22, 15, -128, 
  1, -128, -12, -33, 8, -128, -29, -77, 37, 44, 
  63, -60, 9, -128, 9, -128, -26, -128, -43, -50, 
  78, -77, 19, -128, 19, -50, 39, -14, -16, -23, 
  57, -33, 23, 50, 75, 47, 68, 16, 55, -3, 
  -8, -60, -37, -128, -1, -128, -23, -7, 55, 37, 
  55, -128, -14, -128, -12, -128, -128, -128, -20, -50, 
  73, -128, 28, 6, 16, -128, -29, -128, -50, -43, 
  51, -128, 4, -128, 65, 34, 30, 43, 40, -43, 
  -77, -128, -10, -50, -20, -77, -77, -77, 44, 14, 
  46, -128, -128, -128, -33, -128, -128, -128, -33, -77, 
  37, -14, -8, -128, -77, -128, 39, -128, 7, -128, 
  -14, -77, 36, -60, 53, 31, 18, 20, 32, -128, 
  -29, -128, -16, -37, -33, -60, -14, -50, -26, -128, 
  28, -128, -128, -128, -26, -128, -128, -128, -12, -77, 
  63, -128, -4, -128, -128, -50, 66, 17, -16, -128, 
  -37, -37, 5, -29, -23, -128, 21, -128, -20, -128, 
  -14, -128, -60, -128, -43, -128, 45, 16, 40, -20, 
  37, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  14, -12, -18, -128, -128, -77, 49, 52, 57, -128, 
  31, 25, 35, 9, 9, -128, -128, -128, -60, -128, 
  -77, -128, -77, -128, -4, -128, -14, -60, 30, -77, 
  21, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  50, 62, 82, -128, -128, -33, 38, 40, 37, -18, 
  58, -7, 59, -33, -60, -128, -128, -128, -128, -128, 
  -77, -128, -77, -128, -60, -43, -128, -128, -14, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -29, -128, 
  59, 69, 90, 13, -128, -128, -23, -3, 14, 17, 
  44, -128, 49, -12, -128, -128, -50, -128, -128, -128, 
  -43, -128, -60, -128, -77, -60, -77, -77, -37, -4, 
  -60, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  68, 73, 104, 64, 22, -128, 52, 25, 22, -23, 
  62, -77, 42, -18, 15, -26, 16, -128, -128, -128, 
  7, -60, -33, -43, -14, 11, 12, -128, 16, 37, 
  -77, -128, -128, -128, -128, -128, -50, -128, -37, -77, 
  17, 45, 86, 54, 53, -128, -77, -128, -20, -37, 
  59, -128, 14, 27, 70, 27, 11, -128, -60, -128, 
  32, -37, -60, -128, 15, 9, -6, -128, -3, -37, 
  -43, -77, -128, -128, -128, -128, -20, -128, -26, -128, 
  39, -3, 67, 1, 52, -3, -3, -128, -23, -33, 
  58, -77, -7, -128, 53, 12, -43, -128, -37, -60, 
  42, -128, -50, -77, 34, -1, -7, -128, 12, 1, 
  12, -20, -128, -128, -128, -128, -37, -128, -77, -128, 
  38, 6, 60, -77, 20, -6, -77, -128, 25, -16, 
  73, 24, -128, -128, 48, 19, -16, -128, -29, 37, 
  58, -26, 23, -128, 29, -33, -77, -128, -14, -12, 
  17, 4, -128, -128, -128, -128, -128, -128, -128, -128, 
  24, -128, -2, -128, -14, -43, -4, -128, -8, -10, 
  -14, -128, -128, -60, 22, -50, 9, 14, 17, -8, 
  42, 11, 63, 7, 54, -37, -16, -128, 18, -3, 
  43, 33, -128, -128, -128, -128, -128, -128, -33, -128, 
  38, -23, 21, -128, -60, -128, -128, -128, -128, -128, 
  -77, -128, -128, 11, 35, -128, 37, 11, 55, -23, 
  29, 27, 65, 27, 63, -14, -50, -128, -26, 0, 
  30, -128, -128, -128, -128, -128, -128, -128, -43, -77, 
  118, 92, 87, 65, 88, 64, 32, 21, 34, 7, 
  18, -128, -77, 28, 61, 16, 70, 51, 46, -77, 
  17, -29, 58, 24, 53, -20, -43, -128, -43, -10, 
  29, -128, -128, -128, -128, -128, 1, -43, 15, -7, 
  108, 66, 92, 89, 94, 35, 70, 35, 81, 67, 
  84, 39, -2, 20, 51, 40, 53, 30, 56, -77, 
  -6, -20, 23, -29, -77, -77, -14, -128, -16, -8, 
  10, -128, -128, -128, -128, -128, -37, 8, 50, 37, 
  98, 56, 93, 82, 90, 80, 94, 55, 80, 56, 
  61, 45, 29, -18, 32, -3, 64, 41, 47, -128, 
  -60, -26, 26, -60, -33, -128, -128, -128, -12, -128, 
  -128, -128, -128, -128, -128, -128, -29, -14, 38, 31, 
  89, 39, 82, 74, 96, 82, 104, 89, 100, 74, 
  82, 75, 82, 51, 66, 41, 92, 87, 107, 70, 
  30, -14, 75, 50, -20, -33, -128, -20, 59, -128, 
  -128, -128, -128, -128, -128, -60, 33, 15, 24, 24, 
  77, 11, 84, 59, 74, 80, 97, 96, 117, 90, 
  109, 88, 102, 77, 89, 80, 109, 93, 116, 84, 
  92, 75, 92, 81, 48, -50, 12, 65, 91, -8, 
  20, 21, -128, -128, -43, -33, 1, -7, 30, 27, 
  65, -6, 77, 50, 73, 69, 89, 86, 106, 89, 
  105, 69, 91, 69, 91, 80, 109, 84, 83, 50, 
  79, 68, 93, 78, 79, 22, 49, 42, 62, -128, 
  -43, -77, -77, -128, -128, -23, -6, -23, 22, 9, 
  49, -128, 64, 28, 63, 57, 89, 79, 97, 84, 
  101, 55, 96, 76, 93, 79, 83, -16, 43, 44, 
  65, 62, 80, 51, 71, 59, 86, -7, 16, -128, 
  -128, -128, -128, -128, -77, -77, -8, -16, 32, 9, 
  50, -128, 56, 14, 63, 53, 84, 72, 94, 74, 
  94, 68, 95, 72, 97, 10, 33, -128, -60, -20, 
  42, 44, 28, -128, -10, 42, 90, 23, -128, -128, 
  -128, -128, -128, -128, -43, -50, -29, -37, 35, -7, 
  39, -128, 55, 21, 68, 56, 82, 60, 82, 59, 
  84, 72, 104, 81, 74, -128, -128, -128, -128, -128, 
  40, -10, 21, -128, -128, -4, 72, -26, -128, -128, 
  -128, -128, -128, -128, -50, -50, -33, -60, 24, 17, 
  44, -77, 53, 4, 62, 57, 76, 36, 74, 44, 
  79, 65, 84, 45, 0, -128, -128, -128, -128, -128, 
  -77, -128, -6, -128, -77, -128, -12, -128, -128, -128, 
  -128, -10, 11, -128, -128, -128, -43, -50, 22, 0, 
  36, -128, 65, 29, 68, 61, 80, -26, 64, -8, 
  65, 50, 54, -128, -43, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -37, -1, -128, -128, -128, -29, -37, 25, -26, 
  35, -128, 45, 9, 64, 58, 82, -128, 47, -77, 
  55, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -60, 
  -77, -128, -128, -128, -128, -128, -43, -77, 16, -12, 
  42, -37, 29, 7, 53, 36, 74, -128, 9, -128, 
  51, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  44, -33, 27, 19, 54, -128, 47, -128, -10, -128, 
  -7, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  52, 19, 37, 18, 56, -128, 1, -128, -43, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -60, -128, 
  36, 1, 18, 11, 54, -128, -77, -128, -60, -128, 
  -50, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  17, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  21, -60, 31, 13, 56, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -3, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -33, -128, 
  35, -20, 15, -8, 42, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  28, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -29, -128, 
  35, -18, 13, -23, 41, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  10, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  30, -23, -8, -77, 30, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -7, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -128, 
  38, 6, -3, -77, 21, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -128, -128, -128, 39, -4, -128, -43, 13, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  7, -128, -50, -128, -23, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 53, 14, -128, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -4, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 51, -23, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -18, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 4, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -23, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
