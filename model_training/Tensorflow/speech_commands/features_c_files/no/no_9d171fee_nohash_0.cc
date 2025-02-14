/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/9d171fee_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_9d171fee_nohash_0.cc" \
 */
#include "no_9d171fee_nohash_0.h"


const int g_no_9d171fee_nohash_0_width = 40;
const int g_no_9d171fee_nohash_0_height = 49;
alignas(16) const signed char g_no_9d171fee_nohash_0_data[] = {
  107, 87, 98, 74, 89, 87, 104, 94, 107, 85, 
  94, 80, 102, 90, 103, 90, 97, 89, 109, 90, 
  102, 90, 102, 90, 100, 78, 88, 78, 94, 82, 
  84, 74, 85, 81, 90, 80, 89, 72, 84, 69, 
  92, 87, 106, 84, 85, 67, 94, 74, 77, 79, 
  97, 80, 101, 79, 99, 74, 95, 81, 95, 75, 
  91, 76, 89, 71, 97, 78, 89, 70, 82, 63, 
  88, 72, 91, 72, 82, 66, 74, 70, 87, 70, 
  84, 60, 73, 62, 88, 82, 92, 56, 79, 71, 
  91, 65, 82, 63, 76, 67, 92, 55, 72, 67, 
  95, 65, 94, 62, 79, 65, 80, 65, 80, 58, 
  67, 58, 73, 59, 73, 60, 74, 60, 79, 53, 
  74, 48, 67, 49, 86, 67, 72, -50, 47, 35, 
  81, 70, 71, 39, 88, 50, 76, 47, 62, 57, 
  77, 49, 82, 35, 55, 59, 77, 52, 72, 46, 
  70, 44, 64, 31, 69, 47, 69, 55, 74, 52, 
  94, 66, 76, 60, 69, 59, 84, 53, 70, 43, 
  47, 48, 67, 48, 74, 49, 77, 57, 72, 39, 
  82, 46, 74, 42, 67, 57, 73, 50, 66, 52, 
  69, 44, 68, 32, 62, 16, 60, 43, 62, 21, 
  100, 59, 82, 51, 69, 29, 85, 66, 77, 63, 
  76, 37, 59, 51, 77, 31, 59, 48, 80, 42, 
  72, 55, 73, 52, 74, 35, 70, 54, 77, 49, 
  75, 35, 63, 44, 70, 64, 80, 57, 86, 53, 
  87, 49, 75, 67, 80, 39, 67, -29, 66, 47, 
  77, 53, 70, 46, 69, -18, 47, 45, 60, 39, 
  78, 41, 70, 49, 72, 41, 85, 54, 66, 50, 
  74, 59, 76, 44, 62, 33, 67, 39, 65, 34, 
  39, 36, 70, 43, 68, 14, 75, 49, 72, 28, 
  65, 31, 82, 14, 49, 52, 66, 34, 63, 47, 
  63, 43, 70, 21, 67, 29, 70, 26, 54, 1, 
  59, 38, 58, 15, 46, -14, 47, 2, 44, -29, 
  13, 4, 0, -128, 45, 42, 69, 37, 74, 31, 
  65, 23, 63, -23, 37, -8, 54, 9, 67, 46, 
  57, 25, 34, 19, 66, -2, 65, 40, 57, -20, 
  36, 19, 54, -20, 50, -18, 35, -7, 12, -2, 
  19, 27, 74, 28, 57, 33, 59, 31, 67, 14, 
  64, 42, 67, -4, 39, 29, 51, 34, 26, -128, 
  69, 34, 48, -77, 52, 11, 42, 4, 42, 7, 
  43, 0, 55, 27, 63, 21, 55, -20, 35, 9, 
  -26, -128, 46, 29, 62, 16, 56, -1, 64, 44, 
  54, -7, 43, -128, 28, -14, 34, -128, 34, 26, 
  60, -77, 37, -16, 1, -12, 49, -29, 34, 2, 
  49, 30, 56, 31, 59, -1, 34, -10, 33, -37, 
  -60, -37, 47, 17, 55, 8, 53, 4, 46, -26, 
  -37, -128, 50, 32, 61, -16, 34, -16, 58, -50, 
  26, -6, 55, 29, 39, -10, 17, -37, 35, 9, 
  60, 0, 16, -60, 36, -26, 35, -37, 34, -60, 
  0, -2, 39, -128, 9, -4, 20, -3, 57, -4, 
  55, 10, 44, -77, 31, -128, 49, -33, 42, 19, 
  55, -60, 35, -6, 42, -26, -6, -18, 40, 10, 
  52, 4, 37, -2, 42, 0, 38, -43, 38, -77, 
  -128, -128, 19, -18, 15, -128, 38, 10, 42, -128, 
  -10, -128, 55, 32, 15, 8, 56, 26, 37, -33, 
  47, 11, 35, -37, 47, -16, 40, -7, 31, -60, 
  12, -60, 44, 12, 19, -77, 11, -29, 1, -50, 
  54, 5, -128, -128, 34, -43, 27, -10, 50, 1, 
  9, -128, 28, -77, 58, 4, 55, 25, 54, -50, 
  21, -60, 40, 10, 10, -128, 11, -128, 7, -33, 
  -4, -23, 30, -50, 49, -50, 26, -50, -37, -33, 
  -77, -128, 17, -128, 9, -128, 44, 11, 44, -128, 
  13, -128, 30, -29, 11, -29, 48, -2, 33, -26, 
  32, -77, 0, -16, 25, -43, 47, -7, 19, -20, 
  22, 11, 50, 1, 37, -43, 7, -43, 15, -50, 
  -20, -20, -23, 6, 50, -37, 40, -33, 33, -7, 
  40, -128, -43, -128, 35, -128, 34, -43, 49, -16, 
  34, -20, -4, 4, 37, -12, -33, -128, 18, -3, 
  -60, -77, 22, -128, 33, -77, 15, -16, 23, -128, 
  95, 79, 99, 79, 94, 40, 65, 17, 62, 29, 
  35, 6, 46, -33, 16, -77, 42, -7, 52, 21, 
  62, -43, 44, -14, 24, -16, 1, -77, 19, -77, 
  2, -60, 19, -26, 13, -14, 30, -23, 17, -128, 
  94, 84, 100, 87, 105, 83, 82, 34, 67, 24, 
  38, -128, -128, -20, 36, -37, 44, 9, 46, -10, 
  57, 0, 70, 23, 56, 4, 43, 1, 26, -14, 
  27, -18, 23, -43, 19, -50, 46, 27, 66, 64, 
  87, 77, 95, 84, 105, 87, 105, 79, 92, 55, 
  79, 57, 81, 39, 64, 64, 85, 65, 89, 64, 
  72, 52, 63, 39, 90, 73, 96, 80, 93, 52, 
  83, 40, 45, -12, 36, -37, 11, -29, 77, 57, 
  90, 71, 90, 75, 96, 75, 96, 83, 102, 75, 
  82, 72, 87, 59, 80, 77, 102, 81, 97, 57, 
  71, 49, 54, 51, 89, 71, 90, 68, 85, 49, 
  49, 29, 65, -26, 21, -128, 27, 2, 38, 5, 
  82, 63, 85, 65, 87, 61, 88, 72, 98, 72, 
  90, 77, 89, 55, 86, 72, 84, 64, 79, 38, 
  69, 43, 49, 39, 87, 60, 78, 57, 56, -26, 
  18, -16, 41, -37, 9, -77, 32, 26, 21, -128, 
  81, 52, 78, 57, 80, 50, 87, 62, 94, 61, 
  96, 75, 81, 44, 93, 75, 90, 54, 54, 34, 
  61, -8, 40, 42, 72, -6, 38, -37, 23, 4, 
  32, -8, 29, -128, 21, 13, 75, 56, 62, 6, 
  68, 42, 74, 45, 74, 39, 81, 53, 92, 55, 
  82, 57, 85, 43, 96, 77, 67, 16, 44, -43, 
  44, 4, 42, 34, 61, -23, 19, -23, 60, -8, 
  46, -128, -50, -60, 12, -128, 43, -37, 20, -20, 
  64, 22, 62, 23, 64, 11, 74, 41, 82, 44, 
  77, 47, 74, 35, 87, 59, 27, -128, 24, -37, 
  -14, -37, 32, -2, 47, -23, 5, -77, 66, -20, 
  44, -6, 19, -23, 14, -43, -1, -128, -16, -128, 
  66, 4, 61, -4, 57, -4, 67, 35, 67, 47, 
  62, 42, 57, 37, 61, -128, -128, -128, -14, -128, 
  -23, -77, -16, -128, -26, -128, -128, -128, 14, -77, 
  -18, -43, 8, -128, -29, -37, 1, -128, -26, -128, 
  51, -23, 61, -14, 55, 10, 67, 14, 48, -6, 
  47, 20, 56, 8, 14, -128, -128, -128, -128, -128, 
  -128, -128, 4, -128, -128, -128, -128, -128, -50, -128, 
  -43, -128, -10, -128, -1, -50, -12, -128, -50, -128, 
  44, -60, 55, -23, 54, 7, 62, -128, -33, -128, 
  38, -29, 55, 12, -128, -128, -128, -128, -128, -128, 
  1, -128, -26, -128, -60, -128, -128, -128, -10, -128, 
  -77, -128, -50, -128, -33, -77, -60, -128, -128, -128, 
  32, -128, 49, -77, 54, -37, 31, -128, -128, -128, 
  -4, -128, 51, -60, -128, -128, -128, -128, -128, -128, 
  -16, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -14, -128, -10, -37, 5, -128, -60, -128, -77, -128, 
  17, -128, 15, -128, 33, -128, -6, -128, -128, -128, 
  -128, -128, 44, -128, -128, -128, -128, -128, -33, -128, 
  1, -128, 9, -128, -128, -128, -128, -128, -128, -128, 
  -8, -128, 11, -37, -26, -128, -14, -60, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -7, -128, -128, -128, -128, -128, -128, -128, 
  -29, -128, -29, -128, -128, -128, -10, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -33, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -12, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 4, -128, -77, -128, -60, -128, 
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
