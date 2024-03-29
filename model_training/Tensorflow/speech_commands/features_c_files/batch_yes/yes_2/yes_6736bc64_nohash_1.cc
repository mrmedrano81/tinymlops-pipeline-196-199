/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/6736bc64_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_6736bc64_nohash_1.cc" \
 */
#include "yes_6736bc64_nohash_1.h"


const int g_yes_6736bc64_nohash_1_width = 40;
const int g_yes_6736bc64_nohash_1_height = 49;
alignas(16) const signed char g_yes_6736bc64_nohash_1_data[] = {
  107, 92, 102, 77, 84, 74, 82, 70, 84, 76, 
  78, 62, 62, 61, 42, 42, 43, 37, 33, 44, 
  56, 51, 49, 20, 33, 30, 23, 4, 29, 34, 
  45, 41, 53, 57, 66, 53, 35, 37, 9, -12, 
  105, 77, 77, 74, 84, 68, 72, 42, 44, 43, 
  63, 48, 68, 52, 31, 33, 39, 34, 40, 25, 
  45, 29, 32, 39, 46, 27, 35, 17, 24, 23, 
  32, 44, 66, 68, 82, 57, 43, 29, 12, -20, 
  70, 34, 64, 53, 70, 50, 74, 52, 71, 48, 
  66, 45, 57, 57, 50, 8, 23, 49, 49, 46, 
  42, 32, 36, 15, 46, 20, 22, 0, 1, 20, 
  43, 51, 77, 75, 91, 64, 42, -33, -7, -43, 
  58, 38, 69, 27, 65, 67, 79, 60, 65, 35, 
  63, 55, 61, 20, 63, 21, 42, 34, 61, 17, 
  35, -3, 21, 9, 36, 19, 45, 14, 34, 31, 
  0, -3, 35, -43, 9, -77, -3, -43, -16, -43, 
  37, -43, 53, 18, 69, 44, 66, 52, 79, 45, 
  57, 42, 55, 26, 60, 30, 24, 16, 25, 22, 
  32, 10, 37, 19, 43, 19, 22, 13, 16, 4, 
  24, 11, 7, -128, -7, -128, -20, -43, -10, -60, 
  78, 36, 45, 7, 55, -60, 28, 37, 70, 19, 
  49, 50, 65, 24, 7, 29, 57, 20, 45, 28, 
  29, -8, 28, 0, 32, 20, 6, -10, 25, 0, 
  20, 0, 0, -128, -77, -128, -10, -29, -10, -128, 
  60, 31, 59, -18, 17, -37, -14, 10, 47, 22, 
  54, 27, 35, 35, 70, 19, 33, -33, 42, 4, 
  12, -3, 19, -16, 15, 14, 4, -26, 9, -12, 
  29, -16, -4, -128, -43, -128, -29, -77, -60, -128, 
  55, 37, 64, -4, 11, -10, 44, 42, 69, 20, 
  68, 35, 44, 29, 64, 10, 39, -20, 40, -12, 
  48, 23, 32, -1, 5, -10, 23, -29, 0, -77, 
  1, -128, -16, -128, -43, -77, -18, -60, -26, -60, 
  64, 55, 74, 57, 66, 44, 61, -29, 22, -3, 
  12, -128, 50, -16, 34, -14, 47, 7, -12, -50, 
  19, -16, 24, 0, 30, -7, -16, -43, -50, -128, 
  -12, -29, -18, -128, -60, -128, -12, -26, -3, -50, 
  40, 7, 54, 8, 25, 12, 42, -50, 40, 11, 
  20, 7, 52, -23, 25, -33, 11, -50, 42, -37, 
  2, -77, 26, -2, -8, -128, -77, -128, -26, -77, 
  -23, -77, -10, -128, -128, -128, -18, -128, -60, -128, 
  -43, -128, 34, 59, 72, 38, 51, -50, -77, -128, 
  -50, -128, 0, -60, 5, -37, -33, -60, 6, -50, 
  20, -23, -18, -29, 24, -7, 4, -50, -26, -20, 
  23, -77, -8, -128, -128, -128, -26, -60, -37, -128, 
  53, -29, 34, -12, 53, -77, 44, -43, 18, -29, 
  49, 24, 38, -77, 16, -23, 29, -43, -3, -128, 
  -7, -7, 17, -8, 14, -29, -2, -23, 4, -77, 
  -12, -77, -29, -128, -128, -128, -50, -128, -20, -128, 
  62, 43, 57, 45, 79, 40, 35, -128, -18, 1, 
  23, -33, 31, -12, 12, -43, 23, -128, -4, -20, 
  26, -7, 14, -128, 17, 1, 19, -77, 4, -50, 
  -20, -128, -20, -128, -128, -128, -50, -128, -37, -128, 
  75, 39, 54, 14, 35, -128, -26, -60, -12, -128, 
  33, -16, 46, 7, 30, -43, -23, -128, -8, -128, 
  -43, -12, 32, 4, 29, -37, 29, -7, 19, -8, 
  -2, -128, -26, -128, -77, -50, -23, -128, -50, -128, 
  15, 17, 50, -77, 39, 23, 61, 22, -16, -50, 
  37, -128, -50, -77, -26, -77, -43, -50, 18, -60, 
  -10, -33, 4, -23, 7, -128, -18, -77, 6, -60, 
  -10, -128, -60, -128, -77, -128, -23, -128, -60, -128, 
  27, 23, 68, 6, 61, -7, 44, -6, 41, -29, 
  20, -128, 14, 11, 40, -33, -3, -4, 11, -33, 
  16, 1, 39, 14, 8, -26, 26, -29, 2, -50, 
  -16, -128, -18, -77, -37, -128, -8, -33, 4, -60, 
  44, -128, -128, -128, -6, -8, -12, -77, 7, 6, 
  19, -33, -4, 25, 44, -43, 19, -2, 4, -60, 
  11, -43, 13, -128, -3, -8, 9, -128, -14, -128, 
  -29, -128, -43, -77, -29, -60, 11, -12, -1, -77, 
  5, -60, 33, 24, 69, 38, 32, -128, 21, 21, 
  19, -12, 14, -60, -33, -128, 20, -60, 4, -128, 
  -8, -8, 14, -50, -4, 26, 47, -3, 36, -6, 
  17, -33, -1, -6, 48, 10, 9, 4, 51, 8, 
  68, 38, 63, 49, 62, -33, 9, -128, -33, -77, 
  9, -128, -50, -77, 16, -50, 23, -128, -23, -128, 
  -26, -37, -4, -128, 19, -29, 26, -23, 11, -128, 
  -10, -77, -18, -128, -29, -128, -18, -60, -37, -128, 
  119, 95, 107, 83, 94, 62, 69, -50, 22, -128, 
  15, -7, -10, -7, 24, 9, -16, -128, -50, -50, 
  -23, -128, 7, -77, -4, 17, 61, -12, 29, -23, 
  6, -29, 46, 64, 67, -6, -6, -37, 27, -12, 
  105, 86, 118, 92, 85, 65, 60, 11, 9, -37, 
  30, 6, -6, -77, 19, -43, 13, -77, 16, -8, 
  7, 39, 63, 35, 77, 89, 112, 85, 96, 77, 
  67, 66, 104, 92, 98, 61, 74, 71, 90, 59, 
  69, 70, 102, 74, 105, 75, 91, 67, 84, 31, 
  53, -29, 2, -20, 36, -3, 39, -4, 64, 59, 
  92, 90, 110, 87, 107, 93, 114, 92, 113, 87, 
  100, 70, 100, 86, 108, 67, 99, 79, 101, 80, 
  60, 52, 89, 84, 119, 94, 109, 97, 115, 83, 
  92, 61, 83, 24, 57, 48, 65, 67, 75, 89, 
  115, 92, 115, 90, 112, 84, 99, 86, 105, 77, 
  94, 67, 88, 67, 90, 70, 105, 83, 102, 77, 
  65, -20, 68, 64, 97, 72, 113, 90, 113, 85, 
  106, 92, 107, 69, 95, 84, 101, 84, 100, 80, 
  87, 62, 94, 80, 107, 66, 90, 72, 96, 65, 
  79, 54, 81, 53, 90, 55, 94, 76, 92, 71, 
  64, 30, 68, 5, 52, 77, 109, 92, 112, 82, 
  106, 87, 110, 82, 107, 87, 100, 91, 114, 67, 
  90, 48, 82, 64, 91, 48, 78, 64, 81, 57, 
  82, 59, 69, 16, 75, 52, 102, 87, 106, 82, 
  72, -3, 59, -77, 47, 45, 95, 82, 114, 88, 
  99, 84, 100, 84, 97, 75, 105, 90, 108, 77, 
  87, 37, 62, 29, 74, 38, 77, 50, 75, 5, 
  64, -8, 31, -128, 41, 39, 82, 62, 94, 70, 
  64, -60, 48, -1, 59, 49, 90, 82, 100, 28, 
  100, 74, 97, 69, 92, 60, 100, 77, 98, 54, 
  80, 50, 84, 52, 61, 49, 79, 48, 54, -23, 
  53, 5, -10, -128, 30, 36, 73, 49, 72, 44, 
  12, -10, 21, -29, 24, 57, 87, 61, 75, 69, 
  102, 64, 87, 57, 87, 51, 89, 37, 70, 35, 
  61, 38, 75, 23, 34, 29, 72, 16, 0, 4, 
  57, -33, 32, -77, 82, 65, 70, 47, 59, 31, 
  44, 32, 48, -43, 44, 31, 64, -12, 51, 75, 
  88, 46, 76, 72, 69, 52, 84, 55, 69, -26, 
  47, -128, -3, -43, 0, -20, 62, -77, 43, 16, 
  47, -128, 12, -128, 50, 46, 54, 25, 60, 29, 
  32, -128, -128, -128, -3, 14, 22, -128, 50, 46, 
  48, -128, 50, -50, 49, -3, 63, 25, 65, -128, 
  -60, -128, 8, -77, 38, 35, 60, 1, 56, 54, 
  82, 15, 19, -128, -18, 5, -18, -128, 32, -128, 
  -128, -128, -128, -128, -128, -128, 32, -60, -60, -128, 
  41, -128, -50, -128, -128, -128, -1, -77, 39, -128, 
  -128, -128, -43, -128, 19, -128, 46, 23, 78, 74, 
  103, 95, 113, 87, 99, 84, 93, 69, 89, 60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 20, -128, -77, -128, -77, -128, 
  12, -128, -60, -128, 7, -60, 46, 16, 83, 58, 
  99, 90, 106, 87, 105, 90, 114, 92, 104, 87, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -60, 21, -77, 34, 7, 55, 52, 
  87, 77, 104, 58, 95, 79, 92, 62, 98, 72, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, 2, -128, 15, -14, 48, -2, 64, 53, 
  82, 62, 94, 65, 99, 79, 88, 67, 91, 60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 4, -128, -26, -128, -29, -128, 28, -128, 
  -37, -128, -16, -18, 36, -14, 49, 44, 89, 71, 
  86, 70, 101, 79, 102, 74, 85, 65, 90, 51, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 15, -128, -128, -128, -128, -128, -43, -128, 
  12, -128, -23, -128, 11, 7, 56, 11, 75, 45, 
  78, 53, 91, 65, 92, 76, 89, 54, 80, 43, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, 0, -23, 14, -128, 21, -20, 54, 2, 
  74, 39, 77, 17, 77, 42, 70, 50, 76, 33, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, -50, -1, -128, -1, -10, 34, -14, 
  77, 55, 77, 54, 72, 54, 70, 35, 65, 36, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, 11, -128, 24, -33, 49, -29, 
  56, 40, 57, -33, 65, 19, 47, -60, 44, -26, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, 40, 1, 47, -18, 
  69, -7, 44, 11, 48, -128, 19, -128, 28, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -12, -128, -23, -77, 67, 24, 
  62, 8, 19, -60, -128, -128, -18, -128, 0, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 1, -128, 37, -7, 
  35, -128, -37, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -1, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
