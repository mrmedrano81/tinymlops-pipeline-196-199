/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/881583a6_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_881583a6_nohash_0.cc" \
 */
#include "no_881583a6_nohash_0.h"


const int g_no_881583a6_nohash_0_width = 40;
const int g_no_881583a6_nohash_0_height = 49;
alignas(16) const signed char g_no_881583a6_nohash_0_data[] = {
  118, 98, 117, 97, 118, 95, 103, 90, 103, 93, 
  112, 91, 107, 94, 109, 95, 108, 86, 107, 92, 
  110, 94, 110, 93, 106, 90, 103, 87, 105, 92, 
  102, 91, 104, 89, 107, 93, 108, 92, 105, 90, 
  91, 69, 94, 61, 83, 82, 107, 81, 90, 79, 
  97, 85, 105, 80, 96, 73, 96, 88, 100, 78, 
  89, 79, 91, 74, 96, 82, 97, 75, 94, 74, 
  98, 77, 97, 74, 88, 72, 92, 80, 99, 71, 
  89, 78, 99, 80, 88, 22, 98, 81, 102, 77, 
  95, 67, 93, 74, 90, 77, 100, 65, 86, 43, 
  94, 61, 93, 74, 92, 73, 92, 77, 87, 44, 
  80, 61, 85, 65, 87, 58, 81, 57, 85, 64, 
  61, 65, 94, 56, 70, 70, 86, 61, 74, 57, 
  87, 67, 74, 54, 95, 62, 76, 54, 70, 61, 
  72, -8, 75, 60, 82, 54, 79, 61, 78, 58, 
  80, 53, 73, 54, 80, 61, 84, 52, 75, 45, 
  75, 31, 59, 46, 84, 52, 72, 56, 81, 12, 
  69, 42, 77, 46, 79, 33, 79, 32, 77, 47, 
  67, 23, 74, 59, 75, 54, 74, 45, 67, 42, 
  64, 42, 71, 53, 65, 52, 78, 46, 64, 49, 
  85, 55, 81, 39, 54, 21, 68, 12, 75, 46, 
  67, 32, 42, -12, 65, -2, 68, 49, 73, 64, 
  82, 52, 79, 35, 67, 35, 69, 46, 70, 44, 
  78, 46, 72, 35, 72, 37, 67, 39, 63, 36, 
  79, 63, 74, 31, 81, 39, 82, 58, 75, 52, 
  78, 44, 55, 20, 68, 42, 67, 23, 62, 11, 
  53, 31, 65, 49, 59, 31, 75, 44, 62, 29, 
  76, 41, 75, 54, 75, 37, 65, 29, 74, 25, 
  105, 89, 104, 48, 62, -10, 73, 35, 76, 31, 
  60, 17, 38, 4, 52, -8, 66, 48, 71, 25, 
  69, 26, 61, 29, 62, -10, 42, 37, 67, 16, 
  57, 27, 63, 16, 61, 4, 54, 31, 74, 28, 
  86, 63, 74, 41, 65, 62, 67, -12, 56, 5, 
  26, -60, 70, 19, 47, 23, 72, 34, 60, 15, 
  65, 21, 62, 15, 70, 17, 58, 37, 57, 11, 
  47, 18, 46, 7, 64, 14, 57, 23, 50, 11, 
  61, 21, 67, 16, 49, 2, 51, 43, 61, 13, 
  74, 54, 76, 30, 4, -23, 49, -1, 51, 11, 
  58, 35, 44, -128, 53, 34, 57, -50, 54, 26, 
  53, -26, 57, 28, 49, 28, 52, 16, 55, 11, 
  -60, -128, 4, -60, -14, -128, 20, 46, 74, 46, 
  69, -4, 55, 45, 59, -26, 60, 28, 61, -8, 
  52, -6, 47, 27, 53, 9, 69, -4, 60, 7, 
  59, 19, 43, -60, 42, 16, 55, -4, 45, 6, 
  44, -20, 45, 47, 63, -18, 29, -128, 35, -128, 
  20, -23, 38, -50, 65, -6, 45, 39, 63, 7, 
  16, -60, 10, -128, 26, -3, 51, -16, 49, 2, 
  42, -20, 55, 11, 48, -43, 43, -8, 49, 5, 
  68, 5, 47, 24, 53, 9, 45, -33, 50, 36, 
  61, 16, 51, -128, 34, -12, 44, 19, 40, -128, 
  19, -7, 7, -43, 52, -3, 34, -26, 50, 17, 
  55, 10, 50, -37, 47, -6, 61, -4, 49, -16, 
  117, 93, 108, 87, 113, 81, 89, 73, 74, 50, 
  66, 12, 40, -8, 60, 16, 44, -10, 58, 25, 
  55, 32, 55, -26, 19, -2, 51, -26, 27, -23, 
  56, 18, 61, 22, 27, -26, 25, -10, 51, -2, 
  109, 81, 71, 78, 111, 84, 85, 77, 73, 71, 
  84, 6, 55, 37, 72, 39, 67, 50, 67, 45, 
  63, 13, 50, -1, 62, 59, 77, 20, 47, -37, 
  39, 0, 43, -18, 47, 4, 45, -6, 46, -8, 
  103, 78, 74, 73, 106, 82, 77, 74, 84, 62, 
  87, 11, 72, 30, 74, 49, 77, 70, 93, 75, 
  69, 32, 58, 22, 84, 82, 104, 21, 58, 11, 
  24, -26, 44, -29, 55, 11, 54, -6, 27, -18, 
  90, 66, 84, 68, 101, 84, 116, 100, 122, 91, 
  110, 65, 94, 82, 103, 85, 108, 97, 121, 100, 
  124, 97, 112, 85, 99, 96, 119, 98, 117, 95, 
  109, 88, 104, 65, 84, 60, 86, 70, 99, 83, 
  80, 40, -8, 75, 98, 61, 113, 92, 108, 97, 
  118, 85, 109, 90, 110, 87, 113, 94, 122, 97, 
  107, 90, 112, 85, 101, 84, 109, 86, 107, 90, 
  110, 84, 106, 85, 100, 81, 102, 86, 103, 78, 
  80, 41, -18, 75, 95, 59, 106, 70, 95, 97, 
  113, 80, 96, 90, 105, 85, 117, 89, 104, 61, 
  92, 78, 105, 79, 103, 55, 83, 55, 91, 73, 
  113, 74, 97, 78, 92, 70, 93, 70, 81, 60, 
  81, 39, 46, 66, 76, 22, 102, 54, 111, 86, 
  88, 90, 101, 75, 101, 81, 112, 72, 85, 32, 
  85, 59, 84, 66, 97, 40, 55, 54, 88, 62, 
  99, 73, 97, 74, 88, 60, 70, 62, 95, 65, 
  71, -18, 77, 64, 69, 56, 90, 1, 106, 68, 
  81, 85, 93, 53, 106, 91, 103, 34, 37, -26, 
  52, 29, 74, 45, 90, 52, 64, 40, 75, 57, 
  90, 63, 77, 31, 73, 37, 75, 62, 91, 60, 
  55, -128, 90, 67, 67, 68, 88, 45, 102, 42, 
  76, 57, 89, 68, 97, 72, 74, -3, -128, -128, 
  45, -12, 46, -8, 72, 26, 54, 8, 44, 27, 
  77, 29, 65, -14, 61, 22, 70, 32, 65, 4, 
  37, -128, 87, 49, 36, 69, 82, 58, 91, -29, 
  74, 31, 82, 77, 89, -60, -26, -128, -77, -128, 
  -23, -128, 35, -128, 42, -3, 32, -128, 19, -60, 
  57, -128, 18, -128, -128, -128, -128, -128, 0, -50, 
  48, -128, 86, 40, 27, 34, 37, 35, 65, -128, 
  49, -14, 74, 40, 45, -128, -37, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -77, -128, -128, -128, 
  -8, -128, -60, -128, -128, -128, -128, -128, -7, -128, 
  38, -128, 73, -50, -128, 11, 9, -128, -128, -128, 
  -10, -128, 30, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -8, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 0, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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