/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/189cbabe_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_189cbabe_nohash_0.cc" \
 */
#include "no_189cbabe_nohash_0.h"


const int g_no_189cbabe_nohash_0_width = 40;
const int g_no_189cbabe_nohash_0_height = 49;
alignas(16) const signed char g_no_189cbabe_nohash_0_data[] = {
  42, 34, 29, 15, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -60, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  11, 39, 66, 55, 16, -20, -60, -37, -128, -60, 
  -128, -128, -128, -128, -128, -60, -128, -128, -128, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, 40, 73, 46, -7, -77, -60, -77, -60, -128, 
  -60, -128, -128, -60, -60, -60, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, 10, -2, 2, -43, -128, -50, -60, -77, 
  -128, -50, -60, -77, -60, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -77, -128, -128, -60, -50, 
  -128, -128, -128, -77, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -10, -60, -60, -128, -77, -128, -128, -128, -128, -128, 
  -128, -77, -128, -128, -60, -128, -60, -77, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  2, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -77, -29, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -60, -128, -77, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -77, -128, -77, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -14, -77, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  60, -7, -128, -128, -60, -128, -128, -77, -77, -128, 
  -128, -128, -128, -77, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -33, -43, 37, 0, -26, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -77, -20, -77, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  50, -128, -60, -128, -77, -128, -128, -128, -77, -128, 
  -128, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  118, 96, 102, 79, 94, 70, 69, 47, 37, 9, 
  -37, -77, -77, -128, -128, -128, -128, -128, -128, -77, 
  -37, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -77, -128, 
  120, 97, 124, 102, 119, 99, 113, 92, 90, 80, 
  81, 34, 9, -128, -128, -29, -50, -77, -128, -128, 
  -29, -7, 55, 71, 82, 31, -29, -77, -8, -12, 
  -14, -23, -8, 4, 29, 29, 16, -18, 14, -7, 
  106, 98, 118, 87, 111, 81, 101, 85, 112, 81, 
  98, 89, 83, 62, 34, -37, 32, 54, 54, 48, 
  71, 68, 107, 93, 110, 77, 72, 78, 98, 49, 
  -37, 0, 57, 74, 82, 50, 53, 40, 47, 48, 
  95, 89, 109, 76, 102, 72, 103, 77, 104, 81, 
  100, 79, 94, 72, 72, 56, 80, 80, 101, 78, 
  87, 79, 105, 85, 98, 84, 98, 89, 110, 65, 
  34, 41, 57, 78, 97, 62, 47, 45, 54, 44, 
  88, 81, 102, 69, 90, 52, 91, 64, 93, 79, 
  96, 71, 72, 53, 60, 59, 86, 87, 104, 71, 
  93, 70, 100, 77, 78, 54, 94, 78, 93, 67, 
  67, 37, 71, 64, 87, 49, 59, 50, 58, 40, 
  81, 71, 94, 60, 68, 50, 95, 70, 91, 70, 
  98, 75, 84, 81, 97, 77, 102, 90, 115, 95, 
  112, 87, 90, 59, 88, 58, 85, 74, 92, 63, 
  67, 25, 71, 68, 80, 53, 72, 45, 70, 51, 
  77, 67, 96, 73, 92, 79, 111, 88, 112, 92, 
  108, 66, 98, 86, 109, 90, 117, 100, 120, 88, 
  114, 94, 102, 72, 104, 90, 107, 74, 98, 79, 
  80, 77, 80, 65, 97, 81, 108, 87, 93, 75, 
  76, 63, 90, 60, 91, 50, 79, 87, 113, 84, 
  104, 67, 99, 79, 109, 93, 111, 79, 102, 76, 
  92, 72, 98, 69, 95, 87, 102, 42, 64, 37, 
  79, 80, 98, 77, 99, 75, 94, 65, 87, 73, 
  69, 52, 82, 50, 80, 33, 76, 84, 110, 72, 
  92, 59, 105, 83, 109, 91, 110, 44, 72, 60, 
  79, 67, 90, 57, 82, 72, 97, 0, 32, -16, 
  79, 61, 91, 59, 91, 72, 95, 66, 71, 58, 
  59, 36, 72, 38, 84, 46, 73, 75, 100, 63, 
  88, 70, 92, 80, 105, 83, 105, 14, 47, 54, 
  78, 34, 82, 62, 85, 69, 99, -77, 30, -37, 
  52, 57, 79, 57, 92, 69, 87, 55, 66, 41, 
  59, 34, 67, 26, 75, 47, 83, 70, 94, 62, 
  82, -33, 74, 64, 98, 73, 88, -60, 36, 23, 
  82, 58, 76, 37, 77, 64, 90, 23, 30, -29, 
  35, 19, 68, 57, 75, 52, 69, 41, 50, 25, 
  62, 40, 66, 8, 44, 46, 82, 57, 79, 63, 
  84, 74, 75, 60, 75, 14, 59, 24, 54, 45, 
  74, 13, 74, 40, 58, 39, 81, 5, 43, 16, 
  1, 4, 61, 21, 73, 53, 52, 19, 33, -20, 
  59, 35, 66, 9, -128, 11, 66, 25, 54, 32, 
  72, 61, 90, 60, 80, 29, 47, -6, 37, 4, 
  71, 20, 66, 20, 48, 32, 75, -14, 48, 24, 
  10, 24, 59, 40, 72, 46, 60, 21, -1, -60, 
  58, 29, 64, 9, -3, 27, 76, 27, 54, -18, 
  67, 59, 75, 42, 71, 47, 73, -128, 31, 22, 
  70, 27, 55, -26, 52, 37, 69, -29, 23, 11, 
  19, -29, 23, 33, 75, 50, 47, 6, 18, -14, 
  54, 19, 56, -20, -43, 49, 82, -50, 19, 11, 
  64, 47, 85, 50, 72, -2, 11, -77, 26, 18, 
  69, -3, 50, -29, 39, 12, 60, -128, 32, 25, 
  31, 27, 41, -6, 65, 41, 45, 9, -2, -60, 
  49, 2, 47, -77, -128, 62, 88, -128, -18, 30, 
  59, 32, 84, 39, 66, -2, 34, -128, 1, 13, 
  61, -37, 45, -4, 38, -20, 46, -26, 15, -8, 
  5, 16, 50, -14, 59, 22, 48, 5, -29, -128, 
  46, -4, 40, -128, 46, 74, 95, -128, -128, -14, 
  35, 35, 89, 38, 46, 21, 44, -128, -50, -20, 
  43, -1, 26, -29, 43, 0, 56, -128, -23, -128, 
  -14, -128, 9, -12, 57, 31, 36, -50, 16, -60, 
  52, -4, 33, -26, 76, 81, 100, 48, 49, -60, 
  -20, -3, 73, 44, 64, 42, 39, -128, -128, -128, 
  59, 44, 39, -77, 34, 19, 59, -77, -26, -50, 
  6, -128, -26, -23, 55, 27, 42, 11, 31, -60, 
  50, -12, 22, 16, 85, 80, 96, 56, 54, -77, 
  30, -33, 61, 31, 69, 30, -23, -128, -128, -128, 
  52, 39, 42, -128, -128, -18, 29, -128, -77, -37, 
  -60, -128, -128, -128, -29, -128, 22, -20, 11, -128, 
  54, -26, 4, -8, 83, 76, 93, 44, 39, -20, 
  -12, 7, 64, 19, 65, -29, -128, -128, -128, -128, 
  17, -1, -20, -128, -128, -128, -26, -128, -128, -128, 
  -60, -128, -128, -128, -50, -128, 12, -23, 0, -128, 
  47, -37, 1, 6, 85, 67, 85, 17, 6, -60, 
  -50, -77, 59, 20, 63, -6, -43, -128, -128, -128, 
  26, -18, -60, -128, -77, -128, -128, -128, -128, -128, 
  -37, -128, -128, -128, -128, -128, -33, -128, 7, -128, 
  48, -77, -60, 4, 75, 43, 60, -77, -128, -128, 
  -26, -128, 30, -50, 26, -128, -128, -128, -128, -128, 
  -20, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 11, -128, -16, -128, 
  48, -128, -77, 19, 67, -7, 12, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  44, -128, -128, 13, 63, -20, 9, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  37, -128, -128, -29, 39, -128, -128, -128, -128, -128, 
  -128, -128, -128, -33, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  11, -128, -128, -128, -2, -128, -128, -128, -128, -128, 
  -128, -128, -14, -26, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
