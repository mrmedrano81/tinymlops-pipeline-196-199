/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/db24628d_nohash_2.wav" \
 * --output_c_file="features_c_files/yes/yes_db24628d_nohash_2.cc" \
 */
#include "yes_db24628d_nohash_2.h"


const int g_yes_db24628d_nohash_2_width = 40;
const int g_yes_db24628d_nohash_2_height = 49;
alignas(16) const signed char g_yes_db24628d_nohash_2_data[] = {
  126, 104, 125, 103, 125, 103, 125, 103, 125, 102, 
  124, 101, 123, 101, 120, 97, 112, 94, 99, 90, 
  114, 92, 107, 94, 101, 79, 75, 35, 57, 59, 
  61, 61, 73, 65, 70, 66, 60, 55, 63, 59, 
  99, 67, 99, 82, 101, 58, 72, 44, 72, 66, 
  94, 67, 78, 59, 89, 71, 71, 55, 80, 36, 
  95, 79, 87, 55, 76, 60, 75, 41, 48, 50, 
  69, 57, 76, 57, 61, 20, 29, -8, 29, 8, 
  42, 40, 84, 64, 89, 40, 85, 69, 61, 39, 
  54, -23, 47, -128, 45, 6, 45, 27, 84, 81, 
  106, 85, 94, 69, 67, -6, 37, 50, 49, 41, 
  56, 42, 70, 30, 44, -7, 16, -3, 19, -8, 
  -43, -20, 60, -128, -12, -128, 48, -128, 4, -128, 
  -16, -128, -128, -128, -128, -128, 50, 52, 84, 80, 
  83, 34, 88, 54, 37, -16, 50, 45, 68, 49, 
  48, -12, 36, 9, 39, -26, -4, -23, 19, -33, 
  -128, -128, -128, -128, 9, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 35, 47, 95, 64, 
  51, 10, 56, -77, 26, -33, 43, 50, 60, 42, 
  54, -128, 26, 35, 53, -4, -4, -50, -23, -128, 
  -128, -128, -128, -128, -128, -128, 10, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 20, 35, 80, 9, 
  45, -77, 35, -128, -18, -16, 30, 11, 42, 35, 
  19, -29, 47, 23, 42, 4, -6, -50, -23, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, 43, -37, 
  4, -60, 58, -128, -77, -128, 8, -20, 24, -20, 
  43, -128, 11, -3, 30, 25, 9, -18, -18, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -26, -128, 50, -50, 
  0, -60, 52, -128, -77, -128, -1, 23, 53, -7, 
  45, -77, -33, -77, 11, -37, -1, -50, -8, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 7, -128, -37, -128, 
  -128, -128, -33, -128, -43, -128, -18, -37, -8, -77, 
  14, -128, -29, -77, -77, -128, -10, -128, -26, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -20, -50, 
  -128, -128, -77, -128, -128, -128, -33, -128, -77, -128, 
  -20, -128, -37, -128, -43, -128, -60, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -14, -128, -128, -128, -6, -50, 48, 7, 
  49, -26, -23, -128, -29, -29, 44, -18, -3, 13, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -29, 30, 74, 24, 
  69, 25, 5, -1, 38, 28, 52, -12, 34, 43, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -14, 54, -16, 
  47, -50, 17, -77, -7, -4, 14, 9, 31, 29, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -77, 11, -77, 
  -43, -128, -23, -128, 30, -3, 24, -37, 5, -43, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, -128, -128, 
  -128, -128, -128, -128, -12, -128, -14, -43, -14, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -77, -128, 
  -128, -128, -1, -128, -128, -128, -50, -128, -60, -128, 
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
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -128, -8, -43, 
  -60, -10, 20, 1, 47, -18, -18, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, -20, -60, 
  -37, 2, 38, 4, 35, -77, -23, -33, 48, 28, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -77, -128, -18, 0, 
  49, 42, 59, 54, 69, 40, 82, 69, 90, 81, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -60, 
  32, 14, 36, 36, 55, 25, 65, 47, 65, 54, 
  -128, -128, -128, -128, -128, -128, -128, -128, 9, -128, 
  -128, -128, -128, -128, -128, -10, 40, -77, -128, -128, 
  -128, -128, -128, -128, -128, -77, -43, -128, -128, -128, 
  -29, 0, 17, -50, 31, 27, 21, -50, 4, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 29, 2, 
  -128, -128, -128, -128, -128, -10, 36, 11, -50, -128, 
  -128, -128, -16, -128, -7, -77, -37, -37, -60, -128, 
  -6, -14, -37, -128, -128, -77, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 1, -6, 
  -50, -128, -128, -77, -12, 66, 84, 57, 52, -43, 
  -77, -128, -23, 28, 76, 83, 100, 87, 104, 73, 
  70, 54, 49, 29, 79, 60, -4, -128, 4, -128, 
  -128, -128, -128, -128, -128, -128, -43, 24, 77, 62, 
  40, -43, -33, 4, 70, 82, 107, 82, 107, 85, 
  99, 86, 110, 96, 118, 100, 119, 96, 121, 100, 
  119, 99, 116, 99, 121, 100, 119, 95, 111, 91, 
  119, 100, 122, 102, 117, 90, 90, 36, 57, 34, 
  60, 13, -23, 13, 54, 69, 90, 80, 96, 84, 
  107, 97, 113, 90, 111, 86, 99, 57, 90, 72, 
  86, 65, 90, 59, 86, 62, 90, 71, 85, 59, 
  100, 72, 112, 91, 110, 97, 107, 90, 78, 36, 
  50, 32, 32, 38, 62, 57, 83, 65, 90, 73, 
  99, 82, 106, 67, 97, 67, 90, 50, 62, 19, 
  56, -128, 29, -50, -10, -128, 37, 12, 69, 42, 
  82, 74, 98, 50, 69, 67, 116, 94, 94, 74, 
  93, 63, 68, 65, 90, 76, 103, 88, 107, 94, 
  109, 72, 90, 56, 92, 63, 77, 54, 81, 45, 
  64, -26, -2, -128, -6, -128, -18, -29, 47, -12, 
  77, 50, 63, -128, 70, 63, 106, 87, 115, 79, 
  77, 70, 71, 80, 100, 81, 103, 79, 110, 84, 
  99, 59, 82, 55, 85, 46, 69, 37, 57, -6, 
  54, -128, -26, 34, 65, 27, -23, -128, 34, 2, 
  43, -128, -3, -128, 0, -128, 47, 35, 84, 53, 
  71, 45, 52, 25, 56, 45, 64, 48, 93, 67, 
  67, -7, 40, -77, 67, 27, 42, -128, 24, -3, 
  77, 18, 52, 44, 99, 80, 84, 20, 61, 31, 
  -128, -128, -128, -128, -128, -128, -128, -128, 22, 35, 
  49, -77, -50, -128, 60, 12, 43, -1, 76, 5, 
  -14, -128, 19, 20, 64, -37, 39, -20, -4, -128, 
  42, -77, 65, 31, 72, 56, 82, 46, 58, 37, 
  -128, -128, -128, -128, -128, -128, -128, -128, -16, -77, 
  47, 55, 28, -128, 35, 1, 57, 38, 80, 9, 
  25, -128, 33, 11, 36, -128, 40, -1, 63, 35, 
  79, 70, 89, 82, 95, 79, 109, 84, 108, 80, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  35, 51, 52, -20, 44, -50, 52, 11, 54, -50, 
  44, 7, 55, 28, 70, -37, 43, 14, 65, 22, 
  89, 72, 103, 76, 103, 82, 104, 82, 99, 85, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  11, -12, 44, 22, 38, -10, 58, -128, 14, -128, 
  15, -23, 57, 19, 37, -128, 46, 45, 75, 48, 
  85, 55, 95, 79, 93, 58, 95, 72, 93, 69, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, 32, 12, 75, 42, 54, 32, 60, -128, 
  46, 0, 57, -37, 19, -4, 63, 39, 62, 37, 
  92, 51, 89, 63, 81, 57, 92, 69, 87, 57, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -29, -60, 65, 26, 62, -4, 38, -128, 
  4, -128, -26, 4, 38, -128, 35, 20, 45, 14, 
  75, 45, 84, 70, 88, 57, 87, 55, 88, 52, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 47, -43, 59, -29, 2, -128, 
  -43, -128, -14, -128, 20, -128, 45, -128, 15, 17, 
  56, 18, 62, 38, 83, 50, 76, 50, 70, 32, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 17, -128, 2, 17, 18, -128, 
  -128, -128, -29, -128, -12, -128, 28, 2, 57, 16, 
  64, 11, 69, 6, 65, 51, 60, 38, 68, 24, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -128, -128, -50, -128, 
  -128, -128, -77, -128, -60, -128, 29, -8, 34, 0, 
  56, -14, 57, -12, 66, 6, 54, 1, 39, -26, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -77, -33, -128, 
  -128, -128, -128, -128, -128, -128, -16, -128, 20, 5, 
  57, 2, 49, 21, 59, 19, 67, 15, 35, -14, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 8, 24, -77, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -10, -77, 
  8, -3, 46, -2, 47, 23, 70, -37, 29, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -26, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, 15, 0, 
  49, -23, 29, -29, 15, 35, 40, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 5, -14, -128, -128, 
  -128, -128, -128, -128, -20, -128, -128, -77, 45, -128, 
  12, -77, 40, -128, 40, 21, 29, -128, -26, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -33, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -1, -128, 
  -128, -128, 34, -128, 11, -128, -26, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 35, -128, -2, -128, -7, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -18, -128, -77, -128, -128, -128, -128, -128, 
};
