/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/5170b77f_nohash_2.wav" \
 * --output_c_file="features_c_files/no/no_5170b77f_nohash_2.cc" \
 */
#include "no_5170b77f_nohash_2.h"


const int g_no_5170b77f_nohash_2_width = 40;
const int g_no_5170b77f_nohash_2_height = 49;
alignas(16) const signed char g_no_5170b77f_nohash_2_data[] = {
  88, 57, 63, 48, -18, 4, 0, 7, -4, -26, 
  -10, 17, 0, -37, -50, 4, 5, -7, -33, -60, 
  -50, -26, 0, -2, 0, -26, -33, -18, -10, -50, 
  -33, -26, -50, -37, -26, -37, -26, -50, -26, -12, 
  69, 51, 59, 39, 32, 40, 28, 20, 16, 19, 
  4, 10, -12, -37, -18, -10, -18, -77, 4, -2, 
  -60, -37, -6, -37, -12, -20, -26, 1, 4, -29, 
  -18, -20, -18, -3, -12, -8, -1, -3, -26, -20, 
  76, 50, 79, 59, 44, 47, 23, -20, 14, 1, 
  11, -14, 7, -23, -12, -33, -37, -50, -29, -23, 
  -26, -37, -29, -23, -20, -43, -6, -12, 7, -50, 
  -18, -23, -18, -10, -12, -29, -12, -33, -1, -18, 
  68, 18, 59, 39, 28, 34, 18, -60, -50, -23, 
  -3, -128, -37, -18, 7, -60, -37, -128, -50, -77, 
  -12, -18, -7, -60, -37, -33, -29, -77, -37, -23, 
  -14, -43, -50, -43, -7, -26, -20, -12, 2, -14, 
  67, 20, 54, 41, 15, -128, -12, -37, -23, 4, 
  -29, -128, -16, -26, -14, -128, -14, -23, -20, -33, 
  -2, -33, -37, -60, -29, -60, -20, -37, -37, -43, 
  -8, -14, -2, -60, -29, -77, -29, -29, -8, -60, 
  56, 11, 59, 19, -16, -77, -33, -8, 4, -60, 
  -16, -37, -50, -128, -50, -77, -37, -33, -8, -77, 
  -77, -43, -23, -77, -50, -60, -23, -29, -43, -33, 
  -4, -128, -50, -77, -50, -29, -16, -50, -23, -50, 
  56, -14, 35, 12, 16, -2, 9, -33, 10, -60, 
  -12, -2, 4, -50, -16, -16, -23, -16, -10, -23, 
  -29, -50, -6, -60, -50, -128, -50, -77, -43, -60, 
  -23, -29, -29, -37, -16, -18, -6, -37, -16, -60, 
  57, 9, 49, 16, 42, 37, 62, 47, 42, 29, 
  16, -37, 6, -60, 4, -50, -43, -50, -10, -37, 
  -43, -29, 32, 16, -128, -128, -77, -26, -1, -29, 
  -6, -50, -4, -23, -6, -6, -18, -20, -6, -26, 
  55, -2, 44, 16, 14, -128, -6, -3, -12, -43, 
  0, -77, -26, -77, -33, -128, -77, -77, -60, -43, 
  -16, -128, -26, -20, -23, -50, -43, -3, 6, -50, 
  -33, -77, -33, -128, -33, -33, -18, -29, -18, -43, 
  49, 20, 32, -60, 67, 74, 94, 73, 56, 23, 
  -16, -43, -26, -60, -3, -43, -12, -60, -7, -50, 
  -1, -60, -77, -8, 17, -12, -1, -10, 0, 32, 
  40, -20, -43, -60, 19, -6, -26, -29, 0, -37, 
  47, -33, 37, -4, 22, -20, 33, -3, -7, -77, 
  -77, -128, -128, -77, -128, -43, -33, -128, -128, -128, 
  -18, -77, -128, -128, -26, -33, -60, -33, -1, -26, 
  -16, -50, -26, -77, 0, -26, -26, -77, -10, -37, 
  46, -77, 13, -20, -8, -128, -128, -128, -12, -128, 
  -37, -128, -128, -77, -77, -77, -26, -128, -128, -128, 
  -26, -128, -16, -128, -20, -60, -60, -128, -37, -128, 
  -50, -128, -77, -77, -37, -128, -37, -128, -37, -128, 
  35, -23, -16, -128, 13, -128, -128, -128, -128, -10, 
  -7, -128, -128, -128, -77, -128, -43, -128, -128, -128, 
  -77, -128, -77, -128, -128, -77, -128, -128, -128, -128, 
  -128, -128, -60, -128, -29, -128, -29, -128, -29, -77, 
  34, -20, 22, -23, -29, -128, -77, -128, -77, -128, 
  -50, -128, -50, -128, -128, -77, -43, -128, -128, -128, 
  -77, -77, -29, -128, -60, -77, -77, -128, -60, -128, 
  -128, -128, -43, -128, -60, -77, -23, -77, -128, -128, 
  103, 91, 106, 89, 105, 76, 88, 51, 54, -4, 
  20, -2, -37, -128, -50, -77, -37, -77, -37, -128, 
  -77, -77, 1, -50, -77, -77, -77, -128, -23, -128, 
  -37, -77, -77, -43, -60, -128, -29, -128, -50, -77, 
  123, 102, 120, 93, 117, 97, 115, 86, 104, 87, 
  80, 49, 62, 8, 18, -16, 6, -18, 24, -18, 
  14, 37, 95, 83, 32, -128, -128, -77, -18, -7, 
  -14, -7, 16, 6, -18, 15, 24, -14, 26, 9, 
  111, 92, 117, 84, 104, 84, 108, 72, 103, 91, 
  100, 79, 96, 65, 54, -128, -128, -26, 52, 40, 
  25, 41, 101, 84, 50, -1, 14, -20, -1, 16, 
  49, 15, 50, 55, 16, -29, 27, 14, 22, 14, 
  91, 75, 97, 82, 104, 80, 103, 91, 97, 59, 
  93, 66, 88, 67, 75, 62, 90, 71, 71, 48, 
  75, 72, 85, 58, 87, 51, 86, 82, 100, 87, 
  87, 40, 78, 81, 73, 45, 45, 8, 38, -10, 
  100, 70, 84, 74, 104, 92, 122, 102, 122, 95, 
  113, 82, 101, 86, 102, 88, 110, 94, 113, 89, 
  98, 72, 88, 84, 105, 83, 94, 78, 103, 93, 
  115, 84, 80, 30, 92, 79, 77, 64, 74, 59, 
  87, 52, 72, 65, 99, 81, 100, 87, 111, 85, 
  105, 85, 104, 83, 105, 84, 111, 85, 97, 73, 
  92, 59, 73, 48, 83, 11, 80, 66, 98, 82, 
  94, 60, 69, 47, 80, 68, 80, 62, 70, 55, 
  68, 27, 85, 55, 87, 72, 107, 83, 100, 76, 
  99, 77, 100, 82, 101, 79, 97, 47, 72, 55, 
  78, 20, 76, 55, 75, 5, 58, 41, 76, 48, 
  64, 6, 76, 26, 79, 65, 60, 49, 72, 34, 
  70, 30, 71, 42, 74, 72, 100, 82, 101, 68, 
  84, 72, 87, 64, 95, 82, 108, 70, 79, 52, 
  61, 54, 82, 48, 51, 11, 52, 28, 65, -14, 
  55, -50, 50, -14, 61, 43, 65, 34, 62, 48, 
  73, 37, 51, 42, 88, 72, 84, 64, 76, 34, 
  65, -20, 61, 40, 75, 38, 87, 62, 71, 48, 
  63, 50, 79, 36, 32, -10, 54, 35, 55, 11, 
  48, -29, 45, 9, 73, 47, 54, 9, 49, 22, 
  67, 44, 50, 45, 90, 69, 86, -37, 57, 39, 
  53, -10, 59, 37, 71, 37, 46, 15, 60, 26, 
  68, 67, 88, 36, 27, 21, 71, 72, 87, 51, 
  79, -23, 42, -23, 61, 21, 52, -10, 54, 17, 
  67, 47, 53, 40, 85, 50, 70, -128, 26, -2, 
  49, -128, 35, 17, 53, -37, 49, 4, 72, 34, 
  86, 69, 73, -33, 22, 25, 70, 55, 76, 33, 
  68, -33, 2, -128, 55, 5, 24, -77, 14, -77, 
  62, 41, 47, 11, 69, -128, 5, -128, -50, -50, 
  47, -128, 26, 21, 65, 48, 80, 52, 84, 59, 
  83, 72, 70, -50, -1, -77, 49, 45, 63, -128, 
  35, -128, -33, -128, 25, -128, 4, -128, -7, -128, 
  32, -20, 25, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -6, -128, 25, 9, 62, -77, 58, 45, 
  70, 60, 44, -128, -128, -128, -77, 9, 39, -128, 
  -18, -128, -128, -128, -43, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -33, 1, -37, -128, -128, -128, 
  16, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
