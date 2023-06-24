/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/f5496439_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_f5496439_nohash_1.cc" \
 */
#include "yes_f5496439_nohash_1.h"


const int g_yes_f5496439_nohash_1_width = 40;
const int g_yes_f5496439_nohash_1_height = 49;
alignas(16) const signed char g_yes_f5496439_nohash_1_data[] = {
  102, 80, 72, 72, 88, 69, 55, 61, 70, 63, 
  65, 56, 78, 70, 78, 61, 69, 37, 39, 42, 
  39, 17, 17, 17, 31, 7, 23, 17, 26, 32, 
  37, 32, 29, 48, 50, 47, 62, 37, 53, 49, 
  79, 64, 79, 77, 85, 70, 61, 39, 43, 55, 
  64, 39, 58, 59, 54, 40, 43, 42, 48, 19, 
  17, 29, 40, 22, 11, 8, 27, 17, -2, 9, 
  7, -12, 18, 19, 23, 35, 55, 11, 45, 22, 
  69, 53, 65, 50, 82, 62, 60, 59, 52, -2, 
  38, 43, 68, 49, 67, 34, 51, 38, 44, 9, 
  0, 11, 16, 17, 22, -3, 1, -10, 14, -10, 
  16, -4, -29, -26, 18, 0, 27, 8, -2, -10, 
  71, 19, 85, 59, 67, 48, 62, 27, 37, 4, 
  41, 35, 38, 9, 45, 8, 38, 26, 51, 28, 
  47, 1, 23, -2, 4, 9, 0, -12, 19, -4, 
  11, -50, -4, -29, -7, -10, 1, -20, 9, -6, 
  74, 37, 76, 59, 71, 43, 65, 6, 61, 27, 
  48, 44, 19, -37, 35, 17, 51, 30, 47, 27, 
  33, -18, -33, -50, 10, -50, -18, -10, 2, -26, 
  2, -8, -10, -10, 5, -43, -14, -29, -16, -128, 
  69, 2, 65, 37, 54, -12, 51, 19, 33, -23, 
  54, 32, 34, -20, 15, 21, 29, -4, 20, 9, 
  33, -16, 0, -77, 5, -7, -2, -29, -12, -43, 
  -26, -60, -26, -77, -29, -50, -4, -26, -6, -77, 
  73, 0, 59, 9, 54, 7, 21, 20, 56, 28, 
  19, -77, 47, 17, 31, 2, 52, 4, 21, 4, 
  31, -43, 4, -26, -14, -10, -14, -29, 0, -43, 
  -8, -43, -12, -60, -20, -50, -43, -33, -12, -77, 
  56, 47, 59, 50, 59, -1, 38, -7, 35, 48, 
  60, -4, 34, -33, 19, 29, 55, 13, 0, -7, 
  31, -20, -10, -50, -6, -20, 8, -4, 4, -60, 
  -29, -6, 15, -18, -2, -33, 19, 24, 56, -3, 
  -128, 20, 64, -29, 29, -29, 63, 36, 23, -37, 
  39, 33, 29, -37, 42, -23, 39, -29, 16, -23, 
  11, -14, -7, -10, 5, -60, -37, -60, -2, -77, 
  -37, -77, -37, -128, -7, -60, -23, -37, -12, -128, 
  -10, -14, 51, -10, 51, -60, 43, -20, -3, -2, 
  39, 5, 27, 8, 29, 0, -23, -20, 29, 19, 
  21, -60, -18, -37, -8, -50, -29, -128, -18, -77, 
  -29, -60, 2, -77, -18, -77, -29, -128, -77, -128, 
  54, 42, 61, -33, 39, 16, 50, -1, 34, -37, 
  49, 14, 1, -128, 7, -4, 38, 2, 43, -26, 
  -1, -8, 9, -60, -14, -37, -3, -50, -14, -60, 
  -29, -128, -12, -128, -4, -60, -23, -50, -29, -128, 
  27, 42, 42, -1, 49, -37, 14, -128, -33, -50, 
  38, -3, 40, 20, 39, -12, 45, -43, 4, -43, 
  1, -43, 5, -10, -26, -43, -4, -37, 9, -37, 
  -23, -16, 14, 9, 1, -50, -26, -128, -37, -128, 
  31, -60, 38, -128, -77, -128, -4, 14, 44, -3, 
  21, -14, 57, 39, 17, -8, 11, -16, -3, -23, 
  -18, -33, 28, -14, -43, -128, -43, -60, -26, -128, 
  -60, -128, -43, -128, -50, -128, -60, -50, -37, -128, 
  16, -33, 43, -128, 0, 14, 39, -43, -3, -77, 
  13, -26, 40, -128, 11, 7, 2, -50, -14, -37, 
  -26, -50, 45, -77, -20, -77, -20, -128, -43, -128, 
  -1, -37, -20, -77, -43, -128, -60, -128, -37, -128, 
  49, -128, 18, -37, -37, -128, 36, -14, 39, 12, 
  31, -128, 16, -26, 23, -8, -3, -18, 1, -77, 
  -8, -77, -8, -37, -37, -128, -50, -128, -23, -60, 
  -33, -128, -43, -128, -77, -50, -60, -128, -60, -128, 
  -10, -43, 16, -43, 40, -77, -4, -10, -4, -77, 
  20, -18, -4, -128, 6, -77, 29, -43, -20, -128, 
  9, -60, -33, -33, -29, -50, -26, -60, -1, -18, 
  -33, -128, -60, -128, -8, 1, -12, -50, -33, -128, 
  64, 78, 92, 62, 71, 51, 76, 45, 67, 31, 
  41, 21, 47, 10, 57, 44, 69, 53, 68, 44, 
  61, -3, 48, 40, 63, 75, 99, 75, 51, 50, 
  93, 87, 89, 70, 81, 74, 82, 61, 79, 31, 
  113, 98, 118, 94, 112, 95, 110, 80, 27, -2, 
  57, 32, 44, -77, 36, 10, 51, 39, 57, 50, 
  77, 47, 81, 56, 71, 66, 91, 78, 86, 56, 
  79, 49, 45, 38, 67, 52, 85, 57, 69, 44, 
  102, 76, 96, 80, 110, 89, 104, 82, 90, 66, 
  67, 50, 64, 33, 62, 65, 71, 55, 93, 74, 
  92, 84, 98, 62, 92, 77, 106, 78, 100, 70, 
  80, 29, 44, 44, 72, 57, 88, 68, 77, 41, 
  93, 61, 49, 27, 99, 69, 87, 84, 110, 68, 
  85, 35, 46, 50, 90, 57, 92, 69, 91, 83, 
  112, 90, 95, 75, 96, 84, 99, 75, 96, 69, 
  73, 29, 40, 42, 62, 49, 90, 60, 68, 37, 
  87, 47, -26, 35, 91, 55, 79, 88, 109, 53, 
  79, 19, 73, 47, 83, 64, 90, 80, 99, 84, 
  113, 80, 81, 66, 98, 80, 94, 72, 95, 72, 
  77, 36, 50, 46, 74, 44, 64, 42, 59, -4, 
  85, 44, -77, 42, 82, 29, 99, 86, 102, 49, 
  80, 69, 89, 64, 79, 74, 89, 79, 106, 78, 
  91, 22, 68, 53, 92, 60, 66, 37, 68, 17, 
  63, -3, 44, 32, 59, 30, 59, 29, 50, 17, 
  83, 39, -77, 43, 72, -43, 99, 66, 67, 90, 
  102, 82, 99, 79, 92, 67, 94, 74, 107, 71, 
  79, 31, 70, 56, 69, 36, 66, 36, 68, 20, 
  54, -128, 32, 43, 66, 1, 69, 36, 17, 4, 
  75, 6, 11, 47, 64, -14, 93, 36, 84, 87, 
  89, 57, 61, 38, 76, 49, 89, 79, 88, 42, 
  48, -50, 40, 15, 67, 42, 63, 36, 67, 39, 
  59, 4, 39, 30, 69, 43, 57, 7, 54, 35, 
  60, -128, 30, 37, 40, 41, 91, 19, 65, 24, 
  29, -77, 45, 15, 68, 34, 80, 65, 64, 22, 
  13, -128, -6, -128, 33, -4, 50, -77, 12, -50, 
  37, -2, 36, 21, 53, 17, 54, 25, 40, -16, 
  58, -128, 46, 6, -14, 20, 65, -128, 61, -2, 
  50, 6, -10, -128, -77, -2, 54, -12, 38, -128, 
  -128, -128, -128, -128, -128, -128, -20, -128, -128, -128, 
  6, -1, -43, -128, 39, -16, 40, -43, 24, -20, 
  7, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -26, -128, -60, -128, 22, -128, -3, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  4, 21, 43, 19, 59, 49, 48, 31, 57, -23, 
  -128, -128, -128, -128, -128, -128, -33, -128, -128, -128, 
  -128, -128, -26, -128, 2, -128, -128, -128, -33, -128, 
  -128, -128, -128, -128, -128, -128, 5, -128, -50, -128, 
  35, 65, 89, 65, 87, 73, 98, 77, 93, 61, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -26, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -10, -128, 
  1, 42, 82, 46, 79, 69, 91, 73, 97, 69, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -14, 24, 63, 53, 89, 74, 95, 74, 90, 69, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -18, -128, -33, -60, 38, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  11, 33, 68, 51, 104, 74, 85, 59, 77, 38, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 2, -128, -60, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  39, 48, 84, 63, 87, 63, 79, 44, 64, 31, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  28, 47, 88, 77, 97, 43, 65, 34, 68, 36, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -2, -128, 
  59, 49, 82, 63, 85, 45, 47, -1, 51, -2, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -20, -128, 
  54, 31, 68, 61, 75, 8, 39, -128, 31, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 4, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -43, 
  70, 56, 73, 61, 60, -26, 11, -128, 4, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, 1, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 9, 5, 
  64, 27, 79, 13, -33, -128, -128, -128, -29, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 11, -50, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -60, 45, 34, 
  77, -18, 40, -128, -128, -128, -128, -128, -128, -128, 
  -128, -50, 60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -16, -128, -77, -128, -43, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 10, -4, 
  -23, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, -128, -128, -128, -128, -128, -128, 
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
