/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/b97c9f77_nohash_4.wav" \
 * --output_c_file="features_c_files/no/no_b97c9f77_nohash_4.cc" \
 */
#include "no_b97c9f77_nohash_4.h"


const int g_no_b97c9f77_nohash_4_width = 40;
const int g_no_b97c9f77_nohash_4_height = 49;
alignas(16) const signed char g_no_b97c9f77_nohash_4_data[] = {
  80, 82, 96, 72, 78, 90, 102, 82, 76, 64, 
  62, 53, 74, 66, 88, 85, 89, 64, 65, 78, 
  94, 74, 72, 63, 68, 69, 78, 58, 33, 15, 
  -50, -7, -4, -12, -10, -7, 9, 7, -10, -7, 
  83, 55, 70, 49, 92, 91, 112, 80, 82, 67, 
  79, 59, 42, 44, 95, 94, 110, 58, 75, 65, 
  91, 52, 74, 70, 62, 62, 81, 63, 15, -6, 
  0, -50, -26, -29, 4, -8, -12, -16, 12, -29, 
  64, 60, 76, 72, 95, 88, 112, 86, 86, 65, 
  60, 54, 77, 59, 95, 53, 56, 61, 74, 52, 
  82, 61, 73, 54, 50, 41, 74, 53, 13, -8, 
  -2, -6, -2, -23, -14, -7, -7, -18, -2, -16, 
  73, 78, 94, 40, 84, 75, 94, 66, 84, 25, 
  44, 40, 52, 16, 70, 69, 99, 58, 66, 32, 
  77, 54, 65, -7, 47, 24, 49, 0, -23, 1, 
  11, 4, 6, -12, 20, -4, 1, 4, 16, -3, 
  63, 71, 96, 64, 80, -12, 64, 38, 61, -4, 
  39, 18, 60, 11, 68, 50, 82, 51, 40, 6, 
  62, 40, 24, -18, 47, -60, 11, -128, -6, -37, 
  5, -37, -8, -16, 12, -18, -16, -29, -4, -29, 
  71, 58, 82, 64, 67, -128, 25, -43, 42, -16, 
  -6, -128, 21, -16, 8, -128, 34, -10, 33, 48, 
  72, 37, 14, 5, 39, -26, -20, -128, -33, -77, 
  -16, -60, -33, -37, -18, -33, -1, -8, 7, -18, 
  80, 24, 60, 46, 49, -128, -128, -128, 48, 42, 
  52, -10, 19, -128, -50, -128, 15, -1, 43, 42, 
  70, -6, -77, -128, 9, -50, -33, -128, -60, -128, 
  -26, -33, -18, -26, -7, -43, -2, -60, -12, -26, 
  40, -128, 9, 17, 34, -128, -37, -128, 44, 63, 
  76, 31, 16, 1, -128, -128, -128, -128, -60, 13, 
  47, 12, 4, -60, 15, -29, 14, -128, -14, -43, 
  -7, -43, -33, -2, -43, -77, -26, -37, -20, -60, 
  32, -128, 28, 4, 9, -128, -12, -128, 10, -18, 
  36, -26, -60, -128, -128, -128, -128, -128, -14, -128, 
  -20, -77, 36, -60, -2, -128, 32, -60, -60, -128, 
  -8, -60, -26, -77, -43, -60, -20, -29, -8, -128, 
  66, 37, 57, 9, 37, -128, 9, 4, -1, -128, 
  5, -7, -60, -14, -128, -128, -128, -128, -16, -128, 
  0, -77, 46, 27, 12, -128, -128, -128, 4, -77, 
  -26, -77, -14, -77, -14, -128, -20, -37, -16, -77, 
  70, 13, 30, 36, 70, -128, -14, -33, 41, -60, 
  41, -26, 44, -37, -128, -128, -128, -60, 36, -6, 
  -128, -128, 74, 60, 64, 34, 45, 52, 59, 39, 
  -16, -18, 25, -77, -10, -60, -60, -60, -23, -77, 
  66, -14, -128, -128, -128, -128, -128, -77, 49, -128, 
  34, -3, 14, -128, -128, -128, -128, -128, -3, -60, 
  -128, -128, 70, 52, 4, -128, -33, -43, 25, -77, 
  -37, -128, -60, -128, -77, -128, -2, -128, -37, -128, 
  -6, -128, 21, -60, 11, -128, -128, -128, -128, -128, 
  -7, -7, -33, -128, -128, -128, -128, -128, -43, -128, 
  -128, -128, 15, -10, 42, -128, -128, -128, -37, -128, 
  -60, -128, -60, -60, -18, -37, 1, -128, -37, -60, 
  8, -128, 22, 6, 24, -128, -128, -128, 13, -128, 
  -20, -77, -37, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -3, -128, 15, -128, -128, -128, -77, -128, 
  -50, -128, -60, -128, -50, -77, -50, -77, -37, -128, 
  -77, -128, -128, -50, 52, 9, 2, -128, -8, -128, 
  35, -77, -77, -128, -128, -128, -128, -128, 39, -12, 
  -12, -128, -8, -20, 29, -128, -128, -128, -77, -128, 
  -128, -128, -77, -128, -33, -128, -43, -128, -50, -128, 
  -50, -128, -128, -128, 75, 49, 30, -128, -77, -128, 
  17, -128, -128, -128, -128, -128, -128, -128, 42, -128, 
  -128, -128, -33, -20, 47, -77, -50, -128, -37, -128, 
  -50, -128, -60, -128, -60, -60, -33, -77, -43, -77, 
  34, -33, -33, -128, 69, 25, -18, -128, -128, -128, 
  -50, -128, -16, -128, -128, -128, -128, 44, 74, 16, 
  40, 24, 84, 65, 82, 47, 1, 0, 21, -14, 
  -50, -128, 0, -29, -77, -128, -20, -23, -26, -77, 
  50, -128, -128, -128, 32, -128, -128, -128, -128, -128, 
  -10, -128, 0, -128, -128, -128, -128, -16, 60, 28, 
  27, 45, 72, 31, 44, -6, 4, 15, 13, -77, 
  -33, -128, -33, -50, -33, -128, -33, -20, -50, -128, 
  114, 94, 112, 91, 105, 53, 5, -4, 61, 39, 
  59, 55, 48, -128, -43, -128, 46, 69, 76, 49, 
  81, 62, 93, 75, 90, 12, 5, 20, 6, -128, 
  -8, -43, -20, -16, 17, -20, 13, 8, 13, -29, 
  111, 96, 117, 97, 118, 73, 65, 69, 91, 30, 
  90, 78, 67, -6, 40, 46, 97, 89, 87, 48, 
  56, 73, 104, 89, 106, 56, 8, -2, 36, -50, 
  28, -2, 21, -23, 31, 34, 52, 42, 53, 44, 
  100, 84, 107, 86, 108, 67, 68, 76, 100, 48, 
  98, 78, 51, 64, 74, 75, 109, 85, 86, 45, 
  57, 65, 96, 79, 96, 80, 62, 25, 43, -37, 
  6, 11, 19, -1, 41, 32, 57, 54, 42, 23, 
  100, 77, 105, 69, 107, 93, 114, 95, 114, 96, 
  113, 90, 114, 99, 117, 98, 113, 89, 109, 82, 
  94, 65, 99, 77, 112, 97, 111, 87, 91, 37, 
  91, 79, 72, 56, 69, 58, 65, 62, 72, 60, 
  94, 75, 94, 73, 91, 91, 117, 88, 110, 95, 
  114, 90, 115, 94, 117, 92, 99, 72, 100, 81, 
  96, 80, 84, 44, 79, 57, 87, 81, 109, 84, 
  90, 79, 103, 65, 65, 50, 65, 37, 84, 71, 
  90, 69, 90, 67, 88, 79, 104, 76, 102, 85, 
  107, 84, 112, 93, 111, 45, 68, 42, 82, 46, 
  83, 61, 76, 34, 41, -29, 55, 39, 89, 75, 
  79, 57, 99, 80, 65, 55, 77, 51, 85, 67, 
  82, 59, 84, 61, 83, 71, 96, 71, 96, 75, 
  101, 83, 110, 81, 58, -43, 43, -29, 67, 27, 
  68, 37, 71, 21, 53, 11, 30, -77, 65, 61, 
  57, 19, 71, 61, 71, 48, 75, 61, 83, 48, 
  77, 53, 79, 55, 79, 66, 90, 62, 91, 69, 
  102, 83, 103, 8, 4, -128, 16, -128, 42, 0, 
  50, 25, 59, 13, 42, 4, 40, -128, 32, 38, 
  69, -7, 54, 55, 67, 44, 71, 67, 83, 46, 
  72, 45, 73, 50, 75, 58, 85, 57, 84, 61, 
  99, 69, 87, -128, -26, -128, -4, -128, 43, 16, 
  59, 16, 60, 13, 53, -2, 65, -23, 15, 14, 
  55, -8, 70, 62, 63, 31, 66, 47, 76, 35, 
  67, 37, 68, 45, 72, 51, 80, 47, 79, 58, 
  94, 60, 69, -128, -37, -128, -16, -128, 48, 9, 
  52, 8, 60, 5, 37, 16, 74, -50, 17, -60, 
  42, -128, 65, 49, 52, 25, 63, 40, 68, 25, 
  66, 28, 64, 39, 69, 42, 75, 35, 77, 60, 
  83, 46, 48, -128, -77, -128, -1, -77, 45, -8, 
  40, -20, 50, -10, 14, -16, 67, -128, 6, -128, 
  4, -77, 46, 21, 55, -14, 61, 46, 74, 24, 
  60, 24, 60, 32, 65, 39, 71, 32, 76, 56, 
  72, 23, 41, -128, -128, -128, -14, -128, 44, -14, 
  36, -20, 51, -4, 1, -37, 63, -77, 37, 2, 
  -60, 9, 62, 22, 55, 23, 59, 30, 60, 21, 
  60, 19, 59, 26, 63, 30, 65, -6, 72, 49, 
  60, 2, 42, -128, -128, -128, -3, -128, 43, -4, 
  44, -2, 52, -20, 12, -60, 67, 4, 46, -16, 
  -37, -60, 57, 14, 50, 6, 32, 21, 50, -14, 
  54, 9, 55, 19, 57, 14, 58, -2, 68, 42, 
  58, -12, 32, -128, -128, -128, -14, -128, 37, -50, 
  17, -77, 38, -60, 0, -128, 66, -7, 14, -128, 
  -33, -128, 32, -6, 25, -128, 27, 19, 59, -2, 
  47, -3, 47, 2, 48, -3, 50, -128, 63, 34, 
  44, -77, 12, -128, -128, -128, -3, -128, 26, -128, 
  6, -128, 6, -128, -77, -128, 55, -128, -128, -128, 
  -128, -128, 17, -50, 13, -77, 44, 54, 75, 31, 
  47, -20, 33, -33, 29, -23, 34, -128, 63, 17, 
  24, -128, -14, -128, -128, -128, -33, -128, 5, -128, 
  -128, -128, 11, -128, -26, -128, 48, -128, -128, -128, 
  -128, -128, -14, -29, 26, -77, 31, 25, 70, -2, 
  27, -60, 19, -128, 2, -77, 8, -128, 58, 0, 
  -37, -128, -37, -128, -128, -128, -16, -128, -50, -128, 
  -128, -128, -23, -128, -128, -128, 45, -43, -128, -128, 
  -128, -128, -50, -128, 14, -128, -10, -8, 57, -33, 
  27, -77, 8, -128, -14, -128, -37, -128, 53, -29, 
  -128, -128, -128, -128, -128, -128, -2, -128, -43, -128, 
  -128, -128, -14, -128, -128, -128, 21, -128, -128, -128, 
  -128, -128, -77, -128, 12, -128, -7, -33, 36, -77, 
  24, -128, -26, -128, -128, -128, -128, -128, 53, -77, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -128, -128, -128, 
  -128, -128, -128, -77, 37, -128, -128, -128, -3, -128, 
  -7, -128, -43, -128, -128, -128, -128, -128, 31, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 5, -128, -128, -128, -18, -128, 
  -14, -128, -128, -128, -128, -128, -128, -128, -4, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  26, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  51, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};