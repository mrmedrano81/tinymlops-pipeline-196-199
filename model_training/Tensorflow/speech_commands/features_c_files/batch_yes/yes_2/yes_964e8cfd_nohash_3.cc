/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/964e8cfd_nohash_3.wav" \
 * --output_c_file="features_c_files/yes/yes_964e8cfd_nohash_3.cc" \
 */
#include "yes_964e8cfd_nohash_3.h"


const int g_yes_964e8cfd_nohash_3_width = 40;
const int g_yes_964e8cfd_nohash_3_height = 49;
alignas(16) const signed char g_yes_964e8cfd_nohash_3_data[] = {
  86, 95, 115, 90, 65, 86, 98, 66, 62, 47, 
  42, 54, 55, 56, 52, 62, 58, 41, 39, 28, 
  60, 39, 51, 40, 60, 41, 31, 4, 9, 4, 
  -26, 28, 57, 58, 37, 20, 17, 15, 17, -2, 
  92, 79, 92, 69, 76, 75, 92, 69, 79, 44, 
  42, 44, 45, 29, 42, 24, 19, 24, 41, 43, 
  49, 24, 14, 4, 8, 14, 39, 11, 8, 17, 
  4, 9, 19, 2, 15, 19, 11, 11, -7, -23, 
  82, 55, 48, 14, 74, 65, 88, 56, 14, 43, 
  67, 25, 34, 12, 47, 30, 47, 35, 55, 65, 
  83, 63, 54, 14, 42, 7, 54, 40, 31, 16, 
  27, 2, 35, 61, 74, 60, 69, 40, 7, 2, 
  85, 34, 66, 44, 64, 14, 46, 63, 90, 69, 
  81, 59, 42, 56, 84, 77, 99, 87, 104, 92, 
  112, 90, 96, 70, 87, 86, 105, 86, 95, 74, 
  82, 70, 64, 87, 110, 91, 103, 91, 88, 63, 
  46, -33, -10, 12, 59, 39, 66, 75, 97, 67, 
  53, 60, 79, 23, 73, 64, 83, 54, 97, 78, 
  94, 73, 89, 64, 79, 72, 92, 68, 87, 67, 
  65, 62, 67, 55, 96, 74, 81, 58, 82, 64, 
  60, 16, 46, -29, 75, 75, 91, 44, 73, 28, 
  56, 22, 65, -43, 46, -26, 61, 25, 76, 72, 
  90, 42, 67, 51, 84, 48, 81, 58, 77, 42, 
  61, 4, 52, 35, 81, 51, 70, 47, 76, 53, 
  61, 25, 50, -37, 52, 27, 66, 44, 61, 16, 
  41, 45, 76, 43, 24, -128, 21, -50, 34, 9, 
  72, -1, 52, 5, 39, -50, 52, 4, 57, -18, 
  38, -128, 39, -10, 59, -6, 42, 1, 61, 39, 
  31, -128, 49, 15, 56, -4, 49, -8, 27, -12, 
  -37, -8, 75, 45, 38, -60, 14, -43, 33, -128, 
  29, -60, 15, -128, 11, -128, 50, -18, 4, -33, 
  8, -128, 4, -37, -14, -128, -60, -128, 9, -7, 
  -12, -43, 32, -128, 67, 23, 32, -23, 49, -128, 
  4, 38, 69, 21, 34, -33, 51, 34, 50, -37, 
  34, -43, 26, -128, -16, -128, -128, -128, -128, -128, 
  22, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -26, -128, -128, -128, 76, 34, 7, -3, 62, 9, 
  19, -128, -43, -60, 22, -50, 16, -128, 20, -128, 
  29, -128, 9, -128, -128, -128, -128, -128, -128, -128, 
  -29, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  4, -128, -128, -77, 59, 18, 35, 32, 69, 4, 
  -18, -128, -37, 46, 62, -77, 10, -128, -60, -128, 
  18, -128, -43, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  32, -128, -60, -128, 57, 40, 63, -128, 1, -16, 
  44, 55, 60, 36, 69, 18, 68, -128, -14, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  64, -128, -128, -128, 50, 19, 46, -77, 7, 35, 
  54, 79, 93, 42, 72, 19, 67, 14, 51, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  52, 24, 44, -128, 40, 6, 55, -37, 29, 19, 
  74, 78, 93, 50, 77, 17, 61, 48, 69, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -50, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  52, -29, 4, -128, -33, -128, 49, 4, 61, 44, 
  71, 63, 79, -128, -23, 17, 59, 61, 83, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -77, -128, -37, -128, 
  13, 27, 54, -20, -4, -128, 55, 4, -128, -128, 
  49, 0, 39, -128, -128, -128, 24, 25, 54, -23, 
  -23, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -128, 
  -128, -128, 46, 50, 49, -128, 18, -128, -128, -128, 
  -33, -77, 24, -128, -128, -33, 42, -20, 22, -128, 
  -77, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  23, -43, 67, 60, 25, -128, 13, -33, -60, -128, 
  -50, -128, -4, -128, -128, -12, 42, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  13, -128, 49, 50, 43, 4, 45, 58, 49, -128, 
  49, 20, 46, -128, -60, -77, 25, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -14, 16, 77, 44, 60, 70, 67, 27, 
  7, -128, -77, -33, 49, 37, 4, -128, 55, 48, 
  -60, -128, -128, -128, -128, -128, -128, -128, 1, -128, 
  -37, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, 63, 49, 73, 30, 39, 62, 72, 34, 
  43, -128, -128, -77, 24, 29, 56, -128, 59, 49, 
  -23, -128, 9, 28, 29, -128, -128, -128, -10, 19, 
  -16, -128, -128, -128, -128, -128, -128, -128, -20, -6, 
  -128, -60, 76, 54, 25, -128, 54, 54, 65, 49, 
  74, -77, -43, -60, 17, -77, 7, -8, 45, 37, 
  49, 8, 64, 50, 57, -4, -33, -128, 16, 52, 
  48, -77, -20, -128, -128, -128, -128, -128, 85, 84, 
  87, 14, 75, 58, 49, -50, 34, -128, 56, 50, 
  85, -128, -128, -128, -128, -37, 42, -4, 42, 25, 
  1, -10, 74, 67, 64, -18, -43, -50, 64, 66, 
  84, 71, 56, 4, -14, -128, -10, -60, 90, 77, 
  118, 77, 80, 62, 92, 67, 83, 14, 50, 35, 
  63, -128, -128, -20, 42, 38, 39, 26, 45, -43, 
  43, 60, 95, 79, 80, 52, 64, 81, 99, 82, 
  104, 89, 104, 84, 102, 79, 76, 62, 93, 70, 
  124, 104, 126, 104, 125, 99, 115, 92, 99, 82, 
  111, 76, 99, 81, 106, 89, 104, 82, 99, 84, 
  110, 98, 123, 101, 111, 92, 106, 87, 105, 90, 
  115, 97, 117, 79, 82, 78, 92, 76, 103, 82, 
  102, 91, 115, 89, 121, 99, 121, 92, 100, 93, 
  111, 94, 115, 99, 119, 96, 117, 99, 109, 84, 
  99, 89, 114, 88, 110, 92, 115, 90, 112, 89, 
  110, 87, 112, 94, 109, 85, 109, 83, 107, 87, 
  98, 77, 100, 82, 110, 88, 117, 90, 109, 91, 
  113, 94, 111, 94, 113, 72, 93, 72, 107, 91, 
  99, 77, 107, 71, 113, 91, 114, 91, 104, 81, 
  104, 74, 95, 81, 100, 67, 100, 84, 94, 57, 
  86, 61, 89, 70, 100, 79, 112, 87, 95, 53, 
  99, 84, 102, 78, 103, 84, 113, 76, 104, 86, 
  105, 66, 96, 70, 106, 84, 105, 84, 100, 76, 
  96, 52, 92, 70, 95, 78, 106, 80, 89, 57, 
  54, 43, 79, 46, 84, 69, 108, 87, 109, 73, 
  89, 57, 86, 68, 97, 81, 109, 91, 99, 69, 
  84, 73, 89, 72, 98, 77, 92, 80, 94, 65, 
  91, 75, 88, 57, 90, 79, 96, 79, 98, 69, 
  76, 34, 75, 18, 65, 59, 99, 77, 103, 80, 
  102, 75, 95, 54, 80, 75, 102, 73, 107, 60, 
  98, 71, 65, 47, 96, 67, 89, 63, 94, 57, 
  92, 65, 90, 60, 94, 71, 94, 64, 91, 62, 
  79, 36, 76, -6, 45, 53, 90, 65, 111, 79, 
  96, 64, 76, -128, 52, 39, 57, 42, 106, 62, 
  95, 69, 69, 62, 95, 66, 85, 38, 76, 48, 
  90, 54, 83, 38, 84, 65, 84, 55, 89, 52, 
  79, 42, 75, -26, 32, 46, 81, 53, 105, 68, 
  85, 42, 60, -50, 32, 4, 52, 54, 95, 59, 
  96, 47, 66, 36, 75, 54, 79, -2, 65, 28, 
  79, 48, 74, 39, 75, 40, 59, 49, 69, 33, 
  76, 43, 69, -4, 33, 47, 68, 46, 93, 49, 
  64, -77, 56, 8, 62, 54, 75, 49, 76, 54, 
  84, 2, -77, -128, 60, 25, 70, -33, 46, 23, 
  58, 34, 64, -14, 56, 10, 49, 25, 57, -37, 
  81, 32, 61, 24, 43, 20, 8, 23, 65, -128, 
  53, -128, 47, 14, 63, -50, -2, 6, 58, 48, 
  69, 9, -29, -43, 58, -50, 11, -128, 13, -29, 
  46, -60, -4, -128, -1, -128, 35, -26, -12, -128, 
  71, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  9, -128, 34, -43, 39, -128, 0, -128, 48, 43, 
  77, -37, -77, -128, 0, -128, 2, -128, -60, -128, 
  -20, -128, -128, -128, -7, -128, -8, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  11, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  38, -128, 15, 45, 76, 38, 83, 55, 65, 46, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  19, -128, -128, -128, -128, -128, -128, -128, -26, -77, 
  20, -128, 42, 61, 95, 78, 102, 71, 80, 53, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -7, -128, -128, -128, -128, -128, -128, -128, -29, -128, 
  4, -128, 19, 11, 78, 65, 75, 52, 80, 57, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -128, -16, -26, 54, 33, 74, 42, 60, 39, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -2, 5, 54, 18, 63, 31, 64, 40, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 32, -128, 51, 16, 52, -23, 55, -2, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  2, -128, 25, 19, 46, 12, 61, 7, 46, 9, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  18, -16, -4, -23, 60, 20, 37, 14, 54, 19, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, 24, -50, 72, 22, 53, 19, 74, 48, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -6, -128, 32, 45, 75, 33, 47, -3, 54, 25, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -3, -50, 43, 21, 60, -7, 30, -77, 32, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  8, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  11, -50, 54, 27, 47, -77, -1, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
