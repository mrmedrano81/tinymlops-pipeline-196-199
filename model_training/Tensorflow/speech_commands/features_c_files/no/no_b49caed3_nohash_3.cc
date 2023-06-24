/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/b49caed3_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_b49caed3_nohash_3.cc" \
 */
#include "no_b49caed3_nohash_3.h"


const int g_no_b49caed3_nohash_3_width = 40;
const int g_no_b49caed3_nohash_3_height = 49;
alignas(16) const signed char g_no_b49caed3_nohash_3_data[] = {
  -26, 4, -60, -128, -26, -18, -50, -50, -128, -26, 
  14, -50, -50, -50, 0, -50, -128, -128, -128, -60, 
  -50, -60, -128, -128, -128, -128, -128, -60, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -12, -10, 13, -14, -37, -20, -60, -128, -50, -37, 
  -26, -60, -37, -29, -18, -37, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  4, -60, -37, -50, -37, -43, -37, -128, -128, -29, 
  -37, -37, -50, -50, -37, -37, -60, -128, -128, -60, 
  -60, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, -60, -128, -128, -128, -50, -128, -60, -60, 
  -29, -60, -20, -128, -60, -33, -37, -77, -60, -18, 
  -7, -43, -50, -77, -128, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -26, -20, -77, -77, -128, -77, -128, -128, -128, 
  -37, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -23, -16, -50, -128, -128, -128, -77, -128, -128, -128, 
  -50, -60, -77, -128, -128, -128, -50, -50, -60, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -77, -60, -77, -128, -128, 
  -128, -128, -50, -128, -77, -77, -37, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -77, -128, -128, -128, -60, -29, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -33, -77, -50, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -77, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -60, -43, -23, -77, -128, -128, -50, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -128, -128, -77, -50, -128, -128, -128, -128, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -33, -43, -26, -128, -77, -128, -128, -128, -128, -43, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  12, -6, 1, -16, -50, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -29, -77, -60, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  105, 86, 85, 61, 54, 24, -1, -128, -37, -128, 
  -77, -128, -128, -128, -128, -128, -128, -43, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  124, 103, 124, 102, 123, 98, 109, 87, 80, 60, 
  69, 60, 69, 72, 78, 52, 84, 82, 94, 80, 
  80, 27, 40, 37, 29, -14, -14, -33, -50, -60, 
  -128, -128, -3, -14, -20, 11, 19, 11, 32, 17, 
  106, 94, 113, 87, 107, 85, 107, 86, 106, 84, 
  91, 79, 82, 81, 97, 69, 95, 79, 97, 90, 
  103, 73, 90, 80, 83, 67, 61, 77, 89, 77, 
  77, 37, 37, 14, 19, 16, 15, 16, 39, 18, 
  108, 88, 107, 91, 108, 93, 112, 91, 102, 90, 
  107, 82, 92, 82, 107, 86, 105, 85, 112, 92, 
  104, 87, 115, 96, 105, 80, 92, 91, 115, 90, 
  100, 54, 52, 37, 54, 47, 58, 60, 77, 54, 
  106, 85, 104, 77, 100, 85, 102, 70, 98, 83, 
  98, 65, 92, 70, 96, 66, 92, 80, 100, 61, 
  96, 87, 110, 90, 106, 88, 100, 89, 112, 89, 
  102, 62, 50, 40, 59, 60, 90, 80, 96, 70, 
  96, 78, 100, 66, 107, 85, 108, 72, 109, 89, 
  113, 90, 110, 74, 84, 72, 93, 64, 114, 97, 
  109, 90, 112, 87, 115, 95, 120, 95, 116, 93, 
  113, 79, 77, 64, 71, 72, 112, 96, 115, 95, 
  87, 63, 86, 61, 111, 94, 111, 85, 103, 83, 
  106, 85, 104, 74, 83, 70, 85, 85, 110, 90, 
  108, 80, 105, 77, 97, 75, 106, 85, 101, 82, 
  109, 90, 79, 43, 67, 68, 109, 83, 102, 85, 
  85, 58, 81, 54, 102, 83, 102, 79, 84, 73, 
  97, 77, 92, 63, 90, 69, 100, 90, 96, 50, 
  90, 80, 84, 44, 71, 60, 102, 72, 88, 73, 
  96, 74, 78, 52, 61, 53, 87, 59, 82, 57, 
  81, 52, 74, 49, 98, 77, 94, 45, 93, 69, 
  92, 68, 80, 52, 88, 81, 111, 80, 84, 15, 
  81, 69, 70, -8, 66, 49, 85, 60, 71, 49, 
  90, 60, 74, 56, 77, 44, 59, -4, 95, 71, 
  75, 41, 67, 54, 96, 70, 87, 61, 95, 58, 
  84, 53, 85, 57, 87, 70, 91, 56, 72, 14, 
  71, 70, 69, -26, 56, 29, 72, 41, 70, 45, 
  82, 36, 59, 6, 55, 24, 81, 41, 81, 46, 
  72, 35, 62, 34, 90, 67, 84, 52, 93, 44, 
  83, 58, 82, 50, 84, 58, 70, 24, 51, -33, 
  72, 59, 67, -128, 44, 10, 51, 19, 76, 51, 
  82, 65, 51, 7, 33, -3, 75, 50, 64, 20, 
  66, 24, 59, 32, 87, 59, 84, 62, 87, 44, 
  80, 53, 79, 63, 89, 39, 69, 13, 49, -60, 
  64, 50, 56, -128, 32, -128, 42, -29, 59, 41, 
  75, 44, 67, 18, 43, -77, 67, 45, 62, 17, 
  63, 0, 68, 57, 81, 35, 79, 55, 80, 61, 
  77, 38, 79, 66, 93, 77, 75, -12, 34, -128, 
  72, 45, 56, -128, 44, 16, 45, -43, 47, 21, 
  72, 53, 75, -33, 34, -43, 55, 33, 42, 22, 
  60, -7, 73, 62, 75, 4, 69, 44, 73, 48, 
  50, 40, 79, 61, 90, 50, 55, -77, -23, -128, 
  61, 24, 42, -128, -37, -77, 22, -128, 33, -29, 
  43, 18, 44, -7, 41, -29, 31, 16, -6, -37, 
  53, -29, 65, 49, 75, 15, 56, 21, 61, -20, 
  54, -12, 77, 64, 97, 53, 34, -128, -128, -128, 
  30, 4, -1, -128, -43, -128, 15, -128, -7, -128, 
  -18, -77, 33, -18, 40, -60, -128, -128, -7, -128, 
  35, -128, 50, 21, 58, -128, 26, -20, 47, -7, 
  49, -16, 77, 65, 83, -1, -43, -128, -128, -128, 
  30, -23, -18, -128, -29, -128, 11, -128, -128, -128, 
  -23, -33, 43, -6, 19, -128, -128, -128, -16, -128, 
  -128, -128, 61, 36, 57, -128, 13, -10, 0, -77, 
  62, -128, 67, 51, 53, -43, -43, -128, -128, -128, 
  -2, -128, -77, -128, -128, -128, -128, -128, -23, -128, 
  34, 31, 37, -10, 18, -128, -128, -128, -128, -128, 
  -128, -128, 49, 1, 30, -128, -20, -6, 0, -60, 
  56, -77, 70, 55, 47, -128, -128, -128, -128, -128, 
  -1, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  15, 24, 9, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -2, -128, 4, -128, -43, -4, 15, -128, 
  45, -60, 64, 24, 32, -128, -128, -128, -128, -128, 
  -6, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, -128, -29, -128, -128, -128, -128, -128, 
  -60, -128, 17, -128, -128, -128, -128, -128, 4, -128, 
  32, -16, 53, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, 1, -128, -128, -128, -128, -50, 39, -128, 
  49, 39, 64, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, 20, -26, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 36, -60, 
  31, -14, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 26, -128, 
  16, -128, -60, -128, -128, -128, 11, -128, -128, -128, 
  -128, -128, -128, -128, 19, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
