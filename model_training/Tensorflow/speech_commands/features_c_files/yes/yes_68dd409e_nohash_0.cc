/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/68dd409e_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_68dd409e_nohash_0.cc" \
 */
#include "yes_68dd409e_nohash_0.h"


const int g_yes_68dd409e_nohash_0_width = 40;
const int g_yes_68dd409e_nohash_0_height = 49;
alignas(16) const signed char g_yes_68dd409e_nohash_0_data[] = {
  77, 76, 85, 58, 72, 61, 56, 20, 17, -2, 
  -33, -37, -50, -128, -60, -60, -128, -37, -18, -18, 
  50, 65, 68, 55, 77, 74, 66, 64, 75, 57, 
  56, 25, 17, -26, -50, -50, -50, -60, -50, -60, 
  102, 87, 97, 75, 99, 84, 80, 63, 75, 48, 
  37, 9, 25, 25, 29, 22, 37, 34, 45, 49, 
  89, 84, 95, 77, 100, 85, 84, 75, 88, 58, 
  59, 52, 57, 49, 37, -14, -18, -29, -6, -37, 
  107, 84, 102, 82, 102, 85, 89, 74, 82, 65, 
  65, 52, 45, 55, 61, 55, 69, 60, 76, 71, 
  105, 89, 105, 88, 112, 87, 100, 85, 101, 70, 
  71, 52, 66, 64, 60, 17, 8, 15, 24, 9, 
  107, 82, 107, 80, 111, 90, 98, 77, 92, 70, 
  73, 65, 64, 62, 81, 72, 90, 77, 98, 87, 
  110, 85, 97, 80, 103, 76, 99, 87, 105, 79, 
  85, 66, 81, 75, 80, 50, 36, 19, 34, 9, 
  104, 81, 103, 81, 112, 92, 110, 88, 101, 80, 
  98, 76, 92, 73, 85, 72, 92, 75, 98, 87, 
  101, 74, 102, 90, 105, 70, 95, 80, 101, 75, 
  96, 82, 103, 80, 90, 50, 50, 38, 46, 41, 
  103, 78, 98, 78, 106, 86, 115, 91, 105, 84, 
  104, 79, 103, 81, 103, 84, 107, 86, 110, 95, 
  110, 77, 105, 89, 104, 74, 102, 80, 102, 73, 
  92, 74, 100, 80, 96, 66, 72, 63, 70, 51, 
  99, 70, 97, 77, 96, 75, 111, 87, 107, 85, 
  106, 82, 102, 82, 104, 84, 106, 87, 113, 85, 
  99, 70, 103, 82, 99, 70, 95, 76, 98, 72, 
  92, 72, 98, 76, 97, 85, 109, 92, 98, 65, 
  98, 72, 93, 74, 93, 70, 108, 87, 105, 80, 
  104, 79, 104, 82, 102, 79, 107, 85, 112, 83, 
  91, 70, 102, 82, 98, 79, 106, 77, 96, 79, 
  103, 81, 100, 71, 89, 74, 95, 75, 104, 85, 
  96, 73, 93, 69, 89, 67, 103, 82, 109, 78, 
  102, 80, 99, 78, 99, 80, 102, 85, 112, 74, 
  86, 67, 94, 77, 99, 65, 86, 64, 95, 63, 
  83, 57, 92, 74, 92, 46, 49, -33, 66, 34, 
  95, 69, 94, 69, 84, 68, 101, 77, 102, 68, 
  93, 71, 85, 68, 87, 66, 92, 75, 94, 31, 
  70, 50, 89, 63, 90, 62, 93, 66, 92, 67, 
  85, 54, 85, 63, 79, 12, 41, -77, 54, 16, 
  92, 69, 91, 71, 82, 62, 97, 76, 89, 61, 
  93, 55, 85, 59, 86, 57, 95, 75, 75, -43, 
  27, -26, 55, 27, 71, 15, 75, 48, 78, 49, 
  74, -14, 58, 34, 56, 17, 50, -2, 59, 26, 
  90, 70, 85, 69, 82, 54, 87, 74, 90, 67, 
  85, 62, 85, 56, 94, 66, 98, 64, 70, -10, 
  50, 22, 67, 35, 77, 47, 80, 54, 85, 67, 
  80, 52, 85, 63, 72, -26, 45, -10, 54, 16, 
  80, 66, 80, 54, 74, 56, 74, 19, 74, 63, 
  63, 44, 80, 43, 79, 42, 77, 44, 16, -128, 
  27, -16, 48, 32, 83, 44, 63, 30, 80, 64, 
  73, 43, 71, 44, 74, -4, 37, -60, 45, -4, 
  -6, -128, -1, -128, -50, -128, -128, -128, -128, -128, 
  45, -50, 21, -128, 5, 9, 6, -128, -77, -128, 
  -60, -128, -128, -128, -50, -128, 22, -128, 8, -7, 
  45, 4, 76, 44, 80, 70, 80, 29, 59, 23, 
  -128, -128, -43, -128, -77, -128, -128, -128, -128, -50, 
  68, 23, 54, 33, 60, -128, 17, -128, -18, -23, 
  60, 26, 59, -128, 22, 34, 72, 41, 67, 38, 
  77, 78, 92, 68, 102, 85, 105, 77, 84, 60, 
  -77, -128, -128, -128, 8, -128, -128, -128, -60, -77, 
  44, 43, 75, 12, 55, 11, 19, -128, -128, -128, 
  34, -10, 47, -128, 29, -10, 72, 30, 64, 54, 
  89, 66, 93, 84, 108, 77, 100, 70, 87, 59, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  0, -128, 25, -4, 66, 37, 16, -128, -50, -128, 
  53, 33, 35, -128, 45, 31, 72, 40, 57, 57, 
  83, 67, 89, 67, 93, 73, 93, 67, 95, 51, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 51, 44, 58, -128, 7, -50, -23, -128, 
  37, -4, 52, -128, -128, -12, 74, 51, 65, 21, 
  83, 68, 90, 70, 80, 49, 74, 63, 81, 49, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -1, -16, 35, -4, 11, -128, -4, -128, -128, -128, 
  38, -14, -2, -128, -29, -26, 54, 27, 53, -8, 
  81, 52, 77, 38, 62, 57, 75, 34, 78, 39, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  12, -37, 17, -128, 36, -128, 9, -128, -128, -128, 
  17, -50, 4, -128, -128, -128, 45, -77, 18, 15, 
  55, 42, 83, 46, 76, 53, 74, 46, 74, 48, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  12, -77, 22, -37, 44, -128, -128, -128, -29, -128, 
  -2, -77, 4, -128, -18, -26, 34, -128, 40, 40, 
  59, 35, 72, 22, 60, 33, 69, 34, 64, 27, 
  -128, -128, -37, -128, -128, -128, -43, -128, -128, -26, 
  4, 17, 25, -29, 19, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, 54, -77, 39, 24, 
  51, 45, 77, 23, 61, 11, 37, -2, 45, 0, 
  -128, -128, -60, -43, 19, -128, -128, -128, -128, -128, 
  -128, -128, 38, -128, 9, -37, -33, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 45, -43, 4, -128, 
  10, -77, 45, -128, -128, -128, -37, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 2, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -2, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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