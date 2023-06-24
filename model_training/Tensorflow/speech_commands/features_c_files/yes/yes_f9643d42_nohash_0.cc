/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/f9643d42_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_f9643d42_nohash_0.cc" \
 */
#include "yes_f9643d42_nohash_0.h"


const int g_yes_f9643d42_nohash_0_width = 40;
const int g_yes_f9643d42_nohash_0_height = 49;
alignas(16) const signed char g_yes_f9643d42_nohash_0_data[] = {
  75, 63, 31, 65, 69, 66, 67, 57, 73, 57, 
  59, 71, 79, 56, 50, 59, 66, 15, 0, 17, 
  31, 7, 20, 11, 20, 23, 5, 4, -18, -50, 
  -26, 15, 5, -7, 14, 11, -18, -12, 5, -2, 
  82, 48, 37, 59, 66, 53, 25, 49, 66, 53, 
  69, 45, 60, 56, 42, 45, 67, 47, 38, 11, 
  27, 11, 8, 4, -12, 2, 12, -4, -37, -29, 
  -18, -10, -6, -29, -26, -29, -1, 12, 12, -10, 
  82, 55, 72, 65, 68, 45, 56, 71, 79, 47, 
  65, 55, 62, 39, 32, 36, 61, 2, 16, -4, 
  13, 14, 23, 4, -2, 4, 7, -60, -26, -50, 
  -1, -18, -37, -1, -7, -12, 4, -18, -2, -7, 
  69, 72, 76, -8, 30, -1, 58, 35, 59, 52, 
  69, 37, 34, 13, 48, 30, 52, 11, 24, -7, 
  4, 7, 26, -60, 1, 10, 0, -43, -14, -43, 
  7, -6, -14, -14, -3, -20, -14, -77, -16, -26, 
  72, 38, 39, 25, 65, 49, 58, -23, 36, 30, 
  32, 39, 49, 5, 8, 14, 59, -26, -2, -20, 
  16, 25, 24, -60, 9, 0, -10, -10, -3, -18, 
  -23, -29, 1, -23, -10, -37, -4, -29, 0, -23, 
  70, 7, 52, -12, 52, 35, 64, 49, 55, 32, 
  24, -6, 34, 9, 10, 27, 47, 29, 17, -77, 
  -14, -37, -8, -37, 7, -14, -18, -23, -8, -26, 
  0, -10, -10, -14, -1, -37, -23, -50, -18, -50, 
  60, -37, 56, 42, 61, 33, 71, 28, 58, -14, 
  13, -6, 39, -10, 5, 18, 39, 19, 32, -43, 
  31, -14, -20, 1, 5, 1, 6, -60, -10, -23, 
  -12, -50, -23, -50, -6, -33, -18, -50, 6, -26, 
  33, -14, -23, -77, 49, 21, 17, -128, 42, 20, 
  62, 13, 30, -18, 10, -60, 40, 8, 24, -18, 
  9, -60, -29, -37, 4, -20, -20, -60, -33, -77, 
  -12, -77, -43, -128, -33, -33, -7, -43, -26, -33, 
  52, -4, 40, 47, 65, 37, 57, 19, 61, -12, 
  4, -8, 50, 26, 29, -26, 32, 2, 24, 5, 
  34, -20, -2, -77, -6, -33, -4, -43, -18, -50, 
  -14, -43, -12, -1, -33, -77, -33, -50, 0, -37, 
  -14, -60, 11, -77, 53, 36, 16, 16, 55, -14, 
  33, 7, 24, -128, 47, -23, 23, -23, -50, -16, 
  -7, -37, 4, -77, -29, -12, -29, -14, -7, -50, 
  -20, -128, -8, -26, -43, -60, -26, -50, 16, -3, 
  1, -4, 9, -10, 33, -128, 34, -2, 48, 44, 
  56, 11, 21, 32, 40, -43, 4, -77, 15, -23, 
  -3, -77, -20, -77, -18, -77, -16, -10, 45, -12, 
  -10, -33, 4, -12, 29, -14, 27, -6, 64, 42, 
  48, 44, 56, 45, 59, 11, 34, -43, 33, 17, 
  46, 27, 48, 48, 54, -2, 40, -33, 1, -29, 
  -60, -1, 32, -29, -18, -26, 59, 77, 93, 62, 
  40, 37, 60, 48, 69, 27, 56, 46, 93, 73, 
  117, 95, 110, 86, 105, 79, 83, 29, 53, 19, 
  33, 39, 55, 21, 49, -10, 50, -4, -10, -77, 
  5, 55, 78, 12, 20, 43, 99, 92, 107, 82, 
  95, 81, 101, 79, 82, 61, 86, 66, 95, 75, 
  114, 97, 121, 89, 110, 78, 99, 49, 59, 50, 
  63, 35, 47, -50, 48, 2, 32, 8, 55, 26, 
  74, 84, 101, 62, 76, 74, 110, 87, 109, 77, 
  88, 61, 71, 56, 87, 62, 92, 74, 93, 62, 
  109, 88, 114, 96, 120, 96, 105, 84, 100, 56, 
  80, 63, 70, 47, 58, 19, 54, 52, 74, 63, 
  99, 90, 102, 67, 95, 89, 111, 84, 110, 87, 
  101, 53, 91, 75, 96, 75, 92, 85, 106, 84, 
  101, 73, 103, 92, 120, 99, 110, 90, 112, 79, 
  101, 85, 84, 37, 75, 44, 69, 78, 100, 76, 
  111, 91, 110, 83, 109, 88, 97, 74, 99, 69, 
  89, 42, 84, 68, 85, 76, 95, 69, 77, 48, 
  90, 63, 89, 81, 105, 78, 115, 90, 109, 84, 
  108, 85, 82, 59, 87, 75, 91, 79, 104, 94, 
  110, 75, 94, 80, 89, 59, 77, 59, 91, 49, 
  69, 37, 80, 64, 97, 82, 98, 77, 79, 58, 
  80, 60, 82, 49, 76, 55, 109, 91, 110, 87, 
  99, 71, 105, 66, 91, 83, 107, 87, 112, 88, 
  91, 54, 99, 84, 85, 24, 64, 1, 67, 56, 
  77, 45, 84, 59, 100, 81, 100, 67, 68, 33, 
  78, 49, 64, -128, -37, -20, 80, 78, 102, 77, 
  88, 36, 79, 73, 98, 82, 107, 93, 116, 80, 
  79, 43, 80, 73, 85, 34, 49, 0, 57, 38, 
  68, 45, 87, 68, 101, 81, 97, 66, 57, 4, 
  70, 1, -77, -128, 27, -77, 68, 50, 93, 77, 
  87, 63, 85, 52, 100, 73, 108, 84, 98, 32, 
  79, 24, 75, 58, 59, -77, -128, -128, 17, -33, 
  42, 30, 88, 76, 78, 54, 75, 20, 10, -128, 
  44, -128, -128, -128, -8, -128, 30, 50, 84, -20, 
  79, 54, 84, 64, 92, 61, 100, 59, 86, 34, 
  55, -6, 56, 31, 59, -23, 16, -128, 30, -16, 
  55, 49, 98, 70, 75, 52, 66, 29, 15, -77, 
  -77, -128, -128, -128, -77, -128, -128, -37, 57, 39, 
  74, -33, 85, 54, 63, -12, 67, 29, 67, -77, 
  30, -50, 46, -14, 50, -128, -128, -128, -128, -12, 
  53, 50, 68, 29, 54, -20, -10, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, 7, 
  62, -1, 44, -60, 34, -128, -2, -2, 58, -128, 
  -128, -128, 9, -128, 21, -128, -128, -128, -128, 4, 
  57, 52, 69, 11, 20, -128, 45, 6, 69, 40, 
  -128, -128, -128, -128, -128, -128, -128, -128, 23, -128, 
  -33, -128, 25, -50, 21, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, 6, -128, -128, -128, -43, 49, 
  82, 79, 91, 67, 79, 47, 91, 70, 95, 84, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -33, -128, -128, -128, 13, -128, -77, -128, -60, 17, 
  87, 67, 90, 71, 76, 46, 93, 70, 88, 76, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 18, -128, -1, -128, 19, 15, 
  76, 64, 92, 58, 76, 53, 95, 65, 90, 70, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 50, -18, -50, -128, -77, -128, 
  32, 32, 76, 50, 64, 32, 86, 39, 74, 54, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 1, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -18, -128, 29, -128, -60, -128, -29, -14, 
  62, 36, 60, 17, 46, 40, 77, 43, 56, 39, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 29, -128, -33, -128, 25, -12, 
  58, 35, 74, 9, 49, 27, 65, 29, 70, 34, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -77, -128, -128, -128, -29, 25, 
  60, -7, 65, 10, 29, -60, 46, -1, 62, 16, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -60, -60, 
  38, 14, 55, -33, 46, -8, 40, 17, 54, -7, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 14, -128, -128, -128, 
  24, -23, -1, -128, 33, -10, 29, 6, 53, -7, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, -128, -128, 
  17, -7, 45, -29, 30, -60, 23, -50, 36, -26, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -20, 13, 41, 12, 21, -20, 49, -43, 5, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  27, -128, 11, -128, -3, -128, -23, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -16, -128, 30, -128, 2, -128, -128, -128, -6, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -60, 1, -128, -128, -128, -20, -128, -12, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
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
