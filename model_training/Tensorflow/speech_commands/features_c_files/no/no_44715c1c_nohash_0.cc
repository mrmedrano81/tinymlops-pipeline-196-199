/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/44715c1c_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_44715c1c_nohash_0.cc" \
 */
#include "no_44715c1c_nohash_0.h"


const int g_no_44715c1c_nohash_0_width = 40;
const int g_no_44715c1c_nohash_0_height = 49;
alignas(16) const signed char g_no_44715c1c_nohash_0_data[] = {
  82, 84, 90, 78, 76, 74, 82, 79, 97, 90, 
  96, 86, 92, 84, 85, 72, 84, 80, 95, 76, 
  74, 66, 77, 63, 77, 72, 79, 72, 68, 55, 
  54, 52, 63, 62, 63, 42, 53, 46, 33, 4, 
  79, 75, 85, 67, 89, 76, 85, 76, 87, 58, 
  95, 74, 89, 62, 80, 73, 88, 51, 77, 64, 
  82, 64, 75, 62, 56, 50, 49, 22, 52, 48, 
  53, 43, 54, 44, 47, 43, 47, 32, 39, -16, 
  57, 58, 84, 48, 65, 70, 91, 69, 88, 69, 
  72, 55, 72, 51, 79, 73, 79, 57, 79, 51, 
  60, 10, 50, 51, 69, 44, 68, 55, 53, 24, 
  47, 29, 50, 36, 47, 21, 43, 25, 33, -2, 
  71, 49, 56, 34, 73, 32, 55, 61, 86, 39, 
  89, 57, 78, 57, 81, 48, 51, 24, 69, 30, 
  63, 44, 59, 45, 56, 29, 50, 28, 52, 21, 
  44, 19, 35, 10, 22, 30, 46, 17, 24, -10, 
  87, 67, 70, 25, 53, 49, 75, 29, 45, -14, 
  66, 50, 59, 51, 76, 42, 67, 49, 69, 47, 
  69, 40, 19, 20, 44, 12, 55, 6, 49, 42, 
  55, 22, 34, 17, 24, -1, 32, 11, 17, -12, 
  39, -3, 65, 56, 57, 9, 36, 27, 62, 46, 
  79, 50, 60, 35, 64, 25, 50, 16, 34, 20, 
  55, 16, 66, 37, 53, 24, 48, 16, 50, 20, 
  41, 2, 32, -7, 37, 4, 39, 11, 31, 1, 
  123, 101, 120, 100, 122, 97, 112, 89, 97, 67, 
  67, 30, 73, 44, 58, 40, 69, 15, 37, 27, 
  61, 18, 74, 60, 71, 56, 79, 49, 47, 0, 
  27, 4, 31, 9, 70, 59, 72, 29, 41, 29, 
  122, 99, 118, 92, 117, 94, 111, 90, 107, 86, 
  103, 53, 79, 52, 75, 33, 50, 19, 67, -3, 
  43, 30, 62, -7, 46, -26, 31, -23, 47, -8, 
  44, 21, 45, -18, 41, 9, 33, 35, 56, 39, 
  112, 87, 88, 82, 112, 84, 105, 91, 109, 97, 
  118, 89, 107, 69, 65, 4, 45, -50, 47, 29, 
  55, 33, 42, -4, 54, 19, 47, -1, 15, 13, 
  50, 24, 46, -7, 32, 38, 62, 34, 49, 55, 
  105, 83, 90, 75, 107, 81, 98, 84, 103, 86, 
  109, 73, 91, 69, 94, 52, 63, 16, 57, 45, 
  34, -20, 38, -37, 33, -77, 19, -23, 14, 16, 
  31, 6, 46, 23, 45, 28, 48, 37, 64, 55, 
  98, 75, 81, 67, 98, 72, 85, 67, 93, 73, 
  99, 63, 100, 67, 84, 10, 26, 10, 49, -8, 
  46, 10, 52, 14, 55, 11, 43, 2, 10, -1, 
  29, -23, 31, 2, 20, 19, 46, 25, 64, 38, 
  90, 63, 61, 60, 90, 60, 88, 65, 79, 64, 
  87, 62, 90, 9, 60, 6, 55, 10, 55, 29, 
  36, -20, 56, 9, 36, -43, 34, -4, 34, 9, 
  33, -1, 35, -37, 50, 26, 52, 30, 63, 35, 
  87, 59, 62, 54, 84, 53, 86, 65, 85, 63, 
  86, 61, 64, 44, 52, 25, 54, 19, 34, -18, 
  -1, -8, 47, -6, 19, -29, 50, -4, 43, 15, 
  35, 13, 39, 33, 32, 4, 45, 19, 58, 20, 
  85, 58, 72, 52, 83, 52, 80, 53, 71, 54, 
  84, 45, 64, 44, 67, 37, 30, -60, 20, -37, 
  0, 22, 28, -60, 40, -26, 20, -20, 54, 9, 
  -10, -7, 52, -128, -33, -16, 35, 7, 45, 16, 
  80, 50, 66, 47, 80, 51, 73, 48, 69, 45, 
  77, 42, 60, 43, 79, -23, 17, 17, 45, -3, 
  19, -128, 11, -18, 50, 6, 39, -14, -3, -77, 
  38, 14, 50, 4, 35, 14, 42, 34, 51, 10, 
  76, 45, 62, 42, 76, 43, 70, 47, 72, 26, 
  68, 54, 87, 29, 60, 29, 49, -23, 4, -77, 
  38, 57, 68, -29, 11, -12, 40, -23, 24, -18, 
  9, -20, 36, -4, 44, -10, 43, 10, 50, 5, 
  73, 40, 63, 34, 72, 39, 59, 29, 65, 35, 
  70, 37, 49, 1, 55, -128, 15, -37, 31, 22, 
  44, -77, 36, -16, 38, 14, 30, -37, 9, -14, 
  -3, 4, 30, -60, 33, -18, 43, 5, 39, 11, 
  67, 26, 45, 31, 67, 23, 67, 32, 66, 34, 
  65, 9, 61, 11, 67, 1, 44, -29, 16, -33, 
  49, -128, -43, -60, 25, 70, 85, -10, 9, -77, 
  31, -1, 12, -10, 20, -77, 17, -43, 45, 2, 
  62, 20, 76, 33, 77, 63, 80, 42, 75, 32, 
  67, 0, 71, 64, 93, 89, 113, 96, 120, 96, 
  118, 99, 117, 97, 122, 104, 126, 100, 115, 85, 
  95, 97, 115, 59, 68, 43, 63, 78, 93, 45, 
  16, -128, -128, 61, 82, 47, 110, 90, 106, 74, 
  85, 70, 93, 90, 111, 98, 115, 94, 117, 91, 
  119, 99, 116, 94, 117, 94, 102, 94, 120, 99, 
  119, 97, 123, 101, 74, 46, 98, 97, 117, 79, 
  -37, -128, -128, 9, 38, -128, 94, 57, 82, 79, 
  89, 62, 86, 84, 105, 87, 109, 87, 112, 90, 
  103, 69, 94, 68, 104, 80, 84, 70, 101, 88, 
  108, 70, 102, 61, 97, 65, 88, 72, 101, 78, 
  -60, -128, -128, -12, 25, -128, 83, 38, 86, 75, 
  85, 70, 89, 80, 100, 76, 104, 84, 108, 69, 
  88, 53, 89, 65, 96, 65, 74, 64, 91, 72, 
  96, 60, 86, 58, 97, 59, 63, 45, 94, 77, 
  -128, -128, -128, -77, -8, -128, 71, 7, 82, 67, 
  81, 68, 89, 75, 94, 68, 102, 78, 100, 44, 
  51, -7, 76, 52, 86, 54, 76, 49, 84, 75, 
  91, 47, 78, 51, 84, 1, 32, 25, 82, 63, 
  -128, -128, -128, -128, 1, -128, 60, 2, 70, 68, 
  90, 46, 80, 70, 95, 67, 99, 78, 82, 60, 
  44, 11, 71, 25, 74, 47, 78, 27, 74, 63, 
  95, 63, 79, 55, 90, -60, -12, -128, 57, 44, 
  -128, -128, -128, -128, 7, -128, 52, 18, 46, 54, 
  89, 25, 80, 55, 92, 69, 96, 79, 50, 41, 
  49, -33, 67, 8, 72, 12, 77, 32, 67, 52, 
  90, 47, 74, 54, 75, -29, 7, -128, -16, -37, 
  -128, -128, -128, -128, 33, -18, 5, 23, 60, 47, 
  93, 34, 80, 42, 95, 63, 94, 65, 67, -16, 
  47, -128, 50, 8, 79, 31, 57, 21, 54, 58, 
  82, 49, 73, 46, 83, -60, -3, -128, -128, -128, 
  -128, -128, -2, -128, 33, 14, -43, 39, 80, 1, 
  87, 64, 66, -77, 87, 47, 99, 8, 59, -128, 
  32, -128, 52, -26, 44, 35, 66, -2, 53, 39, 
  84, 25, 71, 44, 79, -77, 1, -128, -128, -128, 
  -128, -128, 1, -128, 5, 4, -128, 37, 84, -128, 
  71, 61, 72, -50, 85, 38, 91, 11, 13, -128, 
  0, -128, 25, -60, 32, -77, 62, -77, 42, -7, 
  59, 24, 57, 24, 48, -50, 4, -128, -128, -128, 
  -128, -128, 18, -128, -6, -2, -128, 40, 84, -128, 
  66, 54, 71, -26, 82, 35, 73, -26, -33, -128, 
  -8, -128, 32, -128, 34, -128, 46, -128, 31, 17, 
  54, -3, 39, 1, 76, 0, -18, -128, -128, -128, 
  -128, -128, 11, -128, 5, -4, -128, 44, 82, -128, 
  61, 40, 74, -37, 79, 29, 53, -128, -128, -128, 
  -12, -128, -18, -128, -2, -128, 37, -128, 30, -23, 
  30, -23, 27, -60, 67, 4, 4, -128, -128, -128, 
  -128, -128, -2, -128, 12, -18, 10, 47, 77, -128, 
  57, 9, 68, -43, 76, 9, 45, -128, -50, -128, 
  -43, -128, -26, -128, -26, -43, 44, -128, 21, -128, 
  17, -128, 19, -60, 40, -128, 4, -128, -128, -128, 
  -128, -128, -37, -128, 17, -43, 59, 41, 61, -77, 
  51, -128, 60, 22, 77, 11, 24, -128, -128, -128, 
  -29, -128, -60, -128, 17, -43, -26, -128, 16, -128, 
  9, -128, 22, -33, 33, -37, 2, -77, -128, -128, 
  -128, -128, -128, -16, 31, -77, 79, 49, 48, -12, 
  43, -128, 44, 52, 68, 4, 19, -128, -128, -128, 
  -128, -128, -128, -128, -2, -128, -18, -128, -3, -128, 
  -128, -128, 16, -128, -128, -128, 13, 17, -26, -128, 
  -128, -128, -128, -6, 14, -128, 85, 25, -26, -4, 
  -3, -128, 37, 62, 63, 0, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -23, -128, 23, -128, 
  -128, -128, 16, -128, -128, -128, 13, -128, -128, -128, 
  -128, -128, -128, -8, -50, -128, 86, -6, 24, -37, 
  -128, -128, 61, 57, 40, -26, -128, -128, -128, -128, 
  -128, -128, -128, -128, -14, -128, -128, -128, 19, -128, 
  -128, -128, 17, -128, -128, -128, 16, -50, -128, -128, 
  -128, -128, -7, 24, -23, 4, 82, -128, 37, -128, 
  -128, -128, 77, 43, 21, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, 40, -128, 
  -128, -128, 35, -128, -128, -128, 32, 5, -128, -128, 
  -128, -128, 32, 25, -43, 40, 80, -128, 34, -128, 
  -128, -128, 79, 5, -10, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 11, -128, 
  -128, -128, -77, -128, -128, -128, -37, -128, -128, -128, 
  -128, -128, 46, 0, -128, 46, 74, -128, 29, -128, 
  -128, -128, 82, -6, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, 48, 10, -128, 46, 67, -128, -6, -128, 
  -128, -29, 72, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, 56, 19, -128, 43, 65, -128, -128, -128, 
  -128, -50, 57, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 64, 29, -128, 33, 52, -128, -128, -128, 
  -60, -60, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 69, 32, -77, 21, 41, -128, -128, -128, 
  15, -43, -20, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 65, 24, -128, -6, 28, -128, -128, -128, 
  37, -1, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 50, 5, -128, -33, 33, -128, -128, -128, 
  4, 20, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 17, -18, -60, -77, 46, -128, -128, -128, 
  -128, 18, -33, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -2, -128, -128, -128, 
  -128, -128, -16, 5, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -10, 37, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
