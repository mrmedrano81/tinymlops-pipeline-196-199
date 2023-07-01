/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/1acc97de_nohash_4.wav" \
 * --output_c_file="features_c_files/no/no_1acc97de_nohash_4.cc" \
 */
#include "no_1acc97de_nohash_4.h"


const int g_no_1acc97de_nohash_4_width = 40;
const int g_no_1acc97de_nohash_4_height = 49;
alignas(16) const signed char g_no_1acc97de_nohash_4_data[] = {
  55, 20, 29, 34, 40, 15, 20, 11, 5, 11, 
  20, -7, -10, -128, -128, -50, -26, -7, -26, -37, 
  -18, -50, -50, -60, -26, -37, -60, -50, -50, -37, 
  -33, -18, -33, -37, -33, -37, -33, -12, -10, -2, 
  29, 35, 39, 31, 35, 14, 11, 11, -26, 8, 
  24, -4, -1, -12, -37, -20, -1, -77, -60, -60, 
  -1, -14, -26, -29, -37, -20, -37, -50, -50, -50, 
  -18, -29, -37, -50, -18, -20, -18, -20, -12, -29, 
  64, 45, 63, 46, 0, -20, 10, -60, -12, -4, 
  -3, 25, 4, -29, -18, -37, -29, -77, -50, -77, 
  -50, -50, -60, -37, -50, -128, -60, -77, -50, -29, 
  -37, -77, -18, -4, -26, -23, -18, -33, -29, -43, 
  30, 15, 52, 43, 40, -60, -4, 27, 17, -50, 
  4, 4, 14, -18, 4, 2, -77, -50, -12, 4, 
  -29, -128, -50, -50, -60, -77, -26, -23, -50, -128, 
  -14, -33, -29, -60, -29, -60, -20, -18, -14, -43, 
  55, 37, 40, 30, 46, -12, 8, -33, -10, 0, 
  11, -60, -50, -43, -37, -128, -50, -77, -50, -128, 
  -50, -60, -14, -26, -29, -77, -37, -18, -20, -50, 
  -29, -33, -29, -60, -50, -60, -20, -37, -29, -60, 
  49, 40, 54, -12, -7, -33, 16, -50, -10, -26, 
  -43, -77, -23, -60, -20, -37, -29, -60, -29, -20, 
  -14, -128, -8, -14, -20, -77, -37, -14, -20, -43, 
  -20, -26, -29, -128, -20, -33, -23, -29, -23, -43, 
  55, 35, 56, 22, 23, 23, -14, -18, 17, -29, 
  -33, -128, -43, -77, -128, -37, -16, -128, -77, -77, 
  -29, -26, -4, -16, -8, -43, -50, -128, -29, -43, 
  -29, -50, -29, -128, -23, -29, -16, -37, -43, -29, 
  57, 34, 68, 42, 77, 74, 75, 56, 51, 22, 
  0, -37, -77, -128, -43, -77, -29, -60, -50, -60, 
  31, 20, 43, 9, 4, -20, -23, -60, -29, -43, 
  -77, -128, -16, -10, -29, -23, -43, -128, -33, -77, 
  14, 50, 54, 28, 72, 48, 25, -33, -18, -12, 
  -1, -128, -128, -50, -23, -50, -128, -60, -43, -77, 
  -43, -77, -43, -77, -12, -29, 4, -128, -77, -60, 
  -33, -77, -33, -37, -33, -50, -18, -128, -43, -60, 
  57, 65, 70, -18, 52, 4, -26, -128, -33, -14, 
  -16, -37, -26, -50, -128, -128, -33, -77, -16, -37, 
  24, 0, -4, -77, -18, -77, -43, -1, 47, 47, 
  72, 69, 87, 81, 98, 87, 95, 64, 94, 85, 
  44, 31, 54, -29, -33, -128, -128, -77, -18, -20, 
  -23, -128, -128, -128, -12, -128, -43, -77, -23, -33, 
  4, -37, -77, -128, -43, -43, -26, -77, 23, 30, 
  34, 1, 70, 47, 64, 42, 74, 68, 81, 56, 
  39, -128, -128, -128, -50, -128, -43, -128, -26, -37, 
  -37, -128, -128, -33, -2, -43, -77, -128, -128, -60, 
  -23, -128, -128, -77, -60, -50, -7, -12, -128, -60, 
  -29, -26, 26, -50, -1, -50, 38, 17, 51, -4, 
  17, -128, -18, 13, 45, -16, 32, 33, 29, -33, 
  -14, -50, 4, -60, 9, -60, -18, -60, -33, -77, 
  -23, -128, -50, -77, -43, -37, -43, -128, -50, -37, 
  -43, -128, -128, -128, -128, -128, -18, -77, -2, -128, 
  123, 101, 120, 99, 116, 96, 114, 89, 100, 62, 
  43, 32, 4, -43, 29, 51, 77, 54, 41, 49, 
  83, 85, 102, 87, 94, 52, 8, -20, 1, -3, 
  -18, -60, -77, -128, -23, -128, -43, -77, -23, -128, 
  119, 99, 117, 97, 117, 95, 117, 92, 109, 82, 
  94, 82, 82, 67, 78, 83, 108, 84, 92, 85, 
  108, 95, 117, 96, 113, 83, 70, 18, 60, 55, 
  64, -43, -18, -77, 40, 5, 27, 13, 25, -33, 
  99, 87, 111, 85, 107, 87, 103, 83, 105, 82, 
  98, 84, 89, 74, 86, 72, 95, 85, 89, 77, 
  104, 85, 108, 87, 108, 82, 82, 60, 85, 85, 
  100, 14, 21, 29, 70, 52, 46, 7, 29, -29, 
  85, 75, 107, 73, 106, 74, 104, 62, 90, 80, 
  95, 65, 94, 49, 93, 81, 104, 74, 92, 77, 
  100, 81, 102, 77, 101, 77, 96, 59, 85, 77, 
  96, 21, 16, 39, 79, 63, 56, -10, 24, -16, 
  77, 60, 101, 67, 102, 67, 101, 74, 96, 67, 
  95, 71, 72, 71, 95, 72, 94, 70, 97, 66, 
  97, 72, 96, 75, 98, 66, 80, 49, 89, 80, 
  94, 37, 50, 57, 86, 69, 71, 31, 46, 22, 
  87, 24, 93, 55, 92, 64, 92, 74, 91, 63, 
  93, 62, 92, 65, 85, 57, 88, 58, 87, 58, 
  82, 59, 93, 67, 89, 49, 64, 57, 98, 79, 
  85, 40, 51, 53, 84, 47, 68, 44, 54, 2, 
  84, 26, 91, 65, 98, 79, 110, 94, 120, 97, 
  117, 78, 106, 89, 116, 93, 100, 65, 91, 65, 
  90, 59, 71, 40, 77, 75, 108, 97, 120, 96, 
  94, 68, 79, 72, 90, 79, 107, 80, 95, 55, 
  78, 37, 84, 46, 89, 65, 109, 87, 117, 92, 
  111, 67, 104, 84, 100, 88, 103, 72, 87, 70, 
  99, 62, 72, 65, 89, 74, 99, 82, 102, 75, 
  81, 52, 86, 72, 82, 57, 91, 72, 92, 35, 
  68, 42, 78, 43, 79, 64, 92, 82, 109, 82, 
  105, 84, 108, 83, 109, 80, 97, 82, 99, 79, 
  94, 63, 93, 60, 81, 70, 96, 56, 89, 60, 
  66, 45, 88, 64, 78, 60, 93, 74, 95, 50, 
  61, 51, 71, 58, 82, 63, 74, 71, 92, 89, 
  102, 80, 87, 43, 105, 76, 89, 62, 89, 63, 
  87, 60, 87, 42, 60, 53, 78, 51, 80, 56, 
  74, 50, 77, 55, 80, 37, 84, 71, 87, 45, 
  68, 55, 65, 52, 64, 57, 69, 51, 99, 77, 
  74, 67, 92, 75, 98, 67, 74, 37, 87, 60, 
  87, 60, 85, 22, 60, 50, 82, 15, 68, 49, 
  81, 39, 72, 45, 79, 42, 85, 59, 81, 20, 
  79, 39, 45, 18, 60, 35, 77, 59, 86, 64, 
  80, 60, 91, 62, 84, 38, 73, 25, 66, 51, 
  75, 50, 70, -128, 34, 42, 79, 19, 64, 16, 
  68, 16, 45, -43, 64, 1, 64, 39, 67, 16, 
  82, -6, 45, 30, 62, 41, 76, 49, 75, 16, 
  69, 53, 90, 75, 81, -29, 44, 29, 52, -3, 
  58, 42, 65, -128, -77, -6, 61, -128, 0, -128, 
  47, 23, 42, -128, -7, -128, 5, -50, 30, -4, 
  75, -33, 41, 22, 54, 31, 65, 26, 71, 6, 
  60, 24, 83, 47, 43, -128, 15, -18, 37, -23, 
  61, 9, 44, -128, -128, -128, 58, -128, -128, -128, 
  4, 15, -43, -128, -37, -128, -3, -77, 5, -2, 
  60, -50, 27, -23, 52, 27, 74, 45, 60, -50, 
  41, 43, 92, 55, -4, -128, -8, -128, -43, -128, 
  13, -33, 15, -128, -128, -128, 45, -128, -128, -128, 
  17, 19, -14, -128, -50, -128, -37, -128, -77, -26, 
  63, -23, 22, -20, 47, 35, 79, 34, 28, -128, 
  44, 29, 72, -128, -50, -128, -128, -128, 33, -128, 
  -12, -29, 4, -128, -128, -128, 44, -128, -128, -128, 
  9, 24, -60, -128, -128, -128, -128, -128, -128, -20, 
  47, -128, -43, -50, 47, 1, 57, -128, -20, -128, 
  56, 46, 65, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -50, -128, -128, -128, 35, -128, -128, -128, 
  -60, 17, -128, -128, -128, -128, -128, -128, -128, -128, 
  44, -77, -29, -20, 43, 4, 41, -77, -128, -128, 
  42, 42, 44, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -8, -128, -128, -128, 
  -6, 40, -128, -128, -128, -128, -128, -128, -128, -128, 
  2, -128, -128, -128, -18, -128, -2, -128, -128, -128, 
  -7, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -4, 40, -37, -128, -128, -128, -128, -128, -128, -128, 
  -26, -128, -128, -128, -128, -128, -29, -128, -128, -128, 
  -43, -60, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, 18, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, 32, -128, -128, -128, -128, -128, -128, -128, -128, 
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