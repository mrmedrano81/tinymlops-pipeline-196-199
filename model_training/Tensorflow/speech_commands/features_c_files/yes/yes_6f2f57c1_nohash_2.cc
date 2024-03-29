/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/6f2f57c1_nohash_2.wav" \
 * --output_c_file="features_c_files/yes/yes_6f2f57c1_nohash_2.cc" \
 */
#include "yes_6f2f57c1_nohash_2.h"


const int g_yes_6f2f57c1_nohash_2_width = 40;
const int g_yes_6f2f57c1_nohash_2_height = 49;
alignas(16) const signed char g_yes_6f2f57c1_nohash_2_data[] = {
  99, 88, 96, 76, 75, 48, 49, 46, 69, 61, 
  48, 65, 60, 52, 48, 45, 76, 82, 97, 88, 
  88, 62, 76, 77, 70, 74, 97, 82, 79, 72, 
  64, 51, 47, 28, 31, 58, 65, 54, 57, 23, 
  92, 77, 88, 46, 72, 76, 67, 37, 69, 66, 
  62, 37, 39, 16, 60, 60, 83, 78, 71, 60, 
  72, 46, 27, 26, 37, 46, 89, 75, 74, 32, 
  60, 40, 10, 9, 27, 21, 37, 30, 51, 9, 
  78, 53, 67, 43, 73, 62, 55, 46, 64, 60, 
  66, 55, 68, 41, 73, 67, 77, 51, 76, 54, 
  51, 4, 23, 40, 58, 7, 54, 49, 49, 2, 
  29, 35, 27, -37, 32, -10, -8, -29, 39, -37, 
  72, 45, 79, 44, 40, 14, 37, 34, 69, 52, 
  50, 42, 55, 37, 66, 56, 63, 36, 56, 30, 
  37, 45, 44, 51, 74, -14, 36, 17, 15, 39, 
  34, -50, -12, -3, 17, -4, 32, -77, 34, -7, 
  77, 49, 79, 44, 45, 19, 7, -37, 43, -18, 
  30, 29, 42, 18, 57, 49, 64, 48, 61, 38, 
  44, 2, 40, -12, 27, -37, -10, -50, 49, 22, 
  -2, -50, -33, -20, 12, 18, 39, -33, 38, -10, 
  65, -1, 60, 27, 69, 38, 61, 42, 44, 16, 
  32, 39, 74, 44, 60, 21, 49, 51, 49, -128, 
  57, 46, 56, -128, 4, 9, 11, -128, 1, 45, 
  26, -43, -26, -43, 4, 29, 54, 48, -3, -128, 
  87, 32, 40, 37, 86, 59, 37, 55, 50, -37, 
  11, 27, 61, 68, 86, 53, 38, 32, 55, -50, 
  15, -16, 32, -128, 19, -3, -18, -128, -20, -60, 
  11, -33, 4, -23, -23, -128, -43, -10, -12, -77, 
  79, 54, 59, 49, 79, 4, 36, 11, -20, -128, 
  51, 44, 90, 90, 104, 70, 47, -7, 44, -18, 
  44, -18, 4, -23, 51, 19, -128, -128, -26, -128, 
  16, -50, 10, -10, -7, -128, -26, -10, -18, -128, 
  54, 40, 50, -128, 13, -37, 17, -50, 35, -6, 
  56, 23, 77, 59, 59, -26, 49, -20, 42, -128, 
  22, 25, 52, -3, 34, -33, -33, -128, -50, -77, 
  -2, -33, 24, -33, 28, -128, -16, -60, -60, -128, 
  43, -6, 22, 15, 53, -77, 7, -128, 40, -12, 
  41, 25, 95, 72, 76, -10, 74, 8, 7, -128, 
  16, -43, -18, -128, -43, -1, -77, -128, 13, -33, 
  -23, -128, -1, -20, 5, -60, -12, -128, -128, -128, 
  26, -128, 40, 10, -26, -128, 59, 13, 19, -128, 
  33, 31, 67, 15, 47, -77, 47, -128, -10, -128, 
  48, 20, 10, -128, -26, -128, -37, -128, 17, -20, 
  -14, -77, -26, -60, 0, 1, 15, -43, -77, -128, 
  -3, -128, 12, -128, -37, -43, 77, 37, 19, -128, 
  -20, -60, -14, -128, 7, -128, 6, -43, 7, -12, 
  44, -128, 13, -77, -3, -128, -77, -128, -18, -128, 
  -37, -37, 1, -60, -18, -77, -14, 25, -128, -128, 
  50, -128, -29, -16, -60, -23, 75, 48, 69, 35, 
  11, -128, -50, -128, -77, -77, 16, -128, -18, -20, 
  -3, -60, -14, -128, 5, -128, -77, -128, -50, -128, 
  -8, -60, -43, -60, -37, -128, 15, 1, -7, -37, 
  54, -128, -128, -128, 29, -128, -29, -128, 21, 19, 
  32, -8, -7, -128, -128, -128, -77, -128, -18, -128, 
  6, -43, 47, -60, -77, -128, -60, -128, -128, -77, 
  -26, -60, 2, -50, -43, -128, -14, -33, -60, -128, 
  9, -128, -128, -1, 54, -23, 48, -128, 32, 28, 
  37, -60, -128, -128, -128, -128, -77, -50, -14, -128, 
  -128, -18, 50, -77, 9, -128, 1, -128, -128, -128, 
  -60, -60, -18, -29, -33, -128, -37, -33, -128, -128, 
  19, -43, 14, -23, 50, -29, -18, -128, 1, -128, 
  -128, -60, -128, -128, -128, -128, -77, -128, -33, -128, 
  -43, -33, 14, -128, -43, -128, -128, -128, -50, -128, 
  -37, -77, -50, -60, -50, -128, -128, -128, -128, -128, 
  9, -23, -10, -128, -6, -37, -14, -77, -128, -128, 
  34, -29, -33, -128, -128, -128, -12, -77, -77, -128, 
  -128, -128, -7, -16, -16, -128, -128, -128, -50, -128, 
  -1, -60, -37, -23, -33, -128, -77, -128, -128, -128, 
  118, 101, 120, 95, 119, 99, 112, 63, -3, -60, 
  36, -26, -26, -128, -128, -128, 19, 6, -77, -128, 
  -60, -128, 45, 43, 15, -43, -3, -128, -4, -16, 
  52, 70, 81, -29, -20, -43, -7, -43, 14, -1, 
  118, 94, 101, 98, 121, 92, 85, 87, 87, 39, 
  69, -12, -43, -128, -43, -77, -2, -128, -50, -128, 
  -77, -20, 42, 77, 92, 49, 43, 74, 99, 50, 
  96, 91, 110, 57, 33, 17, 39, -18, 37, 31, 
  108, 82, 82, 89, 113, 86, 92, 88, 94, 0, 
  52, -33, -128, -128, -29, 37, 44, -60, 40, 4, 
  55, 77, 105, 90, 108, 87, 104, 90, 107, 81, 
  107, 84, 103, 84, 40, 12, 25, -7, 48, 43, 
  101, 79, 90, 66, 102, 82, 80, 74, 95, 69, 
  91, -18, -29, -50, 56, 59, 79, 48, 87, 77, 
  105, 92, 116, 91, 112, 94, 115, 84, 97, 75, 
  103, 84, 107, 87, 65, 55, 64, 43, 67, 54, 
  92, 64, 74, 63, 90, 62, 105, 89, 106, 93, 
  110, 24, 33, 58, 89, 87, 101, 77, 110, 89, 
  110, 94, 118, 87, 109, 92, 108, 72, 90, 72, 
  100, 79, 105, 87, 85, 41, 61, 26, 56, 45, 
  85, 47, 28, 73, 90, 48, 117, 94, 108, 95, 
  107, 51, 78, 80, 98, 84, 103, 83, 108, 89, 
  117, 89, 101, 70, 104, 81, 95, 49, 77, 70, 
  98, 74, 94, 69, 75, 24, 57, 34, 55, 36, 
  82, 44, 37, 65, 77, -18, 112, 85, 109, 94, 
  111, 95, 106, 85, 102, 79, 107, 87, 109, 91, 
  116, 81, 87, 59, 100, 78, 87, 35, 70, 53, 
  88, 50, 74, 45, 64, 50, 69, 54, 76, 63, 
  76, 27, 64, 46, 49, -128, 97, 58, 109, 86, 
  102, 92, 108, 81, 98, 72, 104, 85, 107, 85, 
  103, 60, 76, 54, 89, 54, 67, -16, 28, 45, 
  73, -29, 43, -128, 36, 6, 33, 14, 35, 13, 
  50, -128, 87, 60, 61, 15, 87, 16, 101, 57, 
  104, 86, 97, 62, 100, 74, 99, 82, 109, 80, 
  90, 39, 64, 44, 84, 53, 73, -50, 24, 41, 
  65, -37, 40, 16, 65, 49, 61, 37, 70, 43, 
  48, -128, 82, 46, 42, 14, 77, -8, 81, 16, 
  100, 75, 92, 54, 92, 74, 97, 74, 90, 57, 
  64, -23, 56, -14, 74, 41, 60, -128, -29, -128, 
  20, -128, 44, 4, 45, -14, 28, -18, 35, 4, 
  56, -128, 66, -7, -33, 0, 66, -128, 56, -128, 
  73, 42, 84, 40, 62, 56, 81, 31, 71, -33, 
  -37, -128, -128, -128, 39, -50, -26, -128, -128, -128, 
  -128, -128, -43, -128, 18, -128, -20, -128, -33, -128, 
  42, -128, 39, -128, -128, -128, -37, -128, 46, -128, 
  35, -128, 55, -29, 8, -128, 2, -128, -33, -128, 
  -128, -128, -128, -128, -23, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -50, -128, -33, -128, -33, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, 40, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, 51, 98, 74, 40, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  20, -128, -128, 2, 83, 90, 115, 93, 97, 81, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  13, 7, 59, 43, 90, 83, 111, 87, 100, 81, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, 10, 
  33, -23, 47, 42, 77, 63, 97, 62, 84, 75, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 21, -128, 
  -2, -128, 38, 37, 79, 35, 86, 71, 81, 77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 45, -128, 
  -8, -128, 21, 15, 69, 4, 70, 40, 79, 59, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -43, 58, -128, 
  0, -128, 17, -12, 67, 27, 78, 34, 71, 44, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -43, 
  -18, -128, 6, 9, 60, 1, 57, 17, 71, 25, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -3, -128, 
  -128, -128, -4, -16, 49, 13, 68, 34, 73, -18, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, -77, 40, 35, 62, 38, 71, 8, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, 29, 32, 59, 21, 69, -43, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 31, -77, 20, -20, 56, -128, 
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
