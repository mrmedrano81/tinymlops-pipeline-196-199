/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/5c8af87a_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_5c8af87a_nohash_3.cc" \
 */
#include "no_5c8af87a_nohash_3.h"


const int g_no_5c8af87a_nohash_3_width = 40;
const int g_no_5c8af87a_nohash_3_height = 49;
alignas(16) const signed char g_no_5c8af87a_nohash_3_data[] = {
  40, 53, 84, 94, 111, 80, 55, 61, 78, 95, 
  113, 90, 69, 40, 64, 57, 60, 55, 33, 37, 
  26, -12, 20, 17, 40, 23, 43, 7, 9, 20, 
  23, 11, 14, 17, 9, 11, 31, -12, -26, -50, 
  70, 74, 89, 69, 84, 63, 70, 54, 75, 50, 
  74, 65, 67, 56, 43, 54, 69, 52, 43, -26, 
  54, 47, 35, 10, 31, 24, 10, 20, 8, -2, 
  -7, -1, -6, -6, -12, 4, 2, -20, -26, -37, 
  21, 10, 83, 80, 102, 65, 27, 23, 57, 0, 
  65, 49, 55, 29, -4, 6, 45, 10, 4, 2, 
  7, 13, -8, -26, 15, 14, 19, 4, 17, 4, 
  14, 8, 20, 16, 15, 26, 17, -1, -12, -29, 
  31, 20, 92, 74, 93, 58, 60, 0, 4, -16, 
  56, -4, 9, -128, 4, 14, -20, -60, 17, 9, 
  24, -20, -16, -16, 10, 10, 28, -12, 4, 10, 
  4, 4, 19, 0, 5, 4, 11, -4, -7, -77, 
  64, 50, 92, 57, 78, 59, 67, 33, 37, -128, 
  -18, -60, 17, -43, 31, -6, -3, -50, 5, -4, 
  4, -29, 7, -33, -3, -43, 15, -10, 11, -7, 
  15, -60, -10, -43, -16, 0, -12, -37, -29, -33, 
  -33, -128, -128, -128, -128, -128, -43, -128, -37, -128, 
  -128, -128, -128, -128, -60, -128, -60, -128, -128, -77, 
  -60, -128, -60, -128, -77, -128, -43, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  35, -33, -20, -128, -37, -50, 50, 34, 43, -128, 
  -128, -128, 26, 29, 54, 34, 27, -20, -43, -77, 
  -6, -60, 9, -77, -60, -128, -128, -128, -43, -77, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  49, 23, 41, -43, 37, 27, 69, 52, 71, 41, 
  57, -12, 45, 47, 67, 14, 57, 43, 32, 50, 
  54, -8, 36, -23, -4, -77, -29, -18, -26, -77, 
  -43, -128, -128, -128, -128, -128, -77, -128, -50, -128, 
  -14, -23, 26, -128, -3, 20, 59, 9, 62, 7, 
  34, -37, 54, 54, 64, 11, 40, 2, 21, -77, 
  -23, -128, -23, -77, -29, -77, -60, -128, -43, -128, 
  -60, -77, -60, -128, -128, -128, -77, -60, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -77, -128, -77, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -43, -128, -60, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -77, -128, -43, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -50, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -60, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -77, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -60, -128, -77, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -77, -128, 
  -77, -128, -77, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -50, -77, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -77, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -60, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -77, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -60, -128, -77, -128, -50, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  29, 5, -128, -128, -128, -128, -33, -50, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  120, 100, 119, 93, 107, 96, 113, 82, 66, -128, 
  -128, -128, -128, -60, 39, 53, 69, 24, -33, -60, 
  -4, -37, 49, 57, 5, -33, -29, -50, -26, -128, 
  -128, -128, -128, -128, -77, -128, -50, -77, -37, -50, 
  108, 92, 113, 90, 110, 90, 109, 83, 82, 47, 
  -23, -16, 30, 63, 89, 83, 94, 72, 82, 71, 
  90, 78, 102, 85, 76, 48, 66, 63, 79, 49, 
  -33, -60, -43, -33, -43, -23, 5, -8, -3, -12, 
  104, 86, 104, 84, 107, 89, 113, 95, 112, 85, 
  74, 63, 93, 91, 104, 80, 102, 92, 110, 93, 
  112, 94, 115, 92, 112, 94, 109, 85, 100, 79, 
  53, -6, 22, 6, 28, 21, 22, -1, 28, 17, 
  92, 77, 97, 77, 92, 84, 106, 94, 112, 89, 
  96, 88, 112, 89, 107, 87, 116, 99, 118, 91, 
  113, 89, 107, 84, 102, 82, 111, 87, 103, 89, 
  107, 47, 50, 34, 42, 38, 54, 40, 55, 40, 
  80, 61, 85, 71, 90, 65, 91, 82, 104, 82, 
  105, 76, 105, 82, 102, 85, 107, 74, 89, 68, 
  92, 67, 91, 59, 79, 56, 87, 55, 80, 70, 
  85, 22, 43, 33, 46, 35, 48, 30, 53, 43, 
  69, 49, 76, 65, 85, 55, 86, 74, 97, 80, 
  104, 76, 99, 79, 109, 81, 78, 1, 72, 30, 
  75, 64, 87, 35, 75, 63, 86, 49, 64, 60, 
  76, 17, 40, 19, 49, 59, 54, 27, 53, 27, 
  72, 29, 55, 52, 72, 45, 87, 65, 91, 70, 
  99, 79, 106, 86, 101, 60, 44, -3, 63, 24, 
  54, 33, 72, 36, 60, 36, 64, 40, 70, 49, 
  76, 2, 37, -8, 44, 50, 54, 27, 46, 27, 
  40, -10, 47, 22, 63, 34, 73, 24, 75, 49, 
  91, 72, 89, 60, 37, -77, 9, -128, 30, -128, 
  23, -128, 60, 21, 55, -2, -8, -128, 37, -4, 
  47, -50, 11, -26, 10, -26, 14, -43, -1, -60, 
  63, -33, 62, -43, 54, -3, 68, 2, 64, 37, 
  74, 58, 38, -128, -60, -128, -3, -128, -14, -128, 
  -37, -128, 33, -12, 39, -128, -20, -128, 48, 19, 
  45, -50, -18, -128, -2, -37, 14, -50, 12, -128, 
  65, -128, 48, -60, 50, -37, 54, -14, 41, 20, 
  64, 16, 4, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -23, -77, 9, -128, -43, -128, -16, -128, 
  -128, -128, -43, -128, 2, -60, -6, -50, 1, -128, 
  37, -128, 16, -16, 53, -128, -20, -128, 35, -128, 
  -26, -128, -18, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -77, -128, -60, -128, -77, -128, 
  43, -128, -128, -128, -37, -128, -77, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -16, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -16, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
};
