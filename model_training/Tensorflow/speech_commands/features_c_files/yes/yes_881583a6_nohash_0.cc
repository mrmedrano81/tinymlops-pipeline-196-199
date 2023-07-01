/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/881583a6_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_881583a6_nohash_0.cc" \
 */
#include "yes_881583a6_nohash_0.h"


const int g_yes_881583a6_nohash_0_width = 40;
const int g_yes_881583a6_nohash_0_height = 49;
alignas(16) const signed char g_yes_881583a6_nohash_0_data[] = {
  121, 100, 119, 96, 114, 97, 114, 91, 110, 96, 
  114, 96, 112, 94, 112, 93, 113, 95, 107, 94, 
  110, 89, 107, 92, 109, 91, 103, 93, 105, 92, 
  104, 93, 107, 90, 101, 89, 108, 94, 106, 87, 
  110, 89, 102, 82, 96, 75, 108, 91, 90, 73, 
  100, 79, 100, 80, 100, 74, 82, 72, 93, 63, 
  93, 80, 99, 76, 96, 76, 95, 77, 99, 77, 
  97, 75, 92, 70, 99, 80, 93, 72, 92, 74, 
  58, 25, 87, 73, 100, 76, 100, 70, 95, 67, 
  95, 65, 82, 67, 88, 74, 94, 59, 95, 74, 
  93, 66, 91, 68, 88, 72, 90, 65, 92, 55, 
  88, 63, 87, 70, 82, 70, 80, 54, 88, 62, 
  88, 60, 94, 63, 90, 69, 82, 23, 87, 65, 
  76, 26, 76, 67, 82, 47, 89, 72, 79, 52, 
  76, 63, 87, 62, 75, 48, 84, 57, 81, 58, 
  73, 62, 83, 62, 87, 58, 82, 57, 79, 54, 
  96, 83, 105, 79, 96, 68, 79, 60, 84, 61, 
  75, 52, 89, 35, 63, 60, 77, 30, 79, 48, 
  77, 55, 64, 42, 68, 45, 82, 45, 79, 41, 
  82, 43, 82, 51, 65, 40, 72, 49, 80, 52, 
  118, 98, 111, 94, 117, 94, 106, 85, 105, 63, 
  81, 51, 82, 50, 65, 20, 68, 48, 71, 51, 
  70, 40, 77, 43, 84, 66, 81, 45, 80, 62, 
  84, 79, 108, 78, 68, 23, 60, 11, 66, 47, 
  111, 91, 108, 46, 114, 93, 95, 81, 111, 49, 
  94, 63, 82, 61, 86, 69, 86, 55, 82, 45, 
  73, 57, 75, 54, 109, 89, 106, 86, 109, 86, 
  104, 86, 112, 83, 84, 69, 92, 58, 78, 60, 
  105, 86, 107, 38, 113, 96, 114, 82, 111, 77, 
  92, 72, 86, 68, 87, 77, 93, 72, 98, 79, 
  103, 92, 109, 84, 105, 91, 116, 95, 115, 87, 
  109, 90, 114, 88, 98, 64, 95, 77, 97, 79, 
  95, 71, 91, 75, 113, 93, 116, 97, 116, 70, 
  104, 73, 107, 71, 102, 75, 112, 90, 115, 94, 
  119, 99, 123, 99, 105, 89, 117, 94, 109, 89, 
  113, 84, 107, 85, 111, 84, 103, 82, 104, 78, 
  70, -128, -18, 75, 72, -29, 100, 101, 119, 101, 
  121, 85, 110, 91, 111, 90, 107, 94, 116, 96, 
  120, 100, 118, 94, 104, 66, 103, 85, 105, 79, 
  100, 81, 104, 84, 112, 76, 105, 85, 100, 76, 
  69, -60, -77, 77, 72, -128, 93, 43, 99, 102, 
  115, 82, 97, 85, 103, 77, 102, 73, 103, 85, 
  115, 80, 92, 63, 94, 50, 79, 57, 93, 60, 
  95, 66, 90, 69, 94, 67, 92, 65, 87, 64, 
  70, -60, 62, 73, 55, 6, 83, -6, 93, 59, 
  98, 91, 98, 65, 99, 70, 97, 74, 99, 85, 
  99, 59, 65, 16, 79, 22, 40, -128, 60, 47, 
  83, 57, 86, 55, 60, 42, 55, -128, 43, 16, 
  54, -128, 61, 52, 11, 24, 77, 4, 77, 48, 
  96, 67, 94, 64, 84, 46, 87, 59, 87, 60, 
  70, -128, -6, -50, 55, 0, 0, -128, 53, 10, 
  42, -60, 31, -128, 23, -14, 4, -128, 23, -2, 
  39, -128, 34, -128, -128, -128, -50, -128, 6, -37, 
  20, -128, 53, -128, 37, -60, 30, -77, 60, 19, 
  -8, -128, -128, -128, 51, -43, 29, -128, 58, 23, 
  42, -128, 7, -128, -50, -12, 30, -128, 9, -37, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -29, 48, -128, 6, -128, 46, -128, -43, -128, 
  -128, -128, -128, -128, 37, -128, 24, -128, -128, -128, 
  38, -128, 43, 9, 19, 7, 69, 41, 57, 11, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -8, -128, -18, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 14, -128, -128, -128, 
  -8, -128, -37, -128, 58, 57, 102, 74, 92, 81, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -14, -128, -128, -128, 
  -128, -128, -128, -128, -33, -128, -43, -128, -128, -128, 
  -14, -128, -77, -128, 60, 57, 86, 64, 98, 74, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  4, -128, -128, -128, 35, 44, 68, 32, 76, 56, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -10, -128, -128, -128, 15, 18, 53, -26, 67, 45, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 34, 1, 60, 39, 65, 35, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 28, 7, 44, 5, 79, 57, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -12, 0, 59, 36, 74, 47, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -29, 5, 65, 34, 62, 6, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 16, 40, 69, 20, 68, 47, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -20, -128, 50, 4, 53, -26, 65, 41, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -37, -128, -128, -128, 39, 34, 60, 34, 60, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -77, 19, 1, 11, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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