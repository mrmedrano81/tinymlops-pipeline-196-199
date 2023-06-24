/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/9b3ea809_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_9b3ea809_nohash_0.cc" \
 */
#include "no_9b3ea809_nohash_0.h"


const int g_no_9b3ea809_nohash_0_width = 40;
const int g_no_9b3ea809_nohash_0_height = 49;
alignas(16) const signed char g_no_9b3ea809_nohash_0_data[] = {
  109, 94, 113, 94, 103, 83, 87, 81, 85, 74, 
  90, 82, 85, 69, 74, 70, 72, 75, 87, 69, 
  78, 67, 82, 69, 79, 76, 75, 77, 89, 80, 
  82, 69, 88, 82, 92, 72, 84, 79, 84, 67, 
  99, 83, 100, 56, 89, 80, 96, 70, 82, 61, 
  83, 70, 59, 23, 53, 53, 76, 51, 87, 61, 
  64, 65, 76, 62, 78, 60, 77, 64, 77, 59, 
  68, 66, 76, 65, 78, 69, 75, 69, 77, 53, 
  94, 66, 77, 34, 62, 50, 87, 69, 63, 54, 
  72, 59, 66, 33, 69, 57, 70, 43, 76, 64, 
  70, 57, 70, 54, 80, 65, 79, 44, 57, 53, 
  82, 64, 78, 49, 72, 58, 75, 57, 81, 54, 
  55, 49, 89, 64, 62, 52, 60, -18, 67, 54, 
  67, 40, 77, 56, 58, 35, 70, 56, 60, 45, 
  77, 55, 70, 50, 67, 40, 65, 41, 63, 40, 
  74, 35, 58, 51, 56, 49, 73, 45, 71, 39, 
  84, 27, 51, 22, 40, 45, 76, 52, 69, 44, 
  64, 19, 61, 21, 58, 26, 42, 15, 69, 55, 
  52, 37, 60, 41, 73, 34, 54, 43, 70, 41, 
  58, 35, 65, 17, 69, 47, 75, 25, 66, 48, 
  75, 40, 49, 5, 55, -60, 4, -7, 70, 32, 
  59, -10, 54, 52, 57, 22, 37, 4, 56, 31, 
  67, 25, 54, 42, 61, 33, 65, -1, 57, 19, 
  50, 53, 67, 39, 64, 40, 59, 30, 61, 37, 
  50, 37, 56, 0, 49, 34, 64, 1, 57, 22, 
  0, -29, 28, 6, 63, 36, 61, 45, 62, 34, 
  58, 25, 64, 46, 63, 11, 64, 45, 70, 16, 
  63, 43, 59, -6, 56, 24, 54, 37, 57, 15, 
  77, 26, 53, 52, 79, -26, 16, 24, 63, 37, 
  56, 23, 61, 37, 33, -4, 53, 31, 10, -16, 
  55, 9, 53, 9, 34, -43, 60, 34, 46, 13, 
  49, 39, 65, 6, 52, 30, 55, 31, 56, 25, 
  63, -12, 40, 14, 66, 47, 70, -4, 25, -29, 
  62, -14, 44, 32, 56, 52, 65, 43, 70, 39, 
  60, 42, 56, 37, 50, -20, 39, 1, 49, -6, 
  44, 12, 50, 4, 42, 2, 46, 8, 43, 1, 
  64, -33, 41, 61, 80, -29, 51, 34, 59, 38, 
  34, -43, 33, 4, 34, 5, 47, -4, 20, 33, 
  49, 14, 49, -23, 19, 0, 45, 29, 31, 0, 
  40, 31, 37, -6, 47, -10, 45, -14, 40, -23, 
  52, 45, 59, -23, 12, -14, 45, 14, 34, -26, 
  48, 25, 44, -128, 9, -18, 35, 21, 59, -8, 
  11, -10, 51, 9, 45, 31, 40, 19, 33, -8, 
  50, 9, 44, 10, 52, -7, 45, 4, 37, -8, 
  34, -128, 26, 1, 43, -14, 39, 35, 70, -7, 
  58, 27, 32, 15, 55, -20, -3, -128, 36, -77, 
  18, -16, 29, -128, 35, 17, 34, -128, 49, 29, 
  52, 5, 41, -37, 50, -3, 42, -20, 45, -8, 
  60, 14, 53, -33, 42, 23, 53, -6, 37, 16, 
  48, -29, 50, 34, 37, -37, 44, -20, 54, -23, 
  1, -43, 16, -12, 31, -43, 29, 18, 54, -10, 
  40, -128, 25, -2, 18, -23, 57, -16, 32, -2, 
  33, 19, 46, 19, 50, 19, 50, 7, 11, 35, 
  54, -60, 11, -128, 4, -43, 32, 21, 33, -50, 
  17, -12, 44, 0, 35, -14, 8, -50, 31, -4, 
  41, -7, 34, 7, 49, -77, 38, -23, 29, -8, 
  46, -77, 26, -43, 50, 18, 21, -7, 19, 11, 
  -20, -50, 44, -60, 32, -12, 25, -1, 34, -128, 
  4, -10, 37, -37, 27, -128, 40, -2, 34, -4, 
  39, -20, 42, -4, 42, 15, 39, -33, 27, 22, 
  35, -26, 29, 8, 50, 7, 50, -23, 29, -60, 
  -7, -60, 28, -43, 17, -12, 43, -60, 18, 2, 
  30, -77, 33, -50, -16, -8, 46, -33, -7, -128, 
  50, 0, 17, -10, 45, 5, 33, -14, 26, -50, 
  56, -23, 34, -128, 21, -4, 39, -128, -14, 13, 
  36, -43, 49, -1, -33, -128, 53, 4, -18, -50, 
  26, -2, 16, -128, 4, -16, 40, -77, 36, 0, 
  46, -43, 51, -18, 26, -43, 35, 1, 29, -33, 
  -50, -26, 6, -128, 47, 4, 34, -128, 14, -128, 
  7, -128, -10, -43, 35, -6, 42, 4, 34, 20, 
  40, -60, 13, -128, 12, 4, 35, -60, 23, -60, 
  12, -60, 14, -33, 43, 4, 40, -43, 9, -29, 
  109, 86, 85, 88, 110, 79, 81, 62, 57, 26, 
  45, 17, 44, -16, 9, -77, 19, -128, 7, -3, 
  24, 12, 58, 39, 38, -60, 26, -43, 1, -3, 
  45, -18, 16, 13, 55, -8, 33, -33, 13, -60, 
  105, 83, 113, 86, 100, 85, 96, 70, 85, 54, 
  66, 46, 71, 52, 49, -16, 27, -33, 49, -128, 
  -7, 20, 74, 50, 39, -12, 27, -128, -12, -16, 
  47, -2, 24, -7, 57, 14, -20, -128, 16, -60, 
  99, 48, 103, 88, 95, 77, 102, 67, 95, 62, 
  85, 50, 69, 50, 69, 51, 67, -16, 30, -23, 
  46, 45, 84, 63, 54, -37, 21, -18, 25, -7, 
  68, 54, 64, 69, 83, 19, 41, -50, 18, -37, 
  96, 56, 98, 81, 95, 67, 97, 53, 90, 52, 
  85, 50, 76, -43, 63, 48, 71, 11, 46, 25, 
  48, 45, 78, 54, 20, -60, 25, -10, 25, -8, 
  67, 44, 77, 67, 69, -3, 45, -3, 34, -43, 
  94, 57, 92, 75, 92, 54, 88, 49, 88, 45, 
  80, 34, 68, -6, 55, 34, 67, -12, 33, 15, 
  14, 47, 79, 10, 35, -50, -33, -29, -18, -77, 
  64, 53, 71, 46, 30, -29, 53, -77, 40, -8, 
  87, 49, 86, 66, 87, 47, 83, 49, 86, 44, 
  81, 45, 74, 31, 55, 20, 61, -1, 29, 4, 
  31, 23, 62, -128, 62, 34, 19, 2, 32, -33, 
  77, 64, 76, 10, -60, 9, 54, -43, 4, -33, 
  80, 42, 82, 61, 83, 52, 83, 44, 82, 42, 
  74, 41, 75, 14, 45, 4, 70, 15, 42, 4, 
  34, 22, 56, 35, 79, 55, 29, -43, 8, -7, 
  73, 55, 42, -128, 21, 29, 60, -26, 14, -77, 
  73, 39, 66, 55, 90, 34, 76, 63, 75, 62, 
  91, 65, 91, 57, 67, 40, 78, 74, 89, 77, 
  102, 75, 86, 59, 92, 76, 98, 75, 74, 90, 
  110, 87, 107, 40, 47, 20, 74, 57, 72, 67, 
  64, 9, 72, 46, 73, 29, 69, 71, 104, 77, 
  101, 75, 99, 64, 85, 60, 99, 85, 108, 93, 
  115, 69, 90, 67, 102, 82, 102, 77, 79, 73, 
  90, 57, 83, 35, 9, 65, 89, 64, 87, 77, 
  60, 1, 66, 33, 63, 21, 64, 77, 106, 80, 
  102, 76, 98, 69, 89, 72, 103, 87, 115, 91, 
  95, 51, 87, 62, 94, 70, 93, 63, 76, 54, 
  77, 33, 65, -10, 16, 63, 82, 42, 75, 72, 
  53, -37, 66, 20, 51, 41, 67, 72, 90, 80, 
  100, 72, 87, 65, 95, 80, 102, 90, 107, 75, 
  69, 46, 69, 51, 87, 55, 90, 47, 77, 35, 
  77, 37, 67, 9, 27, 50, 77, 39, 74, 52, 
  54, -33, 66, 5, 36, 52, 69, 67, 82, 75, 
  89, 70, 82, 70, 96, 84, 104, 79, 75, -2, 
  48, 36, 69, 46, 82, 49, 79, 53, 78, 23, 
  65, 11, 60, 13, 11, 39, 71, 34, 69, 42, 
  52, -50, 65, 4, 37, 52, 67, 61, 71, 71, 
  84, 65, 74, 68, 101, 84, 97, 33, 61, -43, 
  42, 19, 59, 29, 65, 31, 69, 51, 67, 9, 
  58, 12, 71, 38, -23, 14, 66, 32, 56, 19, 
  50, -43, 62, -14, 31, 52, 67, 65, 77, 70, 
  84, 72, 83, 67, 103, 74, 85, -60, 50, -128, 
  16, 25, 59, 36, 64, 38, 74, 59, 80, -50, 
  46, 2, 74, 39, -12, -29, 46, 6, 55, -33, 
  44, -77, 63, -4, 34, 37, 55, 62, 73, 62, 
  77, 67, 80, 69, 103, 56, 70, -16, 36, -128, 
  -33, -12, 44, 9, 67, 43, 64, 46, 74, -128, 
  43, -8, 55, -10, -77, -12, 47, -18, 49, -20, 
  35, -128, 59, -23, 37, 44, 65, 62, 70, 46, 
  66, 64, 82, 74, 99, 27, 42, -50, 19, -128, 
  14, -33, 51, -10, 65, 37, 59, 38, 60, -60, 
  33, -20, 47, -128, -20, -128, 27, -26, 39, -50, 
  11, -128, 54, -60, 45, 49, 70, 59, 67, 40, 
  64, 59, 84, 66, 81, -12, 22, -128, -16, -128, 
  -50, -128, 26, -33, 57, 25, 52, 20, 44, -128, 
  9, -50, -1, -128, -128, -128, -14, -128, -1, -128, 
  2, -128, 51, -77, 51, 49, 72, 55, 64, 36, 
  68, 60, 85, 55, 38, -128, -20, -128, -77, -128, 
  -128, -128, -14, -128, 50, 27, 37, -10, 36, -128, 
  -60, -128, -128, -128, -8, -128, -128, -128, -60, -128, 
  0, -128, 49, -77, 50, 44, 69, 54, 65, 27, 
  69, 58, 82, 48, -128, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, 41, 24, 36, 0, 35, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -20, -43, 
  1, -128, 47, -77, 52, 42, 67, 49, 64, 15, 
  69, 55, 65, 16, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 18, 5, 45, -14, 32, -128, 
  -37, -128, -128, -128, -128, -128, -128, -128, 49, -7, 
  11, -128, 37, -128, 50, 44, 63, 35, 60, 29, 
  67, 51, 51, -128, -29, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 8, 8, 56, 10, 52, -128, 
  -14, -77, -128, -128, -128, -128, -128, -128, 55, -23, 
  23, -128, 15, -128, 43, 42, 66, -60, 37, 39, 
  66, 26, 54, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -23, 51, 11, 60, -128, 
  -33, -128, -128, -128, -60, -128, -128, -2, 72, 2, 
  32, -33, 30, -12, 24, 25, 69, -128, 4, 17, 
  65, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 32, -77, 35, -128, 
  -60, -128, -128, -128, -128, -128, -128, -23, 63, -43, 
  27, -14, 10, -18, 29, -23, 63, -128, 1, -128, 
  -12, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, 0, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, 54, -128, 
  -2, -29, -128, -128, 20, -128, 16, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, 1, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
