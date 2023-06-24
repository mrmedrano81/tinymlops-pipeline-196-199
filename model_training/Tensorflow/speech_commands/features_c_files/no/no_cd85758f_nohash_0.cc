/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/cd85758f_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_cd85758f_nohash_0.cc" \
 */
#include "no_cd85758f_nohash_0.h"


const int g_no_cd85758f_nohash_0_width = 40;
const int g_no_cd85758f_nohash_0_height = 49;
alignas(16) const signed char g_no_cd85758f_nohash_0_data[] = {
  17, 20, 57, 47, 37, 17, 52, 56, 37, 58, 
  54, 30, 26, 15, 68, 60, 71, 69, 53, 44, 
  56, 17, 26, 39, 52, 11, 26, 17, -18, 23, 
  17, -2, -26, 20, 44, 4, 5, 17, 44, 51, 
  -37, -18, -23, -6, 11, 35, 60, 35, 31, -14, 
  34, 27, 44, 51, 60, 50, 67, 46, 27, 29, 
  51, 14, 32, 0, 30, 14, 21, -6, 22, 19, 
  24, 28, 25, 19, 2, -10, -12, 7, 46, 34, 
  7, 36, 56, 22, 9, 0, 0, 25, 21, 14, 
  54, 45, 69, 42, 53, 29, 40, -3, 50, -16, 
  1, -37, 13, -7, 11, 0, 43, 24, 26, 28, 
  25, 23, 57, -2, 45, 45, 47, 34, 88, 83, 
  -29, 32, 51, -4, 29, 22, 54, 52, 10, -33, 
  51, 39, 35, 21, 11, 32, 52, 6, -1, -29, 
  17, 9, 15, -14, 9, 8, 51, 71, 80, 58, 
  36, 43, 72, 49, 62, 34, 17, 39, 76, 52, 
  -4, 54, 78, 46, 6, -16, 49, 34, 39, 19, 
  22, 4, 45, -10, 40, 7, 36, 29, 2, 15, 
  44, 20, 19, -12, 33, 0, 66, 67, 67, 40, 
  -43, 32, 49, 35, 34, -8, 9, 9, 62, 61, 
  39, 57, 78, 43, 11, -33, 39, 25, -29, -14, 
  43, -14, 34, 9, 4, -37, 25, 46, 35, -43, 
  12, -10, 39, 28, 5, -60, 60, 50, 31, -128, 
  23, -2, 26, -6, -20, -50, 0, 52, 53, 11, 
  35, 41, 50, 14, 39, 22, 48, 4, 31, 34, 
  47, -20, 55, 56, 22, -50, -8, 11, 24, -29, 
  32, 39, 27, -12, -37, -26, 27, -37, -4, -60, 
  24, -14, 5, -12, -128, -128, -16, 17, 21, -23, 
  -29, -33, 50, 16, 28, -29, 37, 44, 52, -26, 
  -60, -128, 24, 17, 49, -128, 39, -1, -16, -77, 
  36, 44, 4, 35, 64, 42, 42, -29, 14, -43, 
  -29, -77, -8, -77, -77, -128, -128, 4, 15, -128, 
  29, -128, 0, -37, 16, -77, 50, 46, 46, -33, 
  14, 1, -3, -50, 5, -128, -2, -8, 29, 34, 
  19, -37, 30, -20, 40, -43, 2, -37, 32, -12, 
  -18, -60, -50, -128, -128, -128, -60, -77, -6, -128, 
  124, 102, 124, 102, 120, 99, 109, 63, 70, 24, 
  42, 24, 27, -128, 4, -128, 42, -43, 49, 15, 
  1, -4, 69, 78, 91, 59, 26, -77, 2, -7, 
  32, 6, -7, -43, 7, -3, 15, -12, 0, -128, 
  115, 82, 120, 97, 112, 96, 112, 97, 110, 67, 
  62, -12, 25, 9, 23, 27, 55, 24, 77, 71, 
  72, 82, 113, 99, 120, 99, 93, 25, 46, 22, 
  32, -7, 24, 19, 54, 36, 57, 25, 25, -128, 
  104, 64, 107, 87, 100, 83, 109, 92, 114, 89, 
  92, 54, 18, 5, 60, 39, 74, 59, 94, 86, 
  100, 92, 117, 91, 116, 92, 110, 79, 92, 77, 
  62, 8, 40, 5, 42, 42, 63, 46, 74, 52, 
  99, 62, 95, 77, 101, 80, 102, 75, 103, 65, 
  92, 70, 76, 35, 61, 41, 70, 81, 107, 72, 
  100, 86, 108, 83, 107, 87, 101, 84, 104, 77, 
  60, 45, 54, 34, 57, 44, 65, 51, 84, 72, 
  91, 55, 89, 69, 92, 71, 97, 64, 98, 76, 
  94, 35, 90, 78, 85, 88, 119, 96, 94, 76, 
  107, 86, 99, 72, 100, 77, 90, 72, 98, 82, 
  110, 85, 82, 53, 61, 31, 68, 34, 91, 74, 
  79, 63, 85, 64, 107, 94, 118, 85, 112, 91, 
  110, 91, 118, 99, 124, 102, 124, 100, 121, 96, 
  116, 83, 95, 57, 78, 57, 110, 95, 123, 102, 
  122, 97, 106, 71, 81, 60, 82, 79, 108, 92, 
  75, 21, 67, 35, 100, 83, 102, 85, 108, 90, 
  114, 97, 117, 100, 124, 90, 90, 69, 95, 71, 
  99, 67, 92, 44, 50, 19, 95, 78, 100, 68, 
  101, 69, 62, 41, 76, 54, 86, 69, 100, 80, 
  73, 30, 65, 0, 94, 70, 89, 80, 96, 75, 
  102, 90, 122, 84, 85, 59, 79, 46, 81, 48, 
  80, 53, 86, -43, 48, 22, 79, 55, 94, 65, 
  83, 52, 68, 44, 69, 49, 65, 56, 97, 75, 
  61, 2, 62, -29, 90, 61, 84, 74, 88, 71, 
  107, 85, 99, 52, 43, -128, 60, -29, 68, 42, 
  76, 45, 68, 27, 27, -128, 55, 39, 76, 43, 
  69, 48, 35, -37, 30, 1, 44, 64, 77, 49, 
  50, 36, 73, 20, 61, -128, 78, 50, 74, 70, 
  107, 74, 70, 30, 36, -128, 37, -128, 42, 4, 
  57, 25, 53, -128, -128, -128, -33, -10, 57, 35, 
  72, 42, 29, -3, 40, 36, 39, 7, 63, 4, 
  7, 59, 69, -60, 58, -128, 78, 23, 80, 64, 
  96, 51, 54, 4, -128, -128, 29, -128, -14, -18, 
  50, 4, 51, -128, -128, -128, 40, 17, 61, 36, 
  76, 50, 31, -29, 44, 8, 42, -50, 5, -128, 
  -128, 56, 45, -128, 51, -26, 67, -8, 72, 51, 
  75, 28, -3, -60, -1, -128, -20, -128, -1, -128, 
  1, -128, -6, -128, -128, -128, 59, -26, 17, -12, 
  64, 17, 52, -4, 32, -10, 42, -43, -128, -128, 
  -3, 60, 49, -128, 14, -128, -37, -77, 17, 5, 
  64, -33, 17, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, -128, -128, -128, 19, -128, -128, -50, 
  41, -128, 28, 2, 42, -20, -43, -128, -128, -128, 
  -14, 39, 9, -128, -128, -128, -128, -128, -128, -128, 
  6, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 13, -128, -128, -128, 
  -128, -128, 35, -6, 35, -16, -29, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 26, -29, 21, -128, -33, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -20, 18, -128, -37, -60, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, 34, -128, 0, -77, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, -128, 4, -16, 0, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -20, -16, 7, -60, 12, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 27, -77, 17, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, 1, -60, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -8, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -60, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -60, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
