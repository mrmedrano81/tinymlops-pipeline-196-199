/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/67961766_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_67961766_nohash_0.cc" \
 */
#include "no_67961766_nohash_0.h"


const int g_no_67961766_nohash_0_width = 40;
const int g_no_67961766_nohash_0_height = 49;
alignas(16) const signed char g_no_67961766_nohash_0_data[] = {
  5, 17, -10, -7, -33, -60, -33, -60, -128, -60, 
  -26, -60, -60, -50, -60, -128, -128, -128, -60, -128, 
  -128, -60, -60, -60, -128, -60, -60, -128, -60, -50, 
  -60, -60, -60, -128, -128, -128, -128, -128, -128, -128, 
  -37, -128, -1, -8, -26, -7, -50, -60, -128, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -60, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -2, 6, 21, -43, -60, -77, -50, -14, -60, -50, 
  -50, -77, -60, -128, -128, -128, -128, -60, -128, -128, 
  -128, -77, -128, -128, -128, -128, -128, -128, -128, -77, 
  -128, -128, -60, -60, -128, -128, -128, -128, -128, -128, 
  10, -16, -23, -43, -26, -77, -37, -43, -60, -37, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  88, 79, 82, 63, 54, -12, -7, -12, -50, -77, 
  -37, -37, -50, -77, -50, -128, -60, -37, -37, -77, 
  -128, -77, -50, -50, -128, -128, -60, -128, -50, -77, 
  -60, -50, -128, -128, -128, -77, -60, -77, -128, -128, 
  122, 102, 120, 92, 118, 98, 100, 77, 85, 23, 
  54, 19, 11, 7, 4, -4, -6, 4, 32, -23, 
  -1, 21, 24, 55, 59, 48, 53, 11, -60, -128, 
  -12, 20, 4, 29, 34, -37, -50, -50, -37, -37, 
  110, 86, 99, 83, 112, 87, 86, 83, 91, 77, 
  98, 55, 30, -33, 31, -33, -20, 31, 45, 25, 
  17, 52, 79, 82, 93, 74, 89, 61, -2, -43, 
  -37, 69, 63, 51, 57, -6, 11, -1, -7, -16, 
  102, 75, 79, 80, 105, 75, 82, 85, 97, 83, 
  100, 48, 52, -2, 47, 19, 38, 61, 62, 40, 
  -4, 74, 95, 83, 106, 83, 99, 61, -8, -33, 
  6, 38, 50, 61, 75, 10, 10, -26, -2, -3, 
  95, 70, 85, 70, 100, 77, 71, 74, 95, 54, 
  89, 66, 37, -8, 48, 4, -10, 45, 65, 49, 
  39, 63, 94, 79, 97, 75, 102, 74, -37, -26, 
  0, 68, 62, 50, 72, -29, 0, -23, -3, -10, 
  87, 58, 73, 72, 99, 73, 71, 67, 87, 64, 
  89, 56, 54, 15, 64, 19, 39, 59, 72, 58, 
  93, 61, 88, 67, 89, 68, 92, 50, -16, -12, 
  56, 71, 60, 28, 60, -14, 7, -18, -4, -8, 
  80, 54, 82, 66, 91, 76, 112, 77, 100, 70, 
  90, 71, 88, 80, 97, 85, 96, 79, 105, 93, 
  117, 99, 116, 83, 102, 93, 114, 94, 117, 98, 
  120, 95, 118, 90, 96, 40, 48, 28, 45, 35, 
  70, 34, 60, 57, 90, 61, 95, 94, 114, 79, 
  102, 79, 112, 87, 111, 77, 97, 89, 109, 91, 
  115, 97, 119, 90, 112, 95, 116, 91, 114, 94, 
  115, 85, 100, 90, 106, 54, 98, 80, 61, 61, 
  66, 34, 64, 46, 84, 57, 76, 86, 111, 72, 
  100, 75, 102, 79, 104, 81, 105, 84, 106, 87, 
  110, 79, 107, 82, 106, 84, 95, 78, 105, 84, 
  104, 65, 90, 80, 102, 42, 81, 77, 83, 63, 
  62, 30, 67, 24, 77, 52, 61, 77, 105, 68, 
  101, 81, 103, 80, 97, 77, 102, 74, 103, 85, 
  109, 78, 92, 72, 100, 73, 91, 67, 94, 75, 
  99, 57, 82, 58, 90, 53, 84, 83, 104, 80, 
  58, 24, 66, 4, 71, 43, 47, 66, 97, 60, 
  96, 77, 97, 76, 88, 70, 99, 69, 98, 84, 
  96, 67, 76, 60, 89, 50, 83, 65, 88, 63, 
  80, 47, 72, 46, 74, 50, 84, 76, 104, 78, 
  53, 5, 53, 5, 63, 20, 42, 55, 83, 67, 
  95, 69, 92, 65, 92, 67, 95, 75, 99, 81, 
  87, 44, 72, 57, 83, 33, 69, 40, 76, 55, 
  86, 40, 59, 20, 70, 47, 74, 62, 95, 66, 
  46, -20, 32, 12, 58, -3, 75, 47, 70, 80, 
  102, 72, 84, 52, 94, 65, 93, 80, 103, 79, 
  75, 13, 65, 42, 77, 35, 49, 6, 62, 30, 
  63, -4, 50, 34, 68, 39, 68, 53, 90, 65, 
  39, -60, -12, 17, 52, -43, 86, 44, 63, 79, 
  96, 58, 77, 54, 92, 61, 86, 75, 100, 70, 
  59, -60, 51, 34, 75, 43, 53, -16, 58, 32, 
  62, -6, 29, 19, 61, 25, 36, 28, 74, 41, 
  28, -128, -128, 14, 37, -128, 90, 26, 25, 67, 
  75, 31, 80, 55, 80, 63, 85, 69, 82, 22, 
  53, -128, 35, 10, 69, 36, 42, -1, 55, 12, 
  63, -23, 46, 21, 67, -37, 10, 7, 64, 26, 
  15, -128, -128, 17, 27, -128, 91, 15, -16, 61, 
  66, 44, 78, 47, 62, 69, 95, 66, 60, -128, 
  14, -128, -50, -128, 45, -29, 45, -37, 42, -1, 
  61, -77, 21, 20, 66, 4, -14, -37, 46, -18, 
  4, -128, -128, 37, 29, -128, 91, -10, -60, 33, 
  16, 40, 52, 51, 54, 58, 83, 14, 12, -128, 
  -128, -128, -128, -128, -26, -77, 10, -128, -3, -128, 
  50, -128, -2, 10, 60, -16, -128, -33, 47, -128, 
  7, -128, -128, 53, 40, -128, 89, -128, 17, 39, 
  -14, 47, 45, 52, 72, 53, 56, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -10, -128, -60, -128, 
  10, -128, 1, -128, 37, -128, -128, -128, 42, -128, 
  1, -128, 20, 56, 40, -128, 87, -128, -8, -60, 
  11, 57, 55, 41, 69, 6, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -7, -128, 4, -128, 0, -128, -128, -128, -29, -128, 
  -29, -128, 56, 56, 34, -16, 78, -128, -128, -128, 
  -43, -23, 69, 20, 31, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, 68, 54, 27, 11, 74, -128, -128, -128, 
  -33, -43, 74, -6, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, 74, 52, 19, 0, 63, -128, -128, -128, 
  -77, -128, 36, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 78, 44, -18, 4, 49, -128, -128, -128, 
  -128, -128, 8, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 75, 22, -128, -14, 9, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 71, -1, -128, -26, -10, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 69, -20, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 58, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 49, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, 7, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
