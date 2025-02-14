/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/af7a8296_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_af7a8296_nohash_1.cc" \
 */
#include "yes_af7a8296_nohash_1.h"


const int g_yes_af7a8296_nohash_1_width = 40;
const int g_yes_af7a8296_nohash_1_height = 49;
alignas(16) const signed char g_yes_af7a8296_nohash_1_data[] = {
  110, 89, 108, 96, 116, 94, 113, 90, 111, 95, 
  110, 95, 104, 92, 104, 94, 113, 96, 104, 88, 
  101, 86, 95, 87, 96, 83, 94, 82, 76, 74, 
  89, 77, 85, 75, 74, 72, 75, 66, 74, 49, 
  97, 89, 96, 79, 90, 84, 102, 88, 86, 74, 
  95, 72, 94, 76, 105, 67, 77, 66, 91, 84, 
  100, 64, 90, 69, 90, 76, 89, 70, 92, 74, 
  79, 70, 82, 64, 73, 53, 74, 62, 62, 47, 
  87, 64, 88, 44, 70, 47, 73, 71, 87, 58, 
  93, 63, 89, 63, 79, 74, 91, 65, 95, 47, 
  81, 69, 74, 51, 79, 69, 79, 51, 73, 59, 
  77, 57, 73, 50, 61, 46, 64, 46, 61, 25, 
  84, 63, 84, 35, 87, 61, 83, 65, 74, 50, 
  87, 59, 88, 53, 67, 37, 82, 59, 64, 46, 
  71, 25, 68, 55, 72, 45, 76, 42, 69, 49, 
  64, 62, 73, 52, 65, 42, 60, 27, 52, 35, 
  69, 70, 88, 54, 73, 22, 75, 67, 73, -10, 
  80, 46, 58, 47, 70, 61, 87, 25, 60, 34, 
  82, 45, 86, 53, 77, 54, 67, 52, 73, 31, 
  60, 51, 57, 16, 61, 37, 54, 20, 55, 10, 
  85, 55, 85, 45, 80, 64, 85, 16, 65, 56, 
  45, -29, 74, 42, 75, 47, 56, 32, 83, 44, 
  57, 45, 60, 8, 62, 19, 69, 30, 59, 42, 
  67, 34, 60, 17, 39, 30, 38, 15, 36, -18, 
  67, 50, 50, 49, 83, 51, 63, 56, 76, 13, 
  56, 12, 65, 35, 80, 21, 71, -4, 76, 28, 
  64, 35, 63, 46, 73, 0, 69, 27, 47, 36, 
  55, 2, 55, 22, 45, 33, 45, 19, 57, 12, 
  74, 54, 85, 51, 47, 13, 55, 35, 56, 39, 
  74, 32, 72, 29, 70, 31, 65, 19, 56, 37, 
  49, 33, 75, 42, 46, -8, 48, 23, 35, 17, 
  63, 2, 52, 11, 49, 4, 42, 20, 46, 11, 
  67, 49, 73, 22, 52, 29, 30, -128, 35, 29, 
  68, -50, 56, 24, 70, 42, 53, 19, 54, -6, 
  41, 24, 47, 33, 56, 12, 31, 4, 56, 8, 
  53, 8, 47, -26, 30, 23, 46, 11, 35, -14, 
  67, 52, 71, -37, 24, 40, 59, 38, 74, -8, 
  48, -3, -2, -6, 65, -23, 50, 19, 65, -10, 
  42, 27, 46, -6, 34, 24, 69, 10, 30, -37, 
  19, -43, 41, -16, 44, -8, 43, -2, 40, -16, 
  59, 30, 59, 4, 69, 52, 70, 23, 48, 24, 
  59, 11, 45, 33, 42, -7, 49, 15, 58, 39, 
  49, -18, 57, 27, 53, -16, 34, -77, 14, -33, 
  44, -12, 34, 11, 44, -18, 46, 16, 42, -23, 
  72, 64, 103, 69, 72, 52, 73, 49, 58, -77, 
  30, 9, 48, 5, 43, -12, 50, -1, 29, -128, 
  39, -18, 28, 2, 42, 1, 37, -128, 16, 6, 
  58, -4, 45, -10, 45, -23, 29, 4, 40, -50, 
  82, 86, 111, 73, 65, -1, 70, 9, 44, -128, 
  1, -20, 54, 42, 38, -8, 35, -128, 35, -8, 
  25, -12, 34, -26, 65, 46, 60, 61, 94, 72, 
  94, 76, 95, 56, 57, -4, 40, 12, 65, 54, 
  63, 83, 115, 93, 80, 25, 102, 82, 83, 19, 
  48, -14, 36, -128, 50, -50, -1, -77, 44, -18, 
  40, 24, 50, 57, 98, 84, 96, 82, 104, 84, 
  109, 85, 100, 79, 81, 31, 59, 49, 87, 68, 
  -50, 68, 107, 89, 81, 58, 116, 100, 117, 45, 
  81, 59, 54, 42, 62, 37, 84, 43, 75, 36, 
  93, 69, 102, 94, 114, 95, 116, 94, 112, 86, 
  107, 80, 85, 19, 42, -26, 49, 52, 88, 70, 
  65, 65, 99, 77, 81, 46, 117, 100, 122, 70, 
  113, 95, 101, 83, 108, 79, 100, 82, 109, 90, 
  112, 93, 118, 88, 111, 90, 114, 92, 110, 82, 
  104, 84, 110, 92, 117, 97, 117, 95, 111, 87, 
  43, 19, 82, 62, 78, 31, 102, 80, 102, 53, 
  112, 92, 91, 70, 92, 21, 85, 48, 101, 80, 
  102, 79, 79, 24, 72, 24, 63, -12, 57, 40, 
  77, 37, 67, 37, 75, 45, 74, 36, 61, 5, 
  21, 22, 67, 16, 72, 55, 84, 36, 80, 96, 
  97, 56, 99, 42, 70, 43, 74, 50, 78, 60, 
  93, 77, 80, 44, 74, 31, 88, 48, 73, 30, 
  69, 29, 34, -128, -128, -128, -77, -43, 65, 9, 
  76, 50, 55, -128, 66, 77, 52, -128, 71, 89, 
  95, 59, 84, 27, 68, 40, 74, 47, 61, 49, 
  75, 48, 60, -23, 54, 22, 76, 27, 46, -20, 
  49, -3, 25, -128, -128, -128, -128, -128, 53, -12, 
  91, 39, -37, -128, 82, 75, -1, -128, 87, 77, 
  37, 25, 80, 11, 40, 0, 40, -12, 54, 62, 
  78, 29, 34, -60, 38, -12, 57, 16, 29, -128, 
  42, -18, -1, -128, -128, -128, -128, -128, 28, -37, 
  100, 40, -128, -128, 97, 67, -128, -128, 72, -4, 
  36, -128, 29, -29, 10, 16, 41, 4, 63, 37, 
  71, -128, -77, -128, -128, -128, 10, -128, -128, -128, 
  -12, -128, -128, -128, -128, -128, -128, -128, 17, -29, 
  56, -128, -128, -128, 68, -43, -128, -128, -128, -128, 
  -1, -128, 20, -26, -33, -128, -8, -128, -43, -128, 
  -29, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -12, -128, -128, -128, -29, -128, 40, -12, 
  29, -128, -128, -128, 17, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -14, -128, 19, 18, 64, 59, 94, 76, 
  1, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -8, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -2, -43, 54, 52, 89, 65, 
  4, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 9, -128, -7, 2, 61, 40, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, 14, 34, 74, 29, 
  -23, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -23, -77, 37, 27, 68, 37, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -16, -12, 43, 5, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -1, -128, 15, 19, 49, 9, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, -128, 11, -128, 43, 41, 67, 14, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 18, 5, 38, -128, 55, 27, 66, 18, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -29, -128, -6, -128, -128, -128, 
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
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
  -128, -128, -128, -128, -128, -60, -37, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -60, 12, -33, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -60, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -18, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
