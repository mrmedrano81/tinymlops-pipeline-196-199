/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/e1469561_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_e1469561_nohash_1.cc" \
 */
#include "no_e1469561_nohash_1.h"


const int g_no_e1469561_nohash_1_width = 40;
const int g_no_e1469561_nohash_1_height = 49;
alignas(16) const signed char g_no_e1469561_nohash_1_data[] = {
  115, 97, 111, 93, 110, 95, 104, 90, 108, 89, 
  94, 83, 99, 91, 109, 97, 114, 96, 115, 95, 
  85, 74, 91, 74, 84, 82, 104, 80, 95, 83, 
  79, 81, 90, 82, 97, 78, 99, 90, 93, 82, 
  94, 78, 95, 83, 102, 78, 86, 75, 100, 79, 
  95, 64, 87, 76, 103, 89, 112, 81, 78, 59, 
  86, 72, 60, 76, 94, 69, 94, 65, 90, 74, 
  80, 61, 71, 70, 85, 65, 94, 78, 85, 65, 
  90, 80, 95, 64, 78, 54, 85, 62, 78, 68, 
  87, 43, 91, 65, 78, 62, 79, 60, 81, 15, 
  84, 70, 76, 64, 79, 55, 79, 65, 68, 43, 
  75, 42, 74, 69, 84, 64, 87, 59, 82, 58, 
  93, 75, 94, 64, 84, 60, 89, 64, 67, 23, 
  81, 65, 69, 52, 62, -2, 58, 33, 75, 5, 
  62, 61, 79, 35, 62, 42, 87, 69, 73, 47, 
  67, 50, 72, 55, 83, 52, 69, 41, 69, 45, 
  102, 78, 93, 47, 49, 16, 83, 47, 62, 52, 
  74, 46, 36, -29, 59, -50, 10, -3, 37, 2, 
  57, 37, 65, 55, 75, 41, 69, 34, 71, 40, 
  70, 33, 72, 58, 74, 43, 65, 41, 61, 36, 
  100, 57, 10, 31, 71, 19, 68, 33, 73, 51, 
  75, 47, 17, -77, 1, -128, 50, -128, -12, 5, 
  63, 37, 71, 70, 82, 43, 69, 60, 86, 53, 
  76, 42, 69, 55, 68, 50, 75, 40, 66, 58, 
  70, 14, 60, 1, 59, 34, 75, 46, 79, 60, 
  80, 59, 11, -50, -18, -128, -37, -77, 4, -20, 
  69, 47, 89, 82, 84, 21, 59, 52, 84, 39, 
  70, 49, 74, -6, 49, 42, 72, 43, 59, 30, 
  66, -128, 55, 46, 68, 55, 64, -6, 80, 62, 
  66, 39, 49, -77, 4, -128, 49, 17, 25, -26, 
  52, 15, 75, 54, 61, 40, 63, 38, 60, 24, 
  59, 42, 77, 2, 59, 32, 64, 13, 58, 5, 
  4, -50, 60, -128, 55, 42, 65, 11, 43, 39, 
  50, -1, 11, -77, 47, -128, 61, 14, 36, -43, 
  61, 31, 80, 14, 60, 17, 51, 4, 45, 22, 
  66, 38, 61, 1, 60, 22, 60, -1, 35, 12, 
  29, -128, 19, -128, 17, -1, 57, -77, 29, 10, 
  40, -77, 32, -77, -3, -128, 39, -77, 5, 6, 
  67, 14, 66, -33, 52, 20, 37, -128, -12, -50, 
  30, 10, 50, -12, 56, 31, 64, 17, 43, -8, 
  66, 11, 77, 31, 63, -7, 32, 22, 46, 9, 
  52, 1, 28, -128, -16, -128, 19, -37, 32, -7, 
  44, -18, 44, -128, 19, 37, 57, -128, -2, -50, 
  54, 5, 55, -37, 31, 21, 67, 20, 34, -14, 
  124, 104, 126, 102, 120, 91, 105, 62, 69, 36, 
  93, 86, 101, 71, 81, 30, 75, 72, 83, 55, 
  94, 66, 71, 58, 107, 90, 75, 58, 61, 59, 
  89, 73, 74, 37, 59, 29, 63, 14, 60, 37, 
  105, 96, 115, 87, 113, 72, 89, 84, 102, 89, 
  116, 98, 115, 85, 96, 76, 96, 74, 87, 84, 
  101, 85, 96, 53, 105, 85, 79, 65, 87, 69, 
  99, 79, 73, 52, 51, 29, 53, 4, 57, 16, 
  95, 79, 104, 73, 106, 100, 124, 104, 122, 89, 
  107, 72, 119, 101, 121, 99, 119, 94, 114, 93, 
  117, 98, 115, 88, 112, 90, 115, 95, 108, 95, 
  110, 82, 113, 88, 97, 85, 94, 62, 100, 75, 
  83, 68, 93, 72, 103, 90, 114, 94, 112, 82, 
  107, 92, 116, 92, 113, 78, 89, 69, 105, 82, 
  108, 74, 104, 87, 99, 71, 97, 87, 109, 73, 
  109, 89, 100, 85, 100, 76, 90, 70, 99, 74, 
  84, 60, 87, 64, 91, 77, 99, 76, 94, 67, 
  90, 86, 99, 59, 89, 71, 96, 85, 105, 84, 
  100, 50, 87, 74, 92, 51, 87, 66, 88, 55, 
  97, 74, 91, 65, 94, 63, 74, 40, 77, 39, 
  80, 52, 80, 57, 88, 70, 93, 64, 89, 71, 
  98, 83, 92, 45, 81, 64, 95, 71, 97, 77, 
  83, 39, 80, 60, 98, 74, 72, 64, 92, 57, 
  79, 60, 81, 52, 83, 44, 72, 44, 42, -6, 
  72, 46, 74, 49, 86, 66, 91, 59, 92, 76, 
  97, 76, 84, 38, 77, 52, 82, 58, 91, 60, 
  67, 27, 45, 21, 79, 67, 88, 50, 79, 40, 
  67, 55, 75, 11, 78, 50, 64, -18, 54, -23, 
  73, 47, 70, 29, 77, 55, 83, 49, 90, 75, 
  95, 54, 75, 32, 64, 39, 77, 39, 80, 29, 
  67, 19, 52, 6, 60, 47, 79, -2, 67, 35, 
  61, 0, 27, -26, 58, 16, 32, -77, 60, -50, 
  73, 29, 55, -37, 53, -12, 77, 40, 57, 67, 
  90, -128, 54, -77, 52, 21, 62, 22, 62, 11, 
  51, -18, 40, -77, 31, -43, 55, -128, 29, -128, 
  8, -60, 5, -128, -10, -128, -60, -128, 2, -128, 
  67, 5, 37, -37, 4, -128, 56, -50, 76, 31, 
  40, -128, -43, -128, 38, -60, 45, -128, 37, -128, 
  -14, -128, -8, -128, -1, -128, -18, -128, -128, -128, 
  -128, -128, -37, -128, -128, -128, -23, -50, -6, -128, 
  60, -16, 42, 30, 45, -128, -33, -128, 70, -16, 
  -128, -128, -128, -128, -37, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -33, -43, -60, -128, 
  50, -128, -37, -37, -23, -128, -128, -128, 40, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -77, -128, 
  12, -128, -128, -128, -77, -128, -128, -128, -77, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, 52, 47, 63, 59, 
  11, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 27, -20, 56, 47, 52, 40, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -4, -37, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -60, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -43, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -60, -37, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -20, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -8, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -50, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -18, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -2, -37, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 1, -43, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};