/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/6021f08b_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_6021f08b_nohash_0.cc" \
 */
#include "no_6021f08b_nohash_0.h"


const int g_no_6021f08b_nohash_0_width = 40;
const int g_no_6021f08b_nohash_0_height = 49;
alignas(16) const signed char g_no_6021f08b_nohash_0_data[] = {
  122, 99, 119, 99, 110, 92, 104, 87, 99, 82, 
  94, 79, 89, 81, 92, 80, 85, 74, 80, 75, 
  94, 79, 90, 84, 85, 82, 85, 75, 81, 70, 
  82, 80, 94, 88, 98, 90, 107, 86, 93, 80, 
  94, 89, 109, 67, 83, 74, 92, 68, 70, 72, 
  82, 71, 88, 70, 95, 74, 92, 74, 85, 68, 
  79, 70, 82, 64, 87, 67, 84, 67, 87, 64, 
  82, 69, 80, 72, 89, 64, 80, 63, 85, 65, 
  96, 75, 89, 50, 91, 60, 81, 58, 78, 49, 
  64, 47, 72, 65, 67, 55, 83, 44, 70, 64, 
  76, 53, 80, 54, 77, 50, 75, 51, 70, 57, 
  81, 55, 69, 49, 78, 59, 87, 66, 79, 54, 
  80, 51, 52, 40, 79, 65, 77, 72, 76, 36, 
  82, 60, 72, 28, 60, 55, 82, 57, 76, 46, 
  76, 50, 72, 56, 78, 51, 62, 48, 75, 67, 
  58, 44, 62, 25, 53, 45, 77, 46, 75, 53, 
  71, 29, 75, 56, 75, -7, 54, 34, 64, 43, 
  76, 62, 69, 2, 74, 20, 40, 40, 76, 41, 
  65, 38, 53, 29, 69, 38, 64, 4, 59, 32, 
  65, 29, 61, 35, 62, 44, 82, 45, 63, 50, 
  78, 14, 49, -8, 60, 44, 75, 37, 70, 58, 
  70, 31, 72, 37, 60, 6, 66, 43, 61, 4, 
  55, 19, 60, 35, 61, 33, 44, 20, 58, 16, 
  47, 34, 62, 40, 67, 45, 76, 49, 70, 32, 
  58, 43, 74, 65, 90, 49, 85, 37, 49, 44, 
  42, 6, 71, 63, 67, 15, 60, 37, 62, 46, 
  74, 45, 53, 19, 74, 57, 56, 42, 56, 17, 
  67, 46, 59, 23, 63, 37, 61, 33, 65, 24, 
  80, 12, 76, 26, -2, 35, 78, 30, 83, 55, 
  65, 16, 57, -6, 34, 27, 50, 11, 38, 46, 
  68, 16, 51, 7, 52, 14, 64, 33, 60, 33, 
  57, 32, 57, 16, 57, 7, 46, 37, 61, 4, 
  69, 18, 59, 36, 62, 7, 47, 44, 62, -12, 
  60, 32, 57, 4, 51, 12, 50, 13, 64, 20, 
  47, 45, 59, 4, 53, 29, 60, 40, 62, 37, 
  44, -18, 51, -12, 47, 37, 66, 9, 55, 11, 
  76, 41, 66, 0, 75, 33, 60, 47, 57, 44, 
  76, 29, 61, -14, 71, 37, 58, 21, 60, 1, 
  34, -4, 35, 2, 27, -29, 53, 24, 56, -7, 
  57, 23, 46, -23, 51, -26, 46, -37, 41, 22, 
  114, 100, 120, 90, 114, 90, 102, 54, 99, 72, 
  96, 66, 49, 39, 62, 58, 66, 73, 96, 70, 
  71, 44, 69, 40, 61, 36, 63, 6, 43, -77, 
  40, -2, 50, 20, 34, 4, 59, 27, 55, -12, 
  109, 75, 103, 94, 119, 70, 90, 76, 107, 91, 
  95, 71, 72, 68, 96, 69, 99, 89, 112, 90, 
  97, 57, 101, 80, 87, 72, 105, 81, 60, 22, 
  58, 57, 88, 73, 79, -26, 20, -10, 46, 9, 
  100, 70, 79, 80, 107, 64, 108, 84, 94, 74, 
  91, 76, 80, 63, 72, 60, 95, 82, 103, 82, 
  94, 67, 103, 79, 94, 67, 97, 75, 72, 50, 
  69, 57, 89, 70, 79, 20, 54, 17, 63, -8, 
  89, 45, 60, 69, 99, 76, 114, 92, 111, 85, 
  108, 87, 92, 79, 111, 94, 113, 89, 115, 91, 
  113, 87, 98, 82, 92, 78, 112, 93, 120, 99, 
  114, 84, 97, 69, 89, 41, 51, 26, 65, 22, 
  78, 39, 50, 69, 95, 65, 104, 81, 115, 95, 
  106, 84, 107, 85, 110, 89, 113, 81, 110, 95, 
  109, 83, 102, 75, 100, 77, 109, 80, 105, 88, 
  107, 61, 94, 81, 100, 38, 43, 31, 61, 59, 
  70, -23, 74, 70, 86, 75, 97, 65, 109, 77, 
  102, 70, 99, 77, 99, 88, 107, 83, 106, 47, 
  82, 63, 81, 56, 84, 71, 92, 59, 90, 66, 
  85, 21, 75, 46, 59, 39, 44, 4, 39, 39, 
  65, -33, 73, 63, 79, 53, 77, 60, 97, 54, 
  94, 60, 91, 69, 95, 87, 103, 71, 77, -14, 
  56, 29, 73, 43, 77, 55, 79, 35, 82, 62, 
  76, 35, 77, 49, 70, 21, 59, 35, 47, 9, 
  70, -20, 75, 52, 64, 58, 75, 62, 88, 25, 
  89, 42, 80, 67, 103, 79, 75, 10, 31, -128, 
  41, -37, 66, 35, 64, 43, 70, -2, 71, 49, 
  72, 17, 73, 47, 75, 16, 54, 8, 44, -2, 
  67, 1, 74, 26, 34, 45, 57, 52, 74, 47, 
  80, 60, 87, 75, 97, 40, 62, -128, -128, -128, 
  -26, -128, 43, -60, 34, -37, 37, -128, 40, 2, 
  58, -10, 59, 32, 59, -43, 4, -128, 16, -77, 
  59, -3, 66, 24, 44, 40, 63, 45, 69, 25, 
  68, 56, 78, 40, 62, -128, 30, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -7, -128, 1, -77, 25, -128, 30, -43, 34, -128, 
  59, -29, 66, 25, 42, 48, 65, 14, 57, -26, 
  72, 39, 88, 42, -26, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -77, -128, -26, -128, 2, -128, 29, -128, 
  60, -50, 62, 18, 39, 32, 56, -50, 6, -50, 
  74, 24, 70, -29, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 31, -43, 10, -128, 
  54, -128, 36, -128, -43, -128, -43, -128, -128, -128, 
  39, -128, -43, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -77, 22, -128, 7, -128, 
  39, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 11, -128, -1, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -2, -128, -26, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -60, 30, -128, -8, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 25, -18, -33, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -77, 42, -18, 10, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -37, 47, 0, -1, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 7, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -14, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -77, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -10, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -26, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -77, 4, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -77, 20, -60, -8, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -60, 4, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -33, -128, 
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
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -16, 20, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -29, 0, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -50, 4, -77, -33, -43, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -16, -50, -26, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -29, -128, -18, -60, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -23, -128, 
};
