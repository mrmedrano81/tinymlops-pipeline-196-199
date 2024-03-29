/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/5e3dde6b_nohash_2.wav" \
 * --output_c_file="features_c_files/yes/yes_5e3dde6b_nohash_2.cc" \
 */
#include "yes_5e3dde6b_nohash_2.h"


const int g_yes_5e3dde6b_nohash_2_width = 40;
const int g_yes_5e3dde6b_nohash_2_height = 49;
alignas(16) const signed char g_yes_5e3dde6b_nohash_2_data[] = {
  85, 77, 57, 45, 60, 61, 43, 30, 42, 32, 
  45, 11, -10, -12, 20, -12, -4, -37, -18, -2, 
  23, -2, -10, -18, -50, -2, -4, -12, 5, -12, 
  -26, 7, 0, -2, -18, -2, 20, -12, -4, 7, 
  91, 75, 67, 44, 49, 25, 14, 15, 36, 25, 
  10, -23, -18, -29, -7, -20, -60, -50, -37, -23, 
  -12, 4, -12, -20, -37, -29, -26, -29, -26, -20, 
  -18, -1, -12, -23, -1, -10, -7, -16, -1, -4, 
  47, 31, 67, 33, 48, 39, 12, 9, 30, -7, 
  -10, -18, -7, -10, -29, -50, -26, -37, -6, -12, 
  -20, -18, -29, -1, -6, -50, -26, -6, -29, -33, 
  8, -26, -14, -18, 7, -7, -7, -43, -14, -33, 
  28, -43, 59, 54, 44, -128, -33, -43, 21, -6, 
  34, 23, -3, -60, -50, -60, -29, -6, -7, -14, 
  32, -10, -20, -20, -14, -33, -7, -33, -20, -3, 
  14, -43, -3, -20, -14, -26, -14, -18, 6, -26, 
  44, 11, 42, 30, 49, -2, 10, -33, 17, -18, 
  -3, -60, -29, -33, -8, -26, 10, 0, -14, -29, 
  8, -37, -20, -77, -3, -43, -37, -60, -29, -60, 
  -23, -60, -50, -29, -16, -37, 4, -20, -23, -60, 
  58, 50, 76, 56, 41, 17, 26, 11, -2, -3, 
  -43, -60, -77, -43, -43, -128, -29, -128, -50, -77, 
  -43, -37, 16, -77, -77, -77, -29, -60, -29, -23, 
  -16, -12, 19, -12, -4, -60, -10, -37, -23, -50, 
  -77, 11, 69, 21, 53, -29, 30, -4, -29, -3, 
  40, -20, -10, -37, -23, -77, -77, -60, -10, 2, 
  26, -26, -23, -128, -29, -60, -23, -77, -43, -26, 
  -18, -14, 11, -33, -1, -33, -26, -37, -23, -50, 
  45, -43, 51, 21, 67, 22, 42, -7, -18, -16, 
  -3, -14, -12, -33, -18, -60, -10, -29, -1, -23, 
  19, -23, -33, -18, -43, -50, -1, -50, -33, -60, 
  -7, -37, -18, -33, -12, -33, -14, -26, -18, -50, 
  22, -14, 46, 28, 75, 34, 24, 44, 54, 42, 
  40, -1, 6, -10, -33, -60, -60, -50, -2, -18, 
  1, -18, -18, -128, -18, 9, 14, -128, -33, -77, 
  -60, -60, -8, -14, -43, -18, -14, -23, -18, -50, 
  28, 15, 62, 60, 88, 80, 95, 74, 92, 83, 
  77, 65, 44, 46, 73, 59, 10, 48, 49, 29, 
  43, -16, -33, -43, 33, 67, 71, 8, 62, 11, 
  -26, 9, 48, -4, -14, 9, 34, 13, 42, 6, 
  29, -128, 28, 28, 76, 67, 96, 82, 93, 56, 
  80, 57, 51, 10, 56, 69, 64, 34, 54, 52, 
  23, -18, 54, 30, 0, 15, 23, 1, 54, 13, 
  -4, -7, 37, -18, 7, -60, -37, -29, 27, 0, 
  35, -20, 57, 39, 68, 40, 85, 76, 100, 76, 
  88, 69, 68, -10, 59, 60, 64, 57, 79, 71, 
  34, -6, 60, 48, 21, -128, -4, 7, 55, 34, 
  21, -8, 21, -29, 9, -37, -3, 40, 39, -33, 
  14, -29, 47, 37, 70, 16, 46, 56, 93, 70, 
  99, 78, 92, 44, 37, 49, 79, 77, 101, 69, 
  92, 56, 84, 71, 71, 16, 44, 50, 74, 59, 
  45, 27, 54, 35, 28, -128, 44, 60, 62, 29, 
  31, 15, 70, -23, 55, 52, 84, 87, 109, 92, 
  111, 86, 95, 64, 29, -14, 90, 83, 105, 78, 
  105, 68, 92, 75, 92, 72, 93, 70, 86, 55, 
  66, 50, 87, 57, -2, -33, 54, 58, 79, 42, 
  44, 29, 76, 21, 45, 34, 74, 38, 82, 63, 
  94, 84, 94, 58, 60, 40, 70, 58, 87, 57, 
  79, 70, 94, 79, 96, 63, 81, 43, 74, 48, 
  72, 59, 89, 70, 27, 13, 65, 52, 69, 14, 
  58, 65, 91, 47, 54, -18, 60, 57, 87, 62, 
  101, 80, 101, 71, 82, 67, 64, 47, 78, 43, 
  81, 75, 102, 67, 79, 75, 80, -1, 59, 50, 
  72, 46, 84, 55, 30, 48, 77, 43, 59, 1, 
  68, 22, 74, 42, 45, -128, 54, -33, 79, 41, 
  71, 7, 65, 39, 59, 50, 74, 1, 52, 18, 
  61, 35, 74, 59, 81, 51, 69, -29, -6, 4, 
  34, 22, 74, 29, 6, 32, 56, 30, 51, -12, 
  56, -20, -12, -43, 32, 7, 61, 48, 84, 45, 
  32, -1, 72, 32, 24, -37, 34, -37, 27, 14, 
  76, 41, 85, 60, 78, 27, 66, -60, -60, -50, 
  15, -29, 36, -128, -16, -128, -14, -77, 0, -23, 
  -4, -33, 4, -128, -128, -128, -12, -16, 40, -128, 
  40, 19, 57, -128, -60, -50, 51, -128, -23, -128, 
  30, 2, 59, -1, 60, -33, 13, -128, -128, -60, 
  11, -128, -37, -128, -43, -128, -77, -128, -128, -128, 
  14, -128, -128, -128, -37, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  14, -60, -14, -128, -128, -128, -128, -128, -128, -128, 
  -10, -128, -128, -128, -33, -128, -128, -128, -128, -128, 
  -7, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -29, -128, -128, -128, -128, -128, 
  -43, -128, 0, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  0, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -77, -128, -128, -128, 
  83, 63, 82, 75, 85, 11, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -16, -77, -128, -128, -128, -128, -128, -128, 
  -18, -43, -128, -128, 16, -33, 1, -77, -60, 34, 
  123, 103, 119, 96, 120, 101, 114, 86, 101, 37, 
  39, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, 55, 106, 82, 51, -128, 16, 23, 41, -14, 
  57, 62, -10, -128, 30, 4, 38, 33, 27, 76, 
  111, 92, 113, 62, 120, 100, 116, 92, 115, 78, 
  29, -16, -20, -26, 29, -128, -29, -128, -128, 29, 
  66, 68, 106, 87, 90, 38, 74, 59, 80, 67, 
  92, 72, 39, 19, 66, 42, 75, 60, 68, 79, 
  107, 85, 105, 40, 106, 86, 107, 92, 119, 94, 
  83, 71, 67, 65, 62, 5, 85, 68, -60, 63, 
  87, 90, 89, 64, 97, 72, 85, 69, 102, 80, 
  102, 85, 78, 49, 78, 65, 80, 70, 95, 82, 
  99, 77, 99, 14, 90, 67, 93, 87, 113, 90, 
  100, 87, 94, 84, 104, 94, 107, 90, 87, 76, 
  103, 90, 95, 71, 111, 84, 97, 65, 87, 78, 
  84, 67, 92, 61, 76, 60, 84, 74, 95, 69, 
  94, 71, 92, 27, 77, 55, 84, 74, 102, 81, 
  114, 95, 104, 86, 111, 95, 106, 80, 103, 83, 
  87, 79, 92, 73, 98, 84, 102, 80, 87, 74, 
  102, 80, 105, 84, 75, 37, 70, 70, 92, 64, 
  88, 64, 88, 23, 66, 5, 38, 58, 81, 30, 
  112, 90, 92, 57, 108, 87, 103, 83, 99, 85, 
  114, 65, 80, 52, 82, 63, 77, 54, 85, 60, 
  85, 49, 84, 58, 74, 35, 58, 30, 78, 52, 
  79, 47, 74, 38, 77, 36, 55, 67, 80, 25, 
  102, 55, 87, 52, 78, 29, 78, 59, 95, 85, 
  105, 50, 90, 63, 77, 24, 77, 46, 78, 47, 
  62, 49, 80, 14, 61, 52, 53, 2, 70, 47, 
  -43, -128, 44, 63, 78, 29, 61, 57, 53, 59, 
  107, 56, 101, 82, 69, -6, 88, 48, 94, 69, 
  87, 32, 54, 53, 66, 40, 60, 32, 70, 30, 
  67, 4, 61, 7, 46, 36, 47, -77, 66, 25, 
  70, 5, 44, 55, 31, -128, 77, 2, -50, 44, 
  69, -128, 81, 44, 72, -77, 58, -2, 75, 45, 
  67, -10, 12, -60, 23, -26, 56, 15, 46, -50, 
  9, -128, 63, 27, 41, 41, 58, -1, 62, 37, 
  61, -128, -16, 71, 35, -128, 69, -128, -77, 19, 
  6, -128, 80, 21, 24, -4, 42, 37, 79, 55, 
  69, -128, 44, -77, 9, -128, 44, -128, -60, -128, 
  25, -128, 18, -37, -23, -16, 24, -128, 53, 1, 
  32, -128, -37, 47, -128, -128, 69, -128, -128, -50, 
  6, -128, 16, -128, -20, -128, 31, -128, 10, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -20, -128, -60, -1, 22, -128, 25, -26, 
  -128, -128, -128, 1, -128, -128, 36, -128, -128, -128, 
  -128, -128, -6, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -7, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 40, 69, 101, 54, 42, 5, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -50, -29, -128, 
  -33, -128, 38, -14, 65, 77, 104, 66, 82, 60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -60, -60, -128, 
  -26, -12, 47, 14, 67, 75, 100, 75, 92, 67, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -18, -14, 59, 15, 67, 51, 97, 77, 84, 62, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -10, -33, 25, 39, 71, 60, 93, 69, 83, 61, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -50, 39, 37, 71, 59, 85, 44, 79, 25, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -18, -128, 51, 39, 54, 33, 76, 36, 73, 30, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -18, -128, 
  28, 44, 30, 35, 64, 44, 85, 39, 66, 10, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -8, -29, 
  49, 39, -3, -128, 58, 15, 58, -60, 52, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  24, -20, -128, -128, 45, -128, -29, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
