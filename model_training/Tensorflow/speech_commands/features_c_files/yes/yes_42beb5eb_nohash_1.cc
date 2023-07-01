/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/42beb5eb_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_42beb5eb_nohash_1.cc" \
 */
#include "yes_42beb5eb_nohash_1.h"


const int g_yes_42beb5eb_nohash_1_width = 40;
const int g_yes_42beb5eb_nohash_1_height = 49;
alignas(16) const signed char g_yes_42beb5eb_nohash_1_data[] = {
  115, 99, 117, 93, 100, 80, 77, 70, 74, 44, 
  53, 50, 56, 39, 53, 53, 56, 61, 60, 61, 
  45, 58, 58, 50, 54, 51, 65, 66, 58, 54, 
  71, 58, 67, 54, 60, 57, 66, 53, 44, 4, 
  123, 102, 121, 92, 118, 99, 109, 49, 76, 57, 
  58, 52, 74, 64, 59, 52, 63, 49, 44, 44, 
  76, 60, 65, 42, 87, 92, 110, 84, 94, 75, 
  98, 93, 94, 73, 72, 50, 62, 54, 70, 39, 
  112, 90, 108, 50, 109, 88, 95, 80, 105, 74, 
  62, 42, 100, 87, 84, 80, 96, 78, 64, 67, 
  85, 57, 54, 62, 96, 93, 116, 90, 113, 89, 
  111, 79, 105, 92, 107, 81, 91, 80, 96, 41, 
  103, 80, 101, 26, 107, 87, 105, 89, 110, 77, 
  91, 73, 107, 89, 84, 67, 96, 78, 74, 73, 
  94, 65, 84, 90, 110, 90, 114, 85, 111, 91, 
  112, 87, 110, 90, 107, 90, 107, 82, 97, 68, 
  95, 75, 101, 74, 109, 93, 118, 87, 113, 91, 
  103, 85, 94, 83, 102, 84, 98, 90, 104, 82, 
  102, 84, 107, 86, 112, 90, 107, 93, 109, 87, 
  108, 90, 107, 85, 103, 77, 97, 69, 87, 58, 
  88, 69, 99, 69, 114, 100, 124, 93, 118, 97, 
  114, 97, 105, 86, 110, 93, 108, 90, 113, 92, 
  111, 92, 115, 97, 120, 91, 110, 94, 114, 90, 
  111, 92, 116, 75, 99, 70, 78, 62, 92, 78, 
  85, 61, 87, 50, 103, 75, 90, 96, 122, 100, 
  114, 92, 101, 92, 114, 90, 108, 89, 114, 94, 
  112, 93, 117, 97, 112, 85, 105, 90, 113, 87, 
  111, 86, 113, 80, 104, 65, 88, 59, 79, 72, 
  74, 48, 77, 42, 91, 58, 72, 92, 116, 93, 
  120, 97, 110, 90, 111, 92, 109, 86, 111, 86, 
  111, 92, 114, 87, 106, 71, 100, 82, 103, 80, 
  99, 74, 98, 69, 92, 75, 73, 35, 70, 53, 
  72, 29, 55, 62, 86, 35, 34, 82, 95, 37, 
  118, 89, 111, 80, 98, 75, 109, 79, 101, 76, 
  106, 80, 108, 75, 89, 57, 92, 65, 92, 74, 
  95, 70, 93, 60, 85, 74, 82, 8, 48, 37, 
  72, 11, 24, 82, 85, 12, -7, 71, 72, 65, 
  114, 77, 102, 36, 102, 57, 102, 57, 96, 74, 
  95, 73, 99, 65, 77, 37, 80, 45, 77, 53, 
  80, 48, 76, 24, 82, 65, 83, -14, 35, 30, 
  61, -128, -128, 84, 76, -128, 67, 36, -14, 75, 
  95, 59, 110, 67, 106, 68, 91, 72, 96, 66, 
  96, 78, 94, 54, 71, 38, 78, 46, 70, 35, 
  74, 44, 66, -33, 76, 41, 71, -14, 29, -1, 
  51, -128, -128, 74, 48, -128, 73, -50, 54, 59, 
  64, 75, 90, 68, 77, 54, 85, 51, 87, 61, 
  89, 76, 88, 16, 63, 34, 75, 45, 64, 24, 
  67, 33, 67, 23, 84, 46, 58, -20, 25, -7, 
  55, -128, -128, 64, 25, -128, 69, -128, 62, 36, 
  74, 60, 76, 46, 72, 18, 75, 42, 77, 45, 
  84, 60, 52, -29, 45, 17, 72, 31, 60, 30, 
  67, 38, 53, 31, 80, 25, 45, -128, 4, -37, 
  60, -128, -50, 52, -7, -128, 43, -128, 53, 5, 
  -33, -128, 49, -128, 52, -128, 17, -33, 53, 1, 
  59, -26, -3, -128, -128, -128, 6, -128, -43, -128, 
  -77, -128, -43, 5, 61, -128, -18, -128, -37, -128, 
  30, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -23, -128, -128, -128, 
  -128, -128, -16, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 34, -1, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -33, 84, 63, 46, 18, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 54, 42, 48, 57, 91, 80, 82, 64, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 10, -2, 42, 51, 98, 82, 97, 77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 11, 0, 77, 58, 93, 69, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -33, 69, 46, 65, 46, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 39, -2, 63, 34, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -77, 44, -1, 48, -10, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -3, -77, 31, -60, 56, 15, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 41, -50, 69, 46, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -16, -77, 59, -14, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -8, -128, 49, -3, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -6, -128, 45, 31, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 37, -12, 45, -37, 
  -128, -128, -128, -50, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -26, -16, 48, -29, 15, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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