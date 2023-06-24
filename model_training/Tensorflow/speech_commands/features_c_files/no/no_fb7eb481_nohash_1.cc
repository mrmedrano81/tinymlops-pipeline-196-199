/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/fb7eb481_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_fb7eb481_nohash_1.cc" \
 */
#include "no_fb7eb481_nohash_1.h"


const int g_no_fb7eb481_nohash_1_width = 40;
const int g_no_fb7eb481_nohash_1_height = 49;
alignas(16) const signed char g_no_fb7eb481_nohash_1_data[] = {
  23, 15, 0, -2, 0, -26, -60, -60, -60, -50, 
  -33, -60, -60, -50, -60, -60, -128, -128, -60, -60, 
  -128, -128, -128, -60, -60, -60, -128, -60, -60, -128, 
  -128, -50, -33, -50, -50, -60, -60, -60, -60, -128, 
  8, -1, -12, -77, -128, -77, -37, -37, -50, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -50, -60, -128, -60, -50, 
  -37, -37, -50, -128, -60, -50, -37, -60, -128, -128, 
  17, -43, -37, -128, -12, -37, -60, -77, -128, -128, 
  -60, -50, -128, -128, -60, -128, -128, -128, -128, -77, 
  -128, -128, -128, -77, -37, -77, -60, -60, -50, -37, 
  -60, -37, -50, -77, -128, -128, -37, -50, -60, -128, 
  4, -77, -37, -43, -20, -50, -37, -77, -37, -37, 
  -128, -128, -128, -77, -26, -77, -60, -128, -128, -128, 
  -37, -20, -12, -50, -37, -50, -60, -77, -128, -128, 
  -128, -128, -128, -128, -128, -77, -60, -128, -128, -128, 
  -23, -43, -20, -43, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -77, -50, -128, -128, -128, -128, -128, 
  -50, -43, -26, -43, -29, -23, -50, -50, -50, -128, 
  -37, -33, -60, -77, -37, -128, -29, -77, -50, -128, 
  -7, -37, -128, -60, -77, -60, -77, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -60, -128, -77, -128, -128, -128, 
  -43, -128, -50, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -77, -128, -128, -60, -29, -37, -128, 
  -50, -128, -77, -77, -50, -128, -128, -128, -77, -77, 
  -50, -128, -77, -33, -29, -50, -29, -50, -20, -77, 
  -14, 2, -43, -37, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -77, -50, -43, -50, -128, 
  -77, -77, -50, -60, -50, -77, -37, -33, -37, -60, 
  -29, -60, -37, -77, -37, -60, -77, -77, -77, -128, 
  19, -12, 52, 69, 86, 70, 64, 40, 47, 25, 
  20, -23, -29, -12, -14, -26, -7, -8, -37, -50, 
  -37, -77, -29, -128, -50, -77, -50, -77, -37, -60, 
  -77, -77, -29, -77, -50, -77, -77, -128, -128, -128, 
  15, 6, 36, 19, 30, -8, -8, -50, -33, -29, 
  16, 14, -2, -37, -29, -128, -29, -37, -37, -33, 
  -14, -77, -77, -128, -128, -128, -50, -128, -77, -77, 
  -77, -60, -37, -77, -128, -128, -50, -128, -77, -128, 
  -60, -128, -77, -128, -128, -128, -60, -128, -26, -26, 
  -10, -77, -128, -128, -128, -60, -77, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -33, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -26, -128, -128, -128, -50, -60, -43, -128, -77, -128, 
  -128, -128, -128, -128, -77, -128, -77, -77, -29, -128, 
  -128, -128, -43, -77, -50, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -43, -128, 
  -128, -128, -10, -50, -23, -60, -50, -77, -50, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -77, 4, -50, 
  -50, -128, -60, -128, -50, -60, -50, -77, -43, -128, 
  -60, -128, -14, -77, -60, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -77, -128, -50, -128, 
  -77, -128, -128, -128, -128, -128, -50, -128, -33, -128, 
  -77, -128, -77, -128, -77, -77, -33, -60, -77, -128, 
  97, 81, 75, 39, -12, -128, 15, -10, -8, -60, 
  -43, -60, -128, -128, -77, -128, -43, -33, -16, -60, 
  -128, -128, -128, -77, -50, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  125, 102, 124, 101, 121, 99, 112, 93, 104, 86, 
  60, -3, -128, 20, 53, 45, 79, 81, 91, 70, 
  83, 70, 77, 82, 71, -128, 25, 31, 32, 9, 
  22, 1, 24, -14, 22, 21, 54, 49, 54, 40, 
  106, 95, 115, 94, 120, 87, 113, 90, 110, 86, 
  98, 77, 72, 52, 89, 87, 104, 87, 104, 84, 
  105, 89, 106, 90, 102, 53, 46, 66, 94, 85, 
  92, 29, 39, 12, 43, 42, 54, 43, 58, 41, 
  100, 86, 105, 85, 107, 84, 110, 86, 98, 77, 
  89, 57, 81, 82, 106, 89, 100, 83, 107, 85, 
  107, 86, 108, 88, 105, 65, 65, 80, 102, 86, 
  97, 57, 70, 50, 64, 58, 76, 57, 69, 61, 
  91, 76, 100, 77, 107, 94, 115, 88, 108, 84, 
  107, 82, 100, 93, 117, 96, 110, 87, 106, 82, 
  103, 72, 94, 70, 98, 84, 98, 95, 121, 100, 
  120, 94, 100, 69, 69, 60, 79, 58, 69, 59, 
  83, 74, 90, 72, 99, 95, 114, 84, 106, 90, 
  115, 95, 104, 79, 107, 87, 109, 82, 101, 72, 
  89, 72, 90, 74, 103, 84, 99, 89, 112, 85, 
  103, 69, 93, 65, 81, 65, 90, 74, 82, 68, 
  81, 60, 80, 70, 92, 75, 95, 78, 104, 87, 
  110, 87, 100, 75, 99, 80, 99, 67, 85, 64, 
  84, 56, 82, 67, 99, 78, 99, 79, 97, 64, 
  93, 69, 88, 58, 73, 58, 87, 74, 78, 55, 
  79, 51, 75, 54, 86, 54, 90, 70, 95, 80, 
  100, 72, 99, 84, 102, 66, 92, 51, 76, 51, 
  75, 38, 73, 58, 87, 57, 85, 55, 77, 47, 
  81, 56, 85, 50, 50, -1, 56, 45, 66, 1, 
  79, 50, 75, 43, 82, 42, 90, 59, 91, 68, 
  93, 60, 91, 80, 97, 24, 76, 55, 80, 34, 
  70, 33, 67, 38, 75, 46, 80, 55, 75, 26, 
  77, 48, 81, 41, 42, -2, 62, 46, 65, -2, 
  78, 42, 67, 16, 71, 45, 88, 59, 89, 62, 
  92, 74, 99, 76, 91, 2, 68, 44, 68, 9, 
  60, 25, 50, 30, 71, 57, 78, 14, 57, -18, 
  64, 30, 48, -20, 46, 5, 64, 29, 49, -2, 
  68, -16, 66, 23, 66, 49, 83, 53, 80, 63, 
  87, 49, 82, 61, 70, 0, 58, -20, 43, -12, 
  44, -1, 48, 17, 65, 21, 55, -128, -60, -128, 
  57, 45, 60, -18, 28, -18, 52, 22, 29, -43, 
  70, -2, 54, 5, 58, 11, 57, 42, 81, 50, 
  71, 41, 84, 35, 50, -128, 43, -128, 34, 9, 
  41, -128, 24, -128, 14, 7, 48, -128, -128, -128, 
  57, 42, 52, -33, 43, -43, 50, 2, 40, -7, 
  67, -33, 47, -37, 52, -20, 59, 20, 75, 24, 
  68, 34, 74, -29, 38, -128, -1, -128, -6, -128, 
  2, -128, -50, -60, 40, 11, 39, -128, -128, -128, 
  42, 32, 49, -12, 28, 0, 11, -128, 26, -7, 
  70, -43, 42, -6, 49, -7, 59, 11, 64, 17, 
  57, 38, 83, -43, -128, -128, -128, -128, 24, -128, 
  -26, -128, -26, -60, 33, -29, 39, -128, -128, -128, 
  15, 19, 48, -77, 17, -60, 4, -60, 39, -23, 
  61, -43, 46, -14, 52, -16, 35, -10, 54, -10, 
  44, -14, 58, -128, -128, -128, -128, -128, -77, -128, 
  -50, -128, -37, -128, -29, -7, 42, -128, -128, -128, 
  -128, -128, -7, -128, 35, -43, -14, -128, 29, -29, 
  41, -128, 0, -77, 32, -77, 29, -77, 43, -128, 
  45, 37, -1, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 34, -128, -128, -128, 
  -128, -128, -128, -128, -33, -128, -128, -128, -128, -128, 
  31, -128, 27, -50, 26, -128, -7, -128, 21, -128, 
  20, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 33, -128, -128, -128, 
  -43, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, 4, -128, -1, -128, -128, -128, -43, -128, 
  -23, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 5, -128, -128, -128, 
  -18, -128, -128, -128, -33, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -14, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
