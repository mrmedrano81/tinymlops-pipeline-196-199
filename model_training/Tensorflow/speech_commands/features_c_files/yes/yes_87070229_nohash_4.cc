/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/87070229_nohash_4.wav" \
 * --output_c_file="features_c_files/yes/yes_87070229_nohash_4.cc" \
 */
#include "yes_87070229_nohash_4.h"


const int g_yes_87070229_nohash_4_width = 40;
const int g_yes_87070229_nohash_4_height = 49;
alignas(16) const signed char g_yes_87070229_nohash_4_data[] = {
  -33, -12, -50, -128, -128, -128, -128, -128, -50, -2, 
  -4, 17, 85, 87, 69, -18, -26, -60, -128, -60, 
  -60, -60, -128, -60, -26, -18, -60, -50, -60, -60, 
  -60, -37, -50, -50, -128, -50, -33, -18, -18, -128, 
  -37, -77, -50, -20, -37, -128, -128, -128, -128, -77, 
  -50, -77, 69, 70, 67, 21, 13, 25, 9, -50, 
  -128, -128, -128, -128, -128, -8, -37, -50, -60, -60, 
  -50, -50, -50, -29, -37, -50, -1, -3, -6, -60, 
  25, 4, -128, -23, -26, -60, -128, -128, -128, -128, 
  -60, -43, 52, 42, 40, -60, -29, 23, -1, -128, 
  -26, -50, -50, -37, -37, -33, -6, -29, -26, -50, 
  -37, -77, -60, -37, -37, -29, -26, -33, -29, -77, 
  -29, -77, -128, -128, -60, -128, -128, -128, -60, -128, 
  -50, -33, -60, -128, -50, -77, -29, -3, -7, -77, 
  -60, -77, -128, -10, -26, -26, -29, -50, -26, -77, 
  -50, -128, -60, -128, -60, -50, -77, -77, -77, -128, 
  -29, -77, -128, -128, -128, -77, -128, -128, -37, -23, 
  -50, -77, -77, -128, -43, -128, -77, -77, -50, -50, 
  -50, -128, -60, -128, -128, -128, -128, -128, -77, -77, 
  -128, -128, -50, -77, -60, -128, -77, -128, -77, -77, 
  -77, -128, -128, -128, -128, -128, -26, -50, -60, -43, 
  -77, -60, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -60, -43, -37, -128, -77, -60, -77, -77, 
  -50, -77, -50, -128, -128, -77, -77, -128, -77, -128, 
  -50, -128, -128, -128, -128, -128, -60, -128, -77, -37, 
  -37, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -77, -128, -128, -128, -50, -128, 
  -37, -128, -50, -128, -77, -77, -77, -128, -77, -128, 
  -128, -128, -37, -77, -128, -128, -128, -128, -50, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  -77, -128, -50, -128, -50, -128, -37, -77, -77, -60, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -23, -128, -128, -128, -77, -128, -128, -2, -20, -128, 
  -50, -77, -128, -128, -128, -128, -128, -77, -10, -43, 
  -37, -77, -77, -77, -77, -128, -37, -77, -128, -128, 
  -77, -128, -50, -60, -77, -128, -50, -128, -128, -128, 
  -77, -128, 2, -60, -128, -128, -37, -60, -128, -128, 
  -50, -77, -128, -128, -128, -77, -128, -20, 23, 23, 
  13, -128, -128, -128, -128, -37, -29, -128, -128, -77, 
  -77, -77, -50, -60, -77, -128, -77, -128, -128, -77, 
  -128, -128, 9, -26, -77, -128, -50, -128, -128, -128, 
  -128, -128, -20, -33, -12, -128, -128, -128, -33, -14, 
  -33, -128, -77, -128, -128, -8, -6, -128, -50, -60, 
  -50, -128, -128, -128, -77, -128, -128, -128, -77, -77, 
  -77, -7, 34, -7, -77, -128, -50, -60, -77, -60, 
  -43, -128, 7, -26, -37, -128, -128, -128, -77, -60, 
  -128, -77, -77, -128, -128, -77, -43, -3, 35, 72, 
  74, 44, 46, -29, -4, -128, -77, -77, -50, -77, 
  -33, 11, 47, 40, 30, -33, -4, -23, 9, 34, 
  20, -33, 46, 32, 27, -128, -128, -77, -37, -128, 
  -128, -37, 9, -128, -77, -60, -7, 21, 52, 81, 
  102, 72, 77, 50, 24, -3, 17, -60, -23, -20, 
  120, 100, 122, 99, 112, 94, 108, 82, 86, 68, 
  70, 29, 2, -128, -12, -50, 29, 22, 44, 30, 
  64, 84, 99, 72, 78, 90, 115, 98, 116, 87, 
  102, 77, 106, 91, 90, 51, 73, 39, -2, -18, 
  122, 102, 123, 100, 120, 95, 114, 93, 102, 87, 
  105, 87, 65, -43, 64, 60, 97, 83, 108, 96, 
  120, 101, 122, 98, 122, 102, 125, 101, 120, 89, 
  106, 88, 114, 92, 102, 61, 82, 56, 55, 45, 
  112, 84, 110, 98, 124, 94, 117, 94, 108, 89, 
  111, 91, 109, 86, 105, 94, 114, 95, 116, 99, 
  121, 99, 117, 98, 119, 97, 118, 94, 108, 89, 
  111, 94, 113, 84, 102, 84, 86, 60, 77, 67, 
  95, 59, 74, 71, 107, 99, 115, 83, 103, 85, 
  108, 85, 108, 88, 111, 91, 112, 92, 112, 95, 
  118, 91, 104, 90, 113, 80, 104, 78, 95, 74, 
  92, 75, 91, 59, 86, 57, 80, 64, 86, 73, 
  85, 46, 62, 45, 85, 81, 117, 94, 109, 82, 
  105, 83, 105, 86, 107, 84, 112, 92, 117, 95, 
  112, 67, 99, 84, 103, 77, 88, 44, 82, 74, 
  96, 69, 99, 79, 107, 90, 119, 97, 113, 85, 
  86, 37, 37, 15, 65, 54, 112, 94, 106, 83, 
  104, 83, 106, 83, 104, 81, 105, 82, 113, 90, 
  100, 56, 92, 64, 87, 40, 67, 5, 77, 37, 
  71, 47, 86, 69, 91, 59, 45, -26, 54, 42, 
  64, -128, 54, 1, 24, 14, 81, 65, 95, 74, 
  86, 69, 96, 72, 87, 75, 94, 71, 100, 71, 
  71, 31, 85, 50, 51, -77, 49, 15, 55, 17, 
  44, 27, 69, 46, 78, 39, 54, -43, 40, 6, 
  9, -29, 48, -77, 19, -77, 64, 55, 92, 70, 
  84, 52, 90, 69, 89, -14, 81, 61, 99, 45, 
  22, -1, 79, 15, 32, -128, -12, -26, 77, 39, 
  72, 31, 80, 63, 86, 50, 79, 56, 68, 37, 
  27, -128, -128, -128, -128, -128, 32, -3, 75, 63, 
  94, 60, 76, 20, 69, 31, 62, -1, 51, -128, 
  -23, -128, 24, -128, -16, -128, -128, -128, 21, -37, 
  44, -128, 45, 35, 87, 49, 92, 63, 81, 77, 
  -128, -128, -128, -128, -128, -128, -128, -128, 65, 80, 
  108, 61, 72, 8, 47, -50, 28, -37, -60, -128, 
  -128, -128, 15, -60, -77, -128, -128, -128, -33, -43, 
  19, -128, 44, 23, 69, 40, 79, 50, 77, 57, 
  -128, -128, -128, -128, -128, -128, -128, -128, 64, 6, 
  45, -128, 14, -18, 50, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, 54, 58, 
  83, 57, 85, 78, 106, 80, 103, 85, 99, 67, 
  -128, -128, -128, -128, -128, -128, -128, -128, 39, 9, 
  52, -128, -60, -128, -2, -29, 47, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 48, 31, 
  74, 71, 101, 89, 114, 87, 108, 88, 110, 83, 
  -128, -128, -128, -128, -128, -128, -128, -128, 22, 9, 
  62, -128, 13, -60, -37, -128, -33, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 28, 24, 
  76, 72, 91, 77, 96, 73, 94, 72, 105, 84, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 39, 38, 
  80, 52, 94, 69, 78, 72, 85, 60, 99, 72, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 33, 13, 
  75, 56, 74, 40, 79, 53, 86, 56, 79, 59, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 59, 29, 
  69, 41, 67, -3, 80, 32, 74, 50, 70, 35, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 35, -128, 
  39, 27, 52, 24, 77, 32, 73, 28, 69, 32, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 34, -12, 
  20, -4, 48, 24, 74, 46, 64, -2, 62, 38, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 39, -20, 
  57, 27, 56, -8, 70, 27, 71, 39, 69, 13, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 27, -128, 
  20, -16, 47, 37, 77, 24, 54, -4, 51, -6, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -33, 
  19, -26, 45, -1, 48, -60, 43, -128, 14, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 39, -20, 
  34, -8, 52, -50, 25, -60, 28, -128, 18, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -29, -50, 
  24, -10, 35, -43, 16, -60, -29, -128, 4, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -4, -128, -16, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
