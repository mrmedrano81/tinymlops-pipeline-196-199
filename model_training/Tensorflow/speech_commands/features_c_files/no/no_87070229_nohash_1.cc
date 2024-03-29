/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/87070229_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_87070229_nohash_1.cc" \
 */
#include "no_87070229_nohash_1.h"


const int g_no_87070229_nohash_1_width = 40;
const int g_no_87070229_nohash_1_height = 49;
alignas(16) const signed char g_no_87070229_nohash_1_data[] = {
  74, 25, 5, 20, 51, 11, -128, -50, -33, -50, 
  -18, -60, -128, -128, -60, -26, -50, 11, -50, -128, 
  -128, -50, -33, -128, -60, -60, -60, -128, -60, -128, 
  -128, -60, -10, -26, -60, -128, -33, -18, -10, -50, 
  32, 16, -12, -6, 58, 48, -37, -50, -128, -128, 
  -128, -128, -128, -60, -60, -128, -128, 11, -18, -60, 
  -128, -128, -128, -128, -37, -128, -128, -60, -128, -128, 
  -50, -60, -50, -8, -60, -50, -50, -37, -37, -60, 
  19, -77, -128, -128, 50, 40, -50, -77, -60, -128, 
  -128, -60, -50, -50, -128, -77, -60, -26, -26, -128, 
  -128, -128, -128, -128, -1, -20, -60, -128, -50, -60, 
  -50, -77, -50, -16, -50, -50, -60, -77, -60, -128, 
  4, -37, -77, -20, 49, 24, -37, -128, -50, -128, 
  -60, -29, -50, -50, -128, -77, -60, -128, -128, -77, 
  -128, -128, -60, -37, -128, -128, -60, -128, -50, -128, 
  -128, -77, -50, -43, -50, -77, -60, -77, -50, -50, 
  -128, -128, -14, 45, 71, 50, -7, -16, 19, -50, 
  37, 42, -50, -128, -60, -50, -128, -128, -50, -77, 
  -37, -77, -50, -77, -50, -77, -60, -77, -37, -50, 
  -60, -128, -50, -77, -20, -128, -60, -128, -37, -77, 
  -43, -37, 13, -37, -37, -128, -20, -128, -128, -128, 
  41, 57, 29, -50, -50, -128, -128, -128, -128, -77, 
  -50, -128, -128, -128, -50, -128, -128, -128, -77, -128, 
  -128, -128, -37, -43, -50, -77, -37, -77, -50, -128, 
  -77, -2, 18, 10, 43, -2, -8, -77, -128, -50, 
  24, 24, -16, -33, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -37, -77, -50, -128, -128, -128, -128, -77, -37, -128, 
  -33, -29, 22, 24, 64, 46, 19, -43, -128, -128, 
  -4, -1, 38, 16, -77, -60, -77, -128, -50, -128, 
  -77, -128, -128, -128, -50, -128, -50, -77, -77, -128, 
  -128, -128, -77, -128, -77, -128, -50, -128, -50, -77, 
  -128, -20, 49, -6, 44, 16, -6, -128, -77, -77, 
  -6, -12, 42, 28, -20, -128, -128, -128, -50, -128, 
  -77, -128, -128, -77, -77, -60, -50, -128, -77, -128, 
  -128, -60, -23, -128, -128, -128, -50, -128, -77, -77, 
  109, 94, 113, 93, 95, 62, 76, 57, 49, 35, 
  54, 57, 96, 74, 39, -14, -29, 25, 24, -26, 
  -3, 1, 6, -26, 44, 25, -8, -33, -20, -128, 
  -29, -26, 55, 16, -50, -77, -50, -77, -50, -128, 
  125, 104, 122, 97, 118, 98, 117, 94, 104, 93, 
  111, 96, 117, 95, 99, 80, 112, 94, 89, 81, 
  93, 89, 106, 91, 118, 98, 101, 87, 101, 72, 
  99, 57, 84, 61, 41, 34, 31, 21, 32, 35, 
  118, 93, 110, 94, 118, 90, 112, 92, 108, 91, 
  111, 92, 113, 90, 102, 87, 115, 96, 109, 87, 
  102, 89, 110, 85, 115, 92, 110, 93, 112, 87, 
  104, 82, 77, 57, 70, 57, 79, 66, 75, 68, 
  96, 72, 115, 84, 97, 82, 106, 78, 105, 81, 
  110, 84, 102, 76, 99, 81, 112, 90, 106, 75, 
  99, 80, 102, 82, 109, 88, 107, 75, 95, 77, 
  104, 74, 70, 45, 50, 37, 54, 30, 49, 37, 
  89, 75, 107, 77, 95, 69, 96, 67, 94, 57, 
  88, 68, 90, 65, 97, 75, 94, 59, 70, 69, 
  89, 35, 86, 63, 84, 53, 83, 52, 61, 72, 
  90, 55, 70, 42, 52, 29, 29, 24, 53, 27, 
  55, 59, 100, 73, 100, 82, 107, 82, 107, 76, 
  99, 71, 91, 72, 111, 98, 116, 85, 108, 90, 
  110, 82, 102, 89, 102, 92, 124, 102, 119, 88, 
  100, 84, 109, 90, 112, 82, 90, 80, 89, 74, 
  69, 26, 80, 59, 88, 75, 114, 92, 113, 90, 
  109, 75, 91, 88, 117, 95, 118, 87, 113, 95, 
  114, 85, 105, 83, 101, 80, 109, 82, 113, 95, 
  90, 80, 117, 95, 110, 89, 110, 92, 117, 90, 
  66, -8, 64, 29, 81, 66, 100, 75, 99, 81, 
  98, 68, 101, 82, 112, 87, 84, 47, 94, 68, 
  99, 68, 90, 72, 88, 76, 105, 77, 97, 77, 
  90, 70, 87, 71, 94, 73, 82, 44, 65, 49, 
  70, 0, 66, 44, 83, 63, 95, 75, 97, 79, 
  100, 77, 102, 84, 107, 66, 69, 24, 83, 47, 
  85, 45, 66, 34, 90, 67, 92, 68, 86, 65, 
  100, 80, 102, 78, 85, 14, 59, -8, 65, 50, 
  77, 28, 40, 37, 83, 43, 79, 69, 95, 67, 
  91, 65, 92, 77, 99, 54, 68, 14, 75, 37, 
  70, 45, 74, 12, 79, 46, 60, 47, 87, 62, 
  77, 55, 88, 56, 74, -128, 58, 14, 69, 45, 
  62, 9, 36, 17, 78, 24, 59, 47, 97, 57, 
  80, 56, 87, 66, 89, 10, 53, 0, 42, -29, 
  32, 4, 26, -128, 46, -50, 51, 32, 85, 59, 
  65, -128, 65, 37, 53, -37, 64, 1, 54, 31, 
  59, -37, -7, 14, 68, 6, 63, 34, 73, 27, 
  80, 48, 66, 53, 82, 40, 22, -128, 47, 4, 
  47, -128, 19, 11, 48, -43, 41, 1, 74, 36, 
  69, 43, 71, 39, 61, -43, 44, -33, 53, 15, 
  57, -29, 31, 9, 59, 46, 78, 42, 79, 40, 
  60, -26, 60, 21, 75, 55, 59, -50, 52, -23, 
  47, -23, 35, 2, 24, -128, 43, -60, 68, 32, 
  67, 57, 70, -77, 11, 11, 57, 6, 44, -10, 
  42, -60, 29, -2, 58, 46, 80, 58, 20, -128, 
  49, 15, 55, 2, 46, 50, 74, 37, 70, 31, 
  72, 59, 95, 69, -10, -128, 24, -77, 27, -128, 
  29, 52, 45, -128, 30, 14, 37, -26, 35, -33, 
  28, -20, -23, 8, 60, 50, 68, -26, 55, -6, 
  25, -128, -20, -128, -60, -4, 67, 9, 55, 19, 
  74, 61, 95, 19, -128, -128, 48, -60, 43, -128, 
  -50, 34, 22, -77, 19, -128, 46, 25, 56, -43, 
  12, -60, -77, -3, 35, 13, 15, -128, -29, -37, 
  -14, -128, -128, -128, -2, -18, 54, -128, -2, -128, 
  -60, 23, 63, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -16, -128, -77, 36, 44, -128, 
  -43, -128, -12, -128, 2, -20, -8, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, -128, -128, 
  15, -6, 52, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 4, -29, -26, -77, 30, -23, 
  -37, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -26, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -77, 11, -4, 29, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -43, 5, -128, 
  -128, -128, -128, -128, -3, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -10, -128, 
  -128, -128, -128, -128, -29, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -1, -60, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, 20, 39, -43, -128, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, 49, 33, 32, -33, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
