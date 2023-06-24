/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/beb458a4_nohash_2.wav" \
 * --output_c_file="features_c_files/yes/yes_beb458a4_nohash_2.cc" \
 */
#include "yes_beb458a4_nohash_2.h"


const int g_yes_beb458a4_nohash_2_width = 40;
const int g_yes_beb458a4_nohash_2_height = 49;
alignas(16) const signed char g_yes_beb458a4_nohash_2_data[] = {
  -4, 32, 20, -37, -4, 52, 54, 45, 59, 71, 
  97, 72, 59, 53, 33, 23, 68, 66, 75, 61, 
  65, 61, 54, 74, 88, 56, 39, 37, 40, 35, 
  20, 11, 42, 25, 14, 17, 35, 20, 31, 15, 
  -1, -26, -26, -20, 54, 68, 82, 80, 78, 63, 
  85, 48, 53, 42, 58, 6, 45, 44, 80, 60, 
  72, 71, 52, 67, 70, 34, 64, 54, 46, -33, 
  37, 45, 38, 39, 39, 14, 26, 34, 40, 22, 
  -29, 42, 80, 60, -1, 6, 50, 60, 82, 44, 
  79, 70, 87, 53, 58, 34, 65, 48, 71, 64, 
  85, 49, 62, 62, 75, 43, 35, 34, 46, 31, 
  42, 39, 52, 49, 27, 30, 37, 19, 35, 15, 
  71, 64, 61, 63, 61, 40, 56, 59, 74, 57, 
  78, 53, 80, 56, 86, 66, 81, 61, 24, 9, 
  40, 35, 25, 27, 20, 17, 49, 4, 42, 44, 
  59, 45, 19, -10, 49, 25, 14, 30, 47, 11, 
  34, 22, 70, 43, -18, -128, -60, -50, 34, 61, 
  87, 54, 41, -37, -43, -7, -10, -10, -20, -60, 
  -10, -43, 16, 33, 42, -2, 47, 19, 52, 38, 
  51, -12, 36, 25, 61, 32, 42, 7, 6, -14, 
  87, 67, 70, 40, 42, -128, -7, -128, -10, 60, 
  90, 64, 72, 55, 57, -128, 57, 41, 48, 45, 
  16, -10, 19, -2, 54, 28, 35, 40, 55, 9, 
  57, 27, 47, 29, 34, 11, 27, 4, -3, -16, 
  127, 104, 124, 102, 123, 94, 105, 76, 77, 47, 
  76, 38, 71, 36, 48, 54, 20, -4, 61, 55, 
  61, 30, 49, 39, 87, 88, 95, 75, 91, 69, 
  99, 68, 61, 46, 53, 35, 63, 42, 55, 44, 
  104, 100, 126, 99, 122, 99, 115, 80, 93, 69, 
  66, 29, 70, 60, 88, 70, 65, 51, 83, 84, 
  112, 84, 100, 92, 119, 100, 121, 98, 112, 88, 
  112, 89, 94, 63, 67, 55, 69, 58, 71, 52, 
  90, 90, 111, 83, 112, 85, 88, 69, 98, 86, 
  83, 56, 85, 74, 82, 64, 92, 88, 110, 94, 
  117, 97, 118, 97, 119, 95, 118, 95, 112, 90, 
  107, 88, 91, 60, 69, 50, 67, 48, 72, 62, 
  59, 20, 51, 83, 113, 84, 110, 85, 106, 77, 
  75, 74, 89, 50, 83, 81, 96, 79, 105, 83, 
  107, 84, 102, 88, 111, 86, 107, 81, 100, 83, 
  99, 77, 99, 51, 59, 34, 60, 50, 71, 50, 
  81, 50, 65, 77, 92, 85, 111, 87, 102, 61, 
  90, 78, 93, 67, 79, 45, 97, 80, 104, 82, 
  105, 77, 103, 79, 103, 75, 94, 63, 85, 68, 
  85, 55, 85, 19, 60, 40, 58, 30, 64, 48, 
  84, 36, 65, 42, 85, 90, 111, 81, 105, 81, 
  94, 82, 98, 57, 85, 72, 95, 75, 103, 86, 
  103, 70, 97, 76, 98, 65, 77, 20, 84, 70, 
  86, 57, 81, 36, 53, 34, 58, 26, 55, 41, 
  59, -77, 67, 16, 35, 40, 101, 84, 91, 75, 
  95, 72, 82, 83, 95, 64, 74, 66, 105, 65, 
  80, 37, 71, 51, 75, -128, 15, -26, 78, 58, 
  58, 9, 66, 15, 51, 29, 55, 19, 56, 19, 
  68, -128, -77, -128, 8, 49, 91, 46, 62, -50, 
  63, 14, 59, 30, 66, 48, 74, 39, 86, 22, 
  -33, -128, 54, -43, 17, -128, -128, -128, 65, 6, 
  49, 28, 75, 59, 42, -23, 30, -7, 41, -33, 
  61, -60, -128, -128, -128, -33, 52, -77, 32, -128, 
  -16, -60, 57, 34, 53, -128, 64, 32, 0, -128, 
  -128, -128, 14, -128, -128, -128, -128, -128, -128, -128, 
  -50, -60, 57, -2, 42, -16, 23, -128, -26, -128, 
  30, -128, -128, -128, -128, -128, -14, -128, -128, -128, 
  -37, -128, 9, -128, -2, -128, 49, 39, 40, -128, 
  -128, -128, 9, -128, -128, -128, -128, -128, 79, 54, 
  80, 80, 100, 81, 110, 92, 101, 78, 95, 67, 
  -18, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, -60, -128, -60, -128, 75, 39, 10, -128, 
  -128, -128, -43, -128, -128, -128, -128, -43, 70, 54, 
  101, 89, 117, 93, 120, 97, 120, 96, 115, 95, 
  -2, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  22, -128, -60, -128, -12, -128, 37, -128, -60, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, 11, 31, 
  95, 72, 109, 92, 97, 87, 108, 86, 110, 88, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  40, -128, -128, -128, 2, -128, 18, -60, -23, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 50, -4, 
  75, 65, 87, 70, 106, 71, 96, 80, 97, 71, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -4, -128, 20, -128, 27, -128, -29, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -128, 64, 29, 
  85, 71, 97, 70, 102, 73, 94, 78, 92, 71, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  2, -128, -77, -23, 46, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -20, -50, 80, 60, 
  93, 72, 93, 70, 80, 67, 93, 67, 90, 66, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  44, -128, -29, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -77, -4, -128, 16, -77, 60, 53, 
  78, 53, 81, 49, 87, 62, 83, 50, 93, 59, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  52, -128, -128, -128, -128, -128, 25, -23, -18, -128, 
  -128, -128, -128, -128, -50, -128, -128, 0, 40, 19, 
  86, 55, 82, 45, 78, 36, 79, 55, 74, 46, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  58, -77, -128, -60, 44, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 55, 43, 
  74, 47, 81, 38, 59, 17, 67, 26, 65, 34, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  51, -60, -128, -128, -33, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -60, 25, -77, 
  56, 41, 72, -29, 49, 0, 55, -128, 46, 5, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  44, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 19, 35, 
  67, 29, 49, -60, 33, -12, 60, -77, 58, -20, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  46, -77, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 11, 13, 
  72, 35, 44, -77, 29, -77, 42, -33, 52, -16, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  53, -29, -33, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, 12, -12, 
  44, -16, 47, -29, 38, -128, 31, -3, 32, -43, 
  -128, -128, -128, -128, -128, -128, -128, -128, -10, 49, 
  75, 47, 51, -128, -43, 5, -128, -128, -128, -60, 
  -7, -128, -10, -128, -128, -128, -128, -128, 44, 37, 
  62, -23, 19, -128, 29, -128, 42, -128, -7, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -3, 0, 58, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 8, -4, 
  -18, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 14, -128, -128, -128, -33, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 5, 11, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
