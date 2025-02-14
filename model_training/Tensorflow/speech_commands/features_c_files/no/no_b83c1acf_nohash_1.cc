/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/b83c1acf_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_b83c1acf_nohash_1.cc" \
 */
#include "no_b83c1acf_nohash_1.h"


const int g_no_b83c1acf_nohash_1_width = 40;
const int g_no_b83c1acf_nohash_1_height = 49;
alignas(16) const signed char g_no_b83c1acf_nohash_1_data[] = {
  103, 80, 73, 64, 72, 61, 71, 62, 40, 70, 
  75, 82, 103, 95, 113, 98, 116, 95, 114, 95, 
  114, 94, 113, 97, 117, 97, 111, 92, 102, 82, 
  111, 99, 118, 94, 110, 96, 111, 97, 120, 100, 
  82, 62, 76, 69, 84, 79, 78, 58, 72, 65, 
  50, 46, 64, -6, 69, 17, 52, 38, 66, 47, 
  64, 7, 74, 34, 42, -43, 61, 40, 77, 61, 
  61, -37, 29, 1, 55, 37, 55, -16, 25, -128, 
  91, 49, 62, 20, 54, 4, 57, -3, 59, 54, 
  65, 54, 44, -128, 27, -128, 20, -60, -43, -128, 
  -16, -128, -128, -128, -60, -128, 39, -37, 35, -4, 
  -50, -128, -128, -128, 37, -128, 40, -37, -77, -128, 
  71, 68, 66, 42, 55, 40, 85, 69, 70, 54, 
  65, 33, 43, -18, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  53, -77, 71, 51, 59, 6, 28, 44, 66, 21, 
  39, -37, 7, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  73, 41, 44, 14, 57, -50, 15, 23, 64, 15, 
  44, -33, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  121, 100, 119, 101, 120, 97, 118, 91, 74, 69, 
  108, 82, 69, -43, -1, -128, -128, -128, -128, -128, 
  -128, -128, 15, -128, 1, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  119, 94, 114, 98, 120, 93, 119, 94, 91, 71, 
  117, 95, 86, 37, 84, -2, -77, -128, -128, -128, 
  -50, 29, 82, 44, 65, 50, 17, -50, -10, -43, 
  -77, -128, -128, -128, -20, -128, -14, -128, -128, -128, 
  109, 85, 87, 75, 105, 62, 101, 84, 113, 92, 
  92, 82, 97, 56, 76, 40, -128, -128, -128, -128, 
  40, 42, 91, 64, 75, 44, 59, 25, 50, 8, 
  -29, -128, -128, -77, -2, -128, -3, -128, -128, -128, 
  105, 84, 69, 64, 97, 62, 93, 77, 107, 90, 
  89, 76, 105, 84, 74, 12, 38, -60, -18, 5, 
  25, 44, 67, 63, 89, 64, 93, 71, 72, 44, 
  11, -128, -128, -50, 5, -128, -4, -77, -128, -128, 
  99, 79, 84, 63, 107, 98, 105, 87, 109, 86, 
  92, 75, 108, 82, 94, 74, 105, 82, 111, 100, 
  119, 80, 110, 91, 114, 96, 122, 100, 115, 88, 
  95, 57, 63, 25, 43, -7, 55, 50, 70, 53, 
  94, 70, 47, 20, 69, 59, 105, 92, 112, 94, 
  104, 49, 99, 94, 109, 77, 111, 92, 107, 68, 
  117, 99, 85, 73, 102, 84, 104, 77, 104, 93, 
  104, 89, 95, 41, 55, 8, 94, 66, 95, 69, 
  90, 65, 54, 0, 58, -77, 87, 70, 102, 85, 
  105, 65, 95, 82, 102, 79, 96, 85, 115, 61, 
  86, 70, 79, 65, 99, 70, 93, 47, 88, 85, 
  94, 35, 66, 64, 87, 21, 83, 57, 88, 65, 
  84, 58, 53, 7, 60, -128, 43, 17, 89, 74, 
  95, 68, 93, 74, 97, 70, 96, 82, 108, 61, 
  51, 30, 60, 59, 93, 67, 82, 37, 68, 62, 
  81, -26, 62, 47, 82, 53, 53, 35, 83, 59, 
  84, 58, 52, -1, 57, -128, 24, -60, 85, 64, 
  87, 60, 86, 68, 90, 56, 90, 69, 92, 35, 
  27, -128, 58, 30, 72, 38, 54, 21, 65, 50, 
  65, -128, 59, 53, 80, 36, 52, 24, 50, 35, 
  77, 50, 54, -50, 37, -128, 66, -4, 85, 61, 
  81, 51, 80, 57, 76, 44, 89, 48, 30, -7, 
  14, -77, 54, -128, 41, -6, 24, -29, 59, 37, 
  -12, -77, 70, 56, 58, -6, 67, 17, 40, -16, 
  72, 39, 2, -128, -7, -14, 88, 54, 92, 61, 
  74, 30, 77, 46, 55, 36, 94, 34, -7, -50, 
  1, -128, 26, -128, 74, 31, 40, -16, 44, -60, 
  -29, -128, 63, 54, 54, 10, 50, -33, 29, 0, 
  68, 22, -128, -60, 25, 34, 85, 39, 86, 53, 
  65, 2, 72, 45, 60, 34, 44, -128, -23, -128, 
  -60, -128, 18, -128, 74, 35, -10, -128, 0, -128, 
  58, -23, 57, 49, 30, -37, 58, 30, 2, -60, 
  65, 21, -23, -128, 11, -6, 77, 41, 63, 27, 
  60, -2, 50, -33, 49, -128, -77, -128, -20, -128, 
  -128, -128, 23, -128, -14, -128, -128, -128, -43, -128, 
  35, -128, 39, 10, -26, -60, 29, -50, -77, -128, 
  61, 31, 57, 8, 68, -1, 49, -4, -50, -128, 
  17, -128, 31, -16, 69, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, 40, 26, -128, -128, -50, -128, -128, -128, 
  47, 16, 70, 15, 75, 32, 25, 25, -1, -128, 
  -128, -128, -26, -128, 16, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 34, -43, -128, -128, -128, -128, -128, -128, 
  -20, -77, 55, -128, 35, -128, -128, -128, -128, -128, 
  -128, -128, 24, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -18, -60, 69, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -29, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -8, -77, 54, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 4, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 57, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -16, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 19, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -77, -128, 
  -128, -60, -18, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -2, -3, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -60, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 35, -7, 51, 44, -128, -128, -128, -128, 
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
