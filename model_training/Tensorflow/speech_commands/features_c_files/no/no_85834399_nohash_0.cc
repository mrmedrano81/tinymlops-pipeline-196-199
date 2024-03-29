/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/85834399_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_85834399_nohash_0.cc" \
 */
#include "no_85834399_nohash_0.h"


const int g_no_85834399_nohash_0_width = 40;
const int g_no_85834399_nohash_0_height = 49;
alignas(16) const signed char g_no_85834399_nohash_0_data[] = {
  72, 62, 63, 40, 51, 54, 47, 17, 14, 20, 
  54, 50, 31, 11, 40, 39, 14, -7, 5, 11, 
  23, 32, 35, 17, 33, 7, 26, 23, 31, 17, 
  35, 30, 23, 35, 33, 20, 33, 28, 29, 28, 
  92, 62, 29, 50, 64, 42, 30, 24, 49, 40, 
  37, 37, 37, 44, 35, 30, 15, 4, 12, 4, 
  32, 17, 21, 29, 41, 39, 49, 40, 52, 24, 
  33, 29, 39, 27, 45, 35, 31, 28, 42, 31, 
  88, 64, -12, -29, 50, 34, 24, -6, -4, 22, 
  64, 54, 65, 64, 69, 38, 34, -3, 11, 24, 
  45, 4, 19, 14, 31, 19, 8, -8, 28, 5, 
  46, 10, 27, 33, 57, 53, 59, 25, 45, 18, 
  68, 32, 55, 25, 40, 7, 27, 15, 35, 30, 
  40, 25, -6, -33, 11, -1, 18, 2, 19, -14, 
  -26, -50, -6, -26, -12, -43, 10, 7, 21, 19, 
  34, 15, 19, 4, 26, -3, 31, 24, 15, -8, 
  35, 35, 64, 57, 52, 47, 25, 22, 34, 40, 
  37, 29, 34, -37, 13, -16, -2, -4, 25, 24, 
  28, -7, 22, -23, -26, -12, 15, 0, 16, -10, 
  13, -12, 20, 11, 11, -50, 15, 0, 4, -7, 
  99, 85, 105, 83, 90, 45, 56, 28, 33, 14, 
  48, 4, -14, -43, 1, -14, -8, 4, 35, -16, 
  19, -14, 17, -26, 17, -20, 4, -10, 17, 12, 
  17, 0, 24, -3, 15, 14, 25, 17, 51, 4, 
  109, 83, 107, 88, 107, 82, 84, 55, 74, 54, 
  66, 39, 66, 38, 59, 17, 52, 38, 53, 13, 
  37, 27, 48, 27, 42, 4, -12, -4, 43, 40, 
  10, -43, 8, -29, 9, 0, 45, 40, 50, 24, 
  99, 87, 103, 90, 100, 51, 62, 59, 70, 45, 
  57, 46, 51, 17, 24, 30, 36, 24, 34, 11, 
  36, 32, 64, 58, 55, 11, 4, -60, 43, 22, 
  31, -26, -8, -37, 7, 17, 41, 43, 33, -29, 
  91, 73, 107, 82, 90, 75, 86, 79, 83, 46, 
  68, 54, 68, 51, 62, 35, 50, 39, 71, 54, 
  73, 66, 83, 69, 78, 55, 43, -12, 25, 8, 
  17, -29, 17, -33, -4, -4, 42, 40, 48, -18, 
  101, 77, 106, 71, 89, 80, 101, 71, 94, 62, 
  86, 77, 92, 72, 77, 55, 62, 69, 93, 60, 
  77, 66, 89, 73, 92, 64, 56, 14, 34, 43, 
  43, 4, 27, -10, -2, 22, 52, 52, 62, 4, 
  89, 71, 98, 49, 79, 66, 86, 53, 75, 52, 
  67, 47, 69, 45, 52, 29, 36, 52, 74, 44, 
  69, 51, 75, 55, 74, 42, 50, -12, 24, 5, 
  17, -10, 30, -10, 9, -10, 38, 4, 29, 15, 
  79, 60, 84, 24, 75, 50, 74, 31, 67, 29, 
  72, 49, 68, 24, 44, 13, 47, 55, 68, 19, 
  62, 34, 59, 29, 59, 41, 19, -20, 24, 9, 
  17, -20, 44, 7, -12, 4, 46, 9, 34, 11, 
  71, 49, 73, 25, 83, 59, 87, 56, 72, 49, 
  62, 37, 60, -33, 28, 1, 74, 69, 75, 43, 
  61, 31, 59, 46, 84, 69, 77, 30, 55, 20, 
  20, -20, 54, 16, 7, -29, 25, -50, 4, -37, 
  70, 49, 73, 48, 106, 94, 117, 89, 107, 84, 
  94, 73, 87, 63, 87, 82, 107, 94, 110, 82, 
  92, 68, 87, 81, 105, 83, 109, 87, 96, 66, 
  74, 41, 87, 67, 49, 37, 88, 73, 89, 41, 
  63, 38, 64, 28, 89, 66, 104, 79, 102, 72, 
  92, 63, 78, 61, 85, 75, 99, 70, 75, 54, 
  77, 49, 73, 62, 87, 52, 75, 79, 102, 64, 
  64, 48, 82, 59, 46, -14, 68, 67, 87, 53, 
  54, 33, 61, 14, 77, 59, 96, 77, 94, 70, 
  80, 59, 72, 55, 84, 75, 94, 32, 56, 26, 
  63, 30, 67, 62, 81, 46, 71, 57, 85, 14, 
  61, 63, 87, 64, 32, -16, 47, 46, 69, 47, 
  48, 26, 55, 1, 71, 45, 82, 66, 89, 62, 
  78, 53, 73, 60, 87, 77, 95, -23, 34, -7, 
  51, 19, 57, 53, 75, 18, 72, 59, 79, 29, 
  53, 60, 82, 55, 68, 42, 23, 41, 76, 39, 
  38, 11, 45, 2, 68, 44, 79, 57, 82, 54, 
  74, 47, 69, 58, 92, 76, 91, -128, 31, -1, 
  52, 19, 68, 45, 73, 35, 68, 54, 77, 30, 
  64, 59, 84, 62, 53, -29, 4, 41, 77, 38, 
  31, 2, 46, 0, 60, 41, 79, 57, 71, 48, 
  61, 19, 74, 51, 97, 45, 60, -128, 5, -60, 
  32, -6, 51, 1, 64, 14, 52, 51, 69, 8, 
  54, 42, 64, 26, 13, -60, -1, -128, 46, -33, 
  17, -26, 21, -23, 49, 30, 67, 27, 49, 29, 
  58, 17, 63, 59, 83, -14, 4, -128, -128, -128, 
  -18, -128, 29, -7, 52, -4, 42, 16, 51, -18, 
  52, 34, 44, -16, 8, -33, 16, -128, 30, -37, 
  23, -50, 26, -26, 41, 2, 61, 25, 28, -2, 
  59, -37, 70, 23, 58, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 15, -128, -7, -60, 12, -128, 
  9, -43, 14, -128, -26, -128, -33, -128, -128, -128, 
  30, -37, 34, -4, 44, -18, 54, -2, 35, -77, 
  53, -50, 67, 59, 59, -128, -128, -128, -128, -128, 
  -128, -128, -3, -128, 42, -14, 29, 16, 47, -14, 
  54, 27, 22, -128, -29, -1, 34, -128, -12, -128, 
  16, -77, 20, -20, 36, -128, 20, -77, -60, -128, 
  54, -60, 74, 43, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -10, -128, -29, -128, -3, -128, 
  16, -128, -128, -128, -43, -128, -29, -128, -128, -128, 
  -4, -128, 14, -26, 30, -128, -128, -128, -18, -128, 
  47, -1, 51, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -29, -128, -50, -60, -14, -128, 
  30, -60, -128, -128, -43, -128, -23, -128, -128, -128, 
  -128, -128, -128, -128, 26, -128, -128, -128, -77, -128, 
  -26, -50, 51, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  11, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 11, -12, 25, -33, -128, -77, 
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
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
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
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
};
