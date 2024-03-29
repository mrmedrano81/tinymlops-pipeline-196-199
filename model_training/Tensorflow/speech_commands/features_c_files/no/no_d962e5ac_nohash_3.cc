/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/d962e5ac_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_d962e5ac_nohash_3.cc" \
 */
#include "no_d962e5ac_nohash_3.h"


const int g_no_d962e5ac_nohash_3_width = 40;
const int g_no_d962e5ac_nohash_3_height = 49;
alignas(16) const signed char g_no_d962e5ac_nohash_3_data[] = {
  74, 55, 77, 69, 74, 44, 51, 60, 58, 54, 
  55, 44, 63, 65, 64, 44, 73, 73, 83, 60, 
  44, 20, -4, 17, 26, 25, 35, 23, 23, 11, 
  42, 37, 9, -7, 17, 20, 9, 7, 9, 4, 
  76, 65, 79, 65, 54, 53, 46, 51, 49, 51, 
  65, 53, 70, 39, 43, 34, 44, 56, 72, 44, 
  2, 10, 38, 29, 8, -12, 15, 6, 15, 4, 
  2, -14, 15, 21, 11, -18, -1, 17, 30, 8, 
  82, 45, 33, -77, 11, 0, 33, 31, 59, 62, 
  74, 36, 39, -2, 44, 24, 29, 31, 50, 32, 
  34, -1, 30, 1, 37, 24, 35, 18, 25, 35, 
  58, 36, 41, 56, 49, 57, 80, 74, 52, 14, 
  72, 31, 41, -33, 60, 53, 44, 42, 51, 37, 
  47, 12, 35, -18, 32, 34, 47, -6, 19, 2, 
  29, 18, 32, -10, 28, 2, -6, -14, 30, 16, 
  39, 14, 30, 31, 27, 26, 62, 45, 53, 19, 
  66, 22, 30, -60, 24, 28, 47, -20, 40, 26, 
  53, 28, 49, -14, 24, -3, 30, 16, 11, -128, 
  -26, 24, 5, -8, 18, -1, 9, -12, -7, -2, 
  15, -20, 9, -6, 17, -3, 45, 9, 9, 4, 
  72, 62, 70, -1, 31, 30, 38, -1, 17, 9, 
  31, 20, 45, -6, 23, -8, 33, -7, 15, -23, 
  14, -18, 4, 9, 29, 27, -8, -43, 15, -26, 
  10, -43, -8, -29, -16, -50, 15, -18, 19, -37, 
  63, 22, -2, -16, 18, 4, 41, 9, 44, -2, 
  48, -10, 34, -26, 14, -12, 11, -18, -4, -77, 
  33, -20, 6, -10, 15, -12, -4, -1, 43, -7, 
  -43, -128, -29, -20, -2, -77, -50, -128, 2, -16, 
  24, -60, -60, -128, -26, -128, -26, -128, 24, 27, 
  42, 1, 29, -29, 19, -8, 24, -77, -6, -60, 
  19, -14, -3, -16, -8, -60, 20, -3, 42, 5, 
  14, -12, 2, -60, -12, -29, -50, -128, -16, -77, 
  62, -4, 39, -18, 43, 14, 25, -33, 9, -1, 
  56, 9, 29, 6, 25, -37, 15, -3, 4, -26, 
  14, -4, 4, -14, -6, -16, 16, -6, 16, -60, 
  -37, -29, 16, -60, 13, -43, -43, -128, -29, -43, 
  48, -60, 34, 11, 24, -10, 34, 17, -10, 25, 
  32, -43, 4, -128, -37, -43, -8, -128, -128, -128, 
  -29, -37, -20, -43, -16, -77, -77, -60, 9, -29, 
  -1, -60, -8, -128, -2, -60, -128, -128, 6, -77, 
  49, -6, 0, -37, -1, -128, 17, -50, 13, 27, 
  23, -60, -33, -1, 27, -50, 10, -10, 2, -128, 
  -60, -77, -26, -128, 10, -14, -16, -60, -26, -43, 
  -37, -128, -16, -128, -7, -50, -20, -128, -18, -37, 
  54, 7, 25, -23, -50, -128, -2, -60, 30, -77, 
  -20, -33, 19, -43, 9, -12, 1, -33, -7, -128, 
  2, -43, 4, -18, -8, -37, 21, -4, 19, -128, 
  -50, -77, -7, -128, -43, -128, -128, -128, -33, -60, 
  66, 28, 67, 44, 37, -33, -8, -77, 17, -20, 
  24, -128, -8, -128, 2, -4, 40, -12, -2, -128, 
  -6, -50, 42, 20, -60, -128, 21, -10, -8, -20, 
  -50, -43, -18, -128, -8, -77, -37, -128, -12, -77, 
  120, 99, 112, 97, 116, 85, 84, 39, 30, 26, 
  55, 0, 52, 26, 56, 24, 5, -18, 24, 43, 
  62, 23, 77, 57, 52, 24, 44, 49, 41, -37, 
  43, 46, 47, -43, 18, -128, -18, -33, 2, -37, 
  106, 94, 125, 99, 111, 95, 105, 85, 67, 16, 
  64, 48, 72, 75, 88, 69, 77, -4, 64, 74, 
  84, 53, 83, 71, 88, 64, 60, 55, 54, -10, 
  46, 60, 67, 11, 42, 1, 20, -16, 29, 14, 
  99, 79, 114, 90, 97, 81, 104, 86, 82, 56, 
  102, 84, 84, 90, 107, 73, 73, 9, 59, 60, 
  70, 67, 102, 81, 97, 87, 89, 79, 86, 17, 
  89, 77, 74, 44, 51, 23, 44, 7, 42, 38, 
  101, 45, 105, 89, 114, 75, 110, 97, 120, 97, 
  117, 97, 119, 99, 122, 90, 112, 94, 115, 90, 
  91, 57, 88, 69, 95, 68, 99, 80, 85, 40, 
  92, 79, 80, 37, 55, 37, 54, 12, 42, 26, 
  90, 63, 97, 74, 94, 74, 106, 90, 111, 93, 
  106, 89, 117, 85, 104, 80, 95, 72, 94, 69, 
  86, 42, 73, 27, 66, 36, 47, 13, 56, 20, 
  65, 33, 67, 66, 65, 52, 70, 46, 51, 26, 
  85, 27, 85, 61, 82, 65, 101, 85, 108, 89, 
  104, 85, 108, 79, 85, 71, 88, 69, 94, 32, 
  86, 61, 72, -20, 79, 33, 26, -128, 22, 19, 
  63, 6, 77, 62, 75, 49, 73, 47, 64, 47, 
  82, 19, 81, 59, 85, 71, 87, 71, 100, 83, 
  106, 88, 98, 75, 68, 47, 82, 51, 95, 60, 
  77, 39, 58, 36, 50, -1, 31, -128, -18, -20, 
  42, -37, 63, 49, 73, 50, 64, 39, 59, 41, 
  61, -33, 78, 57, 82, 64, 81, 57, 93, 71, 
  97, 79, 94, 64, 61, 59, 77, 30, 82, 57, 
  83, 60, 80, 58, 76, 21, 21, -128, -23, -23, 
  47, 4, 60, 39, 54, 37, 65, 50, 52, 28, 
  72, 10, 71, 50, 80, 47, 77, 43, 90, 66, 
  94, 71, 92, 62, 65, 48, 75, 48, 77, 56, 
  83, 43, 85, 54, 89, 29, 36, -128, 14, 1, 
  58, 42, 72, 31, 52, 39, 55, 47, 52, 32, 
  63, -128, 50, 27, 74, 38, 72, 68, 97, -2, 
  70, 64, 89, 62, 74, 45, 79, 40, 82, 60, 
  72, 35, 70, 45, 80, 40, 54, -128, -8, -29, 
  56, 30, 68, 44, 43, 28, 60, 40, 57, 9, 
  64, -29, 42, 4, 61, 25, 66, 37, 81, -128, 
  56, 60, 85, 64, 72, 35, 82, 36, 68, 48, 
  79, 35, 71, 51, 76, 27, 42, -128, -16, -43, 
  32, -37, 48, -2, 42, 25, 50, 17, 55, 18, 
  46, -128, 57, 20, 60, 29, 60, 26, 70, -60, 
  49, 25, 74, 61, 67, 13, 66, 47, 59, 29, 
  75, 53, 65, 49, 65, 19, 39, -128, -128, -37, 
  -128, -128, 10, -23, 47, 18, 33, -26, 49, 13, 
  16, -50, 62, 20, 54, 37, 60, -16, 26, 61, 
  83, -18, 78, 54, 9, -7, 59, 34, 67, 49, 
  70, 55, 64, 32, 63, 24, 74, -7, -77, -37, 
  -77, -128, 32, 24, 57, -12, 21, -60, 40, -16, 
  17, 21, 66, 22, 56, 40, 68, 17, 61, 69, 
  82, -43, 84, 41, 41, 29, 65, 32, 51, 33, 
  26, 37, 71, 33, 53, -3, 55, -10, -37, -60, 
  -1, -60, 12, -12, 43, -50, -1, -128, 31, -3, 
  56, 50, 62, -20, 51, 15, 74, 42, 71, 37, 
  57, 18, 87, -16, 58, 29, 65, -12, 50, 11, 
  54, 29, 60, 40, 55, 9, 62, 25, 4, -43, 
  -29, -128, 53, -18, 44, -16, 25, -50, 21, -12, 
  46, 43, -29, -128, 54, -60, 20, -128, 58, -128, 
  60, 30, 60, 27, 49, -2, 35, -37, 37, -6, 
  42, 39, 62, 23, 37, 9, 57, -14, -77, -29, 
  2, -128, 37, -128, 19, -128, -60, -128, -23, -128, 
  1, 52, -16, -128, 61, -128, 40, -10, 64, -18, 
  31, -128, 64, -128, 9, -128, 26, -128, 19, -60, 
  -12, -10, 53, -60, 27, 16, 49, -128, -128, -128, 
  -29, -128, 27, -128, -77, -128, -77, -128, -14, -128, 
  14, 6, -128, -128, 24, -128, -29, -128, 19, -128, 
  -20, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -37, 4, -128, -128, -128, 40, -128, -128, -128, 
  -128, -128, -33, -128, -128, -128, -128, -128, -128, -128, 
  -23, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 1, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -33, -128, -128, -128, 
  -50, -128, -20, -128, -128, -128, -128, -128, -128, -128, 
  21, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -20, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
