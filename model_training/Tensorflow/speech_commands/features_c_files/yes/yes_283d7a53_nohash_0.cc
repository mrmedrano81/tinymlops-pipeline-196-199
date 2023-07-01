/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/283d7a53_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_283d7a53_nohash_0.cc" \
 */
#include "yes_283d7a53_nohash_0.h"


const int g_yes_283d7a53_nohash_0_width = 40;
const int g_yes_283d7a53_nohash_0_height = 49;
alignas(16) const signed char g_yes_283d7a53_nohash_0_data[] = {
  99, 83, 91, 75, 89, 83, 99, 80, 95, 86, 
  94, 76, 84, 80, 85, 77, 94, 71, 80, 72, 
  77, 72, 91, 71, 86, 77, 92, 71, 80, 83, 
  79, 72, 82, 70, 84, 72, 84, 73, 80, 60, 
  61, 69, 77, 65, 83, 70, 77, 77, 92, 57, 
  70, 63, 72, 62, 75, 52, 79, 72, 65, 51, 
  76, 75, 72, 77, 90, 76, 79, 77, 90, 61, 
  84, 72, 79, 62, 77, 71, 72, 65, 80, 59, 
  79, 65, 81, 65, 88, 52, 54, 34, 70, 48, 
  65, 44, 69, 49, 70, 45, 73, 66, 72, 63, 
  68, 54, 79, 57, 65, 50, 74, 58, 66, 42, 
  77, 56, 76, 59, 64, 45, 61, 57, 69, 49, 
  82, 57, 87, 67, 71, 47, 74, 57, 76, 52, 
  66, 45, 77, 55, 79, 58, 59, 39, 67, 58, 
  65, 25, 58, 46, 65, 22, 59, 49, 55, 26, 
  58, 40, 55, 44, 67, 46, 68, 50, 61, 47, 
  44, 47, 67, 43, 64, 52, 77, 32, 66, 30, 
  74, 62, 83, 40, 67, 50, 65, 40, 57, 28, 
  60, 31, 54, 36, 65, 39, 59, 31, 68, 39, 
  54, 27, 54, 39, 58, 11, 55, 42, 65, 30, 
  47, 34, 68, 37, 57, 35, 61, 2, 65, 53, 
  60, 40, 49, 38, 45, 18, 49, 18, 71, 50, 
  67, 44, 65, 26, 62, 36, 52, 8, 47, 9, 
  52, 36, 70, 48, 49, 38, 55, 34, 54, 19, 
  40, 2, 62, 39, 54, -8, 57, -8, 20, -20, 
  57, 20, 67, 38, 52, 4, 10, -12, 41, 22, 
  64, 15, 57, 12, 48, -29, 44, -20, 54, 30, 
  51, 16, 51, 21, 63, 16, 56, 29, 59, 28, 
  57, -18, 35, -6, 49, -29, 40, 23, 51, 28, 
  69, -6, 47, 4, 42, 21, 47, -20, 59, 50, 
  59, 2, 39, 1, 35, -4, 50, 40, 49, 25, 
  54, 23, 49, 17, 48, 4, 49, -18, 26, -37, 
  86, 35, 62, 27, 48, 11, 57, 42, 17, -77, 
  32, 32, 60, 1, 54, -37, 55, 44, 65, 14, 
  46, 16, 50, 36, 65, 21, 51, 19, 60, 4, 
  50, 9, 38, -26, 46, 4, 49, -23, 42, 7, 
  65, 45, 45, -20, 6, -50, 51, -26, 17, 29, 
  65, -20, 49, -3, 46, 25, 39, 4, 49, 37, 
  51, -3, 37, -60, 35, 27, 47, -26, 41, -26, 
  37, -4, 51, 24, 50, 14, 44, 6, 45, -43, 
  -43, -128, 8, -128, -2, -77, 36, 14, 5, -29, 
  49, 5, 43, 28, 50, 15, 41, 17, 64, -29, 
  14, -77, 23, -18, 34, -37, 39, -29, 5, -60, 
  46, -43, 13, -29, 45, -10, 45, -8, 31, 9, 
  89, 32, 66, 49, 63, 48, 55, 26, 59, 22, 
  70, 36, 54, 18, 60, -14, 40, 25, 30, 14, 
  58, -6, 35, -18, 29, 15, 30, -7, 23, -43, 
  30, -16, 29, -77, 23, 5, 47, -18, 49, -37, 
  77, 52, 69, -128, 27, -37, 21, -77, -1, -128, 
  19, 11, 26, 17, 40, -77, 42, 0, 63, -18, 
  51, 26, 52, -3, 38, -29, 34, 28, 47, 32, 
  50, -77, 19, -23, 14, -50, 34, -26, 26, 8, 
  44, 39, 69, 39, 42, 26, 58, -12, 58, 17, 
  31, -60, 50, 24, 58, 46, 47, 16, 31, -77, 
  24, -10, 40, -20, 32, 7, 59, -6, 65, 6, 
  60, 19, 38, 7, 49, 26, 48, 15, 69, 57, 
  106, 88, 108, 80, 96, 54, 67, 35, 26, -20, 
  17, -18, 33, -50, -26, -3, 46, 8, 27, -29, 
  48, 32, 55, 32, 50, 13, 65, 73, 102, 85, 
  97, 51, 48, -14, 37, 29, 57, 0, 42, -16, 
  100, 93, 115, 85, 111, 79, 99, 51, 57, 32, 
  39, -128, 29, -50, 19, -33, 37, -77, 49, 24, 
  55, 42, 98, 82, 88, 68, 98, 80, 99, 78, 
  91, 59, 80, 12, 33, 51, 73, 32, 41, -128, 
  95, 82, 105, 85, 112, 85, 100, 59, 74, 58, 
  36, 4, 48, -128, -2, -4, 32, -14, 54, 25, 
  67, 55, 104, 73, 91, 73, 103, 77, 94, 71, 
  88, 54, 69, -37, 47, 53, 77, 52, 47, -50, 
  89, 70, 94, 82, 110, 88, 107, 77, 95, 75, 
  71, 37, 66, -8, 33, 1, 59, 21, 80, 52, 
  91, 89, 99, 73, 100, 87, 102, 68, 88, 70, 
  82, 49, 74, -12, 22, 50, 89, 65, 70, -14, 
  81, 59, 80, 65, 86, 89, 115, 87, 100, 82, 
  90, 68, 80, 47, 57, 47, 80, 60, 96, 83, 
  110, 83, 95, 79, 104, 78, 97, 62, 89, 53, 
  73, 40, 82, 61, 52, 18, 65, 35, 56, 4, 
  74, 51, 70, 46, 67, 73, 94, 90, 109, 78, 
  101, 64, 86, 63, 68, 40, 77, 54, 98, 87, 
  106, 59, 75, 64, 95, 62, 68, 39, 71, 44, 
  69, -12, 50, 60, 72, 42, 56, 9, 16, -77, 
  70, 44, 61, 38, 59, 47, 80, 85, 102, 76, 
  104, 66, 84, 63, 75, 56, 84, 65, 99, 85, 
  90, 34, 70, 55, 90, 43, 61, 19, 54, -77, 
  46, -128, 46, 60, 83, 44, 59, 32, 44, -60, 
  72, 31, 43, 9, 47, -7, 63, 44, 96, 66, 
  90, 61, 90, 42, 73, 52, 80, 69, 91, 55, 
  63, -60, 14, 19, 77, 5, 42, -33, 14, -128, 
  53, 2, 31, 60, 90, 56, 73, 56, 77, 13, 
  65, 1, 28, -60, 32, -77, 42, 16, 85, 48, 
  85, 72, 76, 45, 66, 55, 87, 69, 94, 46, 
  62, -12, 38, 26, 72, 22, 42, -37, -12, -128, 
  53, 23, -1, 62, 97, 52, 67, 42, 60, -3, 
  -26, -128, -128, -128, -128, -128, -128, -128, -8, -26, 
  69, 44, 57, -29, 56, 37, 63, 24, 45, 1, 
  -50, -128, -60, -128, 41, 14, 38, -128, 19, -14, 
  71, 60, 57, 9, 46, -20, 14, -128, 17, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -77, 33, -128, -16, -128, 21, -128, -128, -128, 
  24, -128, -37, -128, 29, 34, 60, 31, 65, 42, 
  96, 74, 96, 47, 72, 52, 76, 35, 61, 58, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 22, -128, -1, -128, -4, -128, 21, -20, 
  6, -128, 23, -128, 7, 14, 64, 44, 67, 43, 
  79, 79, 92, 43, 87, 67, 80, 65, 87, 69, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -43, -37, 39, -128, -128, -128, -128, -128, 
  -43, -128, -1, -128, 27, 17, 56, 48, 67, 38, 
  69, 56, 92, 50, 78, 62, 83, 53, 86, 65, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -60, 9, -128, -50, -128, 
  -128, -128, -128, -128, -33, -128, 43, 15, 50, 31, 
  65, 55, 84, 54, 79, 49, 79, 58, 84, 68, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -20, 54, -77, 45, 10, 
  76, 58, 80, 52, 77, 47, 74, 31, 69, 59, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -60, -50, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -23, -77, 42, -6, 
  69, 51, 83, 49, 81, 51, 65, 6, 65, 60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, 44, -12, 27, 19, 
  56, 39, 75, -4, 65, 35, 66, 22, 60, 33, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 20, -128, 25, 22, 
  55, 34, 62, 36, 54, 34, 63, 27, 60, 32, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 14, -128, 19, -29, 
  56, 17, 39, 24, 54, -33, 50, 0, 50, -26, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -26, -128, 31, -60, 
  52, -14, 56, 43, 33, -4, 42, -128, 38, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -50, 40, -33, 
  26, 6, 67, -16, 45, -50, -23, -128, 4, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -33, -128, 
  9, -128, 6, -8, -7, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -29, -128, 
  -16, -128, -18, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
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