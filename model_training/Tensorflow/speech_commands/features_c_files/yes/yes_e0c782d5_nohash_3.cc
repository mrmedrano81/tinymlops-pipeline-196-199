/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/e0c782d5_nohash_3.wav" \
 * --output_c_file="features_c_files/yes/yes_e0c782d5_nohash_3.cc" \
 */
#include "yes_e0c782d5_nohash_3.h"


const int g_yes_e0c782d5_nohash_3_width = 40;
const int g_yes_e0c782d5_nohash_3_height = 49;
alignas(16) const signed char g_yes_e0c782d5_nohash_3_data[] = {
  50, 30, 0, -7, -26, -50, -60, -128, -128, -128, 
  -60, -128, -128, -128, -128, -60, -50, -60, -50, -26, 
  43, 50, 80, 54, 23, -60, -60, -18, -4, -37, 
  -50, -26, -18, -37, -60, -7, 20, 15, -26, -18, 
  58, 31, -37, -4, -1, -128, -60, -37, -128, -128, 
  -128, -128, -128, -128, -37, -50, -60, -29, -12, -37, 
  2, -7, 15, -3, -2, -29, -50, -50, -50, -37, 
  -60, -37, -18, -29, -50, -37, -20, -43, -60, -77, 
  -20, -18, 15, -18, -37, -77, -50, -128, -128, -60, 
  -128, -128, -50, -50, -50, -20, -50, -77, -128, -77, 
  -128, -77, -77, -77, -37, -77, -60, -77, -50, -77, 
  -60, -128, -60, -77, -128, -128, -128, -128, -128, -128, 
  -26, -20, 17, 0, -14, -77, -60, -128, -128, -128, 
  -50, -128, -6, -8, -50, -128, -50, -77, -60, -77, 
  -128, -128, -128, -128, -50, -128, -60, -77, -60, -128, 
  -60, -128, -60, -128, -128, -77, -50, -128, -60, -128, 
  22, 11, 0, 23, 10, -128, -128, -77, -60, -128, 
  -128, -50, -37, -128, -128, -128, -29, -43, -60, -77, 
  -43, -60, -50, -128, -128, -128, -60, -77, -50, -77, 
  -128, -128, -50, -77, -60, -77, -77, -77, -60, -128, 
  -7, -26, 14, 11, 4, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -77, -128, -77, -128, 
  -128, -128, -128, -128, -77, -77, -37, -77, -77, -128, 
  -128, -128, -77, -128, -60, -77, -128, -128, -50, -77, 
  41, -43, -3, -4, -12, -128, -128, -128, -37, -128, 
  -128, -128, -128, -77, -77, -128, -128, -43, -37, -128, 
  -128, -128, -128, -128, -128, -77, -128, -128, -37, -60, 
  -37, -50, -50, -77, -37, -77, -50, -128, -37, -60, 
  -128, -128, -8, -7, -2, -50, -128, -128, -128, -128, 
  -77, -128, -128, -128, -50, -128, -128, -128, -128, -77, 
  -128, -128, -128, -128, -77, -128, -128, -128, -50, -128, 
  -50, -128, -50, -128, -77, -128, -50, -128, -37, -77, 
  25, 17, -20, 0, 15, -128, -128, -50, -50, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -60, -128, -50, -77, -128, -128, -77, -128, 
  -50, -128, -128, -128, 43, 20, -50, -128, -77, -128, 
  65, 50, 47, -26, -20, -3, 28, -33, -128, -77, 
  -128, -128, -77, -128, -128, -128, -50, -128, -37, -60, 
  -43, -128, -77, -50, -43, -60, -50, -43, -43, -77, 
  9, -20, -29, 4, 85, 72, -33, -77, -37, -29, 
  120, 102, 124, 102, 123, 100, 116, 96, 103, 67, 
  68, 52, 51, -43, -20, -60, -77, -37, -4, -29, 
  64, 82, 102, 86, 97, 86, 104, 90, 90, 86, 
  101, 61, 32, 20, 58, 49, 40, -7, 0, 29, 
  113, 101, 124, 96, 121, 98, 120, 94, 115, 94, 
  108, 85, 97, 77, 61, 53, 70, 68, 89, 90, 
  112, 100, 123, 100, 121, 100, 122, 99, 115, 94, 
  114, 85, 74, 48, 57, 37, 63, 44, 57, 47, 
  104, 77, 91, 85, 117, 93, 112, 91, 111, 92, 
  110, 90, 112, 94, 111, 93, 109, 91, 113, 94, 
  119, 97, 116, 94, 120, 98, 114, 82, 109, 92, 
  112, 89, 79, 63, 69, 46, 71, 59, 77, 57, 
  97, 71, 87, 62, 79, 87, 118, 88, 105, 82, 
  109, 87, 106, 88, 111, 91, 108, 90, 111, 89, 
  114, 91, 91, 70, 107, 79, 85, 54, 93, 75, 
  99, 73, 97, 80, 64, 54, 74, 54, 69, 60, 
  93, 55, 60, 52, 68, 67, 103, 91, 106, 77, 
  102, 71, 96, 74, 95, 82, 106, 84, 100, 80, 
  92, 32, 75, 53, 91, 46, 59, 17, 82, 35, 
  74, 58, 99, 82, 87, 46, 44, 22, 44, 29, 
  88, 26, 58, 30, 47, 25, 88, 87, 114, 72, 
  99, 74, 89, 67, 99, 69, 96, 78, 98, 83, 
  96, 24, 54, 43, 83, 4, 54, 17, 70, 20, 
  78, 61, 103, 88, 106, 64, 61, 46, 67, 38, 
  70, -128, 9, -128, -128, -128, 58, 58, 104, 77, 
  78, 65, 82, 50, 84, 51, 87, 54, 99, 74, 
  63, -29, 56, 41, 74, 25, 44, -20, 59, 25, 
  70, 66, 104, 88, 107, 59, 40, -14, 31, -2, 
  44, -128, 30, -128, 7, -128, 38, 0, 89, 65, 
  82, 47, 77, 37, 68, -1, 61, 48, 90, 20, 
  49, -128, 30, -8, 39, -128, -128, -128, 34, -10, 
  49, 21, 73, 49, 74, 46, 16, -18, 28, -43, 
  -128, -128, -16, -128, -128, -128, -60, -128, 28, 27, 
  68, 44, 75, 42, 68, 34, 83, 55, 75, 9, 
  34, -128, 20, -128, 11, -128, -128, -128, -77, -128, 
  12, -128, 19, -37, 27, -128, 11, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 41, -128, 
  34, -23, 53, -37, 27, -20, 60, -23, 72, -37, 
  16, -128, -128, -128, 32, -43, -128, -128, -128, -128, 
  -10, -128, -128, -128, 46, -128, 5, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  16, -10, 47, -43, -7, -128, 54, -128, 11, -128, 
  -8, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -37, -33, -50, -128, 4, -18, 62, -3, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -3, -128, -23, -60, 40, 18, 55, -77, 32, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  35, 64, 72, 44, 96, 97, 119, 92, 109, 78, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -20, -128, -50, 7, 41, -128, 15, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  40, 66, 97, 71, 101, 85, 110, 89, 115, 93, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -50, 36, -128, -6, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  59, 51, 92, 72, 101, 75, 102, 78, 91, 72, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -26, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  55, 54, 83, 64, 95, 69, 80, 63, 92, 60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  55, 49, 75, 39, 80, 49, 65, 59, 86, 64, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  39, 29, 76, 17, 69, 32, 70, 35, 77, 44, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -29, 
  60, 29, 76, 30, 63, 19, 60, 14, 44, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -3, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
