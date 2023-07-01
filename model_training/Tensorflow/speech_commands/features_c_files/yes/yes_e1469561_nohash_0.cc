/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/e1469561_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_e1469561_nohash_0.cc" \
 */
#include "yes_e1469561_nohash_0.h"


const int g_yes_e1469561_nohash_0_width = 40;
const int g_yes_e1469561_nohash_0_height = 49;
alignas(16) const signed char g_yes_e1469561_nohash_0_data[] = {
  102, 94, 105, 82, 109, 98, 115, 86, 66, 67, 
  70, 64, 64, 71, 86, 67, 105, 83, 88, 74, 
  84, 76, 79, 73, 91, 78, 71, 62, 64, 44, 
  39, 47, 55, 44, 56, 32, 62, 64, 45, 37, 
  82, 56, 89, 72, 78, 70, 100, 83, 93, 80, 
  83, 64, 61, 73, 83, 74, 101, 85, 101, 88, 
  93, 66, 95, 86, 89, 71, 90, 81, 77, 47, 
  56, 44, 52, 37, 48, 25, 65, 59, 32, 22, 
  78, 58, 77, 58, 71, 0, 67, 67, 82, 52, 
  60, 44, 63, 63, 77, 70, 87, 64, 95, 66, 
  88, 64, 77, 66, 87, 70, 78, 56, 71, 41, 
  46, 37, 52, 21, 44, 27, 54, 36, 39, 17, 
  72, 69, 93, 59, 44, -128, 55, 36, 66, 19, 
  52, 62, 59, 10, 69, 52, 71, 42, 90, 50, 
  80, 54, 67, 51, 65, 37, 78, 54, 69, 35, 
  45, 9, 39, 34, 53, 20, 49, 35, 24, 16, 
  45, -18, 56, 19, 47, 21, 53, -128, 46, 44, 
  69, 62, 56, 43, 73, 47, 79, 11, 62, 19, 
  55, 24, 59, -12, 74, 27, 57, -23, 47, 36, 
  48, -8, 28, 14, 36, 4, 49, 32, 26, 22, 
  69, 4, 47, -2, 57, 13, 44, -128, 57, 46, 
  47, 17, 44, -29, 7, 19, 72, 23, 53, -20, 
  46, -77, 5, -77, 50, -23, 34, -8, 51, -8, 
  9, -26, 20, -2, 34, 0, 39, 13, 24, -3, 
  71, 40, 69, 64, 62, -128, -77, -128, 45, -6, 
  42, -50, 28, -128, 10, -128, 50, -1, 41, -60, 
  22, -43, -77, -128, 42, -77, 30, -128, 2, -29, 
  42, 9, 11, -20, 9, 14, 48, 32, 25, -16, 
  47, 21, 69, 77, 91, -60, 34, -128, -2, -4, 
  24, -128, 20, -50, 22, -77, 9, 4, 19, -43, 
  47, 12, -26, -128, 47, -33, 47, -60, 8, -43, 
  39, 10, 9, 1, 31, -8, 32, -12, 35, 0, 
  -2, -18, 52, 60, 82, -128, 39, -23, 34, -29, 
  39, 17, 33, -77, -60, -128, -128, -23, 1, -128, 
  33, -128, -16, -128, 44, -23, 24, -77, -1, 16, 
  46, 20, 55, 14, 40, -18, 40, 8, 36, -8, 
  74, -26, 11, 17, 50, -128, -3, -26, 69, 42, 
  49, 1, 37, -37, 6, -128, -128, -128, 50, -50, 
  23, -33, 26, -43, 42, 19, -20, -60, 39, 34, 
  46, 25, 59, 10, 6, -6, 46, -12, 35, -7, 
  68, 42, 39, -128, -128, -128, -43, -6, 90, 75, 
  62, 43, 70, -4, 21, 16, 50, 5, 30, -33, 
  5, -6, 38, -128, -18, 12, 60, -60, 44, -14, 
  15, -23, 53, -8, 30, -10, 44, -14, 25, 16, 
  53, 34, 56, -128, 10, -128, -128, -12, 90, 72, 
  66, 54, 81, 39, 51, 56, 77, 41, 28, -128, 
  8, -128, -60, -77, 27, -6, 51, -60, 34, 4, 
  15, -14, 57, -4, 33, -16, 36, -37, 11, -4, 
  64, -128, 35, -128, -8, -128, -128, -10, 98, 83, 
  89, 61, 87, 31, 11, 24, 64, 30, 10, -128, 
  -2, -128, -8, -60, -14, -16, 42, -77, -1, -33, 
  -7, -6, 38, -20, 5, -20, 37, -18, 2, -12, 
  36, -60, 17, -128, -128, -77, 19, 37, 80, 60, 
  77, 26, 73, -20, 48, 29, -128, -128, 8, -128, 
  -4, -60, -26, -128, -128, -128, 15, -128, 16, -60, 
  7, -23, 32, -3, -3, -50, 28, -29, -12, -50, 
  56, -20, 11, -128, -128, -128, -128, -128, -7, -128, 
  29, -14, 76, 53, 24, -128, -128, -60, -16, -128, 
  -7, -50, 7, -128, -128, -128, -4, -128, -60, -43, 
  -10, -77, -4, -37, 23, -33, -12, -128, -6, -50, 
  -3, 4, 65, -77, -128, -128, 27, -33, -18, -128, 
  53, -37, 32, -18, 11, -128, -128, -60, 23, -128, 
  0, -77, 22, -128, -128, -128, 11, -128, 9, -60, 
  4, -128, -23, -18, -2, -128, 1, -43, 19, -77, 
  34, -77, 39, -29, -12, -128, -37, -128, -128, -128, 
  43, -128, -43, -128, 2, -128, -128, -128, -128, -128, 
  16, -128, -128, -128, -128, -128, 27, -128, -43, -77, 
  -18, -128, -43, -128, -77, -128, 14, -43, 5, -128, 
  42, -37, 32, -128, -3, -77, 17, -128, -128, -128, 
  -128, -128, -23, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -12, -128, -128, -128, -2, -128, 8, -128, 
  -18, -128, -128, -43, 14, -128, -1, -128, -20, -128, 
  -128, -128, -128, -128, -33, -128, -128, -128, -128, -128, 
  -128, -128, 11, -4, -33, -128, -128, -128, -128, -128, 
  -43, -128, -128, -128, -128, -128, -43, -128, -43, -128, 
  -23, -77, -128, -77, -10, -60, 35, -77, -18, -128, 
  17, -128, -128, -77, -20, -128, -60, 4, -60, -128, 
  -16, -128, -50, -37, -10, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -14, -128, 
  -33, -128, -60, -128, -33, -77, 7, -37, -12, -128, 
  14, -128, -128, -20, 12, -128, -2, -1, -60, -128, 
  -128, -128, -128, -128, 36, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -23, -128, -77, -128, -20, -23, 
  -16, -128, -128, -128, -18, -77, 17, -6, -8, -128, 
  -50, -128, -60, -128, -128, -128, -29, -29, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -18, -77, 
  -33, -128, -60, -50, -12, -128, -60, -128, 15, -50, 
  32, -128, -77, -128, -128, -128, -33, -77, -128, -128, 
  -26, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -29, -128, -128, -60, 7, -128, -33, -128, -50, -60, 
  -128, -128, -128, -128, -43, -6, 25, -128, -128, -128, 
  -128, -128, -77, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 4, -128, -128, -128, 
  -50, -128, -77, -128, -4, -128, -50, -128, -16, -77, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, 0, -77, -128, -128, -128, -128, 
  -128, -128, -43, -128, -37, -128, -60, -128, -29, -128, 
  15, -128, -37, -128, -43, -128, -14, -77, -26, -128, 
  -7, -50, 8, -77, -33, -43, -29, -128, -128, -128, 
  4, -2, -128, -128, -18, -128, -128, -128, -128, -128, 
  -77, -128, -37, -128, -43, -128, -128, -50, -6, -128, 
  -29, -23, -8, -128, -128, -60, -6, -128, -128, -128, 
  -14, -37, -8, -128, -128, -128, -77, -128, -128, -128, 
  60, 49, 9, -128, 24, -14, -128, -128, -128, -33, 
  29, 39, 11, -26, -43, -77, 6, -128, -50, -29, 
  -4, -8, 29, -128, -128, -128, 20, -33, -128, -33, 
  -60, -26, 48, -4, 28, -23, 9, 7, -6, -128, 
  28, 8, -12, -128, -128, -128, -128, -77, -43, 9, 
  55, 43, 64, 57, 61, 48, 54, 57, 61, 48, 
  45, 30, 23, -43, -77, -128, -37, -128, 1, -128, 
  120, 100, 120, 101, 121, 99, 95, 60, 69, 31, 
  64, 25, 55, 42, 54, 4, -4, -4, 72, 82, 
  114, 100, 118, 97, 118, 97, 116, 99, 119, 93, 
  110, 93, 89, 29, 29, -1, 2, -43, 43, 14, 
  112, 97, 119, 98, 122, 91, 117, 91, 95, 65, 
  91, 69, 85, 80, 95, 72, 82, 75, 103, 91, 
  118, 99, 119, 97, 118, 95, 117, 97, 119, 95, 
  118, 96, 114, 84, 80, 62, 62, 37, 76, 62, 
  104, 84, 108, 85, 113, 92, 118, 94, 110, 89, 
  104, 85, 109, 84, 104, 84, 98, 84, 109, 91, 
  114, 82, 105, 87, 107, 78, 101, 80, 103, 81, 
  106, 85, 105, 80, 82, 53, 57, 40, 68, 57, 
  95, 69, 98, 64, 95, 88, 119, 93, 104, 87, 
  107, 85, 106, 82, 102, 80, 99, 85, 110, 91, 
  102, 44, 85, 75, 95, 58, 90, 65, 91, 62, 
  95, 74, 102, 79, 77, 57, 59, 28, 65, 40, 
  79, 52, 85, 39, 77, 82, 110, 85, 107, 83, 
  103, 78, 104, 82, 100, 80, 99, 82, 110, 83, 
  77, -26, 65, 51, 82, 48, 80, 56, 81, 45, 
  75, 53, 93, 81, 94, 54, 73, 42, 70, 54, 
  82, 47, 81, 22, 67, 72, 98, 74, 105, 73, 
  94, 61, 93, 67, 89, 68, 93, 79, 104, 69, 
  66, -16, 62, 34, 79, 41, 70, 38, 76, 39, 
  69, 50, 87, 69, 90, 62, 62, 40, 74, 47, 
  79, 35, 72, 29, 65, 62, 83, 64, 92, 42, 
  81, 57, 76, 57, 86, 56, 88, 72, 98, 53, 
  54, -43, 50, 15, 81, 62, 78, 17, 79, 59, 
  77, 46, 84, 52, 65, 37, 47, 9, 55, 38, 
  78, 27, 59, 20, 55, 24, 44, -20, 62, 24, 
  61, 21, 67, 39, 67, 42, 74, 40, 72, -29, 
  -16, -128, -37, -128, -29, -60, 17, -128, 11, 31, 
  60, -77, 68, 49, 89, 58, 49, 19, 47, -3, 
  51, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -23, -50, 
  25, -128, 64, 64, 104, 90, 90, 66, 90, 60, 
  17, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, 9, 
  55, 35, 88, 86, 113, 91, 108, 89, 110, 86, 
  67, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 32, 16, 
  43, 34, 88, 79, 112, 86, 104, 83, 107, 74, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -23, -128, 4, 30, 
  63, 34, 88, 79, 102, 56, 98, 77, 94, 70, 
  30, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, 11, 28, 
  61, 39, 88, 70, 83, 50, 79, 46, 76, 51, 
  -29, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -8, 14, 
  54, 35, 89, 50, 55, 43, 82, 44, 69, 44, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -8, 51, 84, 24, 59, 7, 59, -60, 34, -20, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 7, -60, 
  -77, 10, 43, -128, 2, -128, 35, -128, 25, -33, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -60, -7, -128, -43, -128, -8, -128, -2, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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