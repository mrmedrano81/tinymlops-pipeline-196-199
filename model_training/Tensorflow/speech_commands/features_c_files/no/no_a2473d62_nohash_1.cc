/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/a2473d62_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_a2473d62_nohash_1.cc" \
 */
#include "no_a2473d62_nohash_1.h"


const int g_no_a2473d62_nohash_1_width = 40;
const int g_no_a2473d62_nohash_1_height = 49;
alignas(16) const signed char g_no_a2473d62_nohash_1_data[] = {
  105, 92, 115, 95, 110, 94, 101, 85, 105, 88, 
  102, 90, 103, 89, 105, 92, 90, 87, 101, 86, 
  102, 87, 101, 89, 86, 83, 95, 88, 95, 87, 
  100, 88, 99, 90, 100, 87, 101, 87, 99, 81, 
  104, 85, 89, 46, 85, 72, 88, 71, 90, 77, 
  98, 83, 90, 70, 88, 72, 85, 71, 94, 80, 
  98, 78, 97, 63, 85, 78, 96, 76, 93, 67, 
  87, 64, 85, 65, 81, 68, 85, 70, 84, 71, 
  95, 69, 80, 78, 96, 69, 89, 71, 85, 55, 
  80, 60, 84, 71, 80, 64, 96, 65, 90, 62, 
  73, 57, 86, 72, 95, 65, 74, 51, 85, 67, 
  81, 56, 76, 57, 83, 64, 84, 65, 85, 56, 
  86, 59, 87, 54, 87, 50, 73, 58, 83, 49, 
  72, 34, 80, 40, 74, 39, 73, 36, 78, 67, 
  79, 67, 75, 40, 77, 58, 77, 64, 77, 51, 
  80, 57, 84, 54, 74, 46, 74, 49, 71, 52, 
  79, 51, 47, 7, 46, 51, 83, 66, 83, 58, 
  77, 30, 60, 60, 90, 64, 93, 76, 97, 77, 
  92, 65, 92, 80, 103, 71, 96, 67, 85, 66, 
  80, 29, 74, 44, 67, 42, 70, 52, 77, 47, 
  89, 65, 83, 56, 71, 35, 84, 43, 62, 59, 
  64, 55, 85, 25, 60, 43, 70, 49, 74, 32, 
  73, 53, 75, 39, 87, 46, 70, 32, 62, 1, 
  53, 43, 75, 34, 67, 20, 69, 32, 64, 29, 
  65, 55, 68, -2, 44, 16, 74, 42, 80, 39, 
  58, 25, 61, 34, 51, -33, 52, 37, 58, 11, 
  65, -23, 54, 30, 61, 26, 54, -3, 47, 16, 
  77, 43, 64, 23, 63, 29, 52, 17, 51, 34, 
  64, -37, 37, -8, 51, 9, 56, 21, 60, 30, 
  73, 37, 55, 19, 64, 27, 66, 35, 53, -10, 
  56, 17, 60, 5, 10, -2, 60, -43, 58, 29, 
  58, -18, 56, 22, 55, 45, 71, 34, 57, 21, 
  75, 37, 63, -2, 26, -12, 75, 54, 74, 34, 
  40, 16, 59, 26, 34, -1, 45, 5, 42, 11, 
  64, -14, -12, -128, 21, 8, 58, 34, 53, 25, 
  57, 31, 67, 22, 62, 32, 60, 26, 51, 27, 
  38, -1, 18, -128, 65, 13, 55, -1, 30, 1, 
  59, 34, 62, 21, 63, 41, 63, 33, 67, 7, 
  60, 32, 68, 62, 86, 39, 56, -7, 50, 6, 
  49, 28, 48, -8, 53, 26, 49, 23, 37, 11, 
  12, -43, 53, -16, 37, 9, 66, -3, 55, 19, 
  30, -50, 39, 12, 47, 9, 57, 4, 9, -60, 
  48, 24, 52, -14, 50, -2, 63, 33, 48, 2, 
  42, 11, 40, 11, 47, 6, 56, 7, 55, -14, 
  54, -6, -10, -128, 56, 11, 46, 1, 37, -2, 
  69, -1, 54, -128, 47, -37, 57, -50, 33, 1, 
  39, -10, 42, -128, 12, -29, 53, 16, 44, -18, 
  50, 17, 54, -12, 39, 10, 45, -20, 51, -26, 
  -4, -128, 24, -128, -3, 15, 68, 29, 42, -20, 
  35, 4, 29, -37, 4, -77, 24, -128, -6, -128, 
  20, 4, 31, -128, 25, -37, 29, -20, 56, 11, 
  45, -26, 47, -2, 54, 4, 33, -3, 49, 11, 
  20, -128, -128, -60, 50, -43, 5, -128, 2, -23, 
  17, -77, 47, 4, 42, -12, 47, -37, 48, -29, 
  36, -37, 11, -128, -16, -37, 29, -60, 23, -50, 
  35, 4, 38, -12, 39, -60, 19, -14, 44, -16, 
  27, -128, -60, -128, -128, -128, 14, -26, 22, -10, 
  30, -128, 8, -18, 52, -60, -6, -77, 22, -50, 
  36, -128, -14, -128, -12, -43, -33, -20, 54, -1, 
  20, -50, 38, 11, 42, -20, 29, -37, 29, 9, 
  35, -50, 0, 26, 15, -128, 8, -29, 34, -43, 
  27, -50, 17, -14, 41, -4, 27, -23, 30, -77, 
  39, -23, 28, -77, 7, 0, -4, -60, 43, -18, 
  20, -26, 34, -43, 25, -77, 26, -18, 34, -77, 
  89, 70, 100, 87, 98, 49, 69, 24, 39, 24, 
  61, 30, 71, -18, 45, -77, 45, -33, -29, -33, 
  62, 63, 80, 54, 59, 20, 33, -50, 45, -14, 
  37, -14, 35, -60, 9, -128, 28, -20, 14, -43, 
  89, 84, 97, 85, 99, 75, 75, 43, 70, 19, 
  63, 45, 69, 75, 80, -20, 6, -128, 49, 38, 
  74, 78, 92, 68, 80, 50, 63, 9, 21, 2, 
  49, -16, 46, 1, 49, 40, 61, 22, 57, 34, 
  90, 76, 94, 79, 94, 72, 74, 47, 72, 16, 
  70, 44, 68, 59, 57, -128, -43, -16, 58, 9, 
  64, 56, 90, 52, 88, 52, 63, -7, 38, 13, 
  57, -23, 35, -128, 34, -60, 14, -29, 22, -37, 
  91, 65, 99, 75, 89, 59, 80, 37, 55, 49, 
  70, 49, 77, 48, 75, 44, 58, 44, 69, -4, 
  69, 61, 89, 62, 76, 44, 53, -60, -26, 6, 
  41, -29, 24, -26, 43, -43, 10, -12, 29, -60, 
  84, 52, 95, 64, 85, 58, 79, 47, 76, 47, 
  73, 42, 74, 41, 56, -2, 86, 65, 65, 43, 
  77, 67, 94, 64, 62, 37, 64, 44, 64, 31, 
  48, 26, 50, -14, 17, -37, 31, -77, 27, -50, 
  84, 45, 82, 52, 97, 87, 114, 97, 111, 86, 
  103, 78, 94, 61, 87, 80, 110, 97, 117, 86, 
  98, 74, 97, 81, 94, 89, 111, 84, 107, 75, 
  64, -33, 31, -33, 16, -43, 9, -26, 22, -43, 
  79, 37, 65, 13, 84, 65, 103, 91, 114, 85, 
  103, 77, 95, 69, 96, 85, 115, 94, 108, 82, 
  104, 80, 104, 80, 105, 87, 100, 75, 103, 69, 
  62, -14, 34, -16, 24, -20, 25, -26, 29, -3, 
  75, 25, 64, 13, 73, 50, 91, 68, 108, 79, 
  91, 74, 96, 69, 98, 88, 110, 68, 74, 57, 
  96, 73, 94, 64, 96, 70, 78, 61, 79, 47, 
  53, 45, 51, -23, 35, -77, 15, -43, 44, 4, 
  69, 16, 52, -18, 65, 42, 77, 57, 97, 70, 
  92, 70, 95, 70, 104, 87, 95, 18, 66, 44, 
  89, 57, 75, 43, 91, 61, 65, 54, 71, 27, 
  -7, -4, 47, -43, 14, -18, 35, -50, 29, -3, 
  63, -8, 43, -43, 56, 34, 69, 54, 85, 70, 
  86, 54, 92, 70, 106, 75, 67, -128, 37, 29, 
  71, 32, 62, 24, 77, 33, 58, 37, 61, 13, 
  31, -29, 45, -29, 29, -128, -3, -43, -8, -128, 
  54, -128, 16, -23, 54, 21, 53, 51, 82, 63, 
  81, 57, 87, 79, 102, 34, 32, -128, 35, 4, 
  65, 24, 56, 8, 67, -10, 45, 21, 44, -60, 
  13, -77, 26, -29, -18, -128, -16, -128, -1, -77, 
  35, -128, 19, -37, 56, 15, 54, 39, 78, 52, 
  69, 54, 92, 77, 74, -128, -128, -128, -33, -26, 
  58, 25, 44, -60, 60, -23, 28, -12, 19, -128, 
  -16, -60, -16, -128, 17, -128, 6, -77, 4, -60, 
  34, -77, 21, -60, 50, -8, 57, 34, 67, 30, 
  67, 56, 90, 51, 24, -128, -128, -128, -128, -128, 
  33, -77, -18, -128, 34, -128, -14, -60, 20, -128, 
  -14, -43, 10, -128, 26, -77, 0, -128, -1, -50, 
  26, -128, 4, -128, 46, -10, 62, 30, 45, -29, 
  67, 50, 68, -128, -128, -128, -128, -128, -128, -128, 
  8, -128, -50, -128, -128, -128, -60, -128, -77, -128, 
  -8, -128, -128, -128, -7, -128, -16, -128, -18, -128, 
  -14, -128, -20, -128, 35, -50, 57, -77, -128, -128, 
  40, -128, 0, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -33, -50, -128, -1, -77, 7, -128, -77, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -1, -8, -20, -128, -33, -128, -23, -128, -29, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -10, -20, -18, -128, 5, -128, -14, -128, 10, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -23, -128, 14, -77, -23, -128, -26, -128, -23, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -33, -128, 4, -50, -20, -128, 2, -128, -20, -50, 
  97, 68, 57, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, -50, -128, -18, -29, -8, -77, 19, -33, 
  32, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -50, -128, -33, -128, -14, -77, -20, -50, 
  97, 63, 85, 55, 57, 2, -2, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -23, -77, -37, -128, -12, -43, 
  71, 44, 33, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -2, -50, -128, -128, -50, -128, 
  72, 37, 34, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -16, -128, -128, -128, -33, -128, 15, -128, 
  68, 62, 55, 12, 42, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -29, -23, -128, -60, -128, -50, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -16, -128, -128, -128, -16, -128, 
  62, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -50, -128, -77, -128, -50, -128, 
  24, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, -128, 1, -128, -4, -60, -33, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -29, -128, -43, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -33, -128, -18, -128, -37, -128, 
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
