/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/5c8af87a_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_5c8af87a_nohash_1.cc" \
 */
#include "no_5c8af87a_nohash_1.h"


const int g_no_5c8af87a_nohash_1_width = 40;
const int g_no_5c8af87a_nohash_1_height = 49;
alignas(16) const signed char g_no_5c8af87a_nohash_1_data[] = {
  -33, -26, -128, -26, -26, -128, -60, -26, 31, 20, 
  -26, -60, -128, -128, -128, -128, -128, -60, -60, -50, 
  -33, -18, -60, -60, -128, -128, -128, -60, -50, -60, 
  -128, -128, -60, -50, -60, -128, -60, -128, -128, -128, 
  -18, -20, -6, -20, 9, 32, 70, 74, 93, 79, 
  79, 46, 29, 27, 20, -37, -37, -50, -50, -128, 
  -37, -50, -128, -128, -128, -128, -128, -50, -37, -50, 
  -60, -50, -60, -50, -60, -128, -128, -60, -128, -128, 
  46, 19, -1, 11, 37, 63, 94, 85, 109, 84, 
  93, 67, 64, 35, 35, 26, 30, 5, 9, 9, 
  -1, -10, -6, -14, -18, -20, 37, 60, 79, 65, 
  62, 65, 71, 72, 95, 89, 102, 87, 98, 78, 
  0, -37, -29, 16, 35, 40, 86, 81, 109, 89, 
  100, 72, 43, 6, 37, 55, 75, 57, 51, 42, 
  2, -3, 24, 20, 19, -1, 46, 54, 64, 40, 
  55, 34, 54, 57, 73, 58, 82, 62, 75, 59, 
  28, 11, -14, 9, 42, 14, 81, 72, 101, 75, 
  70, 47, 53, 41, 38, 67, 71, 33, 70, 48, 
  9, -29, 5, -1, 32, 17, 62, 62, 72, 42, 
  37, 35, 50, 19, 48, 11, 51, 9, 55, 21, 
  -20, 28, 48, 31, 26, 55, 80, 76, 83, 45, 
  60, 7, 27, 4, 24, 47, 64, 62, 85, 52, 
  47, 11, 31, 26, 34, 37, 35, 37, 65, 37, 
  28, 15, 30, -2, 4, -33, 19, -26, 37, -43, 
  15, 2, -3, 14, 68, 61, 99, 67, 50, 5, 
  70, 24, 4, -60, 49, 35, 40, 44, 70, 51, 
  67, 42, 57, 29, 19, 35, 41, 11, 51, 37, 
  54, -10, 39, -29, -26, -128, -20, -128, 5, -128, 
  24, 18, 57, 51, 56, 64, 84, 42, 59, 47, 
  77, 26, 53, 34, 38, -8, 27, 52, 79, 71, 
  87, 60, 68, 2, 36, 19, 4, -77, -23, -37, 
  10, -128, -26, -128, -77, -128, -60, -128, -128, -128, 
  0, 15, 55, 14, 73, 29, 40, 26, 52, 2, 
  54, -29, -50, -43, 21, -4, 32, 44, 79, 75, 
  86, 64, 87, 64, 47, 17, 48, -60, -60, -43, 
  -4, -77, -26, -128, -128, -128, -128, -128, -128, -128, 
  35, 14, 40, 52, 89, 69, 79, 17, 37, -14, 
  52, -2, 22, -43, 32, 28, 42, 37, 73, 67, 
  92, 59, 72, -3, 42, -50, 19, -26, 8, -18, 
  -8, -128, 9, -128, -128, -128, -128, -128, -128, -128, 
  39, 4, 47, 52, 72, 16, 55, -1, 31, -77, 
  44, 4, -50, -29, 21, -37, 49, 25, 84, 55, 
  77, 57, 60, 20, 43, -23, 29, -29, -37, -128, 
  -43, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  103, 79, 82, 57, 77, 62, 69, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -10, -128, 
  -33, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  119, 99, 118, 99, 113, 92, 90, 1, -128, -128, 
  -128, -128, 33, 65, 74, 57, 76, 0, -14, -77, 
  34, 14, 62, 30, 11, -2, -43, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  105, 91, 114, 90, 111, 87, 92, 42, -77, -128, 
  -37, -4, 65, 69, 96, 72, 89, 49, 70, 35, 
  71, 70, 84, 66, 68, 4, 55, 0, 61, -8, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  96, 79, 103, 83, 105, 84, 105, 84, 69, 58, 
  84, 48, 95, 86, 105, 77, 99, 97, 116, 88, 
  107, 89, 109, 89, 100, 80, 94, 68, 85, 64, 
  65, -128, -14, -43, -4, -77, -43, -128, -7, -37, 
  86, 66, 97, 75, 98, 77, 103, 80, 76, 49, 
  80, 53, 97, 80, 95, 77, 102, 84, 104, 67, 
  99, 73, 92, 72, 97, 74, 90, 62, 80, 77, 
  95, -23, -7, -77, -37, -128, -26, -128, -14, -4, 
  65, 46, 85, 66, 92, 72, 96, 74, 84, 58, 
  85, 59, 91, 70, 95, 74, 107, 79, 82, 56, 
  93, 70, 88, 69, 85, 74, 100, 77, 80, 65, 
  81, 29, 28, 17, 27, -14, 22, 8, 16, 9, 
  80, 47, 84, 60, 87, 61, 91, 65, 86, 60, 
  89, 79, 95, 70, 97, 84, 92, 36, 54, 31, 
  74, 62, 79, 31, 57, 49, 83, 52, 66, 54, 
  75, -8, 1, -128, -37, -128, 11, -18, -33, -77, 
  64, 11, 81, 52, 75, 29, 86, 51, 89, 51, 
  84, 77, 101, 76, 102, 74, 59, -128, 27, -6, 
  60, 39, 62, 14, 70, 51, 63, 37, 71, 49, 
  72, -23, 0, -43, -26, -29, -2, -77, -29, -50, 
  59, 1, 66, 0, 60, 9, 72, 22, 75, 44, 
  86, 68, 105, 77, 84, 8, 37, -23, 18, -128, 
  5, 0, 63, -23, 48, 27, 50, -10, 36, 19, 
  60, -29, -26, -43, -60, -6, -16, -128, -29, -50, 
  71, 29, 32, -128, 48, -23, 57, -10, 63, -6, 
  80, 68, 88, 20, 37, -77, 9, -128, -26, -128, 
  -128, -128, 53, -60, 17, -6, 27, -20, 27, -37, 
  30, -77, -60, -128, -128, -128, -20, -128, -77, -128, 
  70, 26, 43, -128, 32, -128, 19, -77, 53, -12, 
  45, 35, 46, -128, 5, -128, -29, -128, -77, -128, 
  -50, -128, 33, -128, 11, -128, 24, -128, 27, -77, 
  24, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  54, -128, 45, -128, 15, -128, -60, -128, 46, -18, 
  50, -77, -43, -128, -50, -128, -128, -128, -50, -128, 
  -128, -128, -20, -128, 4, -77, -29, -128, 29, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -77, -128, -128, -128, -29, -77, 
  18, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  9, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  9, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -16, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
