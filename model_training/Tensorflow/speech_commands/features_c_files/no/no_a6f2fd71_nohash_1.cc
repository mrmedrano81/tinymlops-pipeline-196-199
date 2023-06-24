/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/a6f2fd71_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_a6f2fd71_nohash_1.cc" \
 */
#include "no_a6f2fd71_nohash_1.h"


const int g_no_a6f2fd71_nohash_1_width = 40;
const int g_no_a6f2fd71_nohash_1_height = 49;
alignas(16) const signed char g_no_a6f2fd71_nohash_1_data[] = {
  76, 74, 82, 60, 80, 74, 71, 53, 48, 65, 
  76, 67, 69, 63, 72, 67, 65, 45, 57, 54, 
  66, 57, 56, 58, 70, 82, 101, 95, 110, 90, 
  106, 91, 101, 75, 78, 76, 84, 76, 84, 70, 
  59, 67, 82, 67, 48, 29, 62, 43, 43, 34, 
  54, 29, 42, 11, 59, 50, 57, -37, 29, 27, 
  34, -8, 16, 2, 43, 39, 57, 17, 56, 34, 
  64, -2, 46, 29, 16, -20, 24, 6, 38, 29, 
  70, 52, 65, 45, 50, 7, 58, 40, 30, 44, 
  65, 42, 43, 33, 65, 20, 50, 1, -18, 8, 
  45, -33, -18, -12, 32, -4, 24, -128, -33, -128, 
  -16, -128, -23, -128, -29, -77, 2, -128, -10, -18, 
  59, 39, 78, 70, 69, 42, 55, 17, 48, -18, 
  57, 34, 64, 44, 37, 13, 44, 23, 13, 15, 
  24, -18, 22, -60, 8, -128, -50, -128, -128, -128, 
  -60, -128, -128, -128, -60, -128, -10, -77, -33, -14, 
  54, 42, 67, 55, 70, 47, 77, 38, 24, 17, 
  49, 52, 59, 17, 25, -1, 39, 6, -4, -50, 
  -14, 6, 15, -12, -1, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -50, -77, -23, -128, 
  114, 89, 105, 73, 89, 59, 72, 36, 55, 30, 
  43, 48, 56, 8, 22, 8, 44, -10, 28, 5, 
  11, -29, 46, 13, 36, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -60, -128, -12, -4, -12, -77, 
  122, 100, 120, 99, 122, 97, 102, 81, 55, 64, 
  85, 67, 61, 52, 55, 1, 54, 46, 54, 32, 
  54, 77, 110, 93, 104, 57, -12, -128, -77, -128, 
  -8, -128, -33, -77, 4, -26, 16, 2, 16, 1, 
  110, 92, 112, 89, 107, 79, 108, 80, 73, 62, 
  97, 65, 75, 54, 65, 24, 77, 77, 77, 55, 
  87, 79, 99, 82, 101, 62, 18, -128, -14, -128, 
  -33, -12, 15, -18, 46, 28, 51, 25, 49, 24, 
  85, 80, 109, 80, 106, 79, 106, 72, 104, 85, 
  114, 90, 101, 79, 90, 82, 115, 94, 114, 87, 
  107, 93, 115, 89, 105, 77, 87, 50, 68, 35, 
  59, 31, 37, 30, 51, 34, 54, 46, 57, 43, 
  76, 77, 105, 84, 107, 96, 120, 101, 121, 94, 
  114, 96, 121, 100, 122, 100, 119, 101, 125, 102, 
  119, 96, 118, 96, 118, 100, 122, 97, 113, 85, 
  102, 72, 72, 48, 70, 67, 95, 81, 94, 74, 
  84, 73, 94, 63, 87, 89, 110, 93, 113, 88, 
  103, 88, 112, 89, 110, 89, 107, 88, 109, 83, 
  107, 80, 99, 71, 98, 80, 102, 85, 101, 67, 
  66, 71, 94, 67, 81, 67, 96, 89, 110, 83, 
  82, 65, 85, 56, 83, 76, 99, 82, 98, 70, 
  89, 80, 103, 82, 105, 85, 108, 74, 89, 60, 
  88, 70, 96, 64, 90, 70, 99, 71, 85, 64, 
  73, 65, 89, 57, 73, 60, 86, 65, 90, 57, 
  81, 61, 82, 47, 77, 65, 89, 69, 92, 69, 
  90, 74, 100, 72, 102, 85, 104, 50, 62, 22, 
  78, 60, 86, 61, 77, 54, 92, 69, 83, 44, 
  66, 56, 79, 38, 73, 54, 63, 55, 89, 75, 
  78, 50, 70, 51, 78, 53, 79, 42, 79, 58, 
  89, 65, 96, 73, 109, 79, 86, -26, 42, -8, 
  79, 39, 59, 12, 42, 26, 78, 52, 74, 54, 
  73, 51, 70, 44, 78, 57, 82, 47, 85, 64, 
  76, 44, 62, 25, 71, 41, 87, 57, 82, 61, 
  87, 56, 95, 75, 108, 69, 71, -60, 34, -50, 
  68, 20, 54, -43, 46, 25, 78, 50, 67, 34, 
  58, 55, 79, 44, 43, 35, 70, 7, 73, 63, 
  72, 27, 47, 11, 70, 27, 88, 54, 89, 60, 
  70, 54, 90, 77, 97, 39, 39, -128, 7, -128, 
  59, 19, 48, -60, 34, -4, 72, 43, 67, 35, 
  57, 44, 69, 29, 57, 16, 63, -26, 69, 50, 
  68, 5, 39, 27, 77, 33, 81, 26, 75, 58, 
  64, 62, 93, 72, 82, 15, 9, -128, -77, -128, 
  27, 0, 55, -128, 26, 4, 71, 37, 67, 24, 
  50, 45, 79, 17, 59, -10, 61, 4, 63, 47, 
  62, -14, 31, 17, 73, 35, 76, 2, 68, 46, 
  73, 54, 87, 54, 43, -128, -128, -128, -77, -128, 
  37, -43, 54, -33, -16, -18, 55, -18, 48, -20, 
  49, 55, 71, -43, 17, -60, 44, -128, 18, -128, 
  45, -77, 41, 7, 69, 52, 62, -60, 60, 18, 
  63, 56, 88, 39, -26, -128, -128, -128, -128, -128, 
  -128, -128, 27, -128, -26, -77, 42, -50, 19, -128, 
  24, 17, 50, -6, 24, -128, -16, -128, -60, -50, 
  41, -128, 53, -12, 73, 15, 35, -128, 40, -12, 
  56, 36, 66, -60, -128, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, -128, -128, -8, -128, -23, -128, 
  -18, 1, 51, -128, -128, -128, -12, -128, -128, -128, 
  62, -8, 52, 43, 75, -128, -128, -128, -128, -128, 
  55, 31, 60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  55, -23, 50, 43, 66, -128, -128, -128, -33, -128, 
  73, 1, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -16, -4, 34, -128, -128, -128, -128, -128, -128, -128, 
  -18, -128, 56, 45, 75, -128, -128, -128, -128, -128, 
  61, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -77, -128, -128, -128, -128, -128, 
  -37, -128, 25, 28, 54, -128, -128, -128, -128, -128, 
  33, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -18, -128, 29, 6, 31, -128, -128, -128, -128, -128, 
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
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
