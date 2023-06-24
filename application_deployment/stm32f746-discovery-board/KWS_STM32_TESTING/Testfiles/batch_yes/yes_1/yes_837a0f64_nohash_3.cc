/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/837a0f64_nohash_3.wav" \
 * --output_c_file="features_c_files/yes/yes_837a0f64_nohash_3.cc" \
 */
#include "yes_837a0f64_nohash_3.h"


const int g_yes_837a0f64_nohash_3_width = 40;
const int g_yes_837a0f64_nohash_3_height = 49;
alignas(16) const signed char g_yes_837a0f64_nohash_3_data[] = {
  118, 98, 118, 99, 117, 98, 115, 94, 110, 94, 
  106, 88, 107, 87, 81, 73, 76, 67, 82, 66, 
  96, 82, 83, 60, 61, 60, 67, 74, 86, 89, 
  107, 78, 85, 68, 65, 58, 68, 74, 82, 74, 
  79, 69, 82, 7, 73, 72, 94, 67, 90, 60, 
  78, 48, 72, 50, 70, 37, 59, 62, 74, 72, 
  64, 52, 62, 39, 63, 59, 63, 62, 72, 55, 
  67, 50, 67, 54, 64, 47, 69, 56, 57, 44, 
  19, -60, 34, 19, 66, -60, 29, 12, 57, -16, 
  32, 31, 49, 30, 41, 35, 41, 46, 58, 34, 
  62, 44, 48, 35, 54, 50, 67, 38, 62, 33, 
  52, 39, 50, 42, 54, 30, 52, 40, 58, 11, 
  11, -20, 30, -60, 44, -77, -12, -128, 26, -37, 
  56, 44, 62, 25, 62, 54, 69, 47, 56, 1, 
  15, -43, 52, 16, 56, 38, 51, -6, 38, -33, 
  16, 24, 50, 35, 49, 27, 55, 24, 50, 24, 
  19, 13, 41, 2, 51, -60, 19, -50, -18, -128, 
  27, -8, -37, -37, 52, -16, 37, -60, 42, 23, 
  -14, -128, 1, 39, 44, 1, 28, -43, 32, -7, 
  37, 9, 32, -33, 32, 11, 39, -8, 40, 14, 
  21, -1, 11, -128, -128, -128, -50, -128, -128, -128, 
  24, -128, -128, -33, -14, -128, 42, -12, 58, 14, 
  25, 8, 11, 37, 29, 4, 31, -16, 14, -77, 
  15, 4, 42, -6, 38, 9, 38, -18, 39, -29, 
  -128, -128, 4, -128, -60, -128, -128, -128, -50, -128, 
  -18, -128, -128, -50, 47, -16, 28, 18, 42, -14, 
  4, -2, 40, 4, 35, -50, 24, -37, 23, -128, 
  -10, -23, 17, -23, 38, 6, 12, -60, 7, -128, 
  -128, -128, -128, -128, -14, -128, 5, -37, 13, -128, 
  -77, -128, -77, -128, 18, 22, 46, -18, 11, 4, 
  11, -23, 45, 19, 20, -128, 15, -128, 11, -128, 
  22, 25, 31, -6, 59, 4, 4, -128, 16, -7, 
  -128, -128, -128, -128, -60, -128, -128, -128, -8, -128, 
  -50, -43, -20, -128, 37, 4, 33, 9, 4, -50, 
  9, -128, 39, 17, 37, -43, 37, -6, 34, -33, 
  -43, -50, 16, -18, 25, -16, 19, -50, 24, -37, 
  -128, -128, -128, -128, -77, -50, 15, -128, -16, -128, 
  -26, -128, -18, -77, 2, -37, 61, 25, 7, 9, 
  38, -128, 35, 18, 47, 29, 44, -37, 24, -77, 
  28, 16, 43, 21, 29, -18, 45, -18, 37, -23, 
  -128, -128, 4, -2, 57, 18, 50, 29, 41, 5, 
  41, -60, -16, -128, 37, 35, 62, 16, 56, 22, 
  45, -10, 57, 48, 47, 36, 64, 25, 52, 4, 
  49, 12, 39, -12, 26, 4, 37, -33, 22, -10, 
  45, 61, 94, 77, 104, 85, 110, 94, 111, 67, 
  68, 13, -10, -29, 62, 5, 50, 45, 40, 1, 
  39, 50, 74, 8, 57, 32, 48, 27, 78, 42, 
  44, 21, 62, 17, 19, -18, 43, 14, 46, 29, 
  -128, -128, -4, -29, 69, 1, 72, 46, 67, 45, 
  54, 4, 35, -18, -18, 45, 57, -10, 19, -2, 
  28, 16, 69, 45, 74, 51, 43, -3, 50, -7, 
  41, 46, 53, 9, 47, 47, 63, 34, 60, 34, 
  -77, -128, -128, -128, -4, -23, 54, -128, 43, 45, 
  75, 14, 40, -10, 41, 18, 32, -37, 24, 9, 
  45, 15, 54, 4, 66, 40, 49, 5, 24, -33, 
  74, 62, 72, 60, 66, 59, 61, 22, 58, 40, 
  -128, -128, -128, -128, -128, -128, -43, -128, -29, -77, 
  -1, 21, 50, 23, 25, 4, 60, -26, 22, 5, 
  55, -8, 57, 19, 27, -7, 31, 13, 38, -3, 
  34, -14, 60, 24, 58, 43, 48, 16, 53, 20, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  12, -43, 24, -4, 42, -4, 38, -128, 43, -29, 
  29, -37, 39, -18, 54, -4, 42, -33, 30, 39, 
  49, -128, 40, 24, 55, 20, 62, 37, 39, 5, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -20, -128, 30, 15, 48, -20, 15, -50, 35, 1, 
  54, -1, 19, -2, 37, -60, 40, -20, 17, -50, 
  -33, -77, 15, 5, 30, 8, 48, -23, 37, -29, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -60, 
  0, -128, -8, -37, 32, 19, 37, -128, 37, 14, 
  32, -14, 19, -29, -77, -128, 8, -3, 32, -60, 
  6, -43, 2, -50, 35, -29, 42, -43, 30, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -77, -128, 2, -77, 
  30, -77, -23, -37, 16, -50, -6, -77, 35, -43, 
  -16, -128, 9, -128, -23, -128, 11, -128, -26, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -77, 30, -128, 
  0, -18, 22, -60, -77, -128, -128, -128, -4, -128, 
  -60, -128, 4, -128, 9, -128, -16, -128, -33, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -6, 4, -128, -29, -128, -43, -128, 
  -14, -128, -50, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, -18, -128, -37, -128, -60, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -77, -128, -128, -128, 4, -128, 
  -3, -128, -50, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, -128, -128, -128, -128, -128, -128, 
  -29, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -43, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  119, 101, 119, 96, 100, 74, 86, 42, 41, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -77, 74, 65, 80, 72, 
  84, 60, -128, -128, -128, -128, -128, -128, -128, -128, 
  109, 95, 116, 98, 118, 89, 100, 84, 77, 55, 
  54, 52, 30, -128, -128, -128, -77, -128, -8, 64, 
  104, 87, 89, 77, 81, 82, 111, 92, 112, 95, 
  118, 95, 91, 17, 15, -8, 54, 67, 65, 32, 
  98, 80, 99, 97, 120, 95, 107, 88, 101, 85, 
  85, 75, 81, 55, 56, -20, 9, 24, 92, 90, 
  112, 93, 109, 90, 114, 94, 100, 86, 110, 80, 
  106, 89, 108, 74, 52, 29, 62, 86, 99, 64, 
  97, 70, 88, 56, 90, 94, 115, 91, 114, 91, 
  105, 77, 87, 75, 86, 64, 87, 85, 109, 93, 
  97, 67, 107, 91, 112, 80, 84, 73, 102, 74, 
  87, 70, 96, 79, 60, 0, 46, 32, 69, 56, 
  85, 53, 70, 36, 66, 50, 108, 90, 101, 71, 
  98, 84, 102, 77, 99, 83, 104, 90, 113, 84, 
  93, 68, 98, 80, 92, 23, 64, 59, 86, 60, 
  78, 58, 75, 34, 31, -12, 15, -37, 49, 32, 
  73, 20, 56, -14, 68, 54, 95, 64, 92, 72, 
  97, 67, 89, 71, 97, 79, 105, 84, 103, 64, 
  66, -4, 65, 35, 68, -128, 50, -29, 60, 44, 
  54, 31, 79, 54, 9, -77, 2, -128, -18, 24, 
  10, -128, -60, -128, -50, -128, 32, -128, 24, -2, 
  15, -60, 46, 26, 64, 50, 80, 22, 33, -128, 
  -3, -128, -20, -128, -4, -128, -14, -128, -7, -50, 
  27, -60, 85, 86, 115, 92, 94, 47, 60, 29, 
  -128, -128, -128, -128, -128, -128, -128, -128, 33, 4, 
  15, -18, 54, -12, 47, -4, 17, -128, -10, -128, 
  46, -128, -3, -128, 11, -128, 32, -77, 34, 41, 
  61, 35, 107, 93, 114, 96, 117, 87, 105, 86, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  41, -128, -23, -128, -12, -128, -77, -128, -29, -128, 
  9, -128, -128, -128, -128, -128, 15, 17, 18, 34, 
  67, 50, 86, 80, 117, 89, 110, 85, 115, 90, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -37, 19, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -37, 
  39, -29, 72, 57, 96, 61, 105, 89, 96, 78, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 20, -128, -14, -128, 
  -128, -128, -128, -128, -128, -128, -20, -14, 20, 9, 
  56, -77, 62, 49, 79, 66, 97, 64, 90, 54, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 26, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 40, 25, 20, 35, 
  65, 34, 81, 52, 85, 68, 86, 54, 77, 65, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 0, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 34, 4, 4, -60, 
  39, 36, 83, 63, 80, 56, 92, 50, 78, 40, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -8, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -4, -128, 
  -3, -12, 77, 49, 84, 59, 83, 52, 63, 51, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, 19, -77, 
  -10, 37, 75, 34, 69, 29, 73, 9, 34, 16, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, 17, -50, 
  24, 46, 77, 8, 60, 5, 59, 5, 45, 35, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -29, 5, -128, 
  35, 1, 59, 4, 46, -3, 20, 7, 54, 10, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  51, 36, 45, -33, 46, -77, 27, -50, 40, 20, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -77, -18, -6, 
  49, 15, 50, 4, 42, -77, 6, -60, 39, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -50, 50, -128, -128, -128, 
  -128, -128, -128, -128, -26, -128, -18, -128, 14, 19, 
  36, 20, 71, -29, 10, -128, -23, -128, -16, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 19, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 50, -50, 
  43, -14, 46, -128, -128, -128, -37, -128, -128, -128, 
};
