/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/b83c1acf_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_b83c1acf_nohash_1.cc" \
 */
#include "yes_b83c1acf_nohash_1.h"


const int g_yes_b83c1acf_nohash_1_width = 40;
const int g_yes_b83c1acf_nohash_1_height = 49;
alignas(16) const signed char g_yes_b83c1acf_nohash_1_data[] = {
  116, 93, 84, 60, 49, 54, 59, 55, 40, 17, 
  48, 23, -10, -37, -4, -37, -4, -7, -128, -128, 
  -128, -50, -10, -7, -128, -128, -128, -60, -128, -60, 
  -60, -128, -60, -60, -26, -26, -26, -37, -33, -50, 
  40, 11, 52, 8, -20, 54, 80, 50, 35, 35, 
  32, 19, 22, 13, 34, 1, -18, -29, -60, -60, 
  -128, -37, -18, -50, -26, -26, -128, -60, -50, -37, 
  -18, -50, -128, -37, -50, -14, -12, -20, -50, -50, 
  76, 37, 74, 35, 19, 47, 70, 41, 34, -29, 
  36, 44, 71, 44, -3, -23, -12, -33, -128, -29, 
  -37, -4, 21, -16, 12, -29, -128, -128, -60, -50, 
  -50, -77, -50, -37, -50, -43, -20, -29, -50, -50, 
  63, 47, 72, 44, 35, 24, 44, 48, 40, -8, 
  -14, -43, 10, 8, 9, -60, -2, -33, -37, -23, 
  8, -77, -77, 47, 70, -50, -60, -50, -37, -29, 
  -26, -77, -37, -50, -20, -43, -50, -77, -50, -128, 
  67, -18, 48, 8, 4, 22, 44, -7, -10, -23, 
  -14, 14, 11, -77, -77, -128, 1, -4, -60, -50, 
  -14, -77, -77, 43, 55, -77, -60, -77, -50, -50, 
  -50, -77, -60, -128, -37, -33, -20, -60, -29, -77, 
  46, -18, 54, 29, 19, -37, 29, 4, 23, 32, 
  4, -12, 21, -60, -60, -128, 8, -29, -60, -128, 
  -77, -128, -128, -37, 6, -43, -50, -128, -50, -77, 
  -77, -128, -50, -60, -77, -128, -37, -60, -50, -77, 
  51, -60, 20, -60, 22, 15, 40, -33, 19, 19, 
  37, -18, 19, -4, -43, -60, -6, -50, -128, -128, 
  -77, -128, -128, -50, -16, -128, -77, -128, -128, -43, 
  -77, -77, -50, -128, -77, -128, -77, -128, -37, -77, 
  -50, -128, -10, -26, -1, -77, 0, -50, -16, -8, 
  25, -29, -128, -128, -12, -128, -60, -77, -128, -128, 
  -50, -128, -128, -128, -128, -128, -77, -77, -77, -128, 
  -128, -128, -77, -77, -50, -128, -77, -128, -50, -128, 
  -77, -128, -128, -16, 30, -128, -128, -128, 25, 5, 
  -16, -128, -43, -128, -26, -77, -77, -128, -29, -128, 
  -77, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -77, -128, -77, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -33, -60, 7, -128, -128, -128, -128, -128, 
  -77, -128, -50, -37, -20, -77, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -50, -128, -128, -77, -50, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -43, -37, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -60, 11, -77, -29, -128, -128, -128, 5, -3, 
  -37, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -77, -128, -77, -128, 
  112, 97, 117, 96, 111, 84, 87, 72, 60, -14, 
  -37, -77, -29, 11, 47, 16, -20, 12, 34, -20, 
  -77, -60, 48, 74, 92, 64, 65, 49, 31, 45, 
  72, 51, 4, -23, -43, -18, -6, -50, -16, -16, 
  116, 88, 89, 94, 118, 86, 116, 95, 111, 95, 
  103, 54, 36, 23, 32, 40, 37, 51, 62, 59, 
  85, 87, 111, 94, 114, 92, 103, 87, 101, 83, 
  108, 92, 105, 84, 101, 91, 102, 74, 62, 65, 
  106, 88, 90, 79, 114, 93, 98, 85, 96, 85, 
  106, 81, 93, 67, 63, 50, 61, 62, 88, 74, 
  87, 74, 97, 89, 114, 93, 111, 91, 105, 82, 
  106, 88, 97, 40, 80, 72, 97, 85, 77, 65, 
  115, 96, 113, 92, 122, 101, 98, 88, 112, 74, 
  109, 84, 112, 84, 106, 88, 107, 92, 114, 97, 
  112, 85, 110, 95, 117, 97, 121, 99, 115, 86, 
  104, 85, 100, 72, 84, 68, 100, 84, 104, 88, 
  99, 78, 90, 77, 106, 82, 110, 96, 119, 82, 
  114, 90, 115, 87, 109, 91, 113, 94, 113, 93, 
  117, 95, 114, 86, 110, 89, 112, 92, 111, 94, 
  110, 85, 99, 65, 80, 52, 90, 72, 104, 87, 
  92, 64, 79, 61, 80, 22, 117, 98, 117, 95, 
  114, 92, 108, 91, 110, 90, 110, 89, 112, 90, 
  115, 92, 106, 71, 92, 72, 108, 70, 85, 74, 
  104, 89, 114, 88, 81, 54, 84, 64, 100, 65, 
  74, 27, 56, 17, 27, -128, 103, 56, 95, 99, 
  115, 95, 107, 91, 110, 92, 109, 79, 106, 93, 
  115, 89, 109, 71, 80, 68, 92, 54, 86, 60, 
  97, 77, 104, 75, 83, 59, 82, 64, 101, 77, 
  64, -20, -50, -128, -128, -128, 92, 50, 96, 87, 
  101, 92, 111, 82, 104, 84, 108, 84, 109, 89, 
  105, 77, 97, 68, 71, 46, 71, -43, 69, -18, 
  84, 53, 70, 41, 80, 61, 78, 50, 92, 69, 
  57, -23, -128, -128, -128, -128, 38, -43, 67, 41, 
  73, 75, 96, 74, 96, 71, 92, 70, 100, 76, 
  91, 27, 75, 29, 62, -128, 44, -128, 43, -1, 
  34, -43, 64, 41, 80, 54, 77, 38, 78, 49, 
  54, 16, 64, -128, -20, -128, 14, -128, 21, -2, 
  71, 53, 95, 49, 88, 47, 79, 57, 101, 59, 
  75, -18, 51, -37, 13, -128, 11, -128, 34, -20, 
  58, -16, 31, -77, 69, 55, 84, 49, 85, 53, 
  52, 22, 68, -128, 22, -50, -43, 28, 68, -128, 
  66, -128, 59, 19, 63, -50, 65, 19, 64, 32, 
  47, -128, 6, -128, -128, -128, 25, -128, -18, -128, 
  -33, -128, 40, -128, 45, 24, 70, 9, 66, 10, 
  44, 27, 79, -128, -20, -128, 52, -4, 35, -128, 
  50, -128, -10, -128, 41, -128, 54, -3, 56, -128, 
  28, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 8, -128, -10, -60, 44, -128, 
  62, 37, 69, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, 20, -128, -37, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, 2, -128, 4, -128, 
  -16, -128, 63, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -77, -128, -14, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -29, 37, 1, 92, 77, 94, 51, 74, 27, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  39, -128, 24, 67, 104, 85, 104, 82, 105, 84, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -50, 65, 34, 81, 56, 94, 74, 101, 78, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 21, 22, 71, 54, 82, 57, 85, 54, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 4, -128, 32, 21, 68, 35, 84, 41, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -6, 4, 55, -16, 63, 11, 63, 31, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 46, -33, 47, -77, 39, -4, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 31, -77, 14, -128, -14, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -77, -128, -1, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -23, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 1, -37, 14, -128, 22, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -29, -128, -26, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
