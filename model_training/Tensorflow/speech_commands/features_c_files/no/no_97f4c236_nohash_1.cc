/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/97f4c236_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_97f4c236_nohash_1.cc" \
 */
#include "no_97f4c236_nohash_1.h"


const int g_no_97f4c236_nohash_1_width = 40;
const int g_no_97f4c236_nohash_1_height = 49;
alignas(16) const signed char g_no_97f4c236_nohash_1_data[] = {
  120, 98, 107, 99, 118, 98, 121, 99, 107, 85, 
  99, 90, 74, 55, 92, 77, 101, 98, 118, 84, 
  84, 94, 119, 97, 106, 82, 75, 70, 78, 81, 
  84, 67, 89, 69, 76, 75, 89, 89, 92, 74, 
  107, 87, 110, 93, 115, 84, 109, 82, 98, 85, 
  78, 69, 72, 40, 76, 64, 98, 75, 94, 87, 
  105, 80, 100, 79, 96, 70, 93, 85, 82, 71, 
  70, 57, 77, 53, 63, 64, 74, 49, 64, 53, 
  101, 79, 101, 79, 104, 57, 76, 59, 51, 9, 
  58, 48, 85, 76, 69, 64, 79, 61, 87, 86, 
  102, 69, 74, 49, 68, 56, 89, 74, 78, 64, 
  77, 49, 50, 33, 69, 4, 40, 37, 52, 35, 
  85, 65, 65, -2, 73, 35, 12, -128, 53, 9, 
  23, -50, 72, 64, 55, 27, 57, -128, 67, 54, 
  85, 70, 84, 51, 76, 21, 84, 63, 74, 67, 
  88, 21, 54, -6, 53, 22, -1, -10, 40, 20, 
  65, 42, 81, -7, 47, 28, 51, -77, -3, -128, 
  7, -128, 42, 15, -26, -18, 2, 9, 40, 45, 
  67, 51, 94, 65, 80, 25, 77, 58, 73, 34, 
  62, 9, -12, -128, 37, -60, -29, -128, 4, -33, 
  58, 51, 93, 19, 60, -128, 7, -60, 7, 27, 
  47, -128, -43, -128, -33, -128, 25, -60, 9, 23, 
  70, 65, 83, -43, 75, -4, 65, 32, 60, 25, 
  49, -14, -33, -128, 45, 2, -8, -128, -37, -128, 
  72, 42, 87, 59, 86, 39, -128, -128, 39, 39, 
  49, -128, 23, -128, -128, -60, -10, -128, -14, 16, 
  65, 48, 78, 7, 57, -20, 38, -33, 53, -29, 
  16, -128, -60, -128, 4, -50, -26, -128, -43, -128, 
  8, -128, 84, 46, 51, 30, 0, -128, 51, -128, 
  23, -128, -16, -128, -33, -128, -50, -128, -33, -50, 
  40, -29, 31, -18, 69, 19, -128, -128, 10, -60, 
  21, -128, -2, -37, 19, -128, -37, -128, -16, -18, 
  -128, -128, 70, -3, 0, -128, 36, -16, 38, -128, 
  -16, -128, -20, -128, -128, -128, -128, -128, -128, -128, 
  -7, -128, -128, -128, 38, -77, -128, -128, -2, -128, 
  -128, -128, -60, -60, -60, -128, -10, -128, -16, -128, 
  -128, -128, 35, -128, 15, 24, 16, -128, 39, 4, 
  39, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -20, -128, -128, -77, -4, -128, 26, -16, 31, -43, 
  -1, -128, -128, -77, -128, -128, -12, -128, -29, -128, 
  -128, -128, -26, -128, -77, -77, 64, 48, 64, -8, 
  21, 11, 32, -128, -50, -128, -128, -128, -128, -128, 
  -43, -128, -60, -26, 24, -128, 35, -14, 25, -128, 
  -20, -128, -128, -128, -128, -128, -4, -128, -29, -128, 
  -128, -128, -37, -128, 7, 19, 84, 76, 84, 46, 
  69, 57, 85, 15, 24, -7, 44, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, 44, 15, 49, -128, 
  15, -128, -128, -128, -128, -128, -4, -128, -18, -128, 
  -128, -128, 46, -128, -128, -128, 59, 78, 105, 43, 
  87, 71, 77, 57, 57, 51, 78, 51, 61, -128, 
  -1, -128, -128, -128, -128, -128, 13, -128, 36, -128, 
  -43, -128, -128, -128, -128, -14, 22, -128, -29, -128, 
  -10, -128, 59, -77, -128, -128, 46, 70, 104, 50, 
  63, 17, 63, 48, 93, 77, 89, 31, 32, 9, 
  19, -77, -128, -128, -77, -50, 89, 68, 55, -20, 
  0, -8, -29, -37, -33, -128, 29, -128, 23, -60, 
  -128, -77, 64, -128, -128, -128, 60, 34, 56, 8, 
  52, 4, 34, -33, 70, 73, 89, -14, 33, -50, 
  16, -128, -128, -128, -128, -12, 25, -23, 43, -77, 
  -60, -77, -43, -77, -20, -128, -60, -128, 2, -60, 
  -128, -43, 44, -128, -128, -128, 42, 30, 62, -128, 
  49, -23, 15, -16, 32, 11, 49, -128, -128, -26, 
  44, -128, -128, -128, -128, -26, 60, 45, 66, 21, 
  16, -14, -18, -128, -43, -128, -77, -128, -77, -128, 
  -128, -128, 52, -128, -128, -128, 13, -128, 8, -77, 
  -128, -128, -128, -10, -29, -128, 1, -128, -128, -128, 
  -50, -128, -128, -128, -128, -77, 14, -43, 17, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -10, -77, -50, -50, 
  -43, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -6, -60, 0, 22, 16, -77, 
  -43, -128, -29, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -20, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, 9, -4, -128, -128, -128, 15, -26, 
  8, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -50, -18, -77, 59, 39, 
  75, 82, 99, 77, 85, 66, 54, -43, -10, -20, 
  52, -43, -23, -128, -128, -128, -128, -128, -128, -128, 
  37, -16, 49, 45, 72, 61, 88, 67, 94, 85, 
  102, 82, 87, 82, 106, 87, 97, 82, 110, 82, 
  102, 89, 111, 94, 114, 92, 110, 87, 89, 69, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -20, -128, 34, -3, 5, -128, -77, -128, 
  1, -128, -128, -128, -128, -128, -128, -128, -37, -128, 
  49, 0, 26, -128, 56, 31, 70, 56, 85, 55, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -14, -128, -10, -37, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -77, -29, -128, -128, -128, 67, 45, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -16, -128, -37, -128, -18, -128, 67, 39, 
  -128, -128, 4, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 7, -77, 18, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, 5, 22, -4, 9, -128, 
  9, -77, 40, -128, 68, 12, -37, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -50, -43, -128, -128, -128, 
  58, 34, 17, -128, 25, -128, -29, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -33, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, -12, -128, -128, -128, -128, -128, -128, -128, 
  22, -7, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -1, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -8, -128, -12, -128, -60, 55, 27, -29, 49, -12, 
  -12, -77, -60, -128, -77, 40, 52, -128, -77, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  0, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, 18, 65, 60, -128, 59, 47, 
  41, -77, 15, -60, 57, 23, 16, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -60, 10, 74, 86, -20, 46, 41, 
  -20, -128, 31, 16, 54, 42, 9, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -14, 53, 43, -37, 9, 59, 70, -128, -128, -60, 
  -128, -128, 25, -128, -8, -10, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  100, 97, 107, 57, 46, 64, 74, -128, -128, -18, 
  -128, -128, -4, -60, 15, -12, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  108, 94, 105, 29, 82, 72, 65, -128, 36, 46, 
  38, 48, 37, -10, -60, -43, -60, -128, -43, 33, 
  81, 51, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -8, -128, -128, -128, -128, -128, -128, -128, 
  100, 82, 97, 39, 88, 72, 67, -128, 38, 25, 
  80, 72, 65, 30, -128, -33, -50, -128, 52, 49, 
  93, 59, -128, -128, -128, -4, 19, -128, -128, -128, 
  -128, -18, 49, -128, -128, -128, -128, -128, -128, -128, 
  95, 74, 90, 17, 90, 70, 71, 4, 83, 80, 
  98, 80, 97, 84, 85, 70, 82, 79, 99, 80, 
  80, 54, 32, 21, 21, 39, 13, -128, -128, -128, 
  -128, -37, 17, -128, -128, -128, -128, -128, -50, -128, 
  108, 84, 99, 68, 115, 95, 115, 96, 122, 97, 
  122, 99, 118, 101, 118, 98, 118, 100, 108, 82, 
  104, 81, 107, 99, 116, 98, 97, 80, 116, 97, 
  113, 91, 108, 69, 43, 15, 69, 63, 83, 64, 
  100, 74, 88, 55, 107, 77, 74, 87, 111, 74, 
  113, 88, 114, 89, 119, 93, 100, 66, 86, 34, 
  44, -37, 73, 50, 90, 70, 93, 42, 79, 77, 
  105, 81, 97, 81, 84, 76, 85, 57, 70, 49, 
  91, 59, 70, 64, 95, 58, 52, 80, 98, 68, 
  104, 71, 110, 78, 101, 65, 38, -128, 49, -128, 
  -12, -128, 26, -50, 54, 51, 90, 23, 21, 65, 
  107, 74, 73, 75, 78, 38, 57, 32, 33, 25, 
  85, 46, 54, 69, 89, 38, 24, 73, 85, 81, 
  100, 55, 102, 55, 43, -128, -128, -128, 20, -128, 
  -128, -128, -128, -128, -128, -128, 48, 49, 32, 58, 
  90, 65, 82, 66, 62, -3, 39, -7, 20, 7, 
  79, 30, 33, 64, 78, -6, 65, 67, 69, 86, 
  97, -2, 50, -128, -4, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 42, 42, -128, -128, 
  64, 64, 92, 67, 37, -128, 25, -43, 24, -16, 
  74, 8, -18, 57, 63, -128, 76, 54, 39, 71, 
  77, -128, -4, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -128, -77, -128, 
  19, 19, 75, 32, -33, -128, -50, -77, 22, -3, 
  63, -50, -128, 32, 34, -128, 74, 37, -26, -3, 
  -1, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, 47, -128, -128, -128, -128, -128, -128, -128, 
  52, -128, -128, 9, 7, -128, 69, 11, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -60, 30, -128, -128, -128, -128, -128, -128, -128, 
  40, -128, -128, -77, -128, -128, 43, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -1, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -16, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
