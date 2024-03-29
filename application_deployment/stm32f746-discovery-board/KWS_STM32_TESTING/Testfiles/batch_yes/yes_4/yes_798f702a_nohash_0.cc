/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/798f702a_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_798f702a_nohash_0.cc" \
 */
#include "yes_798f702a_nohash_0.h"


const int g_yes_798f702a_nohash_0_width = 40;
const int g_yes_798f702a_nohash_0_height = 49;
alignas(16) const signed char g_yes_798f702a_nohash_0_data[] = {
  118, 97, 120, 100, 118, 98, 116, 100, 118, 99, 
  118, 100, 119, 98, 121, 100, 121, 100, 117, 99, 
  118, 97, 116, 96, 115, 95, 115, 95, 110, 96, 
  113, 95, 109, 94, 107, 95, 115, 91, 97, 80, 
  99, 83, 94, 70, 111, 84, 97, 77, 102, 85, 
  105, 77, 101, 85, 103, 86, 100, 77, 106, 80, 
  98, 80, 94, 73, 99, 78, 103, 80, 105, 82, 
  103, 75, 98, 80, 100, 82, 98, 79, 101, 74, 
  102, 70, 77, 71, 98, 84, 112, 72, 99, 66, 
  93, 72, 102, 74, 91, 74, 105, 82, 100, 62, 
  92, 76, 97, 77, 90, 69, 81, 65, 93, 63, 
  92, 72, 97, 69, 95, 62, 77, 55, 82, 55, 
  105, 90, 108, 80, 99, 66, 75, 57, 105, 78, 
  94, 61, 81, 80, 92, 82, 93, 65, 98, 72, 
  100, 82, 97, 64, 99, 69, 89, 68, 95, 69, 
  92, 64, 92, 62, 88, 71, 100, 85, 98, 64, 
  80, 60, 74, 61, 81, 59, 97, 61, 94, 59, 
  71, 52, 69, 54, 91, 45, 82, 48, 94, 57, 
  74, 43, 78, 55, 82, 54, 83, 53, 88, 50, 
  69, 57, 77, 42, 83, 36, 58, 26, 69, 30, 
  63, 51, 80, 49, 84, 50, 67, 30, 69, 8, 
  75, 39, 65, 52, 72, 19, 83, 40, 79, 43, 
  91, 51, 70, 53, 80, 50, 69, 35, 65, 32, 
  84, 50, 78, 54, 75, 32, 74, 49, 68, 7, 
  74, -8, 50, -16, 44, -128, 37, -128, 39, 20, 
  57, 1, 63, 25, 77, 52, 71, 37, 73, 43, 
  78, 32, 80, 50, 70, 6, 57, 21, 64, 50, 
  89, 47, 72, 47, 71, 42, 72, 40, 55, 15, 
  63, 6, 72, -7, 30, -128, 61, 44, 57, 27, 
  68, 5, 67, 2, 49, 12, 74, -12, 66, 34, 
  76, 34, 59, 50, 59, 41, 69, 38, 65, 45, 
  76, 19, 65, 42, 61, 26, 67, 39, 65, 17, 
  28, -23, 59, 15, 71, 23, 68, 48, 48, 15, 
  80, 57, 73, 21, 63, 37, 67, 9, 58, 20, 
  26, -26, 54, 14, 56, 15, 65, 37, 65, 36, 
  68, 32, 62, 31, 53, 36, 68, 42, 57, 8, 
  46, -20, 59, 24, 48, -128, 35, 42, 67, 27, 
  26, 14, 69, -16, 62, 32, 50, -6, 55, 9, 
  55, 16, 54, -128, 40, 9, 59, 18, 45, -16, 
  25, 1, 46, -16, 44, 20, 50, -8, 43, -23, 
  -26, -128, -50, -128, -128, -128, 38, -128, -12, -128, 
  41, -50, 17, -37, 54, -2, 55, -77, 5, -77, 
  -128, -33, 36, -20, 52, 37, 61, -12, 45, -60, 
  47, 7, 42, -14, 58, 15, 30, -60, 47, 7, 
  -26, -60, 19, -128, -33, -128, -128, -128, -128, -128, 
  35, -50, 53, -18, 48, -43, 35, -77, 10, -128, 
  33, -128, 50, 29, -6, -128, 57, 31, 48, -29, 
  33, -12, 45, 4, 54, -16, 44, -128, 37, -18, 
  54, -18, 36, -128, -128, -128, 48, 4, 19, -128, 
  18, -43, 62, 28, 58, -50, 46, 21, 51, 10, 
  69, 25, 32, 2, 56, 31, 47, -43, 37, 9, 
  64, 21, 48, -1, 24, -37, 28, -18, 38, -37, 
  40, -60, -1, -128, -8, -128, -20, -43, 10, -128, 
  28, -128, 31, 11, 57, -33, 31, -7, 48, -77, 
  52, -7, 38, 1, 48, 6, 60, -1, 18, -128, 
  19, 13, 54, -7, 39, 11, 54, -29, 22, -128, 
  24, -128, -50, -128, -128, -77, 14, -128, 42, -26, 
  25, -29, -29, -50, 54, -6, 50, -20, -26, 0, 
  19, -60, 29, -50, 16, -128, 30, -128, 1, -50, 
  9, -43, 42, -128, 37, -37, 19, -60, 50, -4, 
  -77, -128, -128, -128, -128, -128, 19, -128, -77, -128, 
  18, -128, -50, -128, 26, -77, 6, -128, -10, -128, 
  -7, -77, 1, -7, 32, -20, 19, -1, 41, -60, 
  -37, -60, 27, -60, 37, -6, 31, -128, 39, -20, 
  28, 23, 32, -60, -33, -128, -128, -128, -6, -128, 
  -23, -43, 57, -128, 16, -128, 21, 1, 8, -128, 
  -7, -128, 15, -128, 0, -77, 29, -128, 35, -128, 
  -128, -77, 16, -128, 28, -77, 5, -128, -10, -128, 
  62, -37, 20, -128, -128, -128, -128, -128, -1, -128, 
  2, -128, -50, -77, 42, -37, 26, -128, -29, -128, 
  -77, -128, 9, -20, 38, -26, 23, -128, -1, -128, 
  30, 15, 36, -29, 30, -128, -4, -77, 6, -50, 
  -128, -128, 37, -26, -2, -43, -60, -128, -10, -128, 
  -4, -128, -128, -128, 47, -77, 17, -26, -7, -128, 
  11, -128, 1, 1, 23, -33, 40, -23, 26, -128, 
  20, -8, 22, -60, 33, -128, -2, -50, 40, -77, 
  5, -128, -128, -128, -23, -128, 19, -128, -128, -128, 
  30, -128, 4, -50, 41, -77, -43, -3, 46, -60, 
  59, 17, 42, -23, 20, -37, 36, -43, 34, -1, 
  57, 2, 50, -43, 44, -43, 28, -43, 19, -16, 
  30, -128, 22, -128, -128, -128, 13, -16, -128, -128, 
  22, 15, 14, -10, 29, -77, 31, -43, 2, -128, 
  40, -7, 34, -7, 20, -60, 12, -77, 14, -77, 
  25, -128, 32, -10, 39, -60, 29, -43, 8, -33, 
  -33, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  30, 14, 49, 35, 37, 4, 24, -128, 19, -18, 
  60, 7, 51, -60, 21, -20, 34, -43, 31, 10, 
  51, -50, 15, 13, 38, -29, 41, -12, 22, -26, 
  -128, -128, -43, -77, -37, -128, 6, -128, -37, -16, 
  -3, -128, 24, 6, -14, -33, 28, -60, 13, -4, 
  59, -23, 46, 22, -14, -37, 50, 10, 54, 14, 
  57, 7, 53, 12, 45, -2, 25, -18, 29, -2, 
  -23, -128, -128, -128, -26, -128, -77, -128, -77, -128, 
  40, -77, -33, -60, -26, -77, 7, -128, 4, -43, 
  24, -60, 42, -23, 31, -43, 37, -128, 32, -128, 
  -7, -128, 17, -60, -1, -77, 9, -43, 7, -128, 
  -128, -128, 22, 28, 64, 17, -29, 17, 33, -50, 
  27, -128, -7, -128, 27, -128, -128, -20, -10, -128, 
  34, 16, 25, -128, -7, -128, 30, -37, -60, -128, 
  -26, -77, 31, -77, -7, -128, 9, -50, -16, -77, 
  -77, -128, 55, -6, 24, 14, 52, -18, 29, 23, 
  54, 17, 49, -29, 14, -50, 22, 15, 4, -128, 
  -128, -128, 36, -128, -29, -128, -18, -128, 37, -77, 
  -60, -128, 41, 4, 29, -1, 29, -50, -6, -128, 
  -77, -128, 24, 6, 6, -33, 58, 21, 16, -37, 
  37, -18, 26, -50, 28, -33, 21, -77, -20, -77, 
  -50, -128, 16, -33, 45, -50, 33, -128, 9, -128, 
  -33, -128, -23, -77, -1, -29, -2, -60, 9, -128, 
  1, 14, 32, -128, -23, -128, -50, -128, 18, 33, 
  20, -77, -26, -128, -12, -128, -50, -50, 22, -50, 
  -128, -128, -12, -50, 44, -4, 30, -16, -33, -128, 
  -2, -128, -20, -128, 11, -37, 4, -128, 9, -128, 
  70, 82, 84, 53, 30, 29, 36, -23, 45, -128, 
  -128, -128, -20, -14, 33, -128, 0, -128, -128, -128, 
  -128, -128, -10, -77, -3, -77, 9, -20, -14, -128, 
  -20, -128, -20, -128, 17, -128, -10, -29, 8, -128, 
  91, 86, 90, 53, 92, 81, 72, -50, 52, -20, 
  4, -128, 12, -128, -37, -128, 28, -37, 4, -128, 
  -128, -128, -77, -77, 49, 69, 67, -8, 42, 8, 
  29, 14, 61, -12, -6, -128, -7, -128, -6, -128, 
  92, 85, 96, 49, 100, 94, 107, 36, 82, 49, 
  39, 23, 20, -77, -7, -14, 25, -50, 22, 0, 
  -128, -77, -23, 54, 105, 89, 101, 83, 101, 59, 
  74, 60, 80, 49, 50, 16, -37, -128, -33, -128, 
  87, 74, 90, 11, 100, 93, 116, 75, 102, 79, 
  52, 48, 32, 41, 40, 16, 27, 29, 44, 29, 
  57, 47, 65, 91, 111, 87, 109, 89, 97, 60, 
  86, 78, 101, 75, 69, 51, 36, -128, 4, 10, 
  81, 59, 69, -37, 97, 64, 66, 92, 115, 79, 
  96, 71, 69, 59, 19, 5, 50, 58, 72, 49, 
  54, 64, 99, 73, 94, 71, 100, 69, 77, 45, 
  70, 53, 77, 39, 59, 21, 15, -128, 23, 27, 
  79, 47, 48, 37, 91, 39, 9, 93, 112, 77, 
  109, 73, 85, 55, 50, 25, 71, 49, 89, 52, 
  82, 80, 81, 57, 80, 61, 86, -14, 44, -10, 
  44, -4, 52, 13, 49, 31, 56, 25, 52, 11, 
  66, 4, 22, 63, 81, -77, 50, 60, 56, 82, 
  112, 59, 85, 32, 76, 19, 42, 16, 54, 59, 
  70, 59, 87, 15, 42, -16, 46, -128, -29, -77, 
  21, -128, -4, -60, 13, -37, 16, -128, -14, -60, 
  62, -29, -26, 56, 61, -128, 57, 29, -7, 87, 
  103, 55, 84, 57, 68, 50, 59, 58, 70, 51, 
  87, 79, 77, 17, 60, 39, 55, -128, -128, -128, 
  -23, -128, -33, -128, 34, 15, 30, -128, -29, -4, 
  28, -128, -128, 50, 23, -128, 57, -128, 73, 64, 
  66, 77, 80, 55, 57, 42, 69, 44, 82, 69, 
  88, 57, 69, 19, 71, 55, 74, -16, 4, -29, 
  -4, -43, 19, -23, 45, 17, 50, -128, -8, 26, 
  18, -128, -50, 52, 27, -128, 44, -128, 62, 22, 
  69, 66, 63, 21, 63, 24, 50, 55, 75, 60, 
  87, 61, 40, -33, 62, 43, 66, -60, 16, -128, 
  20, -60, 39, 13, 47, 0, 44, -60, 10, 4, 
  17, -128, -29, 42, 0, -128, 48, -128, 56, -77, 
  62, 47, 36, -77, 47, -33, 35, 38, 55, 42, 
  65, -37, 4, -128, -60, -128, 11, -128, -128, -128, 
  -128, -128, -43, -128, -50, -12, 25, -128, -10, 12, 
  47, -128, -128, 17, 25, -128, 45, -60, 51, 36, 
  9, -18, 14, -128, -8, -37, 37, -10, 59, 16, 
  33, -128, -37, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -6, -77, 7, -60, 0, -6, 
  56, -128, -128, -33, 10, -128, 15, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -128, -128, 
  -2, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -43, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -33, -18, 40, 11, 46, 64, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -29, 24, -16, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -20, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
};
