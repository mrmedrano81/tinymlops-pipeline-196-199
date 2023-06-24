/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/63f7a489_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_63f7a489_nohash_1.cc" \
 */
#include "yes_63f7a489_nohash_1.h"


const int g_yes_63f7a489_nohash_1_width = 40;
const int g_yes_63f7a489_nohash_1_height = 49;
alignas(16) const signed char g_yes_63f7a489_nohash_1_data[] = {
  -128, -60, -60, -37, -128, 32, 47, -2, 26, 39, 
  5, 7, 0, -60, 14, 17, 14, -12, 0, 15, 
  -18, -26, 5, -2, -4, -26, -18, -26, 0, 4, 
  -10, -12, -10, -37, -18, -12, -18, -2, 0, -26, 
  -128, -128, -128, -60, 9, 17, 28, 20, 8, 4, 
  -50, -10, 9, -20, -6, -23, 19, 21, 16, -1, 
  -37, -50, -37, 0, 4, -29, -18, -8, -12, -37, 
  -26, -20, -1, -20, -26, -8, -12, -10, -6, -14, 
  -128, -50, -37, -50, -2, -29, -33, -60, 10, -23, 
  -12, -33, 7, -4, 17, -26, 6, -20, -29, -33, 
  -26, -23, -12, -60, -20, -16, -37, -16, 21, -33, 
  -12, -16, -29, -23, -37, -18, 8, -26, 2, -1, 
  -128, -128, -128, -128, -14, -8, -6, -29, 15, -26, 
  11, -14, -23, -12, -4, -1, 0, -43, -20, 2, 
  11, 9, 17, -43, -3, -12, -7, -26, -3, -33, 
  -20, -26, -14, -26, -14, -20, 14, 0, 28, 52, 
  105, 97, 117, 101, 123, 100, 109, 83, 77, 43, 
  35, 25, 41, 27, -1, -18, 11, -29, -29, -23, 
  28, 64, 71, 54, 87, 90, 100, 39, 31, 49, 
  85, 77, 86, 70, 28, 9, 21, 25, 99, 92, 
  108, 94, 115, 97, 117, 82, 109, 88, 105, 79, 
  62, 32, 16, 1, 38, 8, 6, 15, 39, 69, 
  114, 97, 110, 85, 99, 90, 112, 80, 61, 82, 
  108, 97, 113, 89, 69, 49, 31, 57, 112, 94, 
  99, 83, 106, 85, 107, 84, 115, 90, 108, 60, 
  69, 49, 54, 37, 46, 40, 50, 70, 82, 90, 
  110, 92, 118, 94, 107, 84, 109, 84, 106, 82, 
  99, 82, 109, 83, 93, 85, 94, 62, 97, 77, 
  92, 77, 102, 82, 110, 89, 115, 86, 107, 95, 
  113, 82, 82, 54, 63, 49, 75, 74, 99, 82, 
  112, 94, 110, 95, 119, 96, 107, 81, 112, 89, 
  104, 82, 109, 82, 95, 86, 111, 74, 80, 76, 
  84, 74, 102, 80, 113, 93, 109, 83, 104, 94, 
  115, 88, 97, 57, 82, 70, 105, 92, 113, 92, 
  109, 79, 108, 90, 116, 90, 97, 84, 108, 84, 
  103, 83, 104, 75, 102, 77, 103, 92, 101, 68, 
  80, 69, 97, 82, 114, 94, 110, 90, 108, 87, 
  112, 89, 102, 60, 79, 65, 86, 77, 105, 93, 
  112, 71, 94, 82, 108, 67, 87, 59, 95, 64, 
  94, 69, 89, 71, 95, 72, 89, 80, 90, 16, 
  82, 62, 91, 65, 95, 71, 113, 91, 99, 82, 
  109, 85, 102, 64, 85, 80, 97, 87, 115, 92, 
  110, 61, 95, 83, 103, 16, 70, 51, 83, 48, 
  99, 76, 98, 79, 94, 61, 94, 75, 74, -50, 
  74, 51, 82, 51, 80, 68, 111, 86, 103, 80, 
  102, 85, 98, 73, 97, 77, 106, 81, 110, 80, 
  87, 44, 80, 57, 57, -37, 51, 29, 56, 54, 
  86, 54, 85, 68, 101, 64, 97, 78, 88, 37, 
  71, 33, 66, -7, 12, 70, 101, 74, 106, 76, 
  84, 51, 69, 80, 98, 74, 95, 78, 101, 66, 
  46, -2, 75, 2, -16, -128, 55, 31, 19, 40, 
  77, -10, 57, 37, 70, 10, 73, 56, 85, 47, 
  40, -128, 36, -128, -33, -77, 45, 4, 79, 12, 
  70, 55, 84, 63, 90, 69, 93, 65, 74, 5, 
  16, -128, 52, -128, 25, -128, -20, -50, 34, 42, 
  81, -1, 45, 19, 50, 38, 86, 44, 73, 17, 
  -8, -128, -29, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, 19, 47, 51, -128, 14, -128, 49, -128, 
  -43, -128, 14, 11, 15, -128, -128, -128, -14, 34, 
  62, -128, 32, 30, 73, -128, 45, 54, 62, 8, 
  -43, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 54, 7, -60, -128, 39, -43, 43, -128, 
  -128, -128, -6, -128, -128, -128, 8, 36, 82, 75, 
  87, 17, 69, 55, 99, 86, 99, 75, 104, 83, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -18, -128, -128, -128, 36, -43, 5, -128, 
  -3, -128, -128, -128, -128, -128, -128, -128, 71, 54, 
  64, 43, 70, 61, 96, 69, 110, 89, 104, 84, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -14, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, 60, 42, 
  59, 11, 46, 20, 87, 58, 108, 80, 104, 81, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -29, 67, 52, 
  52, 7, 66, 53, 95, 77, 94, 68, 96, 64, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, 34, 65, 40, 
  41, -23, 61, 51, 83, 63, 72, 49, 81, 41, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -23, -128, 
  -128, -128, -128, -128, -128, -128, -128, -60, 54, -37, 
  26, -26, 69, 55, 80, 44, 72, 40, 80, 47, 
  -128, -128, -128, -128, -128, -128, -128, -128, -23, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -7, -128, 42, 22, 
  33, -33, 49, 25, 81, 51, 72, 39, 76, 29, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 4, -37, 
  9, -128, 69, 43, 69, 44, 67, 35, 72, 34, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -10, -50, 22, -128, 
  4, -60, 63, 55, 67, -8, 45, 16, 62, 30, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -1, 22, 49, -4, 
  -60, -43, 71, 33, 36, 4, 59, 12, 64, 17, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -1, -128, 
  -128, -128, 37, 12, 21, -128, -128, -128, 22, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
