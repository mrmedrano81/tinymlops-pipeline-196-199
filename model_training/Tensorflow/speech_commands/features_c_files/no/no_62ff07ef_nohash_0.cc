/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/62ff07ef_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_62ff07ef_nohash_0.cc" \
 */
#include "no_62ff07ef_nohash_0.h"


const int g_no_62ff07ef_nohash_0_width = 40;
const int g_no_62ff07ef_nohash_0_height = 49;
alignas(16) const signed char g_no_62ff07ef_nohash_0_data[] = {
  -10, -12, 14, 4, -60, -37, -50, -60, -50, -50, 
  -128, -50, -10, -50, -26, -26, -18, -50, -60, -128, 
  -60, -60, -50, -50, -50, -50, -33, -60, -33, -50, 
  -50, -60, -33, -37, -50, -26, -26, -37, -50, -60, 
  -6, 9, 8, -10, -12, -20, -18, -128, -128, -128, 
  -128, -128, -60, -60, -60, -128, -128, -128, -50, -37, 
  -50, -128, -50, -128, -60, -128, -128, -50, -60, -50, 
  -60, -29, -37, -60, -50, -77, -60, -50, -60, -60, 
  11, -26, 2, -26, -50, -128, -128, -128, -60, -77, 
  -26, -29, -26, -50, -37, -77, -60, -128, -60, -77, 
  -50, -128, -128, -77, -60, -50, -50, -77, -50, -37, 
  -60, -77, -60, -50, -60, -37, -37, -77, -50, -77, 
  -3, -20, -50, -128, -29, -23, -26, -128, -50, -37, 
  -26, -128, -37, -77, -50, -77, -60, -128, -128, -128, 
  -60, -128, -50, -77, -50, -128, -128, -77, -50, -128, 
  -128, -77, -60, -128, -60, -128, -60, -128, -128, -128, 
  -43, -37, -4, -60, -128, -128, -128, -77, -26, -77, 
  -37, -77, -128, -77, -37, -77, -37, -77, -50, -29, 
  -20, -77, -12, -50, -50, -50, -128, -128, -128, -50, 
  -50, -50, -37, -128, -50, -50, -50, -77, -50, -128, 
  -1, -50, -6, -20, -50, -128, -77, -50, -50, -128, 
  -128, -128, -29, -128, -128, -128, -77, -77, -60, -128, 
  -29, -43, -29, -77, -77, -43, -37, -77, -50, -77, 
  -37, -128, -29, -50, 11, 5, -14, -50, -50, -128, 
  -33, -26, -18, -23, -20, -43, -77, -128, -128, -128, 
  -128, -128, -29, -128, -77, -77, -77, -128, -37, -43, 
  -50, -50, -29, -128, -77, -77, -50, -128, -50, -43, 
  -50, -128, -77, -77, -50, -77, -29, -77, -77, -128, 
  -60, -60, -43, -50, -128, -128, -29, -128, -37, -77, 
  -37, -128, -50, -128, -77, -77, -77, -128, -128, -128, 
  -50, -43, -77, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -77, -128, 
  -26, -60, -128, -128, -23, -37, -77, -77, -50, -128, 
  -50, -60, -50, -77, -50, -77, -50, -77, -50, -77, 
  -77, -128, -128, -128, -77, -128, -77, -128, -77, -128, 
  -77, -128, -128, -77, -50, -77, -77, -128, -50, -128, 
  -77, -128, -14, -50, -50, -77, -77, -60, -37, -43, 
  -77, -128, -128, -128, -77, -60, -37, -60, -77, -128, 
  -128, -128, -77, -77, -37, -77, -50, -128, -77, -77, 
  -23, -43, -37, -77, -16, -4, 4, -43, -50, -77, 
  -20, -18, 0, -37, -50, -128, -43, -128, -23, -43, 
  -37, -128, -50, -128, -128, -128, -50, -128, -128, -77, 
  -128, -128, -43, -77, -77, -128, -128, -128, -77, -128, 
  -43, -77, -77, -50, -50, -128, -77, -128, -50, -128, 
  -37, -20, 6, -60, -128, -128, -43, -77, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -77, -29, -77, -50, -128, 
  -77, -77, -77, -128, -43, -77, -43, -60, -128, -128, 
  -60, -128, -60, -128, -128, -128, -50, -128, -77, -128, 
  -128, -128, -128, -128, -50, -128, -33, -60, -128, -128, 
  -50, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, -128, -128, -128, -128, -60, -77, -77, -128, 
  -16, -128, -128, -128, -128, -43, -60, -128, -128, -128, 
  -50, -128, -60, -128, -33, -60, -128, -128, -128, -128, 
  -77, -128, -128, -128, -50, -128, -128, -77, -128, -128, 
  -128, -128, -128, -128, -77, -128, -60, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -60, -128, -50, -77, -33, -50, -77, -128, 
  -128, -128, -77, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -77, -128, -128, -128, -60, -128, 
  -50, -60, -77, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -77, -128, -77, -128, -77, -128, 
  -128, -128, -128, -128, -60, -128, -77, -128, -77, -128, 
  -77, -128, -14, -26, -33, -128, -43, -77, -43, -50, 
  -33, -50, -60, -128, -43, -128, -26, -43, -43, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, -128, -128, -128, -128, -128, -128, 
  -29, -128, -50, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -77, -128, -77, -77, -128, -128, 
  -128, -128, -77, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -60, -60, -128, -128, -128, 
  -77, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -43, -128, 
  -77, -128, -33, -128, -128, -128, -77, -128, -77, -128, 
  -23, -128, -20, -77, -128, -128, -77, -128, -33, -128, 
  -128, -128, -128, -77, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  64, 44, -2, -60, -26, -128, -60, -128, -128, -128, 
  -33, -128, -77, -128, -128, -77, -43, -128, -77, -128, 
  -77, -128, -128, -128, -128, -128, -77, -128, -60, -128, 
  -60, -128, -77, -77, -77, -128, -128, -128, -43, -128, 
  114, 92, 86, 60, 74, 35, 7, -8, -33, -50, 
  5, -33, -60, -128, -4, -20, -26, -77, -26, -50, 
  -26, -50, -33, -128, -77, -128, -33, -43, -60, -77, 
  -26, -60, -60, -60, -26, -77, -29, -33, -43, -77, 
  93, 69, 97, 70, 91, 75, 81, 53, 27, 4, 
  36, 37, 53, 1, -77, -18, 19, -14, -60, -60, 
  -128, -128, -60, -77, -18, -77, -33, -128, -77, -77, 
  -33, -77, -26, -33, -29, -77, -37, -77, -14, -60, 
  89, 74, 94, 74, 97, 75, 89, 64, 69, 67, 
  61, 62, 70, 15, -29, -37, 15, -16, -8, -50, 
  -4, -50, -43, -43, 32, 7, 0, -77, -14, -33, 
  -20, -43, -1, -43, -29, -60, -37, -60, -29, -77, 
  78, 71, 82, 51, 92, 79, 76, 46, 61, 24, 
  44, 50, 56, 18, -50, -128, 21, -6, -14, -50, 
  -50, -33, -16, -20, 48, 37, -16, -37, -16, -23, 
  -16, -60, -16, -37, -7, -37, -18, -29, -16, -77, 
  76, 65, 82, 57, 82, 68, 83, 56, 59, 63, 
  69, 45, 57, -10, -2, -33, 21, -12, -60, -50, 
  -37, -50, -23, -14, 4, -37, -16, -43, 16, -10, 
  -23, -37, -23, -50, -37, -77, -50, -50, -6, -33, 
  67, 58, 81, 47, 73, 62, 77, 59, 55, 37, 
  59, 11, 11, -20, 4, -33, 7, -50, -16, -23, 
  -23, -60, -29, -77, -60, -37, 15, 17, 53, 52, 
  83, 80, 99, 87, 102, 89, 108, 94, 109, 87, 
  87, 70, 104, 89, 106, 92, 119, 98, 112, 87, 
  104, 68, 82, 77, 95, 84, 103, 94, 112, 92, 
  102, 84, 102, 92, 116, 91, 99, 80, 94, 87, 
  111, 87, 86, 26, 37, -128, -3, -23, 72, 4, 
  98, 84, 102, 89, 107, 84, 109, 93, 116, 95, 
  117, 90, 114, 92, 104, 87, 110, 93, 117, 98, 
  114, 93, 111, 94, 107, 75, 96, 87, 105, 77, 
  79, 75, 102, 72, 77, 56, 61, 19, 67, 50, 
  95, 74, 96, 77, 96, 66, 99, 74, 112, 87, 
  107, 86, 107, 92, 110, 88, 107, 89, 104, 71, 
  101, 82, 105, 75, 88, 72, 92, 70, 99, 69, 
  78, 67, 101, 73, 86, 42, 57, 20, 59, 7, 
  92, 57, 90, 60, 90, 59, 84, 65, 98, 79, 
  100, 72, 103, 77, 94, 73, 104, 73, 75, 40, 
  74, 54, 92, 60, 64, 54, 82, 57, 85, 42, 
  47, 37, 86, 55, 71, 2, -18, -128, -18, -128, 
  87, 43, 85, 48, 81, 52, 75, 50, 90, 69, 
  92, 70, 93, 66, 95, 70, 81, -23, 40, -37, 
  64, 35, 74, 51, 61, 28, 63, 40, 70, 23, 
  38, 23, 69, 63, 77, -29, -37, -128, -128, -128, 
  78, 19, 70, 39, 72, 31, 51, 39, 82, 48, 
  67, 63, 75, 61, 94, 74, 77, -128, 21, -128, 
  17, -128, 8, -10, 44, -60, 30, 50, 70, -37, 
  -12, -128, 65, 48, 62, -1, -26, -60, 28, -128, 
  70, -29, 55, 16, 62, -4, 35, 15, 60, -14, 
  46, 39, 77, 45, 92, -2, 29, -128, -128, -128, 
  -128, -128, 29, 10, 48, -6, 56, 35, 59, 1, 
  -3, -128, 68, 38, 48, -60, -8, -77, -37, -128, 
  65, -43, 51, 12, 59, 4, 44, 17, 52, -43, 
  59, 19, 77, 44, 85, -16, 29, -128, -128, -128, 
  -60, -128, 29, -14, 43, -50, 50, 34, 54, 8, 
  40, -128, 52, 27, 17, -128, -37, -18, 9, -128, 
  59, -33, 53, -6, 59, -12, 38, -26, 42, -128, 
  48, 17, 67, 15, 19, -128, -128, -128, -128, -128, 
  -128, -128, -6, -60, 11, -128, 32, -7, 35, -60, 
  32, -128, 43, -10, 15, -50, -128, -128, -128, -128, 
  43, -128, 20, -50, 36, -128, 34, -128, -14, -128, 
  46, 41, 55, 15, -20, -128, -128, -128, -128, -128, 
  -128, -128, 11, -14, 38, -37, 63, 47, 56, -14, 
  55, -128, -77, -128, 61, 39, -128, -128, -128, -128, 
  31, -128, 9, -128, 5, -128, -60, -128, -128, -128, 
  13, -29, 20, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -10, -128, 50, -2, -14, -128, 
  32, -128, -128, -128, 40, -4, -128, -128, -128, -128, 
  -128, -128, -43, -128, -128, -128, -128, -128, -128, -128, 
  -43, -60, 6, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, -128, -128, 
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
};