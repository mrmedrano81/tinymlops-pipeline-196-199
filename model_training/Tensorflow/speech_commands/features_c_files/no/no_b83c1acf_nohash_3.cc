/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/b83c1acf_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_b83c1acf_nohash_3.cc" \
 */
#include "no_b83c1acf_nohash_3.h"


const int g_no_b83c1acf_nohash_3_width = 40;
const int g_no_b83c1acf_nohash_3_height = 49;
alignas(16) const signed char g_no_b83c1acf_nohash_3_data[] = {
  91, 71, 17, -2, -4, 34, 33, 11, 14, 4, 
  -50, -2, 5, 37, 44, 44, -10, -60, -10, -50, 
  -128, -128, -18, 46, 54, 69, 91, 74, 64, 54, 
  31, 25, 26, 4, 5, 17, 73, 75, 68, 23, 
  88, 54, 58, 0, 9, 35, 50, 14, 22, 11, 
  9, 4, 12, 36, 6, -60, -12, -14, -6, -37, 
  -128, -128, -128, -1, 35, -33, -37, -50, 28, 20, 
  11, -18, -12, -29, -37, -50, -43, -60, -2, -43, 
  40, 59, 54, 1, -14, 2, 14, 14, 52, 32, 
  42, -26, -29, -33, -4, -29, -2, -77, -60, -128, 
  -128, -128, -128, -128, -12, -128, -128, -128, -43, -128, 
  -20, -60, -14, -50, -37, -128, -77, -128, -43, -60, 
  80, 16, 49, 34, 20, -43, 21, 4, 13, 5, 
  -4, -43, -37, -77, -10, -23, -8, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -77, -77, -128, -128, -128, -77, -128, 
  73, 17, 49, -1, -10, -14, 22, 4, 15, 18, 
  -6, -10, -29, -128, -60, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, -128, -128, -77, -128, -128, -128, -128, -128, 
  112, 96, 114, 97, 117, 95, 99, 67, 72, 57, 
  56, 37, 29, -23, -26, -128, -128, -128, -77, -128, 
  -128, -128, -60, -14, -33, -128, -128, -128, -128, -128, 
  -128, -128, -128, -77, -37, -60, -60, -128, -128, -60, 
  106, 88, 105, 80, 102, 72, 97, 79, 77, 72, 
  80, 68, 40, 11, 1, -128, -128, -128, -77, -43, 
  -37, -77, 37, 50, 47, 4, -128, -128, -60, -128, 
  -50, -77, -77, -60, -23, -37, -43, -128, -60, -50, 
  116, 84, 119, 100, 118, 98, 121, 95, 110, 96, 
  118, 94, 109, 83, 96, 68, 64, 44, 53, 55, 
  69, 84, 111, 95, 110, 91, 86, 40, 58, 8, 
  -6, -37, -4, 5, 27, 11, 34, -3, 34, 25, 
  117, 92, 112, 95, 115, 91, 118, 94, 99, 74, 
  112, 91, 105, 87, 109, 64, 72, 72, 82, 89, 
  102, 78, 102, 84, 102, 78, 88, 68, 81, 49, 
  44, 21, 45, 11, 55, 44, 55, 32, 54, 47, 
  111, 87, 102, 85, 109, 77, 107, 85, 110, 64, 
  102, 85, 85, 70, 92, 88, 105, 86, 111, 94, 
  115, 92, 108, 87, 113, 89, 109, 92, 108, 87, 
  85, 73, 82, 57, 74, 62, 74, 60, 82, 60, 
  103, 76, 70, 52, 86, 92, 119, 99, 120, 93, 
  107, 82, 106, 90, 114, 87, 117, 97, 117, 101, 
  122, 92, 100, 84, 109, 100, 121, 96, 117, 95, 
  108, 92, 114, 87, 90, 72, 89, 87, 111, 84, 
  93, 66, 82, 53, 75, 87, 107, 75, 115, 89, 
  96, 67, 110, 85, 107, 84, 109, 87, 112, 74, 
  101, 82, 80, 47, 99, 77, 96, 64, 98, 81, 
  98, 72, 90, 62, 85, 69, 97, 73, 89, 67, 
  89, 59, 86, 53, 72, 76, 94, 62, 105, 67, 
  83, 64, 107, 80, 96, 88, 99, 67, 105, 69, 
  88, 38, 91, 55, 98, 62, 79, 62, 89, 60, 
  85, 64, 78, 47, 72, 56, 94, 71, 85, 54, 
  77, 22, 84, 45, 67, 62, 74, 64, 102, 56, 
  77, 70, 98, 71, 92, 79, 103, 72, 90, 19, 
  -6, -3, 68, 0, 70, -6, 62, 24, 73, 69, 
  57, -10, 40, -8, 46, 37, 75, 54, 73, 55, 
  62, -16, 72, -3, 49, -18, -4, 67, 94, 27, 
  75, 72, 94, 61, 86, 66, 85, 75, 75, -50, 
  32, -29, 40, -50, 49, -1, 24, -60, 68, 44, 
  78, -60, 47, -8, 35, 40, 74, 42, 61, 28, 
  39, -128, 72, -2, 49, 19, 22, 65, 89, 34, 
  71, 59, 80, 60, 79, 60, 90, 69, 72, -128, 
  -14, -60, 38, -128, 19, -128, 13, -128, 36, -33, 
  60, -37, 56, -16, 37, 10, 77, 52, 53, 16, 
  62, -6, 77, 22, 50, -128, -77, 50, 70, -128, 
  24, 19, 59, 50, 83, 63, 84, 48, -10, -128, 
  -128, -128, 37, -128, -6, -128, -7, -128, -12, 7, 
  65, 8, 54, -16, 21, 14, 60, 29, 51, 17, 
  57, -10, 77, 24, 54, -10, -33, 25, 45, -128, 
  -7, 11, 51, 22, 81, 41, 60, -37, -18, -128, 
  -128, -128, 35, -33, -60, -128, -128, -128, -128, -128, 
  34, -8, 5, -128, 39, -1, 40, -26, -14, -29, 
  -23, -128, 69, -6, 48, -29, -50, 10, 24, 4, 
  34, -128, 16, 13, 73, -128, -128, -128, -128, -128, 
  -128, -128, -6, -128, -128, -128, -128, -128, -128, -128, 
  -16, -128, -77, -128, -14, -128, 44, -29, -128, -128, 
  -128, -128, 40, -128, -60, -128, -128, 24, 47, 15, 
  21, -128, 16, -128, 35, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, 2, -128, -128, -128, 
  -128, -128, -128, -128, -20, -128, -128, -128, -128, -43, 
  -14, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -128, -128, -128, 
  -128, -128, -23, -128, -128, -128, -128, -128, -128, -128, 
  -18, -128, -10, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -23, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 9, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -10, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
