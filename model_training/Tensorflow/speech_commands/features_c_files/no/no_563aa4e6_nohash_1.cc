/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/563aa4e6_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_563aa4e6_nohash_1.cc" \
 */
#include "no_563aa4e6_nohash_1.h"


const int g_no_563aa4e6_nohash_1_width = 40;
const int g_no_563aa4e6_nohash_1_height = 49;
alignas(16) const signed char g_no_563aa4e6_nohash_1_data[] = {
  31, 67, 74, 50, 73, 54, 5, -37, -26, -7, 
  20, 25, 14, -2, 31, 56, 45, 42, 33, 15, 
  -26, -26, -26, -128, -50, -37, -60, -60, -60, -60, 
  -128, -128, -128, -60, -60, -128, -128, -128, -128, -128, 
  39, 56, 58, 41, 74, 54, 8, -14, 9, 0, 
  4, 2, -1, -37, -20, -50, 20, 36, -2, 11, 
  -6, -29, -60, -60, -37, -60, -128, -60, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -60, -128, -128, 
  39, 60, 74, 28, 45, -7, -7, -23, -20, -7, 
  -3, -26, 2, -33, -29, -50, 9, -33, -14, -60, 
  -7, -77, -50, -77, -60, -77, -128, -128, -60, -128, 
  -128, -50, -128, -128, -60, -128, -128, -128, -128, -128, 
  31, 46, 80, 67, 49, -50, -50, -18, 6, 2, 
  -8, 4, -8, -18, -37, -128, -43, -128, -37, -29, 
  -37, -43, -37, -50, -37, -77, -128, -128, -60, -128, 
  -128, -77, -128, -128, -128, -128, -60, -77, -60, -128, 
  34, 42, 86, 82, 79, 24, -37, -20, 32, -4, 
  0, -33, -4, -37, -37, -77, -2, -4, -16, -128, 
  -50, -60, -29, -43, -77, -128, -128, -128, -128, -50, 
  -60, -128, -60, -77, -60, -77, -128, -128, -128, -128, 
  -23, -18, 84, 79, 88, 24, 0, 5, 25, -50, 
  -43, -128, -18, -50, -10, -29, -33, -33, 4, -50, 
  -77, -77, -29, -50, -37, -77, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -77, -128, -128, -128, -77, 
  33, -37, 85, 74, 90, 16, 23, 16, 25, -43, 
  6, -43, -7, -18, -16, -128, -77, -128, -43, -128, 
  -50, -128, -50, -60, -77, -128, -60, -50, -128, -128, 
  -128, -77, -60, -128, -128, -77, -60, -128, -128, -128, 
  37, 27, 69, 45, 73, -2, 9, -60, -6, -77, 
  -43, -77, -60, -6, -26, -128, -43, -128, -12, -77, 
  -50, -128, -77, -77, -128, -60, -128, -128, -77, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -77, -128, 
  -23, -128, -77, -128, -29, -60, -77, -16, -7, -37, 
  -33, -26, -26, -77, -33, -128, -128, -128, -26, -77, 
  -77, -60, -77, -77, -77, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -77, -33, -12, -128, 
  -14, -128, -128, -128, -77, -128, -128, -128, -43, -128, 
  -77, -128, -77, -77, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -128, 27, -23, 23, -128, -43, -60, -18, -128, 
  -128, -50, -29, -128, -128, -128, -128, -128, -37, -128, 
  -50, -77, -43, -77, -128, -128, -50, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -3, 73, 49, 64, -12, 6, -50, -77, -128, 
  -29, -18, -16, -128, -77, -128, -77, -128, -77, -128, 
  -43, -77, -33, -50, -128, -128, -77, -128, -50, -77, 
  -77, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -37, -128, 34, -128, -7, -29, -12, -77, -60, -128, 
  -77, -128, -77, -128, -77, -128, -128, -128, -50, -77, 
  -77, -128, -128, -128, -43, -128, -77, -77, -128, -128, 
  -128, -128, -128, -128, -77, -128, -50, -128, -77, -128, 
  -33, -29, -18, -128, -128, -128, -128, -128, -50, -60, 
  -50, -128, -128, -77, -77, -128, -77, -77, -2, -43, 
  -77, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -43, -128, 
  -128, -60, -37, -128, -128, -128, -77, -128, -29, -128, 
  -77, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -77, -128, -37, -128, -128, -77, -77, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  35, 31, 4, -128, 27, 65, 73, 7, -29, -18, 
  4, -128, -33, -128, -77, -43, -50, -128, -14, -50, 
  -77, -77, -60, -128, -77, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  44, 39, 17, -60, 46, 66, 77, -10, -128, -128, 
  -50, -128, -128, -128, -128, -128, -77, -128, -26, -37, 
  -26, -20, -77, -128, -128, -128, -77, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -23, -128, -12, -128, 4, 34, 50, -50, -60, -128, 
  -77, -77, -50, -128, -23, -77, -50, -128, -77, -128, 
  -26, -18, -128, -77, -43, -128, -77, -128, -77, -128, 
  -77, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  17, -4, -128, -128, 34, 34, 38, -33, -77, -128, 
  -50, -128, -33, -50, -37, -128, -128, -128, -128, -128, 
  -128, -77, -60, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, -128, -128, -128, -6, 29, -128, -128, -128, 
  -60, -60, -33, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -60, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -14, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, -33, -77, -128, -128, -128, -60, -77, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -18, -128, -128, -128, -128, -128, -10, -128, -37, -128, 
  -77, -128, -128, -128, -128, -128, -37, -14, -43, -128, 
  -128, -128, -43, -77, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  119, 95, 102, 77, 101, 90, 109, 85, 95, 61, 
  49, 34, 27, 34, 86, 78, 84, 34, 45, 44, 
  77, 85, 108, 93, 102, 60, 6, -12, -2, 42, 
  22, -128, 8, 43, 25, -60, -23, -37, -16, -60, 
  117, 92, 122, 99, 118, 100, 116, 98, 110, 94, 
  100, 79, 103, 89, 111, 97, 109, 89, 109, 92, 
  112, 96, 118, 99, 118, 93, 63, 52, 72, 82, 
  86, 35, 60, 76, 85, 52, 54, 57, 63, 48, 
  107, 85, 114, 90, 110, 90, 108, 90, 105, 85, 
  104, 87, 106, 85, 110, 90, 106, 87, 107, 87, 
  107, 84, 109, 89, 109, 86, 95, 65, 82, 82, 
  95, 69, 90, 80, 94, 76, 67, 56, 67, 41, 
  100, 80, 107, 83, 103, 80, 102, 81, 100, 82, 
  95, 74, 103, 88, 109, 85, 101, 82, 101, 70, 
  92, 76, 104, 79, 102, 80, 96, 82, 90, 77, 
  97, 67, 91, 80, 100, 75, 79, 72, 87, 61, 
  93, 73, 100, 75, 98, 77, 106, 80, 110, 88, 
  114, 91, 114, 96, 114, 89, 115, 86, 94, 72, 
  99, 70, 97, 72, 97, 77, 98, 92, 108, 73, 
  89, 71, 94, 67, 92, 70, 83, 66, 80, 54, 
  80, 63, 88, 55, 99, 70, 102, 88, 115, 94, 
  118, 96, 117, 92, 116, 92, 119, 88, 107, 86, 
  102, 78, 91, 53, 78, 36, 112, 97, 116, 77, 
  89, 85, 89, 58, 77, 56, 87, 69, 85, 70, 
  67, 55, 75, 26, 84, 41, 100, 75, 102, 73, 
  110, 84, 104, 86, 110, 77, 90, 64, 89, 64, 
  87, 60, 85, 25, 60, -33, 96, 72, 99, 47, 
  47, 40, 74, 43, 79, 64, 84, 59, 77, 54, 
  59, 48, 68, -2, 78, 25, 94, 64, 97, 72, 
  105, 77, 103, 83, 100, 62, 80, 53, 79, 37, 
  81, 55, 76, -1, 14, 39, 96, 38, 53, 22, 
  54, -43, 48, -18, 54, 42, 70, 32, 70, 47, 
  63, 40, 67, 7, 74, 24, 88, 59, 87, 61, 
  98, 73, 98, 78, 82, 42, 69, 45, 77, 34, 
  77, 48, 74, 4, 19, 42, 99, 57, 70, -128, 
  -14, -128, 40, -26, 56, 26, 61, 22, 61, 49, 
  65, 29, 65, 16, 72, 29, 80, 53, 79, 54, 
  94, 68, 90, 70, 75, 16, 62, 31, 74, 31, 
  73, 40, 68, 6, 27, 18, 92, 59, 77, -33, 
  -10, -128, 45, -18, 20, -37, 57, 18, 52, 10, 
  65, 16, 62, 10, 69, 29, 64, 32, 69, 42, 
  84, 60, 86, 46, 62, -33, 35, 6, 57, 7, 
  66, 4, 57, -29, 12, -128, 77, 46, 69, -60, 
  -128, -60, 16, -128, 9, -43, 42, -14, 59, 34, 
  65, 11, 55, -12, 59, -1, 52, 2, 52, -3, 
  71, 44, 71, -29, 25, -128, 4, -128, 44, -14, 
  45, -128, 26, -128, -50, -128, 49, -20, 42, -128, 
  -128, -128, -12, -128, -14, -128, 4, -128, 17, -60, 
  59, -60, 35, -60, 29, -128, 12, -128, 11, -128, 
  45, -18, 51, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -128, 21, -128, 
  -26, -128, 34, 19, 46, -26, -3, -128, -8, -50, 
  52, -128, -18, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -4, -128, -1, -128, 
  -7, -128, -128, -128, -26, -128, -128, -128, -128, -128, 
  44, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  25, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -4, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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