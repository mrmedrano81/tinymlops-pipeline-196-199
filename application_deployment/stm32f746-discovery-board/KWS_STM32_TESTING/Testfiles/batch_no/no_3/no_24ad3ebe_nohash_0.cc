/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/24ad3ebe_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_24ad3ebe_nohash_0.cc" \
 */
#include "no_24ad3ebe_nohash_0.h"


const int g_no_24ad3ebe_nohash_0_width = 40;
const int g_no_24ad3ebe_nohash_0_height = 49;
alignas(16) const signed char g_no_24ad3ebe_nohash_0_data[] = {
  56, 63, 55, 54, 69, 44, 39, 37, 49, 34, 
  40, 30, 62, 52, 54, 62, 76, 65, 70, 74, 
  89, 82, 99, 88, 91, 77, 79, 69, 71, 73, 
  77, 67, 71, 57, 63, 55, 57, 58, 59, 45, 
  62, 2, 67, 54, 49, 37, 61, 46, 32, 42, 
  54, 35, 54, 58, 58, 50, 63, 48, 59, 67, 
  82, 65, 90, 65, 94, 72, 85, 73, 86, 68, 
  75, 71, 84, 74, 89, 68, 78, 69, 72, 49, 
  58, 32, 59, 44, 39, 49, 39, 49, 50, 40, 
  50, 32, 40, 16, 50, 42, 59, 45, 64, 52, 
  66, 62, 82, 66, 80, 54, 70, 56, 80, 59, 
  79, 47, 61, 45, 42, 44, 45, 28, 44, 23, 
  60, 25, 49, 45, 64, 20, 52, 45, 44, 48, 
  62, 6, 24, 5, 47, 53, 56, 58, 64, 60, 
  77, 65, 83, 40, 63, 55, 68, 64, 72, 57, 
  77, 54, 45, 22, 34, 19, 49, 20, 52, 20, 
  64, 65, 64, 34, 36, 4, 20, 25, 28, -12, 
  29, 23, 17, -6, 43, 32, 55, 17, 49, 46, 
  59, 32, 73, 44, 68, 49, 73, 45, 81, 54, 
  77, 45, 61, 12, 34, 4, 48, 6, 46, 10, 
  4, 14, 37, 8, 45, 27, 36, 4, 37, 34, 
  29, 35, 51, 30, 36, 39, 57, 40, 64, -20, 
  61, 59, 75, 55, 75, 51, 64, 25, 67, 34, 
  72, 40, 55, -7, 9, 0, 37, 4, 22, -23, 
  16, 19, 48, -2, 20, 15, 44, -7, 41, 5, 
  39, 36, 54, 25, 32, -3, 69, 29, 63, 21, 
  55, 44, 65, 42, 66, 52, 74, 11, 65, 34, 
  57, 35, 56, 27, 36, -10, 40, 4, 34, 0, 
  69, 35, 28, 11, 36, -60, 54, 27, 43, -37, 
  34, -2, 25, -2, 35, 50, 80, 37, 69, 4, 
  55, 37, 70, 19, 78, 57, 64, 42, 71, 18, 
  64, 49, 52, 11, 40, -1, 31, -8, 32, -14, 
  52, -16, 27, -26, 51, 12, 35, -20, 35, -77, 
  -12, -8, 26, -2, 49, -60, 32, 23, 48, 9, 
  49, -7, 67, 40, 40, 14, 65, 10, 63, 44, 
  68, 38, 54, -6, 37, -2, 20, -60, 2, -16, 
  42, -128, -37, -60, 23, -37, 29, -8, 40, 4, 
  40, 30, 4, 19, 45, -60, 46, -7, 32, 18, 
  56, 29, 54, -23, 28, 18, 50, -77, 57, 34, 
  47, -43, 49, -12, 34, -26, 38, -23, 20, -10, 
  60, 34, 60, 25, 11, -50, 41, -20, -60, -60, 
  0, -128, 33, -16, -77, -128, 23, 11, 60, -12, 
  32, -60, 37, -43, 8, 11, 29, 1, 52, 16, 
  28, 8, 42, -23, 27, -77, 5, -33, 34, -43, 
  31, -77, 29, -128, 18, -10, 16, 19, 45, 9, 
  4, -60, 24, -43, 18, -128, -4, -60, 45, -60, 
  15, -128, 48, -18, 16, -16, 34, -18, 52, 4, 
  24, -26, 32, -18, 16, 5, 40, -4, 19, -37, 
  34, -50, 26, -20, 6, 1, 2, -128, 32, -50, 
  37, 32, 42, -77, -6, -16, 9, -43, 22, -128, 
  37, -128, 8, -50, -18, -60, 48, -60, -18, -60, 
  1, -128, -2, -77, 2, -128, 5, -8, 25, -50, 
  29, 2, 42, 4, 29, -7, -16, -20, 32, -29, 
  -33, -26, 30, -50, -2, -128, 8, -128, -7, -128, 
  -37, -128, -128, -128, -16, -128, 8, -128, 21, -50, 
  -77, -128, -29, -77, 16, -128, 16, -37, 25, -43, 
  47, 7, 28, -20, 28, -60, 17, -23, -33, -128, 
  15, -23, -23, -60, 25, -128, -18, -77, 4, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -18, -128, -26, -128, -6, -60, 5, -26, 
  -77, -128, -12, -128, -23, 0, 42, -77, 19, 15, 
  -26, -128, -128, -128, -128, -128, -128, -60, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, 17, -14, -37, -60, 25, -60, 
  5, -128, 26, -128, 36, -43, -8, -23, -26, -16, 
  37, -6, -20, -77, -4, -128, -33, -128, -50, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, 14, -60, -16, -128, 13, -128, 
  -128, -128, 6, -128, -23, -128, 9, -128, -128, -128, 
  26, -60, -10, -37, -23, -43, -37, -128, -128, -128, 
  29, -128, -33, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -18, -128, -8, -128, -2, -77, -6, -50, 
  -18, -128, -37, -128, 12, -37, -20, -128, -16, -60, 
  -4, -26, -4, -128, -128, -128, -43, -128, -128, -128, 
  25, -128, -128, -128, -60, -128, -50, -128, -128, -128, 
  -77, -128, -4, -33, -1, -50, -3, -50, -26, -128, 
  -23, -29, -29, -128, -26, -128, 45, -23, -1, -60, 
  -77, -128, -16, -128, -6, -128, 0, -43, -8, -128, 
  -43, -128, -128, -128, -128, -128, -37, -128, -128, -128, 
  -128, -128, -128, -128, -20, -128, 14, -29, 13, -43, 
  11, 14, 35, -128, -26, -128, -12, -77, -18, -14, 
  39, -128, 32, 1, -16, -128, -128, -128, -29, -43, 
  -23, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, 0, -37, 13, -60, 
  15, -77, 4, -128, -50, -128, -50, -60, 25, -128, 
  -10, -128, -43, -128, -60, -128, -43, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -6, -128, 6, -50, 0, -128, 
  -23, -128, -43, -128, 9, -77, -12, -128, -29, -128, 
  -77, -128, -26, -37, 19, -50, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -18, -60, -29, -77, -14, -128, 
  -1, -43, -128, -128, 4, -60, 4, -50, -7, -128, 
  -37, -60, 9, -128, -128, -128, -128, -128, -128, -128, 
  -29, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -23, -128, 5, -128, -4, -60, 
  107, 85, 78, 6, 34, -18, -128, -6, 14, -37, 
  13, -128, -60, -128, 13, -128, -50, -37, -2, -128, 
  -43, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -60, -33, -6, -29, 13, -26, 15, -43, 
  96, 77, 93, 50, 40, -50, -18, -128, 8, -43, 
  -29, -128, -77, -128, 7, -77, -60, -14, -23, -26, 
  37, -128, 10, -8, 44, 19, -128, -128, -128, -128, 
  -128, -128, 45, 11, -23, -60, 28, 20, 35, 47, 
  97, 82, 106, 76, 64, 32, 59, 30, 69, 41, 
  62, 37, 10, -50, -77, -33, 7, -37, 25, 57, 
  87, 58, 80, 72, 94, 75, 45, -128, -33, 21, 
  34, 36, 73, 52, 64, 45, 55, 4, 49, 55, 
  90, 59, 102, 81, 71, 51, 72, 47, 77, 54, 
  72, 44, 43, -16, -50, -77, 37, -128, 32, 58, 
  92, 70, 90, 76, 97, 78, 31, -128, -6, 31, 
  30, 32, 67, 18, 50, 58, 76, 17, 47, 46, 
  92, 45, 95, 72, 70, 54, 77, 57, 75, 53, 
  74, 42, 53, -33, 11, 12, 24, -60, 43, 63, 
  86, 59, 83, 66, 93, 67, 38, -77, -77, 23, 
  19, -77, 17, 39, 64, 49, 71, 54, 65, 44, 
  85, 44, 90, 68, 72, 48, 75, 54, 78, 54, 
  76, 29, 42, 7, -4, 25, 37, -77, 47, 71, 
  88, 35, 71, 55, 90, 67, 44, -128, -33, 45, 
  30, 6, 57, 50, 72, 29, 52, 37, 56, 36, 
  82, 31, 82, 57, 72, 52, 67, 42, 73, 44, 
  69, 22, 48, -128, 17, -18, 7, -128, 62, 44, 
  71, -7, 69, 45, 78, 48, 27, -128, -14, 9, 
  16, 33, 69, 18, 65, 43, 53, 38, 54, 24, 
  79, 9, 74, 47, 67, 49, 69, 50, 69, 46, 
  73, 42, 39, -43, 22, -37, 24, 48, 90, 55, 
  44, 23, 72, 52, 76, -7, -16, -128, -77, 20, 
  38, 22, 70, 34, 49, 40, 65, 38, 49, 0, 
  70, 25, 69, 35, 72, 68, 77, 48, 73, 45, 
  72, 36, 65, 57, 79, 48, 71, 80, 102, 54, 
  85, 73, 76, 62, 89, 64, 101, 83, 83, 54, 
  58, 42, 68, 39, 36, 39, 60, -16, 45, 11, 
  -77, -128, 31, -50, 89, 64, 107, 87, 105, 77, 
  92, 59, 84, 74, 95, 72, 105, 91, 113, 90, 
  100, 67, 75, 65, 83, 29, 94, 85, 88, 17, 
  57, 73, 98, 73, 62, 31, 74, 34, 65, 42, 
  -128, -128, 14, -128, 77, 52, 97, 72, 105, 75, 
  91, 64, 88, 72, 96, 81, 109, 92, 97, 60, 
  80, 72, 93, 66, 78, 46, 97, 80, 105, 61, 
  55, 67, 98, 76, 79, 46, 71, 24, 79, 53, 
  -128, -128, -8, -128, 67, 54, 70, 74, 96, 71, 
  80, 55, 90, 75, 97, 88, 108, 74, 80, 40, 
  74, 58, 83, 65, 78, 35, 89, 77, 100, 63, 
  57, 38, 94, 75, 82, 35, 76, 39, 70, 44, 
  -128, -77, -77, -128, 39, 50, 65, 72, 88, 73, 
  74, 63, 88, 69, 101, 82, 90, 40, 62, -10, 
  58, 40, 72, 32, 76, 44, 81, 62, 91, 55, 
  52, -128, 69, 65, 88, 42, 75, 42, 42, 24, 
  -128, -128, -128, -128, 54, 34, 76, 39, 85, 57, 
  82, 62, 86, 70, 102, 64, 70, -12, 44, -23, 
  57, 22, 57, 1, 59, 60, 81, 59, 84, 45, 
  58, -128, 52, 63, 96, 55, 73, 40, 56, 50, 
  -128, -128, -128, -128, 47, 9, 57, 44, 65, 33, 
  51, 52, 81, 67, 87, 10, 41, -128, 5, -128, 
  30, -77, 41, -128, 5, 44, 79, 33, 72, -10, 
  4, -128, -128, -37, 65, 14, 19, -16, 48, -16, 
  -128, -128, -128, -128, -18, -128, 25, -128, -3, -128, 
  -128, -26, 61, 46, 32, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -14, -128, -26, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 31, -128, 
  -128, -128, -128, -128, 39, 31, 55, -128, 11, -128, 
  43, 55, 83, -20, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 75, 25, 61, -4, 
  -2, -128, -128, -128, -128, -128, -128, -128, 11, -128, 
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
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -7, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
