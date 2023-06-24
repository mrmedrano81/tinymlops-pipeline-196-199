/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/9a7c1f83_nohash_2.wav" \
 * --output_c_file="features_c_files/yes/yes_9a7c1f83_nohash_2.cc" \
 */
#include "yes_9a7c1f83_nohash_2.h"


const int g_yes_9a7c1f83_nohash_2_width = 40;
const int g_yes_9a7c1f83_nohash_2_height = 49;
alignas(16) const signed char g_yes_9a7c1f83_nohash_2_data[] = {
  82, 68, 82, 74, 81, 67, 80, 63, 69, 28, 
  9, 25, 42, 46, 20, 37, 5, -7, -4, -18, 
  -50, 25, 26, -18, 74, 63, 71, 74, 66, 11, 
  -26, -12, 0, -2, -26, -12, -18, -18, -4, -18, 
  81, 62, 74, 42, 52, 75, 87, 36, 66, 56, 
  27, 24, 46, 35, 37, -18, 4, -16, 34, 29, 
  16, 19, 34, 34, 85, 69, 55, 79, 87, 31, 
  4, -29, -1, -10, 4, -4, 4, -14, -6, -50, 
  61, 58, 69, 51, 67, 71, 90, 63, 57, 26, 
  1, -12, 32, 59, 68, 47, 20, 28, 32, 46, 
  39, 28, 61, 76, 58, 22, 64, 56, 65, -37, 
  -29, -6, 11, -2, 4, -23, -20, -43, 7, 0, 
  64, 52, 64, 53, 72, 34, 28, 16, 34, -20, 
  9, -33, 46, 62, 84, 60, 41, 67, 72, 40, 
  50, 50, 62, 71, 82, 56, 63, 69, 75, 75, 
  72, 70, 72, 57, 81, 64, 59, 57, 52, 47, 
  72, 77, 91, 24, 44, 4, 47, 21, 9, 10, 
  7, -43, 49, 59, 78, 42, 48, 71, 84, 23, 
  62, 35, 69, 70, 79, 42, 57, 24, 55, 46, 
  60, 56, 61, 61, 76, 55, 58, 35, 50, 0, 
  60, 24, 21, 29, 33, -128, 24, 2, 42, 47, 
  60, 11, 38, 57, 73, 45, 21, 39, 58, 26, 
  76, 47, 84, 62, 79, 53, 57, 25, 78, 84, 
  99, 79, 70, 63, 81, 46, 84, 69, 51, -77, 
  61, -16, 17, 16, 58, -77, -77, -37, 19, 40, 
  54, -20, 16, -60, 38, 14, 55, 58, 69, 60, 
  77, 44, 76, 64, 64, 23, 46, 35, 69, 53, 
  77, 29, 84, 72, 75, 45, 80, 63, 59, -1, 
  59, 29, 39, 11, 43, -60, 6, -60, 43, 5, 
  20, 23, 15, -3, 37, -33, 30, -6, 10, 1, 
  23, 40, 72, -14, -2, -128, 6, -37, 49, -60, 
  17, -60, 52, 6, -14, -23, -6, -77, 32, -43, 
  53, -18, 26, 23, 29, 10, 52, 4, 42, 50, 
  72, 43, 35, -29, -26, -37, 54, 7, 54, 0, 
  29, 6, 40, -128, -10, -128, -29, -128, -50, -128, 
  -128, -128, 15, -43, -43, -128, -43, -77, 4, -37, 
  119, 97, 116, 100, 124, 103, 123, 97, 108, 84, 
  99, 82, 78, 20, 43, 41, 87, 62, 99, 97, 
  117, 85, 94, 65, 54, -128, -20, -128, -29, -128, 
  -60, -8, 61, 46, 83, 69, 77, 53, 61, 14, 
  120, 95, 117, 100, 117, 95, 122, 100, 110, 73, 
  95, 84, 106, 75, 80, 85, 107, 83, 116, 95, 
  119, 97, 115, 90, 108, 81, 75, -128, 47, 52, 
  99, 85, 103, 63, 103, 90, 106, 85, 84, 44, 
  112, 82, 114, 87, 97, 95, 119, 90, 117, 89, 
  107, 85, 113, 76, 97, 87, 113, 92, 110, 84, 
  110, 85, 107, 89, 112, 80, 73, 20, 89, 97, 
  116, 85, 98, 75, 92, 80, 109, 80, 85, 70, 
  102, 71, 104, 74, 95, 91, 110, 75, 116, 82, 
  105, 73, 89, 85, 104, 76, 90, 66, 99, 85, 
  105, 75, 102, 82, 103, 72, 83, 27, 100, 84, 
  105, 72, 94, 62, 77, 69, 92, 70, 97, 63, 
  97, 66, 100, 73, 91, 75, 94, 70, 110, 78, 
  104, 72, 91, 82, 106, 77, 93, 74, 101, 86, 
  107, 66, 92, 70, 95, 67, 89, 48, 97, 74, 
  97, 73, 100, 78, 94, 69, 80, 58, 89, 61, 
  94, 68, 86, 64, 83, 63, 89, 54, 91, 71, 
  95, 54, 77, 74, 97, 70, 93, 79, 104, 74, 
  98, 63, 94, 71, 100, 72, 80, 57, 97, 77, 
  97, 67, 98, 62, 97, 67, 91, 67, 94, 61, 
  93, 69, 85, 70, 91, 48, 86, 57, 80, 74, 
  95, 74, 82, 38, 85, 68, 97, 70, 83, 17, 
  47, 49, 73, 54, 83, 6, 59, 44, 93, 68, 
  87, 62, 79, 36, 95, 76, 92, 46, 66, 47, 
  90, 63, 78, 47, 80, 51, 80, 45, 73, 54, 
  82, 57, 93, 60, 77, 62, 95, 77, 87, 52, 
  19, 14, 67, -3, 59, -7, 50, -8, 80, 49, 
  80, 62, 70, 43, 77, 47, 72, 52, 81, 38, 
  83, 51, 65, -128, 38, -37, 51, -43, 27, 35, 
  70, 36, 71, 16, 47, -128, 44, -77, 57, -128, 
  -128, -128, -33, -128, 37, -26, 51, 19, 0, -128, 
  -29, -8, 24, -23, 48, -4, 62, 14, 64, 47, 
  12, -77, -29, -128, -128, -128, -128, -128, -37, -128, 
  15, 22, 42, -128, -7, -128, 42, -128, -8, -128, 
  -128, -128, -43, -128, 23, 32, 80, 73, 74, -128, 
  20, -7, 50, -3, 61, 41, 85, 71, 100, 77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  21, -128, -16, -128, -128, -128, -4, -128, -77, -128, 
  -128, -37, 21, 14, 64, 43, 78, 52, 77, 10, 
  54, -7, 59, 46, 82, 54, 95, 77, 109, 91, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 25, -128, -128, -128, 28, -128, -128, -128, 
  -128, -128, -128, -128, 53, 44, 79, 60, 72, -14, 
  32, 9, 73, 59, 85, 61, 80, 68, 100, 84, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -50, -18, -128, 5, -1, 47, -128, -128, -128, 
  -128, -128, -128, -60, 48, 47, 74, 50, 52, -128, 
  -33, -128, 46, 34, 75, 44, 71, 50, 80, 65, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 12, -128, 52, -128, -12, -128, -128, -128, 
  -128, -128, -128, -128, -1, -18, 67, 48, 51, -12, 
  27, -10, 34, 52, 67, 24, 74, 46, 78, 51, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 23, -50, 47, -128, -18, -128, -60, -128, 
  -128, -128, -128, -128, -18, -4, 63, 27, 50, -128, 
  -20, -60, 62, 45, 75, 43, 69, 50, 68, 27, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -43, 59, 20, 35, -43, 1, -128, -128, -128, 
  -128, -128, -128, -128, -26, -23, 50, 35, 51, -128, 
  -50, -77, 57, 35, 76, 17, 63, 31, 74, 41, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 74, 42, 36, -2, 15, -128, -128, -128, 
  -128, -128, 12, -18, -43, 13, 62, -1, 40, -128, 
  7, 24, 62, 39, 74, 34, 67, 32, 55, 12, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, 57, 22, 30, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 16, 22, 53, 14, 24, -128, 
  -128, -128, 16, 8, 61, 5, 65, 29, 66, 13, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -60, -77, -50, 62, 25, 29, -128, 
  -23, 19, 30, -50, 39, -8, 49, 15, 62, -3, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -29, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, 54, -14, -18, -128, 
  -18, -128, 14, -50, 24, -50, 46, 19, 49, -1, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 13, -128, -33, -128, 
  -60, -128, 18, -128, -37, -128, 32, 9, 32, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, 21, -128, -26, -128, 
  -128, -128, 2, -128, -2, -128, 44, -2, 24, -6, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -26, 42, -18, -16, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -7, -128, -128, -128, 32, 2, 7, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -2, -128, 
  -128, -128, -128, -128, -128, -128, 0, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 8, -128, -20, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -2, -128, -18, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -6, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  38, -50, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -10, -18, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
