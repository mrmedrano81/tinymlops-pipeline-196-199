/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/5e3dde6b_nohash_4.wav" \
 * --output_c_file="features_c_files/yes/yes_5e3dde6b_nohash_4.cc" \
 */
#include "yes_5e3dde6b_nohash_4.h"


const int g_yes_5e3dde6b_nohash_4_width = 40;
const int g_yes_5e3dde6b_nohash_4_height = 49;
alignas(16) const signed char g_yes_5e3dde6b_nohash_4_data[] = {
  80, 60, 71, 78, 93, 79, 70, 86, 105, 90, 
  89, 68, 43, 37, 17, 11, -10, 30, 57, 35, 
  72, 64, 47, 34, 14, 25, 33, -7, 5, 11, 
  77, 73, 88, 68, 9, 45, 53, 50, 66, 34, 
  97, 92, 108, 84, 115, 97, 120, 100, 118, 93, 
  118, 93, 99, 85, 74, 77, 85, 76, 112, 92, 
  99, 88, 107, 90, 81, 64, 54, 43, 59, 77, 
  108, 91, 110, 86, 70, 66, 74, 69, 95, 71, 
  96, 83, 101, 73, 104, 80, 100, 75, 100, 85, 
  90, 77, 93, 52, 74, 64, 90, 73, 96, 84, 
  102, 79, 98, 63, 77, 54, 55, 27, 75, 62, 
  88, 52, 87, 70, 50, 49, 67, 55, 85, 67, 
  76, 54, 84, 65, 80, 40, 84, 65, 94, 77, 
  92, 67, 80, 37, 70, 74, 89, 69, 87, 76, 
  104, 71, 90, 69, 83, 68, 56, 59, 86, 68, 
  66, 32, 75, 54, 55, 59, 88, 67, 77, 52, 
  79, 48, 39, 35, 58, 50, 74, 62, 97, 64, 
  94, 65, 99, 74, 95, 72, 79, 59, 91, 84, 
  109, 79, 104, 80, 98, 79, 95, 84, 110, 89, 
  90, 62, 87, 55, 59, 85, 110, 93, 116, 92, 
  67, -43, 57, 43, 39, -37, 60, 17, 68, 40, 
  65, 25, 69, 44, 78, 68, 74, 53, 68, 54, 
  79, 55, 75, 60, 84, 70, 96, 61, 89, 69, 
  88, 47, 65, 4, 70, 46, 65, 45, 64, 26, 
  69, -8, 57, -29, -50, -128, 62, 37, 46, -23, 
  52, 43, 45, -33, 50, 32, 80, 49, 55, -2, 
  49, 28, 46, -12, 66, 50, 80, 54, 85, 58, 
  62, 21, 53, 31, 30, -10, 27, -43, 29, -26, 
  58, -128, 28, -128, -128, -128, 49, -128, -33, -33, 
  42, 48, 63, -7, 42, 17, 67, 47, 62, -128, 
  57, 30, 54, -6, 55, 27, 62, 30, 47, -18, 
  50, 15, 43, -29, 1, -128, -14, -128, -50, -128, 
  70, -29, -77, -128, -77, -128, -60, -77, 23, 1, 
  46, -29, 42, -128, -77, -128, 62, 11, 13, -128, 
  -23, -6, 62, 22, 50, 19, 29, -128, 29, -50, 
  30, -128, -50, -128, -50, -128, -128, -128, -128, -128, 
  41, -128, -37, -128, -128, -128, 37, -60, 42, -43, 
  -16, -128, -60, -128, -50, -128, 75, 9, 45, -128, 
  -77, -2, 54, -128, 57, 38, 39, -128, -77, -128, 
  -77, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -77, 4, 62, -29, 42, -128, 
  62, 57, 75, 12, -1, -128, 9, -23, 40, -128, 
  33, -77, 32, -128, -10, 20, 44, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -128, -128, -128, -128, 
  -23, -128, -128, -128, -128, -128, 10, -128, 4, -77, 
  49, -128, 40, 22, -7, -128, -50, -37, 4, -128, 
  -12, -77, 47, -128, -29, -18, 22, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -23, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -23, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -2, -128, -128, -128, -128, 14, -128, -128, -128, 
  -1, -77, -26, 34, 11, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 30, 42, 20, 0, 
  55, 54, 80, 52, 61, 59, 79, 45, 64, 15, 
  77, 61, 60, 52, 44, 17, 2, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 4, -33, -128, -128, 43, 60, 20, -26, 
  11, 12, 67, 34, 64, 45, 76, 30, 54, 29, 
  122, 105, 127, 102, 115, 102, 124, 97, 118, 101, 
  114, 54, 81, 67, 72, 61, 59, 27, 29, -43, 
  36, 73, 106, 87, 90, 74, 92, 62, 42, 6, 
  86, 72, 58, 31, 66, 42, 66, 79, 92, 78, 
  108, 87, 104, 53, 86, 89, 112, 71, 119, 100, 
  115, 72, 99, 77, 105, 59, 102, 77, 92, 79, 
  100, 85, 92, 75, 91, 74, 89, 60, 55, 19, 
  90, 68, 45, 37, 74, 27, 60, 65, 88, 68, 
  84, 69, 96, 57, 73, 67, 85, 15, 112, 91, 
  108, 47, 80, 75, 109, 75, 113, 84, 103, 88, 
  110, 82, 92, 68, 92, 79, 100, 65, 51, -33, 
  65, 31, 41, 5, 68, 54, 68, 26, 83, 63, 
  91, 69, 89, 41, 69, 51, 75, 24, 102, 72, 
  88, 77, 102, 79, 109, 85, 112, 85, 107, 82, 
  104, 73, 89, 72, 102, 69, 86, 64, 51, -18, 
  71, 31, -7, 11, 62, 63, 57, 34, 76, 54, 
  94, 69, 90, 39, 82, 47, 62, 54, 94, 44, 
  43, 99, 119, 73, 94, 80, 89, 75, 93, 60, 
  78, 64, 86, 49, 90, 65, 72, 52, 70, 51, 
  83, 53, 69, -10, 62, 11, 44, 14, 74, 54, 
  95, 63, 80, -18, 86, 26, 44, 63, 62, -33, 
  87, 95, 106, 55, 67, 73, 75, 68, 89, 66, 
  72, 66, 102, 49, 82, 56, 84, 39, 65, 60, 
  87, 54, 66, -8, 60, 8, 30, 5, 67, 48, 
  91, 50, 61, -128, 95, 29, 41, 84, 73, -128, 
  53, 42, 72, 81, 53, 39, 60, 34, 80, 50, 
  81, -12, 66, 45, 70, -6, 61, 22, 26, 31, 
  57, 5, 59, 5, 59, 13, 48, 19, 70, 51, 
  66, 16, 46, -14, 75, -128, 65, 65, -50, -128, 
  74, 11, 34, 6, 70, 9, 24, -50, 71, 8, 
  43, -50, 40, -50, 38, 2, 48, -128, 32, -128, 
  8, -128, 7, -50, 14, -128, -77, -14, 59, 29, 
  53, -50, 19, 5, 51, -128, -128, -128, -128, -128, 
  17, -60, -7, 8, -128, -128, -128, -128, 44, -128, 
  29, -128, -128, -128, -16, -128, 10, -128, -7, -128, 
  -128, -128, -50, -128, -16, -128, -128, -128, -1, -50, 
  14, -128, -77, -128, 19, -128, -18, -128, -128, -128, 
  -43, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  21, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -77, 27, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -33, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -60, 46, -128, 23, 70, 94, 48, 51, 2, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -26, -128, 
  15, 13, 51, 26, 80, 72, 101, 69, 86, 65, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -37, 
  38, -37, 14, 46, 79, 78, 103, 82, 92, 71, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  19, 42, 45, 14, 79, 45, 90, 60, 99, 70, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, 15, 
  30, 29, 60, 4, 63, 68, 90, 52, 80, 53, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  48, 34, 56, 22, 70, 43, 83, 50, 73, 24, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 1, -128, 
  24, -29, 32, -77, 73, 27, 64, 38, 60, -23, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 9, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  44, -6, -60, -37, 58, -3, 57, -16, 42, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 15, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  41, 6, -50, -50, 52, -128, 22, -128, -29, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -128, -128, -128, 20, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
