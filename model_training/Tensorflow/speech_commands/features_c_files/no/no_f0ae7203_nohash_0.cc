/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/f0ae7203_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_f0ae7203_nohash_0.cc" \
 */
#include "no_f0ae7203_nohash_0.h"


const int g_no_f0ae7203_nohash_0_width = 40;
const int g_no_f0ae7203_nohash_0_height = 49;
alignas(16) const signed char g_no_f0ae7203_nohash_0_data[] = {
  72, 71, 79, 63, 54, 53, 44, 25, 39, 35, 
  17, -18, 0, 25, 20, 11, 5, -18, 17, 7, 
  23, 4, -26, 11, 5, -12, 0, -18, 9, -12, 
  0, -7, -4, -12, 0, -18, -10, -7, -10, -60, 
  58, 66, 82, 63, 54, 29, 50, 32, 31, 1, 
  4, 30, 22, -7, 4, -16, 16, 9, 8, -10, 
  24, -23, 13, -16, -1, -20, -12, -29, -12, -16, 
  -26, -29, -37, -37, -37, -14, -6, -23, -18, -60, 
  71, 72, 78, -18, 15, 18, 51, 20, 41, 22, 
  20, 27, 38, 7, 2, -33, 6, -18, -8, -18, 
  13, -12, 26, 1, 11, -10, -2, -16, -20, -18, 
  -29, -33, -20, -77, -37, -43, -7, -43, -12, -50, 
  61, 23, 55, 46, 45, 27, 39, 14, 40, 27, 
  27, -26, 11, 4, 35, 0, -8, -60, 5, -4, 
  21, -20, 19, -20, -29, -33, -3, -12, -3, -43, 
  2, -33, -29, -77, -20, -43, -37, -33, -20, -50, 
  69, 55, 76, 22, 41, 4, 21, 13, 24, -26, 
  6, -3, 2, 0, -6, -29, -33, -43, -33, -37, 
  -7, -23, -18, -23, -50, -6, 16, -4, -4, -37, 
  -16, -26, -14, -18, -20, -33, -8, -26, -20, -50, 
  64, 57, 77, 39, 54, 10, -77, -29, 30, 15, 
  40, 4, -26, -128, -33, -1, 20, -7, -33, -128, 
  24, -23, -33, -128, -4, -37, -18, -50, -33, -23, 
  -10, -77, -37, -43, -50, -60, -29, -37, -29, -77, 
  57, -10, 54, 34, 35, -50, -50, -26, 35, -23, 
  6, -60, 17, -43, 1, -16, -33, -20, -18, -26, 
  -1, -77, -60, -77, -18, -60, -33, -77, -50, -37, 
  -23, -37, -23, -77, -37, -50, -23, -37, -10, -60, 
  48, 15, 4, -128, 34, -23, 19, 4, -37, -33, 
  29, -10, 6, -16, 11, 4, 5, 0, 13, -43, 
  15, -43, -26, -16, -2, -26, -7, -26, -12, -60, 
  -26, -60, -23, -50, -33, -50, -33, -50, -12, -60, 
  8, 12, 50, -23, 12, -60, -4, -50, -1, -43, 
  2, -26, 4, -29, -60, -18, 22, 9, 8, -29, 
  -8, -43, 15, -60, -33, -60, -14, -33, -18, -50, 
  -33, -33, -23, -60, -43, -60, -26, -60, -43, -77, 
  115, 83, 66, 51, 55, 48, 57, -33, 34, -8, 
  23, -7, 32, -60, -2, -12, -23, -50, -29, -77, 
  -4, -23, -10, -77, -26, -77, -43, -77, -60, -128, 
  -60, -128, -43, -50, -6, -33, -26, -60, -33, -50, 
  120, 94, 117, 99, 118, 97, 118, 91, 92, 76, 
  93, 52, 29, -43, -12, -128, -29, -60, -37, -16, 
  2, -37, 12, 4, 11, -37, -1, -60, -20, -128, 
  -77, -60, -26, -43, 1, -43, -14, -23, 1, -12, 
  109, 82, 113, 94, 111, 92, 112, 70, 99, 82, 
  107, 70, 74, 48, 32, -33, -8, -16, -12, 39, 
  63, 50, 64, 69, 83, 50, 57, -3, -29, -23, 
  -20, 2, -14, -12, 30, 24, 34, 0, 14, 16, 
  103, 79, 99, 82, 105, 84, 110, 85, 92, 69, 
  100, 77, 57, 33, 60, 14, -26, -23, 48, 68, 
  90, 74, 86, 69, 88, 66, 72, 25, 2, -16, 
  -37, -7, 4, 1, 29, 6, 29, 17, 12, 19, 
  96, 74, 80, 67, 98, 65, 102, 83, 100, 71, 
  80, 67, 69, 50, 42, -37, 2, -26, 67, 77, 
  90, 75, 88, 74, 88, 69, 97, 69, 43, -6, 
  -10, 13, 19, 14, 31, 16, 38, 9, 26, 20, 
  87, 62, 62, 45, 84, 63, 99, 80, 89, 63, 
  71, 61, 81, 54, 50, -18, -3, -43, 61, 57, 
  80, 69, 89, 60, 85, 72, 91, 65, 44, 32, 
  46, 70, 66, 55, 47, 12, 27, 1, 28, 20, 
  77, 51, 42, 29, 77, 65, 97, 76, 95, 70, 
  72, 59, 69, 43, 14, -60, 65, 71, 95, 45, 
  79, 65, 87, 59, 75, 55, 78, 49, 73, 34, 
  81, 73, 77, 64, 68, 37, 53, -10, 24, 22, 
  72, 55, 80, 29, 88, 56, 91, 88, 114, 91, 
  95, 77, 110, 87, 97, 80, 99, 93, 114, 91, 
  107, 86, 98, 63, 87, 75, 112, 97, 114, 94, 
  109, 93, 112, 83, 84, 70, 75, 35, 55, 47, 
  63, 16, 65, 34, 62, 67, 96, 64, 112, 88, 
  104, 84, 115, 91, 107, 86, 111, 89, 111, 82, 
  104, 79, 99, 59, 87, 70, 102, 83, 110, 88, 
  107, 72, 104, 92, 116, 91, 97, 62, 81, 57, 
  64, 11, 66, 43, 67, 65, 85, 52, 102, 70, 
  100, 77, 109, 80, 109, 80, 111, 82, 98, 68, 
  89, 60, 87, 54, 75, 63, 94, 78, 102, 76, 
  104, 74, 96, 83, 107, 84, 97, 66, 73, 40, 
  69, 24, 82, 56, 74, 50, 68, 58, 98, 56, 
  98, 79, 102, 77, 104, 72, 108, 72, 76, 49, 
  79, 57, 80, 37, 72, 49, 84, 69, 95, 64, 
  90, 61, 85, 70, 96, 76, 96, 70, 89, 68, 
  67, 16, 84, 54, 70, 52, 68, 59, 89, 49, 
  99, 74, 92, 76, 98, 79, 100, 52, 58, 28, 
  75, 45, 69, 11, 62, 30, 77, 62, 90, 59, 
  84, 52, 76, 56, 81, 47, 82, 68, 87, 50, 
  59, -26, 87, 52, 67, 47, 53, 60, 75, 60, 
  88, 70, 84, 67, 76, 71, 94, 55, 29, 11, 
  67, 20, 70, 17, 70, 48, 75, 57, 88, 64, 
  86, 53, 76, 57, 87, 68, 94, 59, 79, 49, 
  47, -128, 82, 31, 49, -3, 14, 63, 72, 64, 
  82, 64, 67, 60, 83, 70, 80, 56, 70, -43, 
  62, 36, 58, 41, 74, 60, 80, 45, 74, 53, 
  77, 49, 76, 59, 88, 60, 82, 59, 65, 51, 
  35, -128, 79, 32, 54, -4, 4, 57, 60, 59, 
  75, 61, 63, 35, 64, 56, 59, 15, 60, 17, 
  52, 7, 48, 34, 73, 53, 80, 31, 57, 35, 
  72, 43, 74, 48, 78, 42, 65, 15, 64, 30, 
  17, -128, 73, -1, 53, 12, 18, 44, 49, 60, 
  74, 50, 48, -6, 33, 49, 60, 29, 45, 17, 
  53, 10, 62, 42, 76, 63, 81, 34, 56, 21, 
  71, 44, 66, 43, 73, -3, 40, 23, 49, 8, 
  12, -128, 72, -2, 55, 15, 32, 40, 52, 59, 
  69, 40, 62, 16, 65, -10, 67, 37, 34, -33, 
  42, -6, 54, 40, 76, 52, 69, -26, 32, 30, 
  70, 24, 59, 44, 67, -7, 59, 34, 55, -37, 
  9, -128, 70, 0, 57, 6, 47, 47, 49, 43, 
  51, -128, 57, 5, 29, -77, 62, 28, 51, -10, 
  50, -26, 41, 31, 79, 52, 61, -128, -2, 27, 
  64, -3, 44, 4, 44, -128, -1, -16, 24, -29, 
  -10, -128, 64, -26, 59, 11, 60, 50, 40, 4, 
  21, -128, 29, -128, 44, -128, 46, 1, 55, -20, 
  35, -43, 22, 31, 72, 29, 48, -128, -2, 15, 
  56, -128, 32, -6, 17, -128, 26, -18, 30, -128, 
  -20, -128, 54, -128, 58, -3, 67, 47, 19, -50, 
  -8, -128, 14, -128, 2, -128, -128, -60, 11, -128, 
  -14, -128, 16, 11, 65, 5, -7, -128, -77, -77, 
  24, -128, 19, -77, -29, -128, -10, -128, 4, -128, 
  -29, -128, 44, -128, 54, -26, 55, 24, -50, -128, 
  -4, -128, -128, -128, -128, -128, 23, 18, 50, -128, 
  -29, -128, -10, -12, 52, -60, -128, -128, -128, -128, 
  -23, -128, -33, -128, -128, -128, -60, -128, -23, -50, 
  -50, -128, 40, -128, 53, -18, -29, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -77, -12, -128, 
  -128, -128, -128, -128, 27, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -128, 40, -128, 50, -7, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -4, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, 17, -128, 20, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -1, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
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
