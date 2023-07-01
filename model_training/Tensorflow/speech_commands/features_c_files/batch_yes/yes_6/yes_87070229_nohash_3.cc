/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/87070229_nohash_3.wav" \
 * --output_c_file="features_c_files/yes/yes_87070229_nohash_3.cc" \
 */
#include "yes_87070229_nohash_3.h"


const int g_yes_87070229_nohash_3_width = 40;
const int g_yes_87070229_nohash_3_height = 49;
alignas(16) const signed char g_yes_87070229_nohash_3_data[] = {
  71, 42, -10, -60, -60, -128, -60, -128, -60, -7, 
  -50, -26, -4, 28, -26, -37, 26, -18, -128, -128, 
  -128, -128, -128, -37, -60, -60, -60, -7, -60, -60, 
  -128, -60, -60, -128, -26, -60, -33, -60, -50, -50, 
  78, 59, 19, -37, -128, -128, -60, -128, -128, -128, 
  -50, -20, 12, 18, -26, -37, 47, 12, -60, -128, 
  -128, -60, -37, -29, -50, -60, -26, -8, -50, -50, 
  -50, -50, -60, -26, -37, -50, -60, -37, -50, -128, 
  57, 47, 20, -29, -128, -128, -60, -128, -60, -77, 
  -128, -43, -50, -50, -60, -23, 24, -43, -60, -60, 
  -60, -77, -128, -128, -128, -128, -60, -77, -60, -128, 
  -128, -29, -60, -50, -50, -50, -60, -128, -60, -128, 
  51, -37, -10, -128, -128, -50, -128, -128, -128, -128, 
  -26, -77, -128, -128, -128, -77, -60, -77, -128, -128, 
  -128, -50, -128, -128, -60, -77, -50, -43, -60, -50, 
  -60, -77, -50, -77, -50, -77, -37, -37, -50, -50, 
  28, -43, -10, -128, -60, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -77, -60, -128, -128, -50, 
  -60, -43, -128, -128, -60, -50, -60, -128, -128, -128, 
  -60, -128, -60, -43, -37, -77, -50, -77, -60, -128, 
  -77, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -18, -8, -128, -77, -128, -128, -128, -50, -50, 
  -37, -18, -128, -128, -128, -128, -128, -128, -50, -128, 
  -60, -128, -60, -77, -77, -77, -50, -60, -50, -77, 
  -128, -128, -128, -60, -60, -128, -128, -128, -128, -128, 
  -77, -77, -50, -128, -77, -77, -128, -128, -60, -77, 
  -60, -77, -128, -77, -77, -128, -128, -128, -77, -77, 
  -77, -77, -77, -128, -50, -77, -37, -43, -77, -128, 
  -128, -60, 2, -77, -128, -128, -128, -128, -60, -128, 
  -77, -128, -128, -128, -128, -60, -77, -128, -20, -60, 
  -128, -128, -77, -33, -29, -128, -128, -128, -50, -77, 
  -77, -77, -50, -77, -50, -128, -37, -77, -50, -128, 
  -128, 22, 55, -14, -29, -128, -128, -128, -128, -77, 
  -128, -128, -128, -128, -77, -128, -128, -128, 6, -43, 
  -128, -128, -50, -33, -20, -128, -77, -128, -128, -128, 
  -77, -60, -77, -128, -128, -77, -77, -43, -37, -128, 
  -8, 8, 42, -12, -29, -77, -77, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 12, -20, 
  -50, -128, -8, -128, -128, -128, -128, -128, -77, -128, 
  -50, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -29, 28, 53, -26, -37, -18, -37, -33, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, 25, 0, 
  -50, -128, -50, -128, -77, -77, -128, -77, -50, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  35, -128, -128, -128, -128, -77, -20, -60, -50, -128, 
  -128, -128, -43, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -50, -12, -77, -128, -128, -128, -50, -128, -50, -128, 
  45, -128, -128, -128, -4, -16, -77, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -77, -60, -128, 
  -128, -128, -128, -77, -128, -128, -37, -128, -128, -128, 
  -77, -77, -77, -77, -77, -128, -128, -128, -50, -128, 
  44, -77, -128, -29, -1, -77, -37, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -60, -43, -128, 
  -128, -128, -128, -77, -128, -128, -50, -128, -128, -77, 
  -77, -128, -43, -60, -50, -60, -77, -128, -50, -128, 
  66, -128, -128, -60, -60, -128, -128, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, 18, -1, 65, 74, 
  79, 18, -1, -128, -60, -128, -77, -77, -43, -128, 
  68, 42, 52, 33, 9, 0, 8, -23, -37, -128, 
  -128, -128, -128, -77, -43, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -50, -77, 22, 34, 80, 81, 
  100, 66, 81, 47, 6, 15, -43, -128, -128, -128, 
  120, 100, 122, 99, 117, 94, 94, 72, 75, 45, 
  47, 32, 34, 32, 23, 10, -14, 36, 69, 70, 
  90, 85, 94, 72, 96, 95, 117, 97, 115, 90, 
  105, 79, 105, 89, 52, 25, 6, -14, -2, -12, 
  120, 99, 122, 99, 120, 97, 115, 97, 98, 88, 
  106, 83, 87, 86, 86, 54, 85, 86, 110, 97, 
  119, 100, 122, 96, 119, 102, 124, 103, 124, 99, 
  118, 92, 118, 94, 106, 78, 78, 62, 73, 64, 
  107, 87, 106, 94, 115, 67, 106, 82, 104, 83, 
  98, 80, 97, 75, 94, 71, 97, 77, 99, 83, 
  106, 94, 112, 87, 108, 87, 107, 80, 103, 74, 
  93, 67, 84, 70, 105, 78, 72, 58, 70, 53, 
  93, 70, 104, 94, 119, 95, 115, 85, 103, 82, 
  104, 84, 109, 89, 108, 89, 108, 84, 112, 91, 
  119, 95, 105, 92, 117, 86, 104, 79, 95, 70, 
  96, 90, 103, 77, 103, 74, 80, 47, 77, 61, 
  84, 33, 69, 66, 103, 96, 117, 85, 97, 84, 
  111, 90, 112, 94, 109, 94, 116, 95, 117, 98, 
  120, 81, 99, 93, 109, 71, 97, 75, 96, 78, 
  89, 74, 96, 72, 93, 65, 92, 69, 84, 65, 
  79, 40, 65, 16, 75, 73, 113, 94, 107, 83, 
  107, 87, 109, 84, 107, 89, 112, 93, 116, 97, 
  107, 60, 92, 84, 94, 65, 99, 76, 92, 72, 
  84, 59, 79, 55, 92, 71, 92, 63, 78, 62, 
  79, 45, 69, -16, 57, 57, 104, 90, 105, 84, 
  104, 76, 103, 78, 104, 85, 106, 84, 112, 81, 
  86, 48, 92, 69, 89, 58, 91, 66, 89, 70, 
  82, 67, 96, 72, 91, 55, 70, 52, 74, 57, 
  69, 5, 58, -128, -2, 48, 89, 56, 102, 78, 
  92, 76, 93, 63, 94, 64, 95, 79, 97, 49, 
  73, 46, 92, 35, 72, 33, 68, 26, 67, 48, 
  60, 48, 86, 62, 75, 60, 80, 57, 62, 42, 
  -128, -128, 6, -128, 8, -128, 83, 66, 98, 68, 
  90, 49, 72, 52, 82, 57, 83, 70, 91, 27, 
  59, 22, 82, 34, 49, -50, 55, 9, 50, -128, 
  -20, -37, 64, 50, 68, 1, 90, 55, 69, 36, 
  55, 31, -7, -128, -128, -128, 68, 26, 84, 69, 
  83, 56, 77, 31, 64, 36, 72, 33, 71, -23, 
  13, -77, 59, -128, 41, -128, -128, -128, -60, -128, 
  20, -128, 84, 72, 96, 60, 90, 65, 54, 0, 
  -128, -128, -128, -128, -128, -128, -18, -128, 79, 57, 
  77, 24, 37, -50, 34, -128, 55, -128, 8, -128, 
  -128, -128, 4, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, 29, 29, 68, 48, 90, 69, 67, 39, 
  -128, -128, -128, -128, -128, -128, 9, -128, 59, 15, 
  69, -37, 18, -128, 34, -128, 35, -50, 4, -128, 
  -128, -128, 2, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 8, -50, 61, 9, 82, 64, 75, 57, 
  -128, -128, -128, -128, -128, -128, -128, -128, 5, 22, 
  48, -128, 16, -128, 5, -128, -128, -128, -10, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 9, -26, 39, 13, 64, 44, 80, 15, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  13, -128, -43, -128, -7, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -77, -128, -128, -128, -128, -16, 
  77, 19, 83, 64, 95, 78, 107, 82, 104, 79, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -14, -128, -128, -128, -18, -128, -33, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 22, 5, 
  85, 60, 93, 84, 102, 84, 109, 92, 115, 87, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 15, 8, 
  60, 60, 84, 63, 91, 73, 102, 78, 104, 89, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -4, -23, 
  55, 46, 68, 45, 87, 68, 89, 58, 96, 71, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 24, 24, 
  70, 55, 95, 67, 90, 62, 89, 63, 91, 45, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -26, -6, 
  59, 60, 79, 29, 79, 46, 67, 50, 80, 41, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 1, -128, 
  15, 36, 61, 49, 78, 34, 74, 37, 74, 44, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 23, -20, 
  45, 28, 44, 19, 67, 32, 54, 35, 66, 0, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  53, 41, 72, 45, 65, -8, 49, 7, 64, -7, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -20, 22, 71, -37, 50, 5, 47, -29, 44, -12, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -4, 11, 
  47, -2, 15, -128, 11, -128, 36, -77, 25, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -18, -29, 
  29, 26, 1, -128, 4, -128, -50, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -12, -20, 
  -20, -128, -77, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -18, -128, 
  -2, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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