/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/8fe67225_nohash_4.wav" \
 * --output_c_file="features_c_files/yes/yes_8fe67225_nohash_4.cc" \
 */
#include "yes_8fe67225_nohash_4.h"


const int g_yes_8fe67225_nohash_4_width = 40;
const int g_yes_8fe67225_nohash_4_height = 49;
alignas(16) const signed char g_yes_8fe67225_nohash_4_data[] = {
  62, 64, 56, 35, 40, 28, 49, 49, 57, 50, 
  37, 4, 26, 46, 26, 17, 5, 4, 5, -2, 
  20, 23, 5, 7, 0, 4, 0, 11, -26, 4, 
  20, 4, 20, 17, 17, 20, 26, 30, 23, 17, 
  24, 5, 45, 30, 46, 28, 14, -10, 33, 21, 
  21, 4, 34, 35, 11, 11, 12, -37, -6, 4, 
  -12, -18, -1, 8, 19, -29, 4, -1, -6, 11, 
  11, 4, 21, 22, 19, -2, 18, 12, 11, 14, 
  -7, 28, 46, 43, 59, 54, 36, 9, 45, 49, 
  47, 4, 19, 30, 40, 16, -2, 6, 24, 5, 
  20, -26, -7, 4, 6, -6, 11, 0, 8, -20, 
  -14, -14, 1, -2, -8, 4, 14, -10, -3, -10, 
  44, 43, 66, 29, 62, 65, 55, -128, 4, 50, 
  56, -2, 32, 16, 14, 9, 32, 7, 27, 5, 
  -10, 2, 23, -12, 5, -14, 9, -16, 6, -16, 
  19, 2, 9, 9, 5, 19, 11, 6, 24, 4, 
  67, 44, 55, 25, 65, 61, 61, 50, 70, 68, 
  87, 69, 73, 27, 45, 64, 81, 83, 96, 84, 
  102, 87, 102, 90, 109, 86, 87, 72, 90, 55, 
  48, 48, 67, 56, 77, 75, 98, 89, 100, 89, 
  47, 23, 53, 7, 48, 12, 34, 41, 56, -60, 
  34, 25, 42, -14, 39, 42, 77, 54, 74, 57, 
  68, 34, 74, 45, 51, 34, 65, 43, 62, 9, 
  54, 34, 42, 27, 59, 44, 72, 48, 73, 49, 
  55, 27, 69, 39, 55, 0, 24, -26, 38, -3, 
  -16, -128, -14, -10, 54, 16, 33, -14, 32, -128, 
  13, 48, 92, 55, 67, 55, 69, 46, 75, 50, 
  38, 44, 48, -2, 9, 29, 44, -50, 42, -8, 
  99, 79, 83, 78, 98, 64, 74, 37, 21, -20, 
  26, -128, -16, 0, -14, -50, -43, -128, -128, -128, 
  -33, -60, 42, 4, 26, 18, 64, 6, 53, 43, 
  34, 54, 69, -20, 13, -26, 16, -128, 20, -128, 
  125, 103, 124, 102, 122, 101, 119, 90, 89, 37, 
  2, -43, 32, 26, 35, -23, 12, -128, -128, -128, 
  45, 81, 107, 75, 70, 71, 103, 82, 103, 83, 
  67, 25, 56, 29, 47, -3, 37, -128, 10, -77, 
  110, 99, 117, 91, 115, 94, 114, 85, 106, 73, 
  66, 42, 48, 31, 59, -33, -4, -128, -33, -43, 
  70, 88, 114, 82, 93, 71, 105, 87, 115, 94, 
  92, 42, 57, 40, 57, 36, 47, -37, 53, 4, 
  105, 85, 100, 84, 105, 80, 87, 72, 91, 50, 
  57, 34, 20, 1, 9, -29, 28, -128, -128, -26, 
  67, 73, 89, 63, 80, 64, 96, 67, 92, 72, 
  96, 67, 77, -10, 36, -20, 15, -128, 2, -77, 
  97, 72, 98, 85, 105, 72, 76, 65, 87, 54, 
  72, 36, 51, 30, 51, 40, 35, -50, 66, 54, 
  97, 73, 85, 65, 91, 76, 104, 77, 92, 65, 
  85, 74, 88, 41, 61, 39, 50, -33, 44, 6, 
  82, 40, 89, 70, 112, 90, 105, 89, 107, 85, 
  100, 59, 52, 47, 41, 44, 49, 55, 95, 90, 
  117, 84, 84, 69, 107, 87, 105, 78, 95, 73, 
  87, 66, 93, 48, 64, 29, 44, 0, 38, -1, 
  53, -128, 68, 49, 93, 80, 119, 91, 98, 80, 
  104, 85, 96, 58, 86, 75, 87, 82, 107, 97, 
  117, 77, 98, 84, 102, 76, 95, 77, 97, 60, 
  95, 74, 98, 57, 59, 9, 46, 16, 49, -16, 
  61, -77, 54, 32, 72, 58, 95, 88, 102, 82, 
  105, 84, 100, 70, 105, 85, 88, 82, 110, 85, 
  92, 44, 91, 75, 92, 65, 87, 64, 83, 9, 
  78, 52, 85, 53, 50, 14, 45, -3, 38, -3, 
  54, -128, 39, -77, 62, 48, 85, 70, 108, 83, 
  107, 69, 95, 71, 88, 74, 95, 77, 100, 73, 
  77, 13, 75, 65, 87, 52, 69, 4, 45, -60, 
  47, 34, 64, 13, 44, -16, 34, 1, 42, -8, 
  24, -23, 48, -128, 38, 17, 80, 69, 96, 71, 
  85, 54, 91, 74, 74, 54, 90, 69, 96, 57, 
  57, -128, 34, 24, 49, -128, 29, -128, -128, -128, 
  47, 29, 52, 0, 45, -77, -29, -128, -23, -128, 
  -43, -128, -128, -128, -128, -128, -128, -128, 74, 62, 
  63, 49, 68, 57, 59, 34, 74, 10, 59, -43, 
  -8, -128, -128, -128, 4, -128, -128, -128, -128, -128, 
  -37, -128, 25, -12, 42, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -20, 53, 
  95, 42, 71, 56, 67, 19, 65, 62, 78, -33, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -33, -128, -7, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 29, -10, 
  75, 64, 80, 19, 59, 44, 73, 49, 69, -37, 
  -37, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 24, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -33, -128, 
  27, -128, 25, -128, 52, -43, 46, 54, 76, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 24, -128, -18, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -12, -128, 35, -128, 16, 38, 51, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -12, -128, -26, -128, -128, -128, -77, 2, 31, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -6, -18, 21, -43, -50, -33, 76, 64, 68, 58, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -6, -128, -128, -128, -128, -128, 
  64, 64, 81, 16, 74, 57, 102, 90, 102, 84, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -1, -128, 17, -128, -128, -128, -18, 7, 
  77, 74, 90, 68, 99, 87, 109, 89, 109, 83, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -26, -128, -128, -128, -23, -128, 
  79, 55, 76, 61, 83, 67, 95, 77, 99, 76, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -33, -128, -128, -128, 
  -128, -128, -37, -128, -14, -128, -77, -128, -60, -2, 
  61, 10, 55, 58, 95, 74, 74, 42, 84, 68, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -2, -128, 2, -128, -128, -60, 39, 0, 
  60, 32, 64, 52, 87, 71, 83, 39, 71, 57, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -26, -128, -43, -128, -128, -128, -20, -77, 
  15, -128, 16, 39, 75, 46, 67, 31, 62, 20, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -26, -128, 0, 12, 64, -16, 50, -7, 53, 11, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, 4, -128, -3, -128, 39, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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