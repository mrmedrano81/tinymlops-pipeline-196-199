/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/5170b77f_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_5170b77f_nohash_0.cc" \
 */
#include "no_5170b77f_nohash_0.h"


const int g_no_5170b77f_nohash_0_width = 40;
const int g_no_5170b77f_nohash_0_height = 49;
alignas(16) const signed char g_no_5170b77f_nohash_0_data[] = {
  84, 56, 68, 52, 17, 4, -26, 20, -18, -12, 
  -26, -26, -10, -50, -18, -60, -128, -50, -50, -50, 
  -33, -18, -60, -60, -10, -18, -4, -12, -10, -18, 
  -26, -12, -18, 7, -10, -18, -4, 7, -4, -12, 
  62, 39, 57, 45, 34, 23, -6, 2, -1, -29, 
  -6, -20, -50, -50, -50, -29, -18, -29, -18, -7, 
  -50, -37, -18, -50, -18, -14, -12, -37, -26, -14, 
  -60, -37, -18, -37, -26, -20, -1, -16, -6, 0, 
  73, 29, 57, 46, 5, -20, -26, 7, 11, -29, 
  -37, -29, -1, -37, -26, -8, -12, -50, -37, -29, 
  4, -16, -50, -37, -12, -50, -29, -77, -50, -77, 
  -50, -77, -20, -43, -26, -43, -37, -33, -14, -43, 
  72, 38, 62, 40, -23, -7, 2, -18, -37, -43, 
  -37, -77, -14, 7, -14, -43, -12, -10, -50, -60, 
  -37, -43, -26, -50, -50, -33, -7, -33, -29, -43, 
  -37, -50, -29, -77, -29, -43, -29, -33, 6, -33, 
  61, 9, 49, 23, -6, -33, -14, -60, -29, -4, 
  -20, -43, -20, -20, -29, -33, 2, -20, -77, -26, 
  -29, -60, -50, -33, -29, -43, -29, -33, -20, -26, 
  -20, -43, -8, -33, -8, -26, -20, -16, -10, -43, 
  60, 22, 47, 28, 24, 17, -16, -50, -50, -77, 
  -77, -128, -50, -60, -77, -128, -37, -29, -37, -37, 
  -8, -37, -37, -33, -37, -77, -128, -128, -37, -43, 
  -20, -60, -50, -128, -29, -37, -8, -18, -10, -29, 
  55, 9, 40, 7, -26, -16, -10, -37, 8, 10, 
  13, 13, 19, 8, 22, -2, -16, -50, -20, -128, 
  -50, -50, -14, -26, -23, -60, -29, -43, -128, -128, 
  -37, -60, -10, -29, -16, -50, -16, -20, -6, -37, 
  56, 10, 45, 0, 30, 39, 19, 31, 49, 41, 
  26, -8, 52, 59, 70, 34, 60, 36, 57, 50, 
  34, 13, 31, 11, -6, -37, -16, -60, -23, -7, 
  4, -77, -43, -23, -50, -37, -6, -23, -3, -20, 
  51, -18, 30, -12, 17, 25, 23, -12, -6, -128, 
  -43, -60, -23, -128, 27, 20, 21, -77, 0, 7, 
  1, -50, -2, -26, -12, -128, -23, -77, -16, -33, 
  -33, -37, -33, -60, -50, -60, -33, -60, -20, -128, 
  44, -23, 36, 1, 9, 17, 16, -77, -77, -60, 
  -77, -128, -77, -128, -43, -128, -77, -128, -37, -128, 
  -60, -77, -77, -128, -33, -77, -77, -128, -77, -60, 
  -60, -128, -60, -128, -43, -50, -26, -77, -37, -128, 
  10, -50, 28, -26, 29, 32, 25, -128, -77, -37, 
  -8, -77, -50, -128, -77, -128, -37, -128, -60, -128, 
  -43, -128, -20, -50, -77, -43, -60, -50, -60, -128, 
  -60, -77, -43, -77, -18, -77, -60, -128, -37, -43, 
  107, 92, 109, 86, 104, 80, 96, 65, 53, -23, 
  -29, -60, 39, -3, -60, -128, -128, -77, -60, -128, 
  -77, -43, 60, 49, -8, -128, -33, -33, -33, -77, 
  -33, -50, 9, -77, -43, -77, -4, -128, -60, -77, 
  120, 99, 111, 85, 110, 88, 110, 89, 99, 83, 
  83, 61, 83, 70, 33, -60, -26, -50, -2, -60, 
  4, 14, 94, 82, 65, -29, -33, -26, 5, 13, 
  41, 19, 41, 32, -8, -23, 4, -26, 9, -7, 
  119, 95, 119, 91, 111, 92, 111, 80, 94, 83, 
  100, 76, 97, 77, 75, 0, 36, 25, 44, -20, 
  60, 42, 94, 77, 80, 1, 14, 24, 46, 52, 
  68, 72, 83, 24, 29, 40, 32, 29, 54, 41, 
  101, 84, 99, 88, 111, 83, 105, 90, 108, 71, 
  85, 59, 85, 59, 68, 25, 22, 35, 56, 39, 
  79, 72, 96, 75, 95, 73, 77, 80, 99, 81, 
  98, 68, 80, 44, 42, 31, 45, -3, 24, 16, 
  96, 77, 88, 74, 105, 89, 122, 100, 118, 94, 
  111, 85, 101, 81, 87, 78, 104, 96, 116, 90, 
  96, 82, 97, 82, 109, 81, 97, 83, 110, 92, 
  105, 89, 103, 59, 63, 54, 79, 86, 81, 46, 
  85, 62, 85, 65, 101, 83, 101, 87, 112, 86, 
  99, 82, 96, 79, 101, 87, 105, 76, 99, 81, 
  93, 70, 94, 75, 98, 72, 87, 69, 100, 83, 
  95, 72, 92, 57, 51, 60, 101, 85, 100, 36, 
  81, 55, 63, 54, 91, 74, 94, 80, 103, 75, 
  98, 71, 95, 76, 99, 81, 103, 55, 74, 57, 
  90, 66, 84, 62, 92, 74, 83, 61, 89, 64, 
  84, 57, 81, 56, 44, 11, 75, 55, 86, 47, 
  74, 42, 67, 49, 84, 68, 90, 72, 97, 67, 
  87, 65, 84, 56, 82, 65, 95, 47, 56, 49, 
  67, 29, 75, 41, 70, 50, 75, 50, 84, 60, 
  80, 34, 70, 49, 40, 34, 77, 63, 84, 34, 
  67, 26, 62, 35, 74, 58, 85, 62, 84, 51, 
  80, 48, 65, 29, 70, 45, 93, 40, 63, 49, 
  76, 46, 76, 49, 65, -12, 67, 43, 87, 53, 
  77, 32, 71, -23, 34, -12, 84, 45, 68, 9, 
  59, 5, 57, 14, 57, 38, 82, 55, 67, 27, 
  74, 4, 14, -23, 73, 54, 87, 51, 79, 27, 
  62, 53, 71, 33, 47, -50, 53, -4, 64, 6, 
  54, -77, 38, -14, 35, -8, 57, 35, 66, -6, 
  54, -8, 44, -1, 52, 11, 67, 21, 29, 25, 
  73, 8, 32, -26, 66, 54, 90, 59, 77, -26, 
  54, 42, 70, -6, -6, -60, 15, -128, 46, -29, 
  26, -37, 39, -10, 13, -50, -2, -37, 47, -33, 
  52, -12, 50, -14, 45, 6, 18, -128, -128, -14, 
  59, -128, -14, -77, 54, 47, 77, 44, 74, 33, 
  52, 39, 43, -128, -128, -128, -128, -128, 36, -60, 
  25, -43, 37, -128, -37, -128, 21, -77, 29, -29, 
  44, -26, 49, -77, 55, 1, -60, -128, 17, -128, 
  46, -37, -37, -128, 35, 15, 45, -33, 39, -18, 
  -10, -77, -43, -128, -128, -128, -128, -128, -128, -128, 
  -33, -128, -128, -128, -50, -128, -37, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -20, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 12, -128, -128, -128, -128, -128, 
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
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
