/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/f5496439_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_f5496439_nohash_0.cc" \
 */
#include "yes_f5496439_nohash_0.h"


const int g_yes_f5496439_nohash_0_width = 40;
const int g_yes_f5496439_nohash_0_height = 49;
alignas(16) const signed char g_yes_f5496439_nohash_0_data[] = {
  101, 77, 91, 85, 92, 68, 75, 60, 63, 51, 
  58, 62, 75, 57, 45, 56, 66, 44, 42, 23, 
  45, 25, 23, 4, -18, -12, 5, 17, 0, 7, 
  14, -7, 14, 4, 5, -7, 17, 17, 20, -7, 
  73, 47, 69, 56, 72, 77, 77, 46, 72, 55, 
  50, 50, 71, 29, 44, 55, 32, 7, 47, 44, 
  46, 6, 35, -4, 12, -8, 12, 7, 12, 17, 
  22, 18, 8, 11, 25, 21, 27, -16, -2, -8, 
  51, 57, 70, 35, 65, 39, 72, 39, 53, 45, 
  62, 47, 62, 58, 35, 35, 48, 17, 14, 11, 
  27, 17, 24, 5, 2, -23, -14, -14, 14, 0, 
  17, -8, -14, -14, 14, -26, -14, -3, -14, -23, 
  51, 52, 64, 20, 70, 44, 62, 46, 61, 44, 
  42, 10, 30, 21, 38, -4, 29, 2, 9, -8, 
  0, -6, 20, -29, -3, -14, 1, -3, 16, 4, 
  0, -2, -14, -6, 19, -20, 0, -2, 5, -8, 
  55, 38, 35, 42, 84, 50, 57, 9, 44, -14, 
  63, 44, 50, 17, 65, 44, 51, 21, 25, -12, 
  19, -4, 15, -7, 19, -10, 26, 23, 30, -26, 
  -1, -14, -4, 6, 17, -23, 15, -1, 8, -16, 
  54, 51, 72, 15, 59, 45, 39, -37, 42, 48, 
  69, 21, 59, 32, 54, 7, 44, 11, 58, 44, 
  63, 32, 40, 8, 17, 17, 40, 37, 44, -18, 
  -7, 4, 25, 2, 18, 9, 39, 11, 19, 4, 
  56, 36, 32, -128, -3, -10, 23, -20, 0, 10, 
  50, 21, 29, 44, 74, 51, 81, 59, 79, 66, 
  65, 53, 44, 1, 24, 46, 73, 72, 80, 59, 
  46, 55, 63, 44, 58, 45, 35, -4, 9, -33, 
  56, 36, 56, 21, 68, 55, 59, 17, 29, -77, 
  45, 35, 29, 4, 34, 21, 60, 19, 57, 22, 
  51, 9, 16, -12, -10, -37, -18, -60, 38, -6, 
  34, 49, 59, 0, 22, -33, -7, -29, -4, -43, 
  57, 9, 49, 51, 75, -2, 28, 23, 2, -128, 
  28, 0, 36, -60, 9, -128, -43, -43, -7, -77, 
  -18, -60, 9, -50, -29, -60, -37, -60, -50, -77, 
  -26, -128, -23, -77, -7, -37, -18, -60, -2, -29, 
  6, -128, 44, 19, 51, -60, -26, -128, 1, -10, 
  25, -16, 25, -2, 43, -60, -20, -128, -18, -128, 
  -14, -128, -37, -60, -50, -128, -37, -128, -50, -128, 
  -20, -128, -29, -128, -1, -60, -6, -60, -18, -128, 
  30, -8, 30, 37, 52, -128, -128, -29, 24, -128, 
  -3, -128, -4, -50, 35, -43, -60, -128, -29, -128, 
  20, -128, -14, -50, -18, -23, -16, -128, -50, -128, 
  -33, -128, -3, -50, -60, -128, -33, -43, -18, -43, 
  57, 32, 56, 14, 48, -128, -1, 32, 44, -10, 
  50, -10, 37, -37, 56, 57, 77, 67, 67, 52, 
  61, 18, 29, 29, 21, 12, 45, -18, 0, -128, 
  -50, -128, -16, -60, -77, -128, -12, -43, -18, -43, 
  54, -77, 32, 0, 50, 22, 54, 4, 27, -29, 
  -50, -43, 24, -8, 41, 4, 42, -16, 43, -43, 
  39, -26, 10, 29, 14, 2, 43, 28, 64, 37, 
  55, 54, 72, 62, 91, 80, 97, 85, 102, 81, 
  41, -128, -77, -128, -128, -29, 39, -18, -4, -50, 
  -60, -128, 42, -12, -60, -128, -77, -128, -8, -128, 
  -77, -128, -3, -128, -16, -128, -10, -128, -29, -60, 
  26, 10, 51, 35, 54, -37, -20, -128, 40, 0, 
  49, -37, -10, -128, -50, -128, 44, -1, 21, -33, 
  14, -26, 11, -50, -4, -128, -29, -128, -37, -128, 
  -128, -128, -16, -128, -23, -128, -77, -128, -43, -128, 
  -10, -50, -14, -128, -77, -128, -20, -128, -50, -77, 
  50, 31, 37, 6, -3, -128, 24, 2, 9, -18, 
  16, -14, 30, -128, 23, -60, -50, -128, -20, -60, 
  -7, -60, 11, -43, -29, -128, -29, -2, 39, -14, 
  53, 17, 40, -128, -128, -128, -37, -128, 27, -7, 
  116, 96, 111, 77, 96, 75, 67, 8, 40, -50, 
  -33, -128, -43, -50, -20, -128, -128, -128, -60, -128, 
  -43, -20, 43, -8, 11, 9, 73, 64, 72, 47, 
  60, 34, 57, -26, -128, -128, 2, -23, 51, 19, 
  108, 77, 110, 97, 108, 79, 105, 76, 78, 30, 
  37, 45, 61, -26, 4, -7, 34, -60, 45, 6, 
  67, 62, 93, 64, 76, 70, 106, 87, 100, 74, 
  70, 34, 60, 6, -77, -128, 14, -7, 57, 36, 
  100, 57, 105, 85, 96, 77, 96, 55, 86, 17, 
  43, 54, 71, -128, 42, 21, 65, 44, 69, 41, 
  85, 70, 85, 63, 67, 73, 90, 66, 89, 64, 
  61, 55, 70, 39, -60, -43, 29, -4, 55, 14, 
  92, 48, 99, 74, 88, 79, 98, 65, 86, -60, 
  47, 38, 57, 62, 66, 50, 73, 55, 86, 57, 
  98, 75, 80, 49, 90, 79, 94, 65, 92, 63, 
  70, 51, 77, -2, -26, -10, 61, 33, 50, 34, 
  84, 31, 89, 60, 82, 85, 106, 73, 89, 34, 
  62, 65, 77, 66, 75, 61, 79, 61, 89, 75, 
  103, 62, 59, 62, 96, 78, 92, 65, 92, 58, 
  79, 52, 78, 37, 4, 12, 58, 43, 51, -6, 
  77, 20, 77, 34, 79, 77, 102, 87, 105, 59, 
  77, 66, 78, 65, 87, 69, 91, 78, 99, 85, 
  106, 62, 75, 70, 98, 69, 85, 57, 79, 38, 
  56, 41, 66, 37, 15, -18, 17, 39, 62, 22, 
  65, -16, 62, -60, 79, 61, 84, 87, 100, 85, 
  87, 54, 62, 49, 75, 64, 93, 76, 104, 83, 
  89, 47, 66, 59, 94, 74, 72, 39, 79, 44, 
  74, -8, 39, 25, 40, 14, 48, 44, 60, 25, 
  53, -128, 59, -33, 69, 40, 75, 80, 95, 86, 
  90, 54, 58, 50, 83, 63, 95, 76, 107, 76, 
  47, 39, 50, 46, 78, 46, 75, 52, 73, 42, 
  59, 11, 48, 39, 65, 25, 49, 29, 52, 0, 
  49, -128, 41, -128, 54, 13, 59, 65, 87, 70, 
  86, 58, 77, 45, 74, 63, 89, 78, 95, 47, 
  -1, -33, 50, 36, 75, 59, 67, 23, 70, 47, 
  76, 59, 68, 29, 32, 15, 54, 24, 62, 27, 
  54, -16, 43, -8, 28, 5, 65, -23, 72, 19, 
  65, 55, 73, 53, 71, 52, 84, 62, 83, 17, 
  19, -10, 23, -37, 45, 10, 60, -6, 57, 21, 
  73, 56, 63, -8, 35, -3, 66, 5, 55, 4, 
  53, 18, -60, -128, -77, -128, 5, -37, 38, -128, 
  40, -43, 35, -7, 17, -128, 42, -29, 16, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  11, -4, 17, 2, 57, 48, 65, -18, -6, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  9, -128, 27, -60, -77, -128, -128, -128, 9, -128, 
  -50, -128, -16, -128, -128, -128, -128, -128, -128, -128, 
  53, 40, 68, 75, 114, 95, 103, 72, 81, 48, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -14, -26, 27, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  49, 18, 67, 64, 97, 77, 99, 80, 93, 59, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -29, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -7, -37, 38, 46, 83, 67, 93, 73, 74, 37, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  22, -77, 40, 37, 75, 47, 92, 60, 81, 52, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -18, -43, 1, 31, 70, 48, 86, 47, 70, 32, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  25, 29, 67, 51, 82, 45, 75, 28, 60, -14, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -2, 2, 62, 57, 77, 29, 59, 19, 46, -18, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  11, 55, 59, 69, 73, -8, 23, -60, 28, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  54, 52, 61, 30, 24, -128, -50, -128, -20, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, 0, 
  62, 26, 0, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -18, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, -7, 14, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -77, -60, -128, -128, -128, -128, -128, 
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
