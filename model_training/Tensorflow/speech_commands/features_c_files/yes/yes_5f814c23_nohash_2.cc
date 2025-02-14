/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/5f814c23_nohash_2.wav" \
 * --output_c_file="features_c_files/yes/yes_5f814c23_nohash_2.cc" \
 */
#include "yes_5f814c23_nohash_2.h"


const int g_yes_5f814c23_nohash_2_width = 40;
const int g_yes_5f814c23_nohash_2_height = 49;
alignas(16) const signed char g_yes_5f814c23_nohash_2_data[] = {
  53, 64, 84, 63, 45, 39, 57, 51, 67, 44, 
  44, 46, 55, 41, 48, 30, 17, 17, 35, 20, 
  -10, -12, 0, 15, 17, 17, 23, 20, 5, 4, 
  23, -7, -10, 15, 0, 4, 26, 17, 0, -26, 
  56, 47, 67, 55, 72, 56, 57, 50, 61, 51, 
  69, 54, 64, 48, 40, 1, -12, 43, 47, 34, 
  38, 15, 28, 19, 8, 34, 47, 34, 25, 8, 
  24, 21, 9, 11, 19, -4, 15, 16, 32, -8, 
  53, 55, 74, 57, 67, 48, 60, 61, 75, 48, 
  45, 7, 49, 11, -1, 15, 31, 2, 40, 44, 
  47, 15, 10, -20, 2, 32, 60, 29, 39, 4, 
  -14, -8, 21, 19, 10, 12, 19, 9, 10, -33, 
  48, 45, 67, 66, 78, 17, 35, 44, 57, 50, 
  70, 34, 53, 20, 21, -2, 33, 27, 45, 29, 
  42, -23, 35, 4, 16, 17, 73, 63, 52, 25, 
  27, 24, 16, 15, 12, 9, 26, 9, 24, -18, 
  59, 57, 79, 40, 66, 53, 54, -7, 55, -18, 
  -7, 8, 58, 44, -8, -12, 2, 1, 45, 29, 
  57, 27, 39, -33, -1, 14, 49, 43, 58, 44, 
  25, 19, 32, 9, 17, -2, 19, -4, 22, -29, 
  103, 84, 104, 82, 92, 67, 81, 54, 54, 29, 
  47, 45, 43, 34, 21, -26, 25, -26, 36, 20, 
  39, -14, -10, -18, 36, 25, 59, 47, 65, 44, 
  47, 21, 18, -16, 1, 2, 27, -7, -4, -23, 
  103, 80, 100, 79, 66, -23, 40, 40, 62, 43, 
  40, 6, 38, 17, 42, 12, 26, 16, 34, 25, 
  51, 7, -10, -37, 31, 17, 37, 23, 70, 40, 
  43, -2, 7, -23, 0, -16, 18, -18, -10, -60, 
  76, 51, 94, 67, 46, 25, 46, 14, 44, -14, 
  43, -20, 29, -1, -10, -2, 11, -43, 29, 19, 
  42, -8, 15, 5, 34, -16, 16, -43, 41, 21, 
  47, 9, 23, -6, 16, -3, 4, -43, 9, -14, 
  107, 89, 115, 91, 100, 82, 95, 55, 37, 22, 
  53, -8, 24, -128, 31, 0, 34, 28, 33, 9, 
  44, 15, 40, 39, 46, -29, 42, -8, 52, 32, 
  64, 20, 21, 1, 40, 10, 35, -18, 34, -8, 
  100, 77, 103, 73, 102, 65, 57, 39, 71, 34, 
  54, 16, 47, 7, 30, -14, 25, 9, -1, -50, 
  27, -18, 20, -7, 34, -7, 5, -43, 51, 31, 
  64, -4, 5, -43, 19, 26, 39, -18, -2, -3, 
  80, 54, 84, 53, 92, 60, 70, 21, 46, -29, 
  42, -60, -18, -77, 11, -60, -8, -60, 11, -37, 
  -6, -20, 2, -37, 4, -37, 14, -3, 40, 19, 
  69, 36, 57, 7, 45, 44, 51, -14, 31, 21, 
  63, -4, 30, -128, 50, -3, 57, 24, 44, -26, 
  36, -1, 44, -14, 8, -50, 22, 17, 8, -128, 
  -10, -26, -2, 4, 59, 37, 17, 45, 84, 45, 
  77, 47, 34, 4, 58, 29, 44, -8, 27, 11, 
  64, 17, 55, 16, 73, 40, 61, 26, 34, -43, 
  -4, -29, 21, 4, 4, -4, 14, -26, 30, -14, 
  6, -50, 9, 17, 34, 38, 58, 43, 69, 43, 
  56, 20, 60, -2, 44, 42, 54, 6, 30, 37, 
  106, 90, 104, 95, 118, 90, 110, 90, 105, 77, 
  76, -16, 43, 12, 15, 16, 34, 40, 56, 19, 
  52, 49, 66, 56, 67, 70, 95, 72, 13, -4, 
  45, 15, 39, 11, 59, 25, 62, 7, 32, 13, 
  97, 92, 111, 91, 121, 97, 112, 95, 116, 82, 
  103, 76, 69, 59, 89, 92, 114, 93, 104, 95, 
  114, 84, 86, 50, 100, 94, 114, 87, 96, 80, 
  74, 22, 62, 40, 62, 23, 57, 44, 63, 47, 
  91, 68, 108, 71, 109, 100, 118, 87, 114, 97, 
  105, 83, 102, 73, 93, 85, 113, 96, 122, 99, 
  119, 92, 100, 80, 116, 95, 112, 89, 107, 92, 
  97, 36, 51, 34, 39, 7, 39, 45, 64, 44, 
  107, 45, 101, 71, 99, 95, 118, 98, 116, 84, 
  113, 97, 117, 97, 110, 94, 115, 97, 120, 95, 
  109, 79, 101, 97, 118, 85, 107, 85, 99, 57, 
  62, 47, 72, 58, 75, 52, 77, 63, 80, 58, 
  104, 14, 61, 44, 75, 70, 102, 89, 115, 75, 
  109, 92, 112, 94, 113, 87, 114, 94, 116, 82, 
  103, 76, 104, 89, 107, 60, 81, 50, 79, 9, 
  -1, 21, 62, 40, 69, 45, 64, 57, 78, 52, 
  92, 4, 72, 42, 50, 45, 87, 69, 97, 85, 
  112, 16, 103, 88, 112, 85, 107, 86, 93, 64, 
  90, 71, 94, 64, 99, 67, 80, 20, 16, -128, 
  -50, -128, 44, 40, 70, 45, 65, 36, 62, 48, 
  78, -60, 49, -60, 54, 34, 78, 68, 77, 81, 
  87, 70, 105, 69, 96, 83, 104, 68, 85, 59, 
  91, 66, 81, 47, 77, 48, 66, 2, 19, -128, 
  -128, -60, 45, 31, 64, 24, 61, 30, 64, 30, 
  77, 31, 72, -4, 35, -128, 90, 50, 95, 85, 
  82, 70, 97, 67, 95, 74, 95, 57, 67, 32, 
  81, 54, 86, 64, 80, 47, 74, 40, 47, -128, 
  -60, -8, 55, 34, 50, 34, 63, 35, 56, 32, 
  58, 18, -77, -4, 51, -37, 69, 61, 82, 58, 
  88, 53, 68, 25, 88, 65, 82, 46, 54, 4, 
  69, 51, 90, 62, 75, 32, 63, 22, 75, 52, 
  21, 22, 54, 16, 54, 25, 54, 21, 59, 35, 
  44, -10, 9, -128, -50, -128, 42, -128, 41, -128, 
  55, 14, 56, -50, 53, -12, 64, -29, 17, -128, 
  -128, -128, 61, 34, 62, -60, -128, -128, -128, -128, 
  -43, -128, -77, -128, 11, -77, 9, -128, 1, -77, 
  -20, -128, -128, -128, -128, -128, -4, -128, 26, -18, 
  59, -26, 36, -128, 38, -128, -7, -128, -60, -128, 
  -128, -128, -20, -128, -23, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -37, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  6, -128, -1, -128, 36, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -1, 46, 
  103, 92, 117, 85, 76, 89, 110, 77, 29, -4, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -20, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 77, 82, 
  115, 95, 117, 97, 120, 102, 122, 97, 120, 100, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 62, 69, 
  102, 84, 108, 87, 110, 77, 108, 82, 103, 78, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 69, 54, 
  88, 64, 75, 64, 97, 63, 89, 72, 101, 75, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 62, 43, 
  88, 62, 94, 61, 93, 78, 99, 61, 94, 71, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -20, -3, 53, 25, 
  84, 59, 95, 54, 98, 64, 89, 42, 79, 64, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 48, 26, 
  70, 53, 71, 27, 64, 32, 76, 34, 57, 11, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -60, 69, 27, 
  61, 52, 69, 52, 82, 42, 77, 55, 59, 32, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 16, -6, 
  50, 31, 59, 54, 79, 30, 72, 38, 65, 42, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 69, 29, 
  63, 40, 9, 43, 67, -20, 55, 48, 50, 32, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 59, -4, 
  58, 21, 54, 46, 87, 37, 56, 30, 64, 9, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -60, 
  74, 23, 55, 31, 80, 17, 53, 42, 61, 4, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  67, 14, 34, -3, 65, 19, 67, 25, 67, 19, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  37, -7, 54, 4, 56, 7, 43, -23, 46, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 30, -60, 
  52, 20, 61, -18, 52, 29, 40, -29, 57, 23, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 19, -23, 39, -37, 
  38, 22, 51, -128, 38, -128, -14, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 39, -77, 
  -128, -77, -29, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
