/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/b97c9f77_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_b97c9f77_nohash_0.cc" \
 */
#include "yes_b97c9f77_nohash_0.h"


const int g_yes_b97c9f77_nohash_0_width = 40;
const int g_yes_b97c9f77_nohash_0_height = 49;
alignas(16) const signed char g_yes_b97c9f77_nohash_0_data[] = {
  103, 87, 80, 86, 99, 81, 75, 60, 44, 45, 
  33, 49, 62, 25, 33, 77, 101, 82, 71, 35, 
  45, 45, 65, 54, 14, 4, 17, 20, 0, -2, 
  -50, -12, -33, -18, -4, -26, -26, -7, 5, -18, 
  97, 76, 69, 69, 99, 77, 85, 55, 55, 15, 
  41, 30, 24, -2, 31, 11, 80, 77, 74, 62, 
  59, 52, 34, -12, 15, -10, 19, -12, -18, -16, 
  4, -20, -6, -14, -18, -20, -26, -29, -12, -14, 
  54, 59, 77, 7, 58, 48, 65, 39, 75, 75, 
  55, 31, 46, 21, 45, 29, 86, 66, 59, 42, 
  52, -20, 30, 32, 20, 18, 17, -26, 7, -33, 
  -37, -18, -12, -10, -29, -29, -12, -10, -20, -33, 
  68, 16, 66, -50, 24, 12, 58, 16, 80, 56, 
  47, 51, 39, 25, 37, 6, 48, 4, 68, 43, 
  47, 0, 21, 13, 27, 8, 0, -60, -29, -60, 
  -29, -33, -50, -33, -14, -12, -20, -33, -37, -33, 
  64, 27, 59, -60, -12, -128, 7, -8, 54, -33, 
  79, 67, 45, 49, 34, 15, -37, -128, 56, 49, 
  40, 11, 8, 4, 35, 4, -18, -50, -23, -60, 
  -14, -43, -20, -77, -37, -33, -20, -20, -8, -33, 
  70, 49, 52, -37, 48, 11, 4, 7, 59, 11, 
  100, 80, 62, 59, 40, -4, -128, -128, 65, 39, 
  34, 15, 13, -37, 33, 19, 19, -8, -16, -43, 
  -29, -77, -29, -37, -29, -77, -50, -37, -23, -50, 
  64, 46, 59, -60, 31, -26, 72, 65, 52, 50, 
  98, 67, 93, 76, 39, -128, -128, -128, 1, 24, 
  63, 35, 39, 11, 29, 13, 35, 1, 8, -128, 
  -23, -37, -10, -50, -10, -29, -43, -60, -23, -37, 
  57, -50, 46, -18, 56, 47, 77, 79, 67, 36, 
  80, 36, 93, 74, 42, -29, -128, -128, 23, 46, 
  76, 37, 25, -16, 13, 14, 40, -23, -33, -23, 
  -23, -50, -10, -50, -6, -14, -16, -43, -12, -60, 
  52, 8, 11, 15, 40, -23, 83, 67, 53, 34, 
  80, 51, 73, 49, 29, -77, -77, -128, -20, 0, 
  61, 16, 6, -18, 1, 6, 41, -128, -18, -43, 
  -23, -77, 7, -33, -7, -128, -33, -77, -60, -128, 
  51, -8, 56, 38, 69, 42, 55, 23, 50, 40, 
  61, -128, 38, -43, 22, -50, -128, -128, 2, -50, 
  16, -12, -26, -128, -50, -128, -29, -37, -20, -60, 
  -43, -128, -43, -77, -26, -77, -33, -60, -60, -60, 
  33, -20, 41, 46, 55, -128, 6, -128, 1, -77, 
  -37, -128, -128, -128, 34, -18, -128, -128, -128, 6, 
  55, -60, -29, -128, -29, -128, -128, -128, -60, -77, 
  -26, -33, -43, -128, -77, -77, -43, -77, -77, -77, 
  54, -20, 66, 41, -2, -128, 4, -23, 42, -23, 
  -43, -128, -23, -128, 39, -128, -14, -128, 31, -10, 
  39, -60, 19, -33, 6, -128, -77, -128, -77, -128, 
  -60, -77, -60, -128, -43, -128, -43, -60, -26, -77, 
  38, -128, 68, 41, 27, 20, 42, -29, 54, 44, 
  -20, -10, 27, -128, 35, -37, -37, -128, -10, -128, 
  9, 61, 91, 63, 77, 45, -37, -128, -50, -128, 
  -128, -60, -29, -77, -37, -60, -26, -128, -43, -128, 
  -77, -128, 45, -7, 58, 61, 55, -128, 48, 6, 
  8, 61, 77, -128, 64, -50, -26, -128, 24, -128, 
  -33, -60, 29, -1, 44, -26, -60, -77, -37, -60, 
  -37, -77, -37, -77, -77, -128, -43, -60, -29, -128, 
  110, 91, 114, 95, 110, 78, 94, 60, 58, 27, 
  52, 73, 89, -128, 40, -60, -128, -128, 11, -128, 
  68, 82, 104, 79, 91, 65, 54, 48, 65, 48, 
  54, 30, 6, -60, -10, -26, -1, -20, -16, -10, 
  114, 98, 122, 96, 121, 98, 109, 75, 73, 33, 
  51, 70, 89, 21, 74, 16, 40, 29, 67, 45, 
  100, 95, 118, 95, 117, 94, 104, 82, 106, 89, 
  90, 62, 53, 40, 54, 38, 54, 34, 59, 44, 
  109, 90, 112, 90, 117, 90, 96, 54, 100, 60, 
  55, 49, 68, -16, 65, 50, 62, 69, 93, 81, 
  113, 94, 118, 94, 117, 96, 114, 90, 114, 93, 
  109, 90, 98, 57, 71, 53, 77, 62, 72, 59, 
  100, 78, 102, 85, 112, 89, 112, 85, 110, 75, 
  70, 34, 65, 53, 92, 82, 91, 84, 105, 90, 
  113, 91, 103, 89, 110, 89, 103, 87, 108, 84, 
  93, 82, 107, 60, 68, 59, 76, 68, 74, 50, 
  96, 65, 91, 71, 96, 72, 118, 94, 110, 89, 
  102, 70, 86, 79, 104, 85, 103, 86, 112, 94, 
  112, 85, 96, 82, 107, 78, 101, 79, 100, 76, 
  102, 74, 104, 77, 84, 67, 89, 75, 82, 64, 
  81, 57, 82, 56, 82, 77, 116, 92, 106, 80, 
  101, 74, 95, 80, 106, 86, 109, 87, 113, 94, 
  112, 67, 85, 74, 100, 71, 89, 59, 86, 67, 
  93, 69, 98, 79, 79, 56, 80, 75, 101, 66, 
  78, 50, 78, 43, 71, 73, 105, 80, 110, 79, 
  100, 76, 102, 77, 100, 79, 104, 85, 110, 89, 
  101, 49, 69, 51, 88, 61, 82, 46, 72, 59, 
  94, 64, 85, 72, 78, 41, 82, 78, 102, 62, 
  72, 43, 69, 38, 61, 63, 88, 71, 102, 70, 
  94, 64, 95, 64, 96, 69, 92, 66, 97, 77, 
  85, -20, 44, 23, 77, 56, 77, 7, 39, 0, 
  77, 60, 80, 70, 75, 34, 72, 60, 93, 70, 
  70, 40, 64, 43, 63, 62, 77, 46, 77, 71, 
  88, 53, 83, 63, 86, 64, 90, 77, 102, 60, 
  65, -60, 46, 11, 68, 32, 58, -29, 11, -128, 
  44, 37, 74, 57, 64, 32, 53, 4, 74, 49, 
  55, 19, 45, 27, 44, 39, 51, -128, 29, 31, 
  73, 4, 53, 24, 59, -7, 65, 27, 68, -12, 
  -50, -128, -128, -128, 20, -128, 7, -128, -128, -128, 
  -128, -3, 60, -1, 45, -33, 0, 14, 77, 27, 
  42, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 0, 4, 74, 34, 71, 32, 59, 50, 
  53, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, 24, 82, 77, 99, 81, 102, 68, 79, 58, 
  54, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -4, -128, -128, -128, 
  -23, -20, 68, 71, 100, 83, 100, 71, 87, 74, 
  5, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 0, -128, -128, -128, 
  -43, 34, 71, 50, 82, 76, 93, 59, 80, 72, 
  32, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 5, -128, -128, -128, 
  -29, 34, 77, 39, 74, 68, 89, 50, 80, 60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 0, -128, -128, -128, 
  -29, -6, 59, 19, 75, 47, 72, 40, 66, 50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 32, -37, -50, -128, 
  -50, -6, 53, 2, 77, 50, 69, 40, 69, 26, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 40, -16, -20, -128, 
  -128, -10, 45, -43, 82, 52, 69, -26, 53, 17, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 26, -60, -50, -128, 
  -77, -128, 30, -16, 64, -4, 47, -29, 55, 29, 
  -29, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 7, -128, -50, -128, 
  0, -33, -26, -20, 55, 9, 35, -77, 50, 9, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -18, -128, -128, -128, 
  -60, -128, 15, -43, 55, -128, -14, -128, 34, -8, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -1, -128, 36, -128, -128, -128, -3, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 25, -128, -16, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  44, 2, -60, -128, -128, -128, -128, -128, -128, -29, 
  -29, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  11, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
