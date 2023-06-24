/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/a7216980_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_a7216980_nohash_0.cc" \
 */
#include "yes_a7216980_nohash_0.h"


const int g_yes_a7216980_nohash_0_width = 40;
const int g_yes_a7216980_nohash_0_height = 49;
alignas(16) const signed char g_yes_a7216980_nohash_0_data[] = {
  124, 102, 123, 100, 120, 98, 107, 93, 113, 92, 
  105, 94, 101, 82, 89, 85, 90, 79, 102, 87, 
  97, 65, 82, 83, 93, 87, 95, 77, 85, 79, 
  88, 68, 65, 54, 69, 63, 60, 64, 80, 71, 
  122, 99, 121, 101, 122, 95, 115, 97, 114, 81, 
  95, 60, 80, 71, 95, 76, 92, 82, 89, 88, 
  114, 100, 119, 94, 118, 98, 114, 90, 110, 94, 
  100, 69, 84, 74, 86, 66, 74, 78, 110, 84, 
  112, 91, 115, 85, 114, 92, 117, 97, 110, 79, 
  95, 65, 81, 60, 83, 79, 105, 74, 101, 88, 
  119, 101, 123, 101, 121, 96, 116, 98, 120, 97, 
  117, 87, 89, 72, 92, 64, 73, 87, 113, 91, 
  102, 76, 102, 74, 107, 92, 117, 89, 115, 94, 
  115, 86, 97, 82, 92, 65, 113, 91, 109, 91, 
  112, 87, 117, 97, 116, 84, 112, 82, 109, 87, 
  109, 93, 104, 72, 97, 64, 80, 74, 103, 81, 
  90, 65, 89, 45, 87, 82, 109, 86, 104, 82, 
  107, 85, 112, 76, 90, 72, 105, 89, 106, 92, 
  117, 87, 104, 84, 104, 73, 100, 83, 103, 67, 
  97, 82, 99, 61, 85, 61, 80, 57, 96, 76, 
  83, 57, 76, 78, 103, 87, 112, 74, 97, 79, 
  102, 74, 100, 79, 96, 78, 93, 84, 112, 85, 
  94, 51, 91, 66, 77, 54, 84, 64, 84, 55, 
  93, 72, 89, 40, 56, 42, 81, 39, 75, 55, 
  76, 22, 69, 62, 96, 92, 108, 78, 81, 76, 
  102, 68, 96, 73, 77, 66, 97, 76, 110, 78, 
  74, 29, 47, 24, 85, 49, 74, 60, 80, 37, 
  84, 57, 92, 26, 53, 40, 77, -20, 50, 23, 
  75, -3, 67, 9, 81, 68, 102, 77, 90, 72, 
  97, 74, 98, 75, 80, 44, 82, 35, 85, 45, 
  73, -128, 50, 14, 57, -12, 45, -2, 59, 12, 
  54, 37, 83, 43, 49, 30, 59, -16, -77, -128, 
  69, -50, 16, 42, 79, 63, 85, 57, 76, 68, 
  85, 36, 72, 0, 90, 51, 78, 41, 75, 47, 
  64, -50, 52, -10, 54, -29, 50, 28, 44, -60, 
  60, 31, 70, 60, 59, 37, 64, -6, -128, -128, 
  -4, -43, 36, -128, 62, 43, 65, -33, 55, 52, 
  69, 32, 80, 19, 72, 42, 54, -10, 75, 5, 
  37, -128, 15, -128, -23, -128, 37, -128, 9, -8, 
  60, 4, 87, 74, 85, 35, 80, 35, -50, -128, 
  -20, -43, 0, -128, 2, -128, 45, -60, 59, -14, 
  47, -10, 44, -29, 44, -29, 10, -20, 32, -1, 
  -23, -128, -77, -128, -128, -128, 1, -128, -50, -128, 
  57, -14, 81, 83, 96, 78, 108, 94, 105, 65, 
  -128, -128, -60, -128, -128, -128, 25, -128, 15, -43, 
  40, -26, 47, -37, 55, 49, 32, -8, -26, -128, 
  -23, -128, -128, -128, -128, -128, -50, -128, -18, -14, 
  92, 77, 111, 94, 116, 97, 121, 98, 118, 91, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -3, 
  43, -128, -16, -128, 29, -128, -128, -128, 35, -128, 
  -128, -128, -128, -128, -128, -128, -18, -128, -6, -12, 
  86, 65, 93, 83, 112, 90, 112, 82, 100, 82, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -20, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  46, 31, 87, 79, 100, 47, 93, 69, 93, 71, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  48, 13, 79, 60, 82, 73, 99, 59, 74, 70, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 4, -60, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -20, 
  34, -29, 67, 44, 62, 52, 77, 52, 64, 38, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -37, 48, -3, 60, 45, 61, -26, 69, 40, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -23, -128, 44, 33, 48, -23, 59, 11, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 28, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -43, -128, 18, 0, 55, -16, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -43, 50, 23, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -60, -128, -128, -128, 35, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -8, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -14, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -60, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -29, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
