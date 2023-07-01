/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/3d86b69a_nohash_2.wav" \
 * --output_c_file="features_c_files/no/no_3d86b69a_nohash_2.cc" \
 */
#include "no_3d86b69a_nohash_2.h"


const int g_no_3d86b69a_nohash_2_width = 40;
const int g_no_3d86b69a_nohash_2_height = 49;
alignas(16) const signed char g_no_3d86b69a_nohash_2_data[] = {
  102, 84, 92, 86, 95, 74, 85, 68, 92, 88, 
  101, 90, 102, 66, 84, 74, 92, 82, 105, 69, 
  73, 67, 75, 64, 69, 63, 39, 25, 45, 34, 
  40, 20, 57, 17, 17, 17, 14, -2, -10, -60, 
  89, 75, 103, 82, 70, 50, 77, 64, 82, 60, 
  60, 44, 54, 58, 81, 81, 98, 47, 81, 67, 
  69, 29, 50, 55, 54, 53, 40, 35, 47, 9, 
  14, 34, 64, 29, 8, 29, 25, -29, -26, -50, 
  64, 68, 99, 64, 85, 75, 85, 79, 89, 62, 
  54, 59, 80, 79, 81, 68, 95, 61, 84, 67, 
  91, 46, 65, 66, 48, 20, 30, 17, 35, 29, 
  41, 0, 10, 1, 6, -29, 23, -18, -37, -50, 
  64, 39, 61, 34, 89, 80, 89, 63, 73, 44, 
  73, 60, 80, 24, 54, -10, 64, 70, 63, 70, 
  83, 39, 59, 52, 41, 19, 29, -23, 4, 16, 
  27, -2, 19, -33, -4, 15, 29, -8, -37, -77, 
  87, 34, 74, 32, 54, -14, 35, -7, 21, -50, 
  55, 28, 54, -2, 39, -2, 30, 36, 31, 69, 
  87, 62, 43, 39, 58, 48, 24, 31, 46, -1, 
  27, -2, -33, 4, 24, 31, 31, -23, -50, -128, 
  92, 65, 70, 44, 39, 49, 84, 35, -16, -128, 
  58, 36, 57, 52, 59, 26, 23, -37, -1, 60, 
  79, 1, 32, 2, 83, 62, 17, 17, 42, 10, 
  25, -37, -14, 4, 24, 30, 19, -8, -29, -128, 
  48, 30, 67, 12, 55, 36, 68, 60, 40, -50, 
  9, -128, 35, 46, 73, 71, 52, -77, 27, -1, 
  64, 4, 42, 19, 67, 33, 21, -50, 13, -18, 
  21, -29, 16, 4, 11, 4, 15, 32, -128, -128, 
  84, 49, 44, -20, 35, -29, 76, 52, 34, 6, 
  29, -128, 43, -20, 67, 55, 57, -29, 14, -128, 
  7, -4, -4, -7, 42, -50, -2, -14, 5, -43, 
  11, -29, 0, 11, 23, -26, -14, -16, -50, -128, 
  120, 100, 119, 84, 92, 63, 100, 83, 74, 29, 
  52, -128, 23, 7, 54, 9, 32, -77, 37, -6, 
  17, -12, 64, 41, 40, -128, 7, 23, 50, -2, 
  10, -128, -14, -8, 40, 9, 34, 19, 35, 24, 
  121, 103, 122, 98, 116, 68, 105, 84, 85, 25, 
  65, -128, 44, -60, 82, 50, 77, -29, 60, 5, 
  42, 50, 106, 97, 109, 59, 27, 51, 106, 90, 
  34, 35, 55, -60, 57, 57, 76, 56, 70, 62, 
  112, 94, 115, 87, 117, 92, 90, 0, 71, 49, 
  44, -128, -60, -33, 66, 42, 69, 28, 14, -14, 
  52, 66, 120, 95, 112, 61, 55, 89, 109, 80, 
  64, 57, 84, 57, 72, 66, 82, 63, 86, 70, 
  104, 86, 109, 86, 109, 85, 99, 46, 92, 69, 
  57, 37, 35, -18, 71, 37, 61, 57, 46, -77, 
  52, 72, 95, 70, 95, 50, 72, 79, 99, 68, 
  64, 47, 75, 50, 74, 61, 77, 53, 76, 61, 
  93, 69, 97, 79, 102, 80, 97, 59, 71, 59, 
  83, 17, 51, -2, 33, -33, 64, 59, 37, -43, 
  69, 70, 97, 73, 90, 42, 68, 71, 99, 83, 
  70, 47, 73, 52, 69, 45, 70, 56, 81, 59, 
  88, 50, 83, 69, 96, 75, 96, 43, 69, 57, 
  75, -16, -3, -128, -77, -128, 55, 58, 37, -128, 
  67, 60, 90, 83, 108, 49, 70, 74, 95, 67, 
  83, 42, 67, 44, 66, 39, 68, 49, 64, 45, 
  88, 14, 75, 47, 82, 77, 105, 45, 75, 57, 
  79, 44, 62, 12, -18, -128, 60, 61, 51, -50, 
  83, 64, 100, 80, 105, 77, 85, 58, 97, 80, 
  92, 48, 62, 41, 69, 39, 50, 8, 66, 45, 
  85, -128, 32, -18, 67, 65, 94, 35, 86, 69, 
  91, 53, 64, 44, 25, -128, 57, 75, 74, 28, 
  71, 63, 76, 42, 79, 61, 83, 75, 93, 70, 
  88, 33, 57, 22, 65, 30, 58, 29, 60, 49, 
  77, -10, 68, 0, 61, -2, 73, 39, 75, 50, 
  66, 30, 49, -8, 74, -60, 43, 36, 69, 32, 
  47, 33, 79, 47, 72, 67, 87, 37, 79, 46, 
  81, 34, 47, 44, 68, 17, 62, 34, 59, 22, 
  75, 10, 72, -8, 31, 42, 80, 41, 69, 39, 
  75, 37, 21, 24, 46, -128, 17, -128, 67, 46, 
  26, 22, 71, 13, 60, 57, 63, 24, 65, 33, 
  72, 11, 52, 15, 57, 2, 49, 11, 57, 13, 
  77, -128, 60, 28, 60, 49, 86, 66, 83, 59, 
  59, -60, 14, 17, 99, 77, 82, -128, 69, 48, 
  32, -128, 63, 14, 68, 48, 82, 52, 72, 46, 
  40, 27, 49, 15, 50, 1, 50, 9, 63, 5, 
  64, -60, 57, 0, 72, 67, 100, 77, 75, 45, 
  86, 75, 90, 75, 114, 94, 111, -77, 42, 17, 
  54, 25, 40, -33, 59, 58, 96, 10, 54, 15, 
  46, 13, 49, 21, 44, -2, 59, 25, 56, 11, 
  65, -128, 34, -77, 57, 72, 100, 71, 74, 55, 
  101, 87, 102, 86, 112, 77, 82, -128, 16, -128, 
  50, 45, 59, -18, 52, 72, 103, 28, 37, -43, 
  63, 21, 33, 11, 50, -8, 53, 38, 64, 5, 
  58, -128, 32, -128, 54, 75, 97, 68, 102, 50, 
  106, 84, 111, 87, 82, 49, 67, -128, 20, -77, 
  -37, 44, 63, -33, 22, 53, 92, -16, 23, -128, 
  70, -2, 24, -43, 52, 0, 68, 38, 50, -1, 
  24, -128, 0, 28, 73, 79, 97, 75, 106, 86, 
  105, 80, 102, 67, 68, 43, 69, -77, -12, -128, 
  0, -128, 59, -60, 4, 48, 91, 35, 57, 20, 
  33, -4, 40, -1, 60, 13, 68, 44, 52, -2, 
  -26, -7, 27, 27, 72, 57, 76, 82, 94, 78, 
  103, 87, 102, 66, 76, 55, 62, -128, -128, -128, 
  36, 22, 2, -128, -7, 40, 93, 31, 62, 4, 
  87, 58, -10, -128, 33, -23, 84, 52, 48, -128, 
  43, 39, 42, 44, 65, 42, 78, 52, 71, 75, 
  112, 94, 94, 57, 62, -3, 40, -77, -128, -128, 
  -33, -128, 57, -60, -43, 18, 91, 56, 62, 16, 
  94, 69, 40, 14, 33, -77, 44, 34, 52, -2, 
  64, 44, 41, 49, 50, 15, 72, 65, 95, 55, 
  94, 63, 81, 47, 46, -43, -128, -128, -8, -128, 
  73, 44, 24, -128, -128, -128, 65, 11, 52, -77, 
  68, 34, 42, 14, 27, -60, 56, 35, 43, -37, 
  55, -77, -10, 6, 72, 64, 80, 42, 89, 68, 
  82, 59, 85, 21, 53, -128, -60, -128, -12, -128, 
  67, 7, -3, -128, -43, -128, 75, 40, 32, -29, 
  75, 55, 33, -23, 24, -43, 70, 57, 44, -23, 
  4, -128, -18, 28, 67, 24, 53, 45, 79, -10, 
  79, 60, 73, 35, -128, -128, -128, -128, -7, -128, 
  57, 1, 51, -128, -1, -43, 72, 37, 52, 21, 
  60, 47, 4, -43, 17, -43, 55, 7, 11, -29, 
  14, -128, 22, -23, 0, -128, -3, 51, 83, 33, 
  66, -50, 45, -23, -128, -128, -128, -128, 50, -50, 
  44, -2, 62, -1, 16, -128, 39, -10, -12, -60, 
  77, 59, 2, -60, -33, -37, 53, 4, 17, -43, 
  35, -128, -128, -128, 34, -128, 11, 1, 33, 47, 
  72, -26, 34, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 5, -128, -4, -128, 21, -128, -128, -128, 
  31, -50, -60, -128, -128, -128, -12, -128, -128, -128, 
  54, -37, -77, -128, 23, -128, 23, 18, 27, -128, 
  44, -128, 57, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 15, -128, -128, -128, -128, -128, -128, -128, 
  42, 8, 0, -29, -43, -128, -128, -128, -29, -37, 
  -43, -128, -128, -128, -128, -128, -128, -128, 5, -14, 
  51, -128, -128, -128, -128, -128, -128, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  36, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -8, -60, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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