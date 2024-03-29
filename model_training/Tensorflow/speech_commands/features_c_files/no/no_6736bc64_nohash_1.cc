/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/6736bc64_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_6736bc64_nohash_1.cc" \
 */
#include "no_6736bc64_nohash_1.h"


const int g_no_6736bc64_nohash_1_width = 40;
const int g_no_6736bc64_nohash_1_height = 49;
alignas(16) const signed char g_no_6736bc64_nohash_1_data[] = {
  107, 84, 82, 66, 73, 77, 80, 70, 78, 69, 
  94, 80, 68, 71, 69, 53, 54, 25, 53, 25, 
  35, 46, 57, 55, 53, 42, -4, 4, 5, 17, 
  5, -7, 5, 32, 31, 17, 23, -12, -10, -18, 
  91, 79, 89, 69, 75, 52, 74, 26, 71, 56, 
  83, 65, 65, 62, 72, 23, 42, 39, 35, 50, 
  54, 12, 21, 4, 16, 7, 4, 8, 30, 17, 
  4, 12, -6, 15, 15, 7, -12, -4, -6, -29, 
  87, 53, 71, 35, 74, 70, 82, 71, 75, 46, 
  71, 44, 58, 34, 39, -7, 39, 17, 23, 19, 
  41, 9, 38, 30, 48, 18, 24, -20, -14, -20, 
  2, -8, -14, -16, -3, -8, -7, -33, -29, -50, 
  76, 51, 55, 15, 39, 49, 68, 0, 21, 54, 
  75, 41, 49, 21, 46, 34, 29, 5, 49, 15, 
  11, -4, 22, -23, 22, 11, 5, -37, 0, -7, 
  5, -16, -14, -37, -23, -23, -14, -26, -2, -43, 
  63, 56, 75, 60, 70, -3, 59, 35, 45, 32, 
  65, 34, 62, 34, 56, -6, 32, 31, 40, 15, 
  25, 19, 40, 10, 28, 13, 11, -7, 17, -26, 
  -23, -18, -8, 1, 26, -18, -4, -16, -16, -60, 
  75, 65, 82, 64, 73, 12, 27, -7, 60, 29, 
  45, 13, 56, 28, 59, 6, 34, 22, 36, -8, 
  30, 17, 42, 13, 41, 17, 9, -26, 2, -50, 
  -23, -2, 42, 31, 41, 10, -6, -37, 4, -43, 
  79, 60, 75, 29, 54, 46, 70, 42, 71, 37, 
  64, -10, 38, 17, 58, 34, 42, 7, 51, 15, 
  31, 4, 15, -14, 27, -20, -26, -43, -26, -77, 
  -7, -43, 28, 9, 28, -6, 2, -26, -1, -43, 
  91, 62, 53, 48, 79, 28, 42, -1, 40, 4, 
  14, -43, 30, 0, 38, -18, 1, 15, 48, -18, 
  39, -23, 5, -7, 39, -29, -60, -50, 11, -6, 
  16, 4, 14, -33, 8, -77, -20, -33, -18, -60, 
  47, -77, -16, -128, -128, -128, 8, 16, 50, 16, 
  63, 32, 56, 24, 45, 12, 23, -29, 17, -14, 
  21, -29, 15, -33, 19, -50, -10, -43, -2, -20, 
  0, -29, -12, -6, 20, -23, -20, -23, 1, -60, 
  61, 24, 61, 15, 57, 18, 25, -12, -6, -37, 
  52, 10, 53, 32, 29, -128, 12, -43, 9, -50, 
  -23, -26, 22, -20, 19, -14, -6, -60, -12, -77, 
  -16, -37, -7, -37, -20, -77, -4, -20, -20, -77, 
  -6, -2, 47, -50, -1, -43, 16, -128, 7, -60, 
  44, -12, 37, -29, -3, -4, 15, -16, 9, 6, 
  34, -77, 20, -3, 17, -16, -3, -60, -12, -43, 
  -29, -128, -14, -43, -23, -60, -16, -128, -16, -77, 
  19, -128, 54, -10, 12, -77, 43, 19, 57, 4, 
  32, -128, 30, -20, 40, -20, 31, -43, -8, -77, 
  9, -128, 20, -128, -2, -77, -37, -33, -50, -77, 
  -18, -77, -14, -128, -18, -60, -29, -60, -37, -77, 
  70, 25, 64, 10, 19, 9, 62, -43, -60, -128, 
  11, -50, 39, -16, 32, -3, 29, 1, 24, -2, 
  15, 2, -18, -16, 30, -43, -4, -29, -10, -77, 
  -18, -128, -43, -29, -2, -128, -37, -128, -77, -128, 
  0, -128, 2, -128, -50, -37, 19, -128, 7, -128, 
  7, -50, -37, -128, -14, -77, 23, 0, 36, -77, 
  1, -16, -7, -18, -12, -128, -26, -128, -26, -50, 
  -20, -26, -7, -128, -14, -128, -60, -128, -77, -128, 
  -43, -18, 59, -14, 9, -128, 23, -33, -23, -33, 
  8, -50, -37, -128, -7, -128, -18, -7, 5, -128, 
  8, -6, 27, -50, 14, 2, -6, -128, -7, -77, 
  5, -33, -12, -60, -16, -60, -43, -128, -50, -77, 
  -128, -29, 51, 1, 37, -128, -23, -128, -4, -29, 
  40, -26, -4, -128, -8, -26, -43, -128, -33, -128, 
  13, -10, -26, -128, -26, -60, -12, -33, -23, -128, 
  -33, -128, -23, -77, -33, -128, -50, -77, -60, -128, 
  -23, -77, -37, -128, 27, 11, 19, -37, 32, -18, 
  31, -18, 44, -60, -20, -77, -37, -128, -10, -60, 
  0, -60, -14, -128, -43, -128, -37, -77, -23, -128, 
  -12, -60, -10, -128, -29, -77, -20, -128, -50, -128, 
  -128, -128, 49, 16, 55, 21, 29, -26, 54, 26, 
  47, -16, -26, -128, 34, -16, -4, -60, 16, -43, 
  -26, -37, 0, -128, -6, -50, -18, -128, -23, -20, 
  -37, -128, -50, -77, -14, -43, -26, -128, -60, -128, 
  -3, -3, 23, 71, 92, 11, 23, -18, 44, 8, 
  -2, -33, 21, -29, 37, -2, -18, -77, -4, -60, 
  5, -18, 21, -26, -33, -128, -18, -50, 7, -16, 
  -14, -128, -12, -60, -43, -128, -33, -128, -77, -128, 
  86, 66, 96, 56, 76, 12, 14, -77, 5, 0, 
  31, -43, -12, -128, -60, -128, 16, -7, -3, -128, 
  17, -37, -43, -26, 20, -77, -10, -14, 29, 0, 
  -10, -77, -60, -128, -29, -128, -50, -128, -77, -128, 
  113, 90, 115, 91, 102, 80, 82, -33, 5, -43, 
  40, 15, 51, -60, -2, -128, -37, -128, -33, -128, 
  -18, -60, 43, 49, 58, -33, 2, 58, 102, 89, 
  99, 56, 25, -77, -26, -77, -18, -60, -14, -37, 
  112, 87, 109, 87, 91, 81, 94, 67, 63, 45, 
  62, 32, 34, -18, -20, -77, -12, -128, -77, -128, 
  -18, -60, 39, 57, 72, 37, 27, 45, 91, 70, 
  85, 32, 34, -16, -2, -23, 2, -7, 8, 2, 
  93, 74, 103, 70, 72, 46, 68, 48, 84, 65, 
  70, 15, 30, -128, -33, -43, -18, -37, 32, -2, 
  -77, -128, -8, -29, 1, -128, -29, -14, 47, -20, 
  29, 11, 40, -128, -60, -43, -10, -18, 9, -18, 
  63, 67, 83, 44, 89, 47, 91, 59, 62, 16, 
  57, -7, -33, -128, -128, -128, -37, -60, 8, -128, 
  27, -60, -3, -50, 5, -77, -16, -128, 24, -18, 
  14, 1, 4, -10, -50, -33, 14, -33, -2, 8, 
  56, 68, 94, 58, 92, 48, 80, 51, 31, 28, 
  74, 42, -23, -128, -77, -128, -23, -77, -10, -128, 
  -60, -37, -14, -128, 8, -128, -60, -128, 19, -20, 
  42, -43, 11, -60, -33, -29, 13, -26, 7, -8, 
  55, 42, 69, 60, 102, 47, 34, -128, 64, 42, 
  -2, -20, 49, -77, -33, -128, -4, -60, -26, -128, 
  0, -8, -10, -128, 4, -128, -26, -60, 27, -50, 
  37, -26, 18, -43, -2, -26, 4, -33, -1, -12, 
  42, -43, 59, 54, 97, 60, 57, -14, 22, 37, 
  0, -128, 40, -128, 1, 5, 36, -128, -20, -50, 
  -14, -77, -1, 15, 44, -29, -18, -128, -33, -128, 
  -33, -128, -23, -128, -37, -128, -29, -128, -43, -128, 
  66, 55, 94, 68, 93, 83, 104, 89, 111, 85, 
  95, 47, 64, 40, 65, 68, 91, 92, 114, 85, 
  105, 95, 114, 94, 104, 79, 77, 42, 62, -2, 
  29, -29, 28, 4, 39, 52, 92, 80, 84, 61, 
  66, 51, 73, 52, 91, 82, 115, 94, 114, 86, 
  98, 84, 110, 85, 106, 91, 108, 91, 107, 83, 
  94, 84, 112, 88, 114, 100, 119, 93, 106, 76, 
  83, 81, 102, 82, 92, 87, 109, 93, 111, 91, 
  57, -128, 41, 39, 80, 84, 111, 87, 106, 75, 
  97, 82, 105, 79, 106, 84, 101, 54, 72, 65, 
  83, 70, 111, 89, 102, 88, 115, 87, 100, 81, 
  76, 39, 64, 46, 73, 65, 93, 71, 98, 67, 
  42, 15, 59, 28, 77, 88, 110, 83, 99, 46, 
  95, 78, 102, 73, 99, 82, 113, 75, 79, 61, 
  76, 40, 94, 70, 85, 63, 100, 66, 74, 37, 
  69, 38, 75, 40, 72, 61, 88, 59, 92, 69, 
  34, -23, 35, 25, 84, 86, 105, 72, 83, 48, 
  102, 80, 99, 82, 100, 84, 110, 63, 49, 1, 
  79, 42, 81, 56, 79, 49, 81, 54, 79, 43, 
  55, 9, 50, 27, 72, 40, 77, 55, 84, 45, 
  52, 31, 49, 37, 85, 73, 90, 66, 77, 53, 
  91, 73, 92, 75, 105, 82, 87, 36, 67, 51, 
  58, 35, 76, 42, 74, 36, 77, 43, 66, 7, 
  55, -33, 48, -26, 60, 35, 75, 67, 90, 57, 
  60, 51, 63, 19, 83, 65, 82, 53, 63, 56, 
  88, 70, 92, 80, 93, 42, 47, -14, 51, 39, 
  61, -37, 56, 6, 64, 40, 72, 21, 56, -43, 
  46, -26, 64, 14, 49, 28, 63, -2, 67, 37, 
  56, 50, 60, 12, 76, 51, 71, 46, 59, 37, 
  76, 60, 84, 67, 86, 26, 47, -33, 8, -128, 
  4, -128, 44, 8, 53, 30, 59, -16, 10, -128, 
  -12, -128, 37, -14, 51, -16, 33, -128, 11, -77, 
  59, 47, 60, 17, 74, 35, 54, 7, 39, 50, 
  80, 61, 85, 50, 24, -77, 2, -128, -128, -128, 
  -128, -128, -37, -128, 30, 0, 19, -128, -128, -128, 
  -29, -128, 11, -60, 11, -128, -128, -128, 9, -128, 
  43, 23, 49, 19, 59, 7, 45, -77, 45, 32, 
  77, 68, 75, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 19, -128, -2, -128, -128, -128, 
  -128, -128, -128, -128, 0, -128, 10, -33, 7, -77, 
  23, 10, 54, -16, 34, -128, -29, -128, 7, 33, 
  81, 48, 54, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 19, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  29, 16, 50, -128, 24, -128, -43, -128, -1, 51, 
  74, -128, -29, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -128, -128, -128, 
  -3, -128, 20, -128, 12, -128, -77, -128, -50, -8, 
  25, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 24, -10, 
  50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -33, 
  35, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
