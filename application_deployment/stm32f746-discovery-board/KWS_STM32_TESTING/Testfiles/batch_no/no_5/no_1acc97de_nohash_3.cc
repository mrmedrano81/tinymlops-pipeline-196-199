/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/1acc97de_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_1acc97de_nohash_3.cc" \
 */
#include "no_1acc97de_nohash_3.h"


const int g_no_1acc97de_nohash_3_width = 40;
const int g_no_1acc97de_nohash_3_height = 49;
alignas(16) const signed char g_no_1acc97de_nohash_3_data[] = {
  68, 55, 48, 32, 14, 4, 5, -12, -33, -7, 
  0, -18, 0, -26, -33, -50, -10, 15, -4, -18, 
  -4, -26, -26, -50, -18, -26, -4, -37, -50, -12, 
  -4, -18, -50, -50, -26, -12, -18, -12, -10, 4, 
  51, 19, 28, 1, -12, -29, 12, -20, -18, -29, 
  12, -8, -18, -3, -26, 1, -18, -50, -26, -77, 
  -26, -20, -26, -60, -50, -29, -6, -50, -18, -16, 
  -18, -20, -18, -29, -37, -16, -26, -37, -6, -10, 
  54, 27, 11, -60, -2, 21, 26, 16, 8, -77, 
  -37, -12, -50, -128, -37, -43, -12, -43, -26, -50, 
  -37, -6, -26, -37, -50, -29, -29, -37, -37, -77, 
  -7, -43, -6, -50, -37, -33, -12, -10, -7, -26, 
  24, 13, 52, 45, 28, -16, -16, -43, -77, -50, 
  -37, -33, -20, -50, -37, -60, -37, -128, -128, -23, 
  -20, -77, -77, -29, -37, -128, -29, -50, -60, -77, 
  -7, -12, -37, -43, -7, -26, -2, -26, -20, -43, 
  51, 49, 60, 49, 39, -77, -50, -77, -50, -26, 
  -8, -77, -20, -33, -7, -20, -3, -43, -77, -60, 
  -29, -77, -37, -50, -37, -128, -77, -43, -37, -43, 
  -23, -60, -29, -43, -37, -43, -29, -77, -50, -77, 
  41, -20, 25, -33, 1, -14, -43, -60, -3, -4, 
  -43, -60, -37, -26, -20, -128, -128, -60, -50, -77, 
  -37, -128, -50, -128, -29, -33, -8, -60, -50, -77, 
  -29, -16, -14, -33, -29, -50, -50, -60, -29, -60, 
  53, 27, 25, -60, -29, -33, -26, -33, -16, -18, 
  -50, -128, -43, -128, -23, -128, -77, -60, -37, -128, 
  -128, -128, -37, -43, -29, -60, -43, -128, -37, -128, 
  -50, -37, -43, -43, -29, -60, -29, -60, -29, -37, 
  42, -12, 30, -50, 4, -128, -12, -43, -33, 5, 
  7, -50, -43, -128, -50, -60, -23, -60, -23, -37, 
  -128, -128, -128, -43, -50, -128, -43, -77, -37, -77, 
  -33, -60, -23, -29, -16, -37, -16, -60, -23, -60, 
  19, -16, 15, -33, -12, 5, 4, -128, -2, 45, 
  29, -60, -1, -37, -16, -60, -10, -60, -43, -60, 
  -4, -37, -23, -29, -43, -77, -77, -60, -50, -77, 
  -60, -77, -18, -33, -33, -43, -18, -128, -26, -60, 
  23, -18, -128, -128, 8, -26, -60, -128, -33, -77, 
  -37, -43, -18, -50, 19, 6, -60, -77, -33, -23, 
  -1, -60, -23, -128, -77, -18, -6, -3, -23, -60, 
  -77, -128, -18, -26, -26, -50, -33, -43, -26, -128, 
  -16, -26, 19, -6, -33, -128, -6, -18, -77, -37, 
  -20, -128, -43, -60, -33, -77, -7, -60, -43, -77, 
  -128, -128, -50, -77, -33, -60, -18, -26, -18, -77, 
  -33, -60, -33, -128, -18, -50, -60, -50, -26, -33, 
  -2, -12, -2, -23, -50, -60, -29, -128, -77, -77, 
  -29, -128, -33, -77, -60, -128, -128, -77, -43, -128, 
  -77, -128, -77, -50, -43, -50, -77, -128, -60, -43, 
  -33, -77, -43, -77, -43, -77, -43, -50, -33, -43, 
  55, 48, 53, 40, 42, 4, 24, 16, 23, -26, 
  -37, -128, -8, -77, -128, -128, -60, -128, -43, -60, 
  -7, -20, -43, -60, -43, -50, -33, -60, -60, -43, 
  -33, -128, -77, -43, -33, -128, -43, -77, -37, -77, 
  121, 102, 122, 99, 121, 98, 116, 93, 100, 68, 
  62, 50, 51, -12, -4, 31, 60, 49, 41, 37, 
  79, 88, 110, 90, 87, 42, 4, -29, -12, -18, 
  -20, -43, -20, -37, -4, -3, 7, 1, -1, -20, 
  123, 100, 114, 98, 115, 96, 115, 91, 112, 86, 
  99, 73, 53, 35, 33, 74, 98, 82, 80, 79, 
  105, 93, 114, 94, 111, 81, 65, 36, 58, 52, 
  60, 56, 37, 25, 64, 47, 57, 38, 54, 40, 
  105, 87, 108, 88, 106, 86, 107, 85, 100, 77, 
  102, 82, 70, 74, 86, 79, 94, 74, 70, 71, 
  94, 79, 98, 76, 94, 60, 65, 32, 46, 43, 
  54, 29, 50, 34, 67, 60, 73, 59, 72, 50, 
  95, 81, 105, 79, 100, 79, 96, 76, 99, 78, 
  97, 77, 85, 74, 98, 70, 92, 64, 72, 61, 
  93, 73, 98, 75, 95, 59, 74, 17, 34, 26, 
  49, -33, 13, 29, 61, 50, 63, 40, 65, 46, 
  77, 68, 103, 71, 102, 67, 97, 49, 81, 59, 
  95, 71, 90, 69, 88, 46, 80, 57, 92, 75, 
  92, 64, 92, 70, 93, 65, 62, -29, 29, -77, 
  -18, -23, 29, 42, 70, 32, 42, 24, 41, 18, 
  71, 49, 98, 55, 98, 57, 94, 67, 96, 68, 
  84, 62, 85, 67, 87, 57, 87, 40, 87, 66, 
  83, 66, 87, 66, 88, 65, 64, 17, 36, 17, 
  35, -128, 25, 49, 82, 65, 65, 39, 65, 49, 
  84, -43, 90, 57, 91, 80, 109, 92, 112, 91, 
  111, 85, 110, 86, 114, 93, 101, 72, 96, 77, 
  105, 64, 81, 59, 95, 82, 107, 97, 120, 96, 
  105, 65, 88, 84, 97, 84, 105, 69, 72, 47, 
  75, 27, 85, 44, 92, 69, 115, 94, 122, 96, 
  114, 69, 108, 88, 110, 88, 110, 86, 107, 80, 
  102, 74, 94, 75, 104, 87, 112, 94, 117, 95, 
  100, 78, 109, 91, 102, 82, 111, 90, 104, 65, 
  66, 37, 77, 46, 85, 69, 95, 86, 113, 84, 
  104, 88, 109, 85, 113, 91, 105, 88, 103, 79, 
  97, 72, 90, 61, 94, 79, 100, 82, 108, 85, 
  73, 59, 105, 75, 91, 62, 92, 74, 96, 59, 
  55, 47, 69, 61, 83, 67, 77, 72, 97, 90, 
  96, 72, 92, 73, 105, 74, 91, 72, 91, 66, 
  93, 68, 87, 18, 78, 66, 95, 75, 94, 69, 
  72, 62, 92, 67, 91, 62, 88, 71, 94, 67, 
  67, 39, 50, 42, 70, 49, 86, 67, 90, 52, 
  84, 66, 93, 72, 94, 44, 76, 44, 70, 43, 
  82, 59, 87, -7, 57, 52, 85, 67, 77, 53, 
  84, 39, 72, 26, 79, 43, 84, 54, 76, 19, 
  79, 15, 45, 16, 70, 47, 77, 40, 81, 49, 
  78, 50, 96, 66, 55, -33, 70, -43, 42, 34, 
  77, 48, 75, -50, 28, 16, 81, 49, 60, 28, 
  63, 31, 59, -77, 57, -6, 64, 42, 57, 5, 
  78, -37, 40, 15, 63, 47, 72, 32, 69, 27, 
  69, 42, 91, 67, 72, -128, 16, -16, 55, -20, 
  41, -18, 48, -128, -1, -128, 37, -14, 15, 21, 
  83, -33, -1, -128, 40, -128, 35, -29, 34, -77, 
  57, -60, 34, 5, 63, 47, 82, 27, 20, -128, 
  58, 37, 78, 24, 62, -128, -77, -128, 31, -128, 
  -128, -128, 39, -128, -128, -128, -128, -128, -43, -128, 
  56, -43, -128, -128, -43, -128, -77, -128, -6, -10, 
  55, -128, 24, -2, 62, 35, 71, -128, -37, -128, 
  54, 59, 77, -43, -128, -128, -128, -128, -77, -128, 
  -128, -128, 1, -128, -128, -128, -50, -128, -128, -128, 
  5, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  56, -50, 15, 14, 63, 44, 59, -128, -77, -128, 
  55, 45, 41, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -23, -128, -128, -128, -128, -128, -128, -128, -60, -14, 
  20, -128, -128, -23, 35, -50, 31, -128, -128, -128, 
  -33, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  12, -128, -77, -128, -14, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
