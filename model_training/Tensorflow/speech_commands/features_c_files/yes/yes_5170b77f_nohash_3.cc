/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/5170b77f_nohash_3.wav" \
 * --output_c_file="features_c_files/yes/yes_5170b77f_nohash_3.cc" \
 */
#include "yes_5170b77f_nohash_3.h"


const int g_yes_5170b77f_nohash_3_width = 40;
const int g_yes_5170b77f_nohash_3_height = 49;
alignas(16) const signed char g_yes_5170b77f_nohash_3_data[] = {
  86, 53, 71, 57, 14, 44, 50, -2, 17, 15, 
  0, -12, -4, -37, -18, 7, -26, -2, -4, -37, 
  -33, -128, -60, -26, -4, -26, -26, -26, -18, -37, 
  -33, -26, -10, -7, 0, -12, 9, -12, 20, 17, 
  75, 35, 66, 56, 19, 4, -3, -16, -7, -16, 
  -50, -8, 12, 9, -12, -16, -18, -37, -50, -29, 
  -18, -50, -37, -37, -50, -50, 9, -37, -37, -50, 
  -18, -14, -18, -29, -18, -37, -18, -20, -12, -16, 
  75, 29, 60, 44, 10, 7, 4, 2, -7, 11, 
  -2, 6, 41, 33, 8, -7, 24, 26, 34, -23, 
  25, 24, -26, -37, -20, -4, -7, -29, -12, -8, 
  -18, -16, -7, -43, -2, -43, -14, -10, -7, -33, 
  72, 31, 58, 37, 0, -16, -1, 2, 14, 1, 
  -3, -60, 4, 18, -29, -60, 14, -6, 9, -18, 
  -14, -26, -20, -33, -37, -60, -37, -23, -2, -18, 
  -20, -43, -20, -12, -3, -7, 6, -8, -14, -14, 
  62, 14, 40, 17, -6, -43, -2, 7, 26, -6, 
  1, -50, -60, -23, -3, -60, -77, -128, 15, -14, 
  -16, -29, -7, -26, -20, -60, -37, -43, -29, -77, 
  -3, -33, -29, -8, 0, 4, -29, -60, -4, -29, 
  62, 4, 46, 12, 2, -16, -8, 11, -12, -12, 
  -23, -37, -128, -128, -23, -29, -50, -26, -12, -50, 
  -50, -77, -37, -29, -20, -60, -23, -26, -8, -37, 
  -8, -10, -23, -60, -50, -23, -4, -37, -43, -50, 
  63, 29, 54, 21, -8, -128, -26, -50, -14, -77, 
  -33, -18, -18, -77, -10, -77, -33, -60, -43, -60, 
  -128, -128, -37, -77, -43, -20, -50, -77, -77, -60, 
  -16, -60, -23, -50, -33, -60, -60, -50, -18, -60, 
  49, -18, 33, -29, -4, -29, -37, -50, 4, -33, 
  -6, -60, -43, -128, -18, -20, -33, -60, -33, -60, 
  -128, -60, -23, -60, -43, -60, -50, -50, -33, -29, 
  -33, -77, -50, -128, -12, -43, -12, -60, -18, -77, 
  47, 11, 40, -26, -6, -12, 13, -10, -16, -60, 
  -26, -60, -77, -128, -18, -128, -43, -77, -77, -60, 
  -33, -128, -43, -77, -50, -77, -77, -77, -18, -128, 
  -60, -43, -18, -77, -33, -60, -33, -50, -3, -60, 
  40, -16, 37, 15, 36, -18, 22, 27, 43, -3, 
  4, 11, 0, -128, -33, -43, -43, -128, -43, -50, 
  -12, -50, -23, -60, -23, -77, -43, -77, -33, -128, 
  -43, -77, -128, -128, -43, -128, -43, -60, -20, -37, 
  52, 4, 53, -4, 9, 0, 9, -29, 2, -50, 
  -1, -33, -60, -128, -128, -128, -128, -128, -77, -77, 
  -77, -128, -43, -128, -60, -128, -26, -33, -33, -77, 
  -7, -43, -33, -77, -77, -128, -20, -43, -16, -43, 
  104, 96, 109, 71, 104, 89, 95, 52, 66, 44, 
  44, 0, -23, -128, -77, -128, -43, -128, -60, -23, 
  -8, -60, -3, -26, 19, 7, -33, -33, -3, 34, 
  46, -43, -26, -50, -77, -43, 22, 0, -10, -37, 
  119, 94, 117, 94, 108, 88, 110, 89, 80, 70, 
  64, -16, -7, -50, -1, -8, 20, -26, 18, 27, 
  46, 20, 28, 50, 72, 55, 15, 10, 49, 85, 
  98, 52, 36, -23, 60, 72, 99, 84, 72, 47, 
  109, 95, 109, 94, 116, 94, 114, 91, 111, 81, 
  51, -18, 0, -50, -37, 39, 54, 27, 63, 80, 
  108, 87, 110, 94, 111, 92, 92, 80, 102, 96, 
  118, 91, 77, 65, 100, 91, 108, 88, 93, 63, 
  107, 91, 104, 87, 118, 98, 117, 96, 112, 82, 
  91, 44, 67, 60, 55, 57, 84, 77, 105, 90, 
  111, 83, 104, 85, 110, 84, 99, 79, 104, 89, 
  112, 85, 97, 49, 77, 67, 105, 82, 99, 67, 
  101, 79, 97, 59, 116, 98, 121, 90, 112, 96, 
  114, 85, 95, 85, 98, 69, 101, 91, 110, 89, 
  108, 85, 110, 90, 106, 70, 90, 82, 104, 84, 
  109, 88, 112, 77, 77, 67, 100, 79, 102, 54, 
  93, 60, 75, 57, 92, 72, 100, 83, 112, 85, 
  109, 88, 95, 79, 98, 78, 102, 83, 115, 89, 
  98, 68, 100, 84, 98, 72, 72, 36, 78, 36, 
  75, 71, 99, 64, 91, 62, 91, 72, 94, 54, 
  85, 44, 65, 44, 54, -60, 70, 55, 94, 71, 
  98, 81, 101, 64, 88, 74, 96, 81, 98, 63, 
  57, 46, 90, 70, 85, -20, 62, 32, 39, -128, 
  43, 16, 62, -2, 6, -60, 72, 51, 80, 25, 
  14, -128, 26, -128, -77, -128, -128, -128, 34, -10, 
  57, 20, 59, -3, 46, 27, 74, 65, 88, 35, 
  2, 29, 61, -10, 19, -128, 52, -77, -128, -128, 
  -1, -128, -33, 15, 24, -128, 2, -128, 36, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  55, -50, 32, 4, 62, 10, 53, -6, 1, -128, 
  -128, -77, 59, -128, 1, -128, 37, -20, -60, -128, 
  -29, -128, -128, 36, 79, 43, 11, -128, 14, 1, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  23, -128, 2, -128, 12, -43, -50, -77, -7, -128, 
  -128, -60, 27, -128, -37, -128, 49, 49, -4, -60, 
  19, -128, 41, 66, 104, 84, 90, 52, 74, 79, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -8, -128, -77, -60, 12, -128, -128, -128, 
  -128, -128, 32, -128, -128, -128, 42, 24, 59, -128, 
  -23, -26, 67, 67, 109, 88, 94, 63, 83, 82, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -29, -128, -128, -128, 54, 49, 70, -128, 
  -128, 12, 79, 62, 97, 80, 84, 65, 104, 83, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -18, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 55, 56, 74, -43, 
  15, -20, 72, 64, 85, 60, 87, 52, 84, 56, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, 48, 45, 66, 45, 
  45, -77, 70, 72, 61, 52, 82, 39, 89, 59, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 43, 18, 62, 38, 
  39, -29, 86, 82, 79, 59, 85, 24, 72, 17, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, 20, -128, -128, -43, 49, -37, 55, 1, 
  24, -29, 84, 65, 87, 54, 74, 17, 60, 24, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 51, -33, -50, -128, -128, -128, 
  -128, -128, -43, -128, -128, -77, 67, 7, 63, -77, 
  28, 39, 71, 42, 56, -29, 31, -29, 33, -43, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, 17, -60, 11, -128, -77, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, 68, 44, 53, 41, 
  59, 30, 58, -2, -50, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 14, -128, -37, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
