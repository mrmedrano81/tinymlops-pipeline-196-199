/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/bfd26d6b_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_bfd26d6b_nohash_3.cc" \
 */
#include "no_bfd26d6b_nohash_3.h"


const int g_no_bfd26d6b_nohash_3_width = 40;
const int g_no_bfd26d6b_nohash_3_height = 49;
alignas(16) const signed char g_no_bfd26d6b_nohash_3_data[] = {
  -128, -128, -33, -37, -33, -60, -50, -128, -128, -60, 
  -128, -128, -128, -128, -128, -128, -128, -60, -60, -60, 
  -50, -60, -50, -60, -128, -37, -50, -50, -33, -60, 
  -128, -128, -128, -60, -60, -128, -128, -128, -60, -128, 
  -50, -37, -50, -128, -128, -128, -128, -50, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -60, 
  -37, -60, -37, -37, -60, -60, -128, -50, -60, -60, 
  -128, -128, -60, -60, -128, -128, -60, -128, -128, -60, 
  -37, -77, -128, -50, -50, -37, -37, -29, -50, -77, 
  -60, -60, -60, -60, -60, -60, -60, -77, -37, -37, 
  -128, -77, -50, -37, -60, -128, -128, -29, -37, -50, 
  -128, -128, -128, -128, -128, -128, -60, -60, -60, -77, 
  -6, -50, -37, -50, -50, -50, -26, -77, -128, -50, 
  -37, -128, -128, -77, -26, -50, -26, 4, -37, -50, 
  -50, -77, -128, -128, -50, -128, -50, -128, -26, -37, 
  -60, -77, -128, -77, -60, -77, -128, -77, -128, -128, 
  -128, -128, -29, -128, -37, -128, -60, -128, -60, -29, 
  -26, -128, -128, -50, -20, -50, -26, -60, -60, -128, 
  -29, -50, -60, -128, -60, -77, -26, -50, -37, -43, 
  -50, -77, -128, -128, -50, -50, -128, -128, -128, -77, 
  -29, -50, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -77, -77, -60, -37, -43, 
  -20, -77, -77, -128, -50, -77, -20, -77, -77, -43, 
  -60, -128, -128, -128, -128, -128, -60, -128, -60, -128, 
  -14, -128, -37, -128, -77, -128, -128, -128, -37, -128, 
  -128, -128, -60, -77, -77, -128, -77, -128, -50, -128, 
  -77, -128, -77, -77, -77, -77, -20, -128, -77, -33, 
  -20, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  120, 98, 117, 98, 110, 87, 87, 60, 59, 57, 
  62, 46, 64, 47, 17, -18, 10, 22, -14, -33, 
  -8, -3, -20, -14, 29, 11, 34, 0, -20, -37, 
  -50, -128, -77, -50, -29, -50, -50, -50, -50, -77, 
  118, 88, 122, 100, 115, 96, 113, 91, 104, 90, 
  102, 89, 108, 93, 90, 67, 82, 75, 93, 76, 
  85, 77, 82, 83, 104, 83, 86, 79, 99, 89, 
  92, 1, 7, -14, 1, -3, 14, 15, 10, -7, 
  103, 78, 112, 88, 104, 82, 95, 87, 98, 80, 
  101, 89, 106, 81, 96, 65, 64, 51, 80, 75, 
  95, 77, 89, 74, 100, 82, 85, 74, 97, 84, 
  95, 27, 37, 22, 22, 32, 38, 36, 38, 26, 
  94, 79, 105, 76, 95, 79, 94, 85, 95, 73, 
  106, 81, 102, 70, 99, 85, 106, 79, 94, 73, 
  80, 59, 86, 70, 80, 68, 90, 68, 89, 63, 
  68, 18, 34, 24, 37, 30, 40, 27, 40, 25, 
  96, 86, 104, 74, 121, 101, 123, 99, 116, 92, 
  114, 84, 108, 89, 122, 102, 124, 96, 114, 89, 
  104, 85, 102, 89, 108, 90, 112, 73, 95, 81, 
  105, 65, 72, 57, 76, 62, 74, 65, 75, 65, 
  90, 82, 89, 54, 107, 77, 120, 95, 115, 90, 
  111, 90, 112, 95, 117, 95, 102, 83, 107, 84, 
  95, 76, 95, 77, 110, 87, 102, 97, 117, 82, 
  104, 75, 74, 51, 66, 50, 67, 51, 74, 53, 
  77, 78, 78, 44, 80, 79, 104, 72, 110, 89, 
  103, 80, 110, 91, 108, 67, 75, 73, 97, 69, 
  93, 71, 93, 77, 104, 75, 105, 89, 103, 70, 
  99, 92, 105, 77, 87, 69, 84, 63, 82, 72, 
  70, 69, 59, 42, 74, 67, 80, 73, 97, 71, 
  95, 79, 107, 78, 91, 16, 54, 55, 80, 58, 
  85, 61, 84, 69, 94, 71, 105, 84, 90, 65, 
  99, 91, 111, 77, 75, 54, 78, 62, 85, 68, 
  65, 52, 41, 19, 70, 43, 77, 64, 91, 65, 
  89, 66, 100, 50, 55, -128, 40, 22, 64, 26, 
  72, 40, 69, 57, 85, 59, 96, 70, 77, 57, 
  90, 81, 104, 66, 73, 37, 46, 17, 105, 89, 
  62, 39, 25, -2, 67, 26, 76, 50, 80, 50, 
  87, 69, 86, -128, 6, -128, 14, -16, 24, -23, 
  61, 10, 58, 11, 67, 7, 88, 48, 32, 34, 
  77, 61, 79, 34, 55, -50, 46, 11, 81, 58, 
  54, 7, -20, -77, 62, -16, 68, 11, 74, 19, 
  86, 59, 61, -128, -128, -128, -128, -128, -26, -128, 
  4, -50, 36, -43, 2, -128, 60, -77, 5, -10, 
  60, 37, 47, -43, 45, -14, 37, -6, 70, 29, 
  34, -37, -128, -128, 39, -128, 44, -128, 49, -77, 
  59, -6, -50, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, 15, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, 10, -128, 6, -43, -4, -128, 
  -8, -128, -128, -128, -23, -128, -10, -128, -128, -128, 
  9, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -50, -128, -128, -128, 
  -33, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
  -128, -128, -128, -128, -128, -77, -14, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -50, -33, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -16, -50, 12, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -60, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
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
