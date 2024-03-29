/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/1b4c9b89_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_1b4c9b89_nohash_1.cc" \
 */
#include "yes_1b4c9b89_nohash_1.h"


const int g_yes_1b4c9b89_nohash_1_width = 40;
const int g_yes_1b4c9b89_nohash_1_height = 49;
alignas(16) const signed char g_yes_1b4c9b89_nohash_1_data[] = {
  63, 60, 69, 57, 63, 73, 84, 64, 45, 35, 
  50, 47, 35, 23, 5, 17, 44, 17, 56, 52, 
  33, 44, 54, 65, 63, 49, 47, 47, 67, 35, 
  33, 37, 55, 61, 54, 47, 49, 56, 59, 34, 
  63, 53, 59, 57, 57, 39, 71, 50, 44, 29, 
  47, 20, 46, 43, 42, 22, 45, 48, 64, 42, 
  50, 45, 61, 39, 8, 17, 57, 39, 41, 48, 
  62, 30, 45, 19, 51, 51, 40, 31, 52, 25, 
  62, 77, 92, 53, 28, -14, 34, 30, 45, 45, 
  44, 1, 15, 16, 29, 47, 69, 42, 53, 49, 
  72, 47, 52, 42, 53, 22, 29, 32, 34, 46, 
  73, 25, 34, 25, 19, 2, 45, 24, 38, 45, 
  56, 42, 42, 4, 64, 57, 69, 42, 48, 56, 
  70, 30, 49, 40, 70, 39, 43, -43, 41, 16, 
  54, 17, 37, 10, 42, 30, 32, 10, 22, 32, 
  65, 19, 45, 22, 36, 10, 19, -4, 39, 19, 
  60, 51, 54, -26, 65, 52, 45, 22, 39, 20, 
  17, 44, 63, 50, 52, -3, 27, -14, 9, -8, 
  19, 41, 46, -10, 39, 9, 26, -23, -1, 21, 
  47, 20, 16, -43, 40, -33, 25, -23, 20, -8, 
  107, 94, 116, 97, 111, 79, 64, 43, 46, 37, 
  69, 62, 72, 37, 52, 0, 19, -43, 19, 4, 
  50, 12, 20, -4, 13, 5, 41, -16, -2, -2, 
  30, 9, 32, -26, 17, -12, 21, -8, 23, -29, 
  119, 101, 122, 90, 114, 100, 122, 95, 113, 95, 
  103, 96, 115, 72, 80, 44, 65, 9, 21, -26, 
  29, 19, 11, 35, 85, 64, 65, 22, 56, 36, 
  4, -8, 69, 70, 67, 20, 36, 14, 40, 19, 
  107, 85, 104, 71, 108, 92, 110, 58, 111, 87, 
  96, 82, 96, 63, 69, 52, 47, 25, 46, 40, 
  54, 48, 50, 58, 86, 73, 90, 78, 93, 82, 
  108, 95, 116, 95, 115, 90, 89, 66, 77, 59, 
  105, 80, 97, 60, 105, 84, 100, 47, 100, 67, 
  82, 62, 67, 34, 56, 29, 33, -16, 40, 21, 
  43, 37, 55, 67, 89, 77, 98, 74, 103, 89, 
  106, 77, 110, 81, 100, 75, 87, 61, 74, 35, 
  99, 75, 95, 54, 107, 87, 107, 67, 89, 48, 
  77, 57, 66, 63, 84, 18, 54, 50, 55, 6, 
  71, 59, 81, 72, 100, 86, 109, 90, 111, 89, 
  102, 77, 100, 70, 92, 71, 83, 57, 77, 47, 
  92, 69, 91, 37, 107, 89, 111, 64, 96, 63, 
  91, 67, 74, 68, 85, 76, 90, 55, 69, 67, 
  82, 64, 97, 89, 114, 91, 110, 88, 104, 69, 
  81, 62, 95, 66, 88, 65, 70, 14, 64, 54, 
  87, 59, 80, 29, 103, 82, 104, 80, 106, 79, 
  100, 72, 80, 80, 97, 83, 99, 78, 95, 85, 
  85, 76, 105, 88, 107, 87, 110, 84, 89, 45, 
  78, 62, 78, 39, 76, 53, 55, -3, 59, 36, 
  81, 45, 67, -128, 90, 56, 73, 84, 110, 80, 
  104, 78, 77, 82, 97, 83, 95, 87, 95, 72, 
  97, 83, 107, 84, 104, 78, 100, 75, 85, 55, 
  90, 69, 85, 65, 97, 73, 77, 10, 61, 37, 
  77, 32, 53, -60, 83, 27, 37, 88, 109, 75, 
  110, 75, 88, 82, 91, 80, 95, 80, 99, 71, 
  102, 82, 111, 79, 97, 69, 92, 48, 74, 37, 
  68, 60, 84, 59, 87, 60, 48, 12, 58, 21, 
  73, 6, 17, 49, 78, -14, -29, 89, 105, 58, 
  107, 68, 97, 76, 97, 70, 99, 74, 100, 79, 
  104, 85, 107, 74, 85, 57, 84, 27, 55, -2, 
  42, 37, 80, 50, 83, 52, 57, -12, 59, 35, 
  69, -4, -4, 43, 70, -60, -128, 83, 98, 45, 
  104, 63, 98, 70, 97, 65, 96, 65, 99, 74, 
  97, 69, 100, 49, 73, 42, 71, 6, 56, 6, 
  54, 21, 66, 38, 69, 50, 60, -12, 62, 30, 
  67, -8, -8, 50, 67, -128, -128, 74, 88, 37, 
  97, 54, 94, 61, 91, 58, 95, 61, 93, 72, 
  99, 76, 100, 43, 67, 15, 54, -77, 37, -128, 
  49, 21, 68, 36, 68, 44, 102, 86, 102, 86, 
  62, -33, -77, 56, 66, -128, -128, 66, 77, 45, 
  89, 35, 87, 44, 86, 41, 88, 53, 87, 68, 
  96, 67, 81, 9, 35, 7, 44, -128, 6, -128, 
  -6, -128, 41, 40, 58, 11, 60, -60, 53, -29, 
  56, -50, -128, 46, 64, -128, -77, 55, 69, -7, 
  71, -1, 74, 35, 71, 24, 77, 38, 79, 65, 
  92, 62, 54, -128, 38, -14, 39, -128, -128, -128, 
  -128, -128, -14, -26, 19, -7, 61, -128, 2, -77, 
  52, -37, -6, 31, 60, -77, -128, -18, 39, -128, 
  48, -77, 45, -29, 56, -2, 65, 14, 58, 36, 
  76, 45, -128, -128, -77, -128, -29, -128, -128, -128, 
  -128, -128, -128, -60, -60, -77, 38, -128, -50, -128, 
  45, -60, -7, 0, 49, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, 12, -33, 
  34, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  7, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 48, 62, 59, 47, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -60, 47, 45, 100, 91, 107, 93, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 0, -128, 
  -16, -60, 50, 42, 67, 80, 110, 91, 114, 94, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -33, -128, 5, -43, 14, 16, 97, 72, 87, 71, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -29, -14, -50, 5, 39, 84, 56, 82, 60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  39, -14, 42, 6, 42, 39, 95, 61, 85, 62, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 19, -18, 
  54, 49, 42, -7, 53, 43, 79, 62, 90, 50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, -18, 
  50, 29, 16, -37, 55, 18, 52, 42, 72, 52, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  27, -128, -128, -128, 39, 8, 62, 32, 68, 22, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 5, -128, 
  7, -50, -18, -60, 47, -1, 56, -12, 70, 42, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  49, 11, -23, 0, 77, 49, 55, 17, 77, 28, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  30, -10, 2, -77, 61, 55, 53, 9, 79, 47, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -128, -128, -128, 14, -43, 16, -37, 66, 80, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -29, -128, 91, 47, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -7, -128, 43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 41, -33, 39, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
