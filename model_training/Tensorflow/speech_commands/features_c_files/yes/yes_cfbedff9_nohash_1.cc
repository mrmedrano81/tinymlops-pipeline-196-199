/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/cfbedff9_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_cfbedff9_nohash_1.cc" \
 */
#include "yes_cfbedff9_nohash_1.h"


const int g_yes_cfbedff9_nohash_1_width = 40;
const int g_yes_cfbedff9_nohash_1_height = 49;
alignas(16) const signed char g_yes_cfbedff9_nohash_1_data[] = {
  52, 17, 35, 41, 54, 40, 37, 44, 14, 15, 
  -33, -18, -18, -7, -18, -7, 0, -26, -128, -18, 
  -18, -7, -50, -50, -128, -50, -50, -18, -18, -12, 
  -26, -26, -26, -50, 5, 4, 0, -2, -18, -12, 
  32, 53, 67, 59, 51, 22, -29, -4, 34, 32, 
  -26, -128, -60, -29, -1, -29, -18, -50, -37, -8, 
  4, -29, -37, -37, -50, -50, -50, -20, -37, -20, 
  13, -29, -26, -14, -12, -29, -1, -10, -26, -16, 
  32, 30, 71, 64, 55, -37, 6, 14, 47, 42, 
  -18, -37, -50, -10, -7, -43, 4, -29, -26, -43, 
  -7, -50, -37, -37, -18, -23, -37, -50, -50, -50, 
  -29, -23, 4, -29, -2, -18, -37, -50, -37, -43, 
  0, -26, 32, 15, 24, -2, 27, 19, 19, 17, 
  21, 19, -7, -60, -20, -43, -20, -33, -26, -33, 
  -29, -77, -37, -23, -2, -33, -37, -50, -29, -43, 
  -7, -2, 14, -43, -14, -26, -20, -33, -7, -18, 
  11, 2, 24, -77, -50, -128, 17, -12, -20, -14, 
  -23, -20, -29, -33, -3, -60, 1, -33, -2, -43, 
  -29, -43, -50, -128, -128, -77, -29, -77, -50, -77, 
  -16, -29, -37, -77, -29, -16, -20, -60, 1, -43, 
  50, 19, 20, -60, 9, -77, -26, -128, -16, -128, 
  -128, -60, -29, -77, -29, -43, 11, -37, 6, -16, 
  -23, -43, -20, -43, -37, -60, -14, -20, -20, -77, 
  -50, -60, -23, -60, 0, -23, -4, -60, -43, -23, 
  -26, -128, 24, -29, -50, -6, 14, 8, 21, -20, 
  -10, -26, -4, -77, -16, -29, -26, -50, -23, -77, 
  -77, -128, -29, -43, -50, -128, -37, -60, -50, -128, 
  -23, -29, -23, -77, -43, -43, -16, -50, -43, -77, 
  -26, -77, -16, -128, 15, 1, -16, -128, 26, 1, 
  -50, -60, -128, -128, -60, -60, -3, -128, -43, -18, 
  -1, -77, -128, -23, -37, -128, -29, -37, -4, -29, 
  -23, -60, -26, -29, -33, -43, 10, -50, -23, -33, 
  13, -37, 14, -50, -1, 1, -7, -77, -128, -37, 
  -18, -128, -43, -60, -128, -128, -60, -77, -33, -33, 
  14, -37, -23, -60, -77, -77, -128, -77, -23, -77, 
  -26, -60, -77, -60, -7, -77, -20, -60, -26, -60, 
  39, -77, -128, -128, -10, -29, -50, -128, -14, -128, 
  -12, -29, -6, -128, -77, -33, -4, -77, 29, 39, 
  9, -14, -23, 35, 45, -60, -50, -128, -43, -128, 
  -26, -33, -43, -33, -33, -77, -43, -50, -2, -16, 
  84, 56, 58, -3, 33, -43, 16, 4, 27, -29, 
  -3, -18, -60, -60, -26, -43, -16, -77, -20, -4, 
  -16, -60, -18, -12, 23, -29, -18, -20, 6, -50, 
  -26, -77, -43, -50, -43, -128, -128, -128, -43, -43, 
  124, 104, 125, 103, 120, 99, 117, 94, 99, 57, 
  55, 8, 16, 14, 15, 18, 27, 24, 43, 50, 
  78, 69, 97, 92, 112, 77, 60, 78, 98, 78, 
  45, 4, 49, 36, 41, 45, 58, 49, 43, 31, 
  117, 92, 112, 90, 116, 96, 115, 93, 111, 72, 
  88, 67, 72, 39, 66, 70, 87, 70, 93, 88, 
  112, 94, 113, 97, 117, 90, 100, 90, 114, 93, 
  90, 72, 71, 56, 67, 57, 69, 58, 69, 66, 
  92, 72, 110, 92, 118, 92, 110, 87, 112, 93, 
  102, 67, 82, 70, 97, 89, 107, 91, 112, 95, 
  110, 87, 111, 90, 109, 84, 108, 90, 110, 85, 
  101, 82, 73, 59, 71, 51, 68, 59, 74, 75, 
  93, 63, 100, 82, 113, 90, 114, 88, 106, 92, 
  115, 82, 100, 79, 109, 87, 101, 90, 115, 94, 
  107, 80, 104, 80, 98, 68, 97, 78, 100, 77, 
  99, 75, 89, 45, 67, 47, 70, 54, 74, 67, 
  78, 52, 92, 69, 104, 89, 113, 84, 105, 90, 
  109, 74, 88, 65, 96, 82, 107, 87, 102, 71, 
  92, 46, 88, 63, 82, 56, 80, 50, 89, 68, 
  80, 60, 87, 61, 75, 59, 74, 69, 87, 50, 
  58, 49, 79, 59, 95, 57, 104, 90, 107, 80, 
  90, 77, 100, 77, 99, 82, 104, 81, 99, 43, 
  63, 42, 80, 45, 70, 27, 63, 18, 76, 52, 
  69, 60, 89, 8, 47, 19, 49, 33, 67, -16, 
  77, 48, 63, 7, 68, 59, 100, 86, 110, 80, 
  104, 74, 94, 77, 101, 81, 108, 81, 78, 35, 
  70, 37, 76, 25, 56, 1, -3, -37, 49, -20, 
  67, 53, 73, 29, 51, 16, 45, 49, 86, 5, 
  80, 37, 53, -37, -3, -14, 72, 68, 99, 71, 
  91, 74, 93, 71, 103, 81, 105, 71, 74, -12, 
  57, 37, 87, 57, 73, 19, 56, 48, 89, 59, 
  90, 65, 80, 59, 54, 15, 51, 7, 83, 34, 
  60, -128, -128, -128, -18, -128, 38, -1, 79, 9, 
  64, -8, 72, 48, 38, -4, 63, -12, 32, -128, 
  -10, -50, 5, -77, -14, -128, -26, -128, 56, -23, 
  69, 44, 69, 40, 47, -128, -4, -128, 60, 29, 
  -20, -128, -128, -128, -77, -128, -26, -128, 24, -128, 
  50, -1, 83, 58, 52, -128, 39, -77, -128, -128, 
  -128, -128, -43, -128, -128, -128, -128, -128, -128, -128, 
  16, -26, 57, 19, -3, -128, -50, -128, 24, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  25, -50, 13, -128, 11, -128, -18, -128, -128, -128, 
  -128, -128, -29, -128, -128, -128, -128, -128, -33, -128, 
  69, 50, 72, 65, 90, 55, 64, 33, 77, 62, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -16, -128, -1, -77, 
  75, 68, 79, 72, 79, 45, 88, 71, 94, 75, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  83, 64, 83, 75, 98, 57, 83, 49, 85, 74, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, 36, 24, 
  76, 37, 82, 66, 82, 64, 88, 60, 78, 65, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 20, -128, -8, 35, 
  78, 52, 77, 52, 82, 38, 76, 32, 83, 61, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 50, -33, 
  97, 82, 76, 41, 60, 24, 61, 19, 57, 17, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 32, -60, -77, -18, 
  65, 46, 69, 27, 54, -16, 45, 28, 46, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -7, 10, 5, -128, 
  21, -12, 54, -60, 18, -77, 16, -18, -10, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -60, -128, 
  -60, -128, 39, -128, 8, -128, -2, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
