/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/fb7eb481_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_fb7eb481_nohash_3.cc" \
 */
#include "no_fb7eb481_nohash_3.h"


const int g_no_fb7eb481_nohash_3_width = 40;
const int g_no_fb7eb481_nohash_3_height = 49;
alignas(16) const signed char g_no_fb7eb481_nohash_3_data[] = {
  17, 15, -10, -18, -33, -37, -60, -50, -60, -60, 
  -33, -37, -50, -60, -33, -60, -60, -128, -128, -128, 
  -60, -50, -18, -18, -60, -128, -26, -37, -60, -60, 
  -26, -50, -26, -26, -50, -50, -33, -18, -18, -60, 
  -20, -23, -6, -20, -37, -29, -37, -60, -37, -50, 
  -50, -29, -18, -29, -60, -128, -128, -60, -60, -50, 
  -18, -37, -50, -37, -50, -60, -37, -37, -60, -128, 
  -50, -60, -37, -29, -50, -60, -26, -20, -12, -60, 
  15, -7, -37, -128, -60, -50, -50, -50, -128, -128, 
  -128, -128, -60, -77, -60, -128, -60, -77, -60, -128, 
  -128, -50, -128, -77, -60, -128, -50, -50, -37, -8, 
  -18, -37, -37, -50, -50, -29, -37, -77, -60, -77, 
  -50, -43, -20, -50, -26, -23, -60, -128, -128, -128, 
  -60, -77, -128, -128, -60, -128, -128, -37, -60, -77, 
  -60, -128, -128, -128, -128, -128, -50, -128, -50, -6, 
  -7, -77, -60, -77, -37, -16, -37, -77, -29, -77, 
  -43, -23, -14, -77, -29, -33, -50, -77, -128, -128, 
  -128, -128, -60, -128, -128, -77, -60, -50, -50, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -50, -60, 
  -50, -128, -77, -128, -50, -128, -29, -128, -128, -128, 
  11, -4, 0, -128, -37, -26, -37, -43, -37, -77, 
  -37, -128, -50, -128, -128, -128, -37, -128, -128, -77, 
  -50, -77, -37, -77, -60, -128, -77, -128, -77, -128, 
  -77, -128, -29, -43, -37, -60, -29, -77, -37, -128, 
  -6, -60, -6, 0, -8, -29, -20, -77, -77, -128, 
  -128, -128, -77, -77, -77, -128, -77, -128, -128, -50, 
  -77, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -77, -50, -60, -37, -128, -77, -128, -50, -128, 
  -18, -128, -12, -37, -4, -128, -50, -60, -128, -128, 
  -77, -128, -50, -77, -37, -128, -50, -60, -50, -128, 
  -77, -77, -128, -128, -128, -50, -37, -128, -50, -77, 
  -77, -128, -77, -77, -37, -128, -50, -128, -128, -128, 
  43, -12, -43, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -29, -60, -37, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -77, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -7, -128, -128, -128, -128, -128, -77, -128, -77, -26, 
  -14, -77, -128, -77, -29, -33, -50, -77, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -77, -50, -128, 
  65, 61, 62, 29, -6, -60, -4, -128, -20, -60, 
  -50, -128, -128, -128, -77, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  124, 101, 120, 101, 119, 94, 110, 87, 94, 72, 
  52, 39, 27, -6, 4, 36, 48, -16, 27, 27, 
  37, 34, 55, 48, 9, -26, -10, -43, -16, -23, 
  -23, -37, -16, -12, 8, -12, 11, -16, 4, -8, 
  117, 99, 122, 97, 114, 96, 114, 92, 112, 85, 
  79, 57, 57, 60, 94, 87, 97, 49, 75, 71, 
  77, 74, 101, 90, 87, 24, 8, 23, 47, 9, 
  4, 16, 17, 5, 34, 46, 57, 46, 60, 56, 
  110, 89, 112, 87, 110, 87, 107, 83, 101, 79, 
  95, 57, -128, 74, 97, 80, 93, 60, 82, 77, 
  101, 83, 106, 87, 92, 38, 46, 72, 91, 56, 
  60, 45, 67, 36, 57, 62, 77, 64, 75, 58, 
  101, 78, 104, 79, 105, 83, 107, 77, 99, 80, 
  95, 47, 75, 63, 87, 73, 104, 87, 96, 73, 
  97, 77, 96, 70, 92, 58, 77, 94, 120, 99, 
  113, 62, 67, 56, 69, 52, 72, 55, 70, 55, 
  94, 65, 91, 80, 115, 97, 119, 93, 114, 92, 
  113, 90, 99, 84, 107, 93, 117, 94, 113, 90, 
  106, 80, 112, 94, 106, 86, 110, 97, 118, 95, 
  115, 92, 100, 64, 62, 60, 93, 69, 66, 54, 
  90, 57, 78, 61, 99, 89, 107, 88, 109, 84, 
  110, 84, 101, 81, 100, 85, 106, 73, 91, 74, 
  95, 76, 104, 81, 99, 84, 107, 86, 102, 77, 
  103, 82, 94, 48, 66, 56, 84, 62, 69, 39, 
  85, 50, 77, 44, 90, 73, 95, 77, 99, 79, 
  103, 85, 100, 84, 108, 86, 102, 77, 98, 71, 
  95, 72, 89, 55, 91, 65, 98, 72, 84, 57, 
  89, 71, 87, 39, 58, 42, 64, 46, 65, 35, 
  85, 51, 74, 27, 84, 56, 90, 70, 95, 75, 
  94, 75, 90, 79, 107, 77, 90, 60, 95, 61, 
  88, 55, 81, 51, 87, 64, 95, 64, 79, 55, 
  88, 65, 72, 31, 52, 35, 62, 44, 70, 24, 
  82, 48, 72, 37, 78, 50, 82, 60, 87, 67, 
  92, 65, 92, 72, 98, 53, 73, 37, 72, 51, 
  77, 47, 65, 8, 66, 46, 75, 37, 60, 31, 
  74, 65, 69, 37, 48, 11, 54, 35, 57, 14, 
  78, 42, 65, 13, 73, 44, 81, 52, 80, 59, 
  90, 61, 90, 73, 88, -50, 54, 25, 71, 34, 
  54, 14, 34, -128, 63, 52, 65, 19, 55, 9, 
  65, 23, 42, 16, 59, 40, 74, 57, 61, 17, 
  74, 31, 63, 17, 69, 38, 77, 46, 74, 55, 
  87, 62, 89, 60, 73, -33, 40, 1, 58, 15, 
  45, -128, -37, -128, 60, 47, 71, 17, 54, 17, 
  64, -60, 21, 8, 50, 27, 55, 19, 48, 8, 
  70, 32, 57, 15, 65, 25, 70, 36, 69, 48, 
  84, 59, 82, 13, 51, -128, -6, 8, 58, -60, 
  29, -128, -128, -128, 57, 41, 53, -60, 27, -33, 
  42, -29, 5, -10, 44, -16, 33, -8, 39, -1, 
  68, 29, 54, 16, 62, 10, 65, 24, 63, 42, 
  77, 50, 84, -12, 50, -128, -128, -128, 36, -37, 
  31, -128, -128, -128, 34, 7, 36, -128, 14, -128, 
  34, -60, -18, -12, 47, -128, -16, -77, 42, -6, 
  67, 11, 47, 19, 56, -14, 56, -12, 54, 37, 
  72, 45, 90, 19, 44, -128, -128, -29, 31, -60, 
  2, -128, -128, -128, 19, -128, 36, -77, 23, -77, 
  38, -128, -10, -23, 34, -128, 1, -128, 35, 8, 
  62, 5, 46, 18, 57, -12, 42, -20, 49, 36, 
  70, 37, 84, 4, -12, -128, -128, -37, 35, -128, 
  -4, -128, -128, -128, -18, -23, 64, 10, 20, -60, 
  38, -128, -26, -29, 30, -128, -50, -128, 24, 0, 
  59, 1, 43, 18, 56, -37, 44, -43, 37, 8, 
  53, 40, 72, -128, -77, -128, -128, -128, -8, -128, 
  22, -128, -128, -128, -77, -128, 40, -128, -128, -128, 
  -26, -128, -18, -18, 29, -128, -20, -128, 23, -50, 
  52, -50, 29, 2, 44, -50, 40, -128, 21, -43, 
  44, 11, -8, -128, -128, -128, -128, -128, -16, -128, 
  -50, -128, -128, -128, -128, -128, 37, -128, -128, -128, 
  21, -128, -128, -20, 14, -128, -20, -128, 19, -33, 
  42, -128, 15, -16, 34, -128, 15, -128, 29, -60, 
  31, -128, 12, -128, -128, -128, -128, -128, -128, -128, 
  -7, -128, -128, -128, -128, -128, 54, -128, -128, -128, 
  -33, -128, -60, -77, 22, -60, -37, -128, 2, -37, 
  31, -128, -33, -128, -33, -128, -7, -128, 7, -128, 
  -3, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -16, -128, -128, -128, -37, -128, -128, -128, -23, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
