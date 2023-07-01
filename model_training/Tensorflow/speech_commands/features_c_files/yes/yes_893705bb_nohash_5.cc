/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/893705bb_nohash_5.wav" \
 * --output_c_file="features_c_files/yes/yes_893705bb_nohash_5.cc" \
 */
#include "yes_893705bb_nohash_5.h"


const int g_yes_893705bb_nohash_5_width = 40;
const int g_yes_893705bb_nohash_5_height = 49;
alignas(16) const signed char g_yes_893705bb_nohash_5_data[] = {
  57, 67, 113, 97, 105, 74, 69, 57, 69, 25, 
  17, 11, 42, 34, 47, 28, 17, 17, 31, 7, 
  5, -12, -50, -2, 0, -2, -10, -7, -18, 4, 
  -18, -26, -4, 15, 47, -18, -26, -26, -10, -37, 
  90, 78, 111, 94, 112, 77, 64, 48, 56, 39, 
  15, 22, 38, 20, -37, 5, 11, -33, -2, 11, 
  12, -20, -18, -16, 19, -23, -12, 15, 9, 4, 
  4, -3, 19, 11, 32, -14, -6, -8, -18, -37, 
  75, 64, 100, 84, 106, 53, 54, 40, 59, 39, 
  50, 49, 20, -29, -16, 6, 32, 17, 34, -14, 
  -7, -23, -18, -18, -29, -23, -12, -3, 15, 20, 
  -2, 16, -2, 11, 26, -43, -7, 2, -2, -29, 
  98, 77, 67, 50, 84, 61, 56, 20, 68, 44, 
  75, 69, 45, -1, -16, 24, 58, -3, -6, -2, 
  16, -14, 2, -60, -29, -20, -29, -16, -16, -23, 
  -8, -2, -3, -29, -33, -7, 2, -43, -29, -50, 
  95, 74, 78, 50, 79, 65, 40, -29, 18, 29, 
  64, -8, -16, -7, 8, 10, 49, 16, -7, -60, 
  -6, -2, -14, -60, -4, -6, -3, -18, -4, -43, 
  12, -4, 4, 5, -33, -20, -8, -2, -3, -60, 
  76, 21, 73, 34, 61, -23, 69, 20, 7, 13, 
  32, -128, -12, 11, 35, 11, 38, 4, -43, -26, 
  19, 9, -37, -37, -16, -18, -4, -60, 4, -20, 
  4, -16, -2, -23, -14, -37, -4, -26, -23, -60, 
  58, 46, 23, -128, -23, -60, 63, 6, 13, -8, 
  29, -37, -23, -128, -4, 2, 15, -29, -26, -128, 
  -14, 32, 0, -50, -12, -33, -16, -60, -12, -37, 
  -7, -23, -12, -77, -29, -14, -12, -43, -43, -128, 
  70, 39, -60, -128, -128, -128, 67, 40, -128, -50, 
  -50, -128, 0, -23, 2, -128, -37, -128, -43, -60, 
  14, 35, -12, -37, -33, -60, -60, -77, -60, -77, 
  -43, -128, -8, -33, -77, -10, 6, -77, -43, -77, 
  -14, -128, 28, -128, -14, -12, 69, 48, 39, -128, 
  -128, -60, 6, -12, 40, 22, 18, -128, -10, -77, 
  48, 53, -2, -26, -43, -77, -18, -128, -33, -77, 
  -77, -128, -29, -77, -50, -29, -14, -77, -18, -77, 
  2, -128, 76, 46, 67, 88, 114, 88, 111, 87, 
  94, 60, 67, 75, 110, 92, 83, 69, 80, 40, 
  90, 65, 23, 11, -26, 12, 28, -77, 8, -77, 
  -26, -128, -29, -60, -29, -26, -4, -43, -26, -50, 
  25, -37, 80, 55, 76, 83, 111, 99, 112, 89, 
  95, 78, 92, 84, 103, 74, 91, 86, 104, 65, 
  88, 63, 44, 32, -4, -14, 14, -77, 9, -43, 
  -43, -8, 18, 21, 22, 1, 21, 0, 0, -14, 
  51, -1, 57, -8, 68, 39, 73, 43, 89, 70, 
  100, 79, 95, 76, 97, 59, 80, 70, 84, 47, 
  68, 47, 53, 38, 4, -12, 25, 4, 32, -10, 
  26, 51, 80, 77, 81, 37, 42, -29, -14, -50, 
  -77, -77, -128, -128, 27, 50, 52, -1, 81, 58, 
  77, 53, 77, 24, 58, -29, 80, 50, 71, 0, 
  -6, -128, 52, 38, -23, -128, -4, -3, 20, -60, 
  30, 61, 83, 69, 76, 55, 50, 4, -29, -77, 
  -128, -128, -128, -128, 19, 4, 44, -77, 69, 41, 
  57, -77, 50, -37, 21, -128, 34, 23, 58, 11, 
  19, -128, 22, -2, -3, -18, 9, -12, 0, -26, 
  34, 60, 73, 62, 80, 24, 36, -50, -50, -128, 
  -128, -128, -128, -128, 42, 14, 57, -23, 82, 57, 
  56, -6, 47, 0, 17, -37, 37, -16, 55, 27, 
  -29, -128, 6, -77, -26, -77, -20, -29, 21, -6, 
  -3, 22, 57, -4, 54, 38, 17, -77, -37, -128, 
  -128, -128, -128, -128, -128, -16, 68, 46, 78, 42, 
  75, 56, 81, 41, 57, 54, 75, 28, 78, 54, 
  21, -128, -37, -128, -4, -77, -18, -26, 68, 50, 
  25, 49, 67, 45, 40, -33, 0, -50, 8, -60, 
  28, -128, -128, -128, -128, -128, 32, 14, 59, -20, 
  69, 45, 74, 48, 45, 4, 31, 0, 68, 47, 
  -26, -128, -77, -128, 11, -26, -43, -43, 43, -14, 
  4, 37, 71, 17, 2, -29, -128, -128, -8, -128, 
  -37, -128, -128, -128, -128, -128, 32, -128, -128, -77, 
  56, 8, 55, 20, -77, -128, 0, -128, 27, 55, 
  43, -128, -20, -128, 20, 4, -43, -128, -8, -50, 
  24, 26, 49, -77, 1, -128, -128, -128, -33, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -16, -128, 55, 28, -77, -128, -29, -128, -16, -43, 
  -60, -128, -18, -128, 37, 2, -77, -128, -128, -128, 
  -50, -128, -16, -128, -128, -128, -60, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -43, -26, -50, -128, -26, -128, -128, -128, 
  -128, -128, 30, -128, -50, -128, -77, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  26, -60, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -16, -128, -23, -128, -37, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  53, -14, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -20, -128, -43, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  62, 38, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 4, -60, -128, -128, -128, -128, -128, -128, 
  -43, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  70, 74, 62, -50, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -6, -128, -60, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  64, 51, 19, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -33, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  16, -43, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -60, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -4, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -26, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -33, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -23, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 0, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -20, 8, -37, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -29, -37, -43, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -20, 8, 16, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, 34, 9, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -23, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
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
  -128, -128, -128, -128, -128, -128, -43, -128, -77, -23, 
  32, -77, -128, -128, -60, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -60, -33, 
  0, -60, -128, -128, -128, -128, -128, -128, -128, -128, 
  67, 34, -128, -128, 10, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, 9, 
  7, -50, -128, -128, -128, -60, -128, -128, -77, -128, 
  119, 94, 91, 87, 99, 48, 25, -128, -128, -128, 
  -77, -33, 39, 4, -128, -128, -128, -128, -128, -77, 
  -77, -128, -128, -128, -60, -128, -128, -128, -29, -37, 
  -23, -43, -77, -128, -128, -77, -23, -8, 15, 16, 
  110, 76, 100, 83, 90, 88, 94, 24, 1, -37, 
  42, 28, 32, -8, -128, -128, 9, -18, 6, 42, 
  21, -77, -50, -128, -77, -50, -37, -60, -23, -128, 
  -50, -128, -128, -128, -128, -43, 9, -18, -1, 6, 
  99, 65, 94, 70, 80, 90, 101, 56, 67, -128, 
  -14, 23, 1, -128, -128, 22, 62, 68, 65, 51, 
  55, 24, -128, -43, -16, -77, -10, -60, -43, -128, 
  -43, -128, -128, -128, -128, -77, -10, -4, 19, 5, 
  94, 61, 92, 65, 87, 86, 99, 76, 82, 6, 
  39, 32, 53, 50, -29, 43, 82, 82, 92, 75, 
  75, 35, 57, 76, 66, -128, -16, -7, 0, -77, 
  -50, -128, -128, -128, -60, 16, 32, 25, 50, 31, 
  86, 55, 85, 57, 79, 72, 90, 67, 80, 51, 
  63, 65, 62, 49, 67, 57, 76, 70, 91, 75, 
  83, 39, -8, 66, 67, -60, -29, 7, -29, -77, 
  -77, -128, -128, -128, -29, -26, 9, 14, 37, 30, 
  79, 43, 83, 54, 71, 49, 70, 37, 55, 50, 
  64, 63, 70, 33, 58, 51, 74, 62, 77, 53, 
  68, 4, 29, 48, 55, -128, -20, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -14, -29, -3, -37, 
  69, 6, 73, 18, 63, -3, -6, -128, -128, -20, 
  55, 47, 60, 9, 19, 37, 43, -3, 24, -60, 
  28, -29, 6, -50, -128, -128, -43, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -29, 6, -43, 
  39, -77, 7, -128, 54, -128, -128, -128, -128, -12, 
  37, -4, 53, 31, 33, -43, -77, -128, -14, -128, 
  -43, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -18, -128, -128, 4, -43, -50, -33, -128, -20, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, 34, 
  72, 57, 70, 30, 38, -128, 4, -128, 22, -128, 
  -128, -128, -128, -128, -128, -128, -23, -3, 39, -7, 
  51, 14, 101, 93, 110, 92, 104, 74, 61, 31, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -18, -60, 59, -6, 2, -16, 17, -128, -128, -128, 
  -128, -128, -128, -128, -77, -33, 22, 54, 74, 35, 
  43, 74, 97, 87, 108, 80, 97, 82, 88, 46, 
};