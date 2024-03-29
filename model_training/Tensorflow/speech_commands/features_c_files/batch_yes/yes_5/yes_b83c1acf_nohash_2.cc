/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/b83c1acf_nohash_2.wav" \
 * --output_c_file="features_c_files/yes/yes_b83c1acf_nohash_2.cc" \
 */
#include "yes_b83c1acf_nohash_2.h"


const int g_yes_b83c1acf_nohash_2_width = 40;
const int g_yes_b83c1acf_nohash_2_height = 49;
alignas(16) const signed char g_yes_b83c1acf_nohash_2_data[] = {
  110, 89, 74, 30, 31, 7, 0, 15, 31, 28, 
  26, 35, 26, -7, -128, -128, -128, -60, -33, -26, 
  -60, -128, -26, -7, -33, -7, -50, -60, -50, -60, 
  -50, -50, -18, -7, -18, -37, -33, -60, -33, -37, 
  110, 76, 81, 69, 67, 56, 54, 54, 80, 67, 
  65, 64, 44, 37, -6, -14, -60, -128, -26, -3, 
  -60, -50, -18, -50, -12, 4, -18, -50, -60, -37, 
  -18, -29, -26, -4, 12, -60, -37, -29, -26, -20, 
  43, 64, 84, 37, 38, 34, 52, 54, 79, 56, 
  77, 67, 57, 26, 8, -10, 9, -77, -50, -12, 
  -18, -29, 8, -43, -20, -26, 12, -8, -37, -50, 
  -37, -50, -12, -33, -14, -29, -37, -50, -26, -77, 
  -20, 34, 81, 28, 25, 33, 11, -37, 56, 63, 
  59, -26, 22, -33, -37, -43, -20, -50, -128, -33, 
  -12, -50, -14, -128, -20, -60, -77, -50, -37, -50, 
  -20, -43, -77, -60, -37, -77, -37, -77, -50, -77, 
  -60, -128, -20, 10, 55, 47, 35, -43, 25, 15, 
  64, 26, -37, -50, 20, 22, -3, -29, -60, -29, 
  -50, -50, -50, -77, -50, -128, -37, -60, -50, -50, 
  -50, -128, -37, -77, -37, -43, -29, -50, -37, -43, 
  -128, -128, 13, 10, 41, -20, -18, 39, 52, -33, 
  34, -37, -128, -43, -10, -60, -50, -33, -77, -128, 
  -77, -77, -29, -33, -50, -128, -77, -128, -37, -60, 
  -128, -77, -50, -128, -50, -60, -20, -77, -50, -128, 
  19, -128, 31, -26, 9, -128, -1, 11, 34, -60, 
  -77, -128, -77, 4, -1, -77, 4, -14, -50, -60, 
  -20, -60, -77, -77, -128, -128, -77, -128, -77, -77, 
  -37, -60, -37, -128, -128, -60, -77, -77, -77, -77, 
  -128, -128, 25, -43, 1, -128, 9, 28, 31, -128, 
  -128, -128, -128, -6, 24, -50, -43, -50, -77, -128, 
  -29, -77, -128, -128, -77, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -33, -128, -128, -128, -128, -128, 
  -77, -128, -128, -43, -8, -77, -23, -60, -50, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -77, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -33, -128, -60, -33, -16, -50, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -23, -23, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -29, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -77, 42, 34, 28, -60, 30, 21, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -50, -18, 2, 44, 45, 45, -7, 42, 27, 
  -60, -128, -128, -128, -77, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -77, -128, -128, -128, -128, 
  -77, -128, -60, -128, -3, 18, 54, 8, 9, -33, 
  -128, -128, -128, -128, -128, -128, -16, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -33, -60, -20, -29, -29, -128, 
  44, -128, -128, -128, -128, -60, 14, -60, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, -128, -128, -77, -128, -60, -128, -23, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, 32, -18, 33, 22, 45, 25, 19, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -33, -128, 
  -128, -128, 33, 30, 75, 83, 92, 85, 111, 94, 
  110, 89, 87, 65, 85, 82, 97, 58, 62, 34, 
  -128, -128, -6, -43, 39, 39, 72, 48, 25, -77, 
  0, -60, -33, -50, 18, -77, -128, -60, -60, -77, 
  -43, -29, 55, 80, 84, 48, 65, 21, 28, -1, 
  59, 29, 55, 56, 48, 6, 38, 1, 23, -12, 
  -50, 8, 8, -77, 13, 46, 74, 34, 2, 7, 
  19, 1, -20, -12, 35, 10, 0, -60, -128, -128, 
  -43, 30, 52, 61, 77, 58, 55, -26, -8, -128, 
  13, -128, 13, 24, 24, -128, -60, -128, -128, -128, 
  108, 95, 112, 100, 121, 95, 105, 82, 62, 47, 
  32, 21, 9, -37, -23, -60, -50, -10, 2, 1, 
  15, 35, 96, 82, 93, 33, 72, 32, -20, -128, 
  -128, 19, 44, -128, -77, -128, -128, -128, -128, -128, 
  110, 88, 91, 89, 112, 81, 94, 69, 105, 93, 
  95, -16, 13, 33, 33, -128, -2, -8, 11, -29, 
  14, 44, 82, 60, 82, 45, 64, 44, 50, 10, 
  -23, -8, 52, -29, -14, -128, -128, -128, -26, -77, 
  111, 89, 95, 77, 112, 93, 101, 94, 107, 72, 
  102, 66, 92, 54, 50, 32, 49, 63, 70, 70, 
  95, 79, 100, 80, 102, 84, 102, 70, 69, 25, 
  70, 80, 99, 48, 57, 25, 61, -1, 17, -3, 
  104, 89, 108, 76, 117, 100, 117, 92, 114, 74, 
  107, 79, 106, 77, 88, 86, 110, 93, 113, 97, 
  113, 93, 117, 97, 118, 97, 118, 95, 102, 68, 
  89, 85, 106, 61, 90, 78, 94, 74, 84, 73, 
  110, 88, 102, 77, 102, 75, 107, 100, 121, 87, 
  116, 94, 118, 94, 118, 94, 114, 96, 118, 97, 
  117, 97, 116, 88, 108, 92, 116, 89, 103, 83, 
  98, 86, 110, 75, 93, 75, 99, 78, 104, 78, 
  103, 77, 75, 63, 80, 11, 115, 95, 113, 98, 
  119, 95, 115, 94, 114, 93, 111, 88, 112, 90, 
  118, 87, 104, 71, 95, 70, 104, 76, 90, 73, 
  102, 73, 96, 73, 78, 64, 88, 71, 104, 88, 
  92, 62, 52, 31, 45, -128, 98, 55, 70, 99, 
  116, 93, 113, 85, 103, 87, 104, 78, 110, 89, 
  110, 65, 87, 58, 84, 34, 79, 47, 82, 50, 
  100, 54, 72, 8, 78, 49, 77, 65, 92, 69, 
  77, 38, 49, 35, 67, -1, 76, 52, 75, 68, 
  95, 85, 111, 80, 107, 80, 105, 85, 105, 85, 
  112, 61, 93, 61, 82, 11, 44, 24, 69, 41, 
  87, 61, 65, 44, 81, 51, 81, 71, 99, 71, 
  50, 22, 74, -29, 58, 11, 65, 54, 84, 53, 
  92, 37, 93, 74, 85, 44, 98, 70, 90, 62, 
  57, 48, 75, 63, 69, -43, -37, -128, 47, -26, 
  70, 58, 73, 11, 60, 34, 35, 54, 89, 64, 
  73, 57, 97, -128, 43, 21, 40, 15, 87, -128, 
  84, 61, 39, 50, 77, 54, 87, 51, 90, 32, 
  54, -128, -18, -50, 42, -128, -14, -128, 1, -128, 
  0, -7, 52, -50, 49, 20, 48, 52, 80, 42, 
  68, 55, 94, -128, -26, -128, -18, -14, 77, -60, 
  51, 45, 26, 42, 55, 27, 54, 11, 59, -18, 
  -128, -128, -33, -128, -7, -128, -128, -128, -128, -128, 
  -128, -12, 67, 4, 23, -37, 46, 44, 76, 30, 
  24, -33, 62, -128, -128, -128, -128, -128, -50, -128, 
  -8, -128, -43, -128, 11, -128, -128, -128, 35, -16, 
  -37, -128, -128, -128, -128, -128, 27, -128, -128, -128, 
  -128, -128, 8, 9, 1, -128, 41, -18, 32, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -33, -128, -128, -128, -128, -128, -12, -128, -26, -128, 
  4, -128, 19, -128, 31, -128, 57, 18, 50, 11, 
  67, 55, 81, 72, 108, 92, 117, 89, 107, 79, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -1, -128, -128, -128, -128, -128, 57, 24, 
  76, 45, 83, 42, 108, 85, 105, 74, 109, 82, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 30, 5, 
  69, 19, 63, 43, 77, 67, 89, 81, 105, 78, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, 26, -50, 
  26, -29, 50, 60, 66, 52, 72, 54, 100, 87, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -77, -77, 49, -2, 67, 45, 71, 23, 70, 49, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 36, -50, 39, -60, 49, -60, 63, 54, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 31, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 8, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  25, -23, 30, -128, 43, -50, 46, -77, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -60, 
  -29, -128, -128, -128, -26, -128, -128, -128, 2, -23, 
  6, 36, 63, -18, 32, 31, 67, -23, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -23, -128, 
  -128, -128, -128, -20, -3, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -12, -128, -128, -128, 
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
