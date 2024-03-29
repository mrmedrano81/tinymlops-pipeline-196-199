/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/a2473d62_nohash_2.wav" \
 * --output_c_file="features_c_files/no/no_a2473d62_nohash_2.cc" \
 */
#include "no_a2473d62_nohash_2.h"


const int g_no_a2473d62_nohash_2_width = 40;
const int g_no_a2473d62_nohash_2_height = 49;
alignas(16) const signed char g_no_a2473d62_nohash_2_data[] = {
  115, 94, 91, 80, 99, 90, 100, 91, 102, 84, 
  97, 87, 99, 83, 99, 87, 95, 89, 108, 91, 
  104, 84, 102, 90, 97, 85, 104, 85, 93, 83, 
  101, 89, 99, 84, 95, 85, 97, 84, 97, 83, 
  92, 72, 101, 91, 100, 73, 99, 61, 73, 66, 
  92, 73, 95, 83, 88, 71, 99, 66, 85, 70, 
  90, 74, 92, 69, 95, 77, 96, 83, 98, 75, 
  83, 64, 86, 69, 92, 73, 93, 71, 89, 68, 
  71, 70, 94, 80, 102, 69, 82, 60, 98, 76, 
  91, 67, 78, 47, 72, 58, 85, 59, 85, 60, 
  87, 73, 75, 57, 83, 67, 60, 63, 85, 72, 
  90, 59, 84, 67, 87, 64, 74, 58, 84, 59, 
  84, 35, 67, 50, 72, 68, 94, 70, 84, 65, 
  82, 33, 82, 59, 85, 59, 74, 50, 74, 48, 
  73, 28, 84, 65, 98, 74, 92, 67, 77, 62, 
  74, 40, 79, 54, 79, 57, 77, 45, 78, 60, 
  84, 55, 78, 38, 74, 50, 75, 39, 72, 28, 
  57, 37, 74, 46, 53, 23, 84, 64, 69, 55, 
  75, 45, 75, 48, 67, 19, 71, 42, 75, 27, 
  69, 40, 72, 56, 71, 53, 80, 58, 69, 33, 
  70, 65, 82, 23, 88, 62, 67, 66, 79, 57, 
  77, 62, 59, 11, 57, 37, 72, 35, 61, 33, 
  48, 1, 63, 31, 58, 29, 57, 9, 69, 36, 
  61, 29, 70, 42, 64, 35, 64, 39, 65, 30, 
  29, 27, 66, 4, 84, 65, 63, 0, 25, -12, 
  56, 13, 75, 50, 71, 32, 59, 33, 71, 0, 
  39, 48, 60, 15, 46, 40, 56, 24, 67, 20, 
  54, 30, 63, 26, 54, 23, 62, 42, 57, -7, 
  54, 31, 74, -37, 54, 49, 74, 36, 74, 55, 
  53, 55, 74, 14, 67, 49, 68, -29, 59, 40, 
  76, 42, 54, 1, 61, 27, 44, 2, 48, 15, 
  63, 23, 60, 31, 63, 27, 62, 31, 59, -1, 
  30, 26, 58, -43, 70, 52, 61, -3, 60, 30, 
  43, -18, 61, 37, 64, 37, 64, 42, 60, 45, 
  64, 48, 46, 4, 57, 19, 53, 1, 59, 25, 
  57, 14, 56, 24, 52, 19, 61, 10, 56, 12, 
  44, 14, 55, -60, 75, 54, 62, 19, 53, -50, 
  65, 28, 49, 32, 65, -128, 35, -1, 53, -128, 
  34, 30, 41, -8, 56, -3, 52, -33, 40, 2, 
  54, 2, 46, -16, 45, -2, 46, -4, 53, 11, 
  35, 17, 73, 44, 65, 17, 75, 37, 25, -16, 
  47, -29, 18, -43, 40, 16, 49, -3, 32, 19, 
  62, 38, 51, 9, 34, -20, 53, 19, 46, -18, 
  53, -14, 52, 25, 45, -16, 51, 14, 51, 9, 
  71, 47, 54, -8, 71, 33, 34, 12, 62, -10, 
  53, 15, 33, -12, 27, -3, 48, -29, 35, 19, 
  68, -128, 35, -20, 42, 6, 52, 0, 56, 29, 
  51, 0, 46, -10, 50, 0, 24, -29, 45, -37, 
  -128, -77, 69, 32, 54, -10, 15, -60, 14, -50, 
  57, 29, 59, 31, 56, 15, 26, 4, 49, 8, 
  60, 24, 45, -1, 55, -33, 34, -77, 27, -18, 
  30, -10, 38, -37, 29, 2, 52, 19, 47, 5, 
  64, 4, -7, -23, 59, -8, 17, -33, 13, -77, 
  29, -18, 26, 4, 30, 15, 40, -43, 29, -43, 
  56, -14, 57, -26, 20, -60, 16, -128, 52, 2, 
  50, 10, 44, -16, 40, -29, 2, -18, 36, 1, 
  75, 14, 46, 41, 61, -33, 37, -128, 35, -50, 
  31, 12, 46, -60, 39, -20, 27, -128, -12, -77, 
  24, -4, 61, 9, 12, -128, 34, 6, 32, -18, 
  31, -2, 49, -10, 41, -10, 48, -12, 33, -26, 
  30, -2, 1, -128, -128, -128, 55, 17, 45, 25, 
  31, -1, 38, 4, -33, -37, 50, 0, 27, -20, 
  43, -4, 34, -33, -6, -43, 23, -7, 24, -60, 
  36, 21, 32, -60, 35, -33, 40, -33, 57, 2, 
  -12, -16, 42, 9, 56, -20, 49, -29, 35, -77, 
  -12, -10, 42, -23, 44, 24, 51, -7, 36, -4, 
  -3, -43, 19, -14, 25, -77, 30, -23, 11, -37, 
  29, -26, 14, -128, -7, -50, 32, -14, 4, -60, 
  -4, -128, 28, -128, -50, -128, 26, -29, -26, 7, 
  30, -2, 42, -7, 35, -43, 29, 34, 44, 16, 
  49, -6, 13, -128, 47, 0, -8, -29, 26, -23, 
  43, -29, 31, -12, 30, -16, 22, -77, 4, -77, 
  29, -33, 53, -23, 22, -128, 13, 2, 57, -29, 
  25, -77, 32, -1, 41, -33, -16, -128, 54, 22, 
  33, 1, 44, -8, 51, -7, 45, 0, 45, -29, 
  27, -77, 30, -37, 24, -77, -1, -43, 24, -3, 
  -60, -128, 59, -16, 14, -10, 63, -29, 40, -6, 
  41, 14, 47, -6, 39, -128, 1, -33, 36, -128, 
  38, -43, 34, 30, 44, -43, -14, -128, 8, -18, 
  30, -50, 21, -50, 28, -43, 16, -37, 30, -33, 
  -4, -33, 30, -128, -77, -128, -60, -77, 36, -128, 
  35, -128, -43, -128, 22, -128, -128, -128, 4, -37, 
  1, -8, 28, -43, -7, -128, 44, -128, 19, -50, 
  23, -43, 39, 16, 40, -50, 25, -3, 13, -77, 
  23, -128, -14, -128, -7, -128, 13, -128, 0, -23, 
  -29, -128, -50, -128, 14, -43, 9, -23, 31, -37, 
  28, -128, 34, -128, 19, -37, 4, -128, -10, 2, 
  41, 20, 56, 5, 9, -33, 24, -43, -16, -128, 
  32, -128, 41, -14, -128, -128, 9, -60, 29, -43, 
  -26, -26, 30, -77, 21, -14, 36, -43, -16, -128, 
  26, -43, -14, -128, -60, -128, 33, -37, 25, -23, 
  39, 24, 37, -7, 8, -60, 28, -26, 9, -128, 
  5, -128, 13, -37, -128, -128, 4, -60, 32, 15, 
  28, -43, 1, -128, 29, -128, -128, -128, 16, -60, 
  17, -50, 13, -60, 11, -18, 21, -128, 4, -77, 
  31, -23, 30, -12, 42, -128, -10, -60, 13, -14, 
  11, -50, 39, -128, -33, -128, 34, 11, 60, 17, 
  34, 8, -16, -37, -14, -3, 29, -128, -1, -128, 
  -43, -128, 17, -128, -29, -77, 4, -43, 4, -128, 
  2, -8, 31, -128, 16, -2, 9, -60, 17, -50, 
  70, 44, 60, 31, 19, -128, 12, -128, 50, 35, 
  -43, -60, 21, 9, 49, -128, -77, -128, 1, -128, 
  23, -8, 54, 9, 11, -60, 16, -128, -4, -37, 
  34, -128, -4, -60, 25, 1, 40, 40, 46, -128, 
  82, 68, 101, 84, 78, 34, 34, -128, 36, 20, 
  66, 41, 67, 55, 66, -43, 7, 6, 29, -128, 
  55, 71, 84, 70, 80, 38, 30, -29, 31, 19, 
  29, -60, 6, -77, 24, -60, -20, 49, 59, -37, 
  88, 72, 100, 78, 70, 17, 69, 9, -60, -26, 
  54, 42, 72, 33, 50, 21, 54, 40, 33, -128, 
  53, 65, 93, 72, 73, 35, 49, -6, 6, -8, 
  27, -128, -1, -128, -26, -128, -6, -20, 9, -128, 
  82, 64, 92, 72, 78, 54, 69, -6, 56, 46, 
  70, 37, 79, 47, 58, -6, 62, 59, 44, 5, 
  68, 73, 99, 74, 81, 49, 47, -20, 33, 16, 
  40, -18, -20, -128, -7, -37, 18, -77, -2, -50, 
  80, 52, 82, 47, 99, 84, 107, 91, 104, 84, 
  101, 74, 89, 56, 84, 77, 107, 96, 116, 90, 
  105, 84, 102, 86, 101, 89, 111, 79, 97, 70, 
  73, -29, 8, -50, 4, -77, 16, 15, 40, -26, 
  74, 36, 72, 30, 81, 75, 104, 90, 112, 83, 
  101, 69, 90, 69, 98, 84, 110, 91, 109, 79, 
  102, 79, 104, 84, 109, 90, 101, 74, 96, 69, 
  62, 22, -20, -60, -16, -128, -4, 32, 47, -77, 
  75, 36, 67, 23, 71, 57, 91, 78, 105, 79, 
  102, 74, 92, 79, 103, 87, 112, 81, 88, 72, 
  98, 77, 101, 78, 105, 83, 88, 67, 86, 55, 
  50, -20, 6, -128, 12, -50, 7, -1, 32, -128, 
  63, 17, 50, 0, 66, 45, 73, 67, 98, 82, 
  98, 64, 95, 75, 101, 89, 107, 64, 73, 59, 
  92, 69, 95, 65, 96, 57, 55, 49, 77, 26, 
  40, 15, 14, -20, 21, -128, 20, -60, 21, -23, 
  61, 19, 38, -77, 57, 34, 61, 49, 97, 75, 
  72, 67, 90, 70, 106, 82, 84, -128, 43, 44, 
  81, 60, 82, 50, 85, 22, 57, 48, 65, -3, 
  10, -23, 31, 4, 20, -43, 4, -128, 4, -16, 
  42, -43, 4, -128, 51, -12, 57, 46, 88, 42, 
  72, 59, 80, 68, 102, 55, 33, -128, 13, -33, 
  61, 30, 63, -7, 63, -128, -60, -14, 44, -77, 
  -1, -37, 40, -60, -18, -128, -10, -128, -43, -50, 
  35, -60, 1, -77, 37, -37, 54, 40, 69, 11, 
  71, 45, 84, 80, 92, -128, -128, -128, -43, -128, 
  45, -7, 31, -43, 47, -128, -128, -128, 0, -128, 
  -128, -128, -29, -128, -14, -43, -29, -128, -33, -128, 
  -6, -128, -33, -128, 9, -50, 48, 7, 54, -33, 
  54, 29, 88, 67, 39, -128, -128, -128, -128, -128, 
  -77, -128, -29, -128, -128, -128, -128, -128, -77, -128, 
  -50, -128, 2, -43, -3, -128, -29, -128, -43, -128, 
  -26, -128, -77, -128, 19, -77, 47, -12, 37, -128, 
  41, 41, 78, -50, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -26, -128, -18, -128, -128, -128, -29, -128, 
  -2, -128, -128, -128, -1, -128, 6, -128, -128, -128, 
  -128, -7, 52, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -128, -128, -128, -20, -128, -14, -128, -37, -128, 
  -16, -128, -14, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -37, -60, 5, -128, -43, -128, -50, -77, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -128, -12, -50, -29, -128, -43, -77, -26, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -77, -128, -33, -128, -16, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -60, -128, -50, -128, -29, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -26, -128, -33, -128, -128, -128, -33, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -50, -128, -50, -128, -77, -128, 
  68, -14, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  98, 63, 15, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, -128, -26, -60, -20, -128, -60, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 6, -128, -128, -128, 
};
