/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/2796ac50_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_2796ac50_nohash_1.cc" \
 */
#include "no_2796ac50_nohash_1.h"


const int g_no_2796ac50_nohash_1_width = 40;
const int g_no_2796ac50_nohash_1_height = 49;
alignas(16) const signed char g_no_2796ac50_nohash_1_data[] = {
  126, 104, 118, 101, 121, 95, 119, 97, 114, 97, 
  99, 86, 101, 89, 82, 67, 53, 80, 86, 80, 
  96, 80, 97, 84, 103, 93, 89, 71, 70, 70, 
  70, 54, 81, 80, 71, 60, 59, 54, 55, 55, 
  114, 92, 96, 89, 111, 85, 112, 90, 103, 83, 
  92, 83, 100, 82, 86, 68, 57, 74, 91, 77, 
  94, 81, 100, 83, 103, 91, 101, 75, 87, 79, 
  90, 57, 96, 83, 88, 61, 65, 53, 70, 62, 
  106, 84, 90, 80, 107, 79, 103, 85, 98, 85, 
  100, 70, 96, 86, 94, 61, 88, 78, 102, 76, 
  94, 78, 99, 79, 94, 73, 105, 78, 90, 77, 
  92, 51, 94, 78, 90, 44, 62, 60, 80, 54, 
  100, 79, 93, 70, 103, 81, 90, 79, 82, 78, 
  107, 59, 77, 74, 103, 70, 77, 62, 105, 84, 
  99, 74, 97, 74, 97, 82, 95, 74, 91, 75, 
  89, 42, 95, 74, 92, 50, 66, 64, 84, 54, 
  93, 74, 99, 59, 97, 78, 79, 72, 81, 71, 
  104, 50, 73, 60, 97, 49, 78, 49, 88, 71, 
  96, 74, 97, 71, 90, 82, 104, 70, 89, 70, 
  92, 59, 81, 65, 87, 49, 64, 62, 84, 43, 
  84, 63, 89, 48, 94, 81, 79, 65, 89, 63, 
  99, 73, 93, 40, 87, 79, 109, 88, 116, 94, 
  108, 90, 105, 90, 115, 84, 114, 94, 109, 85, 
  108, 87, 87, 63, 85, 63, 87, 80, 87, 52, 
  65, 32, 78, 82, 111, 91, 110, 95, 116, 88, 
  114, 92, 115, 78, 109, 98, 117, 96, 118, 99, 
  123, 95, 117, 97, 121, 92, 118, 101, 125, 99, 
  122, 100, 109, 81, 93, 70, 85, 87, 104, 74, 
  56, 25, 78, 65, 98, 75, 98, 91, 114, 78, 
  109, 83, 112, 77, 109, 89, 113, 95, 116, 91, 
  96, 79, 105, 89, 106, 73, 99, 82, 112, 90, 
  105, 72, 112, 77, 93, 75, 104, 61, 82, 49, 
  50, 9, 69, 56, 88, 61, 95, 79, 103, 80, 
  106, 84, 109, 77, 104, 89, 113, 94, 88, 50, 
  90, 66, 99, 80, 98, 56, 89, 73, 100, 73, 
  83, 72, 105, 67, 97, 80, 89, 33, 63, 30, 
  46, -16, 41, 54, 79, 35, 92, 57, 70, 83, 
  99, 82, 98, 74, 95, 85, 109, 78, 63, -1, 
  69, 40, 89, 69, 77, 33, 76, 57, 93, 55, 
  69, 60, 95, 68, 78, 63, 86, 37, 63, 19, 
  41, -50, -43, 51, 70, -10, 90, 41, 76, 77, 
  87, 79, 89, 72, 99, 78, 89, 34, 40, -37, 
  55, 32, 82, 52, 64, 16, 69, 48, 76, 26, 
  59, 44, 89, 64, 76, 61, 75, -10, 56, 13, 
  36, -128, 29, 47, 63, -60, 88, 29, 80, 66, 
  72, 72, 79, 72, 103, 74, 74, -50, -16, -128, 
  32, 5, 70, 15, 54, -16, 62, 34, 54, -43, 
  50, 39, 84, 62, 75, 54, 63, -128, 26, -20, 
  31, -128, 57, 44, 59, -33, 87, 23, 81, 54, 
  60, 63, 69, 66, 102, 64, 49, -128, -77, -128, 
  -20, -26, 55, 6, 59, -43, 55, 21, 19, -128, 
  43, 22, 77, 44, 74, 59, 60, 44, 73, -20, 
  25, -128, 62, 40, 54, 11, 88, 20, 77, 40, 
  54, 51, 65, 61, 76, 10, 25, -128, -128, -128, 
  -60, -128, 31, 17, 57, -128, 50, 8, -128, -128, 
  39, 9, 70, 31, 67, 47, 62, 24, 55, -128, 
  19, -128, 71, 39, 52, 40, 89, 24, 69, 9, 
  55, 42, 75, 64, 45, -128, -18, -128, -128, -128, 
  -128, -128, -7, -14, 37, -128, 35, -128, -128, -128, 
  18, -23, 56, -1, 53, 25, 52, 0, 47, -20, 
  9, -128, 81, 36, 43, 59, 86, 2, 60, -128, 
  63, 31, 89, 59, -10, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 5, -128, 20, -128, -128, -128, 
  -77, -128, 25, -128, 35, -12, 46, -128, 33, -128, 
  -1, -128, 87, 35, 30, 64, 79, -128, 43, -128, 
  69, 12, 61, -60, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 0, -128, -20, -128, -128, -128, 
  -128, -128, -3, -128, -29, -128, -6, -128, 6, -128, 
  -18, -128, 91, 29, -7, 59, 62, -128, 43, -128, 
  75, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -128, -128, 
  -37, -128, 91, 18, -60, 26, -3, -128, 59, -128, 
  37, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 4, -128, 
  -60, -128, 87, -16, -128, -128, -128, -37, 47, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, 64, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -12, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -26, -128, -128, -128, -128, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
