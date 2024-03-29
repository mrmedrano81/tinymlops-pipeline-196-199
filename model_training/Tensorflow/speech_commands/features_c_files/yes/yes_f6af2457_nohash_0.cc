/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/f6af2457_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_f6af2457_nohash_0.cc" \
 */
#include "yes_f6af2457_nohash_0.h"


const int g_yes_f6af2457_nohash_0_width = 40;
const int g_yes_f6af2457_nohash_0_height = 49;
alignas(16) const signed char g_yes_f6af2457_nohash_0_data[] = {
  125, 102, 125, 101, 118, 100, 118, 95, 111, 95, 
  111, 90, 112, 92, 101, 86, 89, 84, 99, 89, 
  114, 94, 94, 88, 99, 89, 113, 98, 112, 67, 
  76, 69, 80, 64, 75, 66, 70, 60, 72, 65, 
  113, 95, 113, 84, 102, 70, 95, 83, 105, 85, 
  93, 78, 95, 78, 101, 85, 98, 73, 86, 77, 
  104, 80, 103, 70, 83, 83, 110, 87, 98, 69, 
  79, 56, 67, 49, 73, 57, 58, 57, 62, 55, 
  102, 84, 103, 75, 100, 62, 90, 78, 102, 64, 
  88, 71, 83, 67, 93, 69, 94, 76, 85, 55, 
  78, 66, 79, 59, 84, 64, 85, 55, 70, 39, 
  55, 56, 52, 57, 59, 45, 64, 44, 61, 44, 
  96, 68, 92, 63, 89, 20, 72, 43, 68, 63, 
  88, 73, 88, 48, 79, 52, 74, 59, 79, 64, 
  68, 43, 68, 36, 65, 24, 52, -8, 56, 40, 
  63, 24, 52, 27, 72, 48, 62, 48, 60, 38, 
  89, 59, 64, -14, 91, 50, 74, -6, 26, 52, 
  90, 47, 65, 10, 72, 48, 79, 42, 75, 39, 
  62, 45, 76, 46, 67, -3, 42, -16, 49, 49, 
  69, 49, 54, 45, 66, 47, 60, 44, 62, 37, 
  83, 42, 82, 51, 78, 50, 86, 41, 64, 35, 
  65, 52, 62, 40, 84, 49, 71, 57, 69, 43, 
  83, 54, 81, 44, 69, 26, 59, -29, 38, 41, 
  62, 24, 54, 34, 63, 34, 66, 44, 55, 34, 
  78, 64, 90, 61, 95, 67, 91, 49, 76, -128, 
  77, 50, 72, 50, 75, 58, 68, 20, 70, 57, 
  92, 65, 85, 54, 79, 59, 69, 16, 52, 28, 
  41, -3, 45, 48, 78, 44, 64, 62, 72, 53, 
  77, 63, 90, 64, 108, 82, 86, 54, 72, 22, 
  68, 40, 56, 43, 75, 26, 75, 54, 88, 74, 
  94, 65, 90, 77, 90, 67, 75, 49, 75, 6, 
  37, 4, 56, 54, 69, 26, 62, 51, 67, 50, 
  75, 55, 89, 66, 110, 90, 86, 62, 81, 24, 
  65, 16, 54, 23, 59, 36, 76, 45, 82, 79, 
  93, 54, 95, 78, 99, 59, 75, 49, 81, 15, 
  44, 19, 47, 36, 75, 40, 60, 30, 62, 34, 
  76, 39, 82, 65, 109, 92, 100, 70, 92, 68, 
  77, 42, 69, 54, 45, -2, 57, 48, 93, 69, 
  86, 53, 94, 80, 95, 37, 71, 48, 82, 49, 
  55, 40, 66, 29, 74, 55, 66, 34, 59, 37, 
  49, 4, 72, 49, 94, 81, 102, 82, 92, 74, 
  89, 62, 88, 34, 77, 63, 75, 74, 102, 67, 
  78, 55, 91, 59, 72, 42, 62, 44, 66, 56, 
  57, 5, 53, 31, 81, 65, 52, 14, 65, 24, 
  60, 1, -16, -77, 82, 62, 86, 76, 92, 74, 
  96, 74, 83, 55, 89, 76, 74, 84, 101, 59, 
  69, 44, 87, 73, 83, 34, 65, 17, 62, 31, 
  36, -3, 55, 24, 61, 43, 82, 40, 46, 32, 
  34, -128, 55, 25, 69, 43, 80, 76, 94, 73, 
  92, 72, 87, 57, 86, 72, 83, 79, 84, 36, 
  64, 35, 81, 70, 75, 32, 55, -37, 54, 47, 
  63, -33, 33, 7, 59, 39, 80, 56, 48, -18, 
  11, -128, 48, 10, 47, -6, 88, 78, 90, 65, 
  94, 70, 94, 60, 85, 62, 84, 75, 78, 21, 
  69, 44, 89, 50, 71, 38, 62, 29, 56, 47, 
  69, -128, 40, 38, 67, 50, 84, 54, 58, 9, 
  33, -128, 40, -12, 54, 4, 85, 64, 92, 67, 
  94, 65, 87, 46, 70, 43, 97, 57, 86, 30, 
  57, 42, 79, 38, 78, 17, 40, -26, 47, 47, 
  73, -43, 47, 30, 62, 40, 81, 49, 70, 29, 
  58, -128, 42, -18, 47, -50, 89, 61, 74, 18, 
  66, 16, 63, -60, 41, -37, 83, 52, 69, -33, 
  43, 23, 67, 39, 63, -33, 29, -128, 45, 35, 
  64, -60, 41, 26, 60, 45, 79, 52, 66, 11, 
  56, 7, 50, -29, 0, -128, 80, 19, 74, 30, 
  21, -128, 44, 50, 50, 38, 86, 45, 60, -128, 
  1, -128, 38, -37, 40, -77, -43, -128, 35, 5, 
  56, -12, 27, -23, 47, 21, 67, 23, 51, -50, 
  55, 22, 43, -77, 4, -128, 66, -33, 55, 2, 
  48, -128, 11, -128, 31, 11, 66, -60, 26, -128, 
  -50, -128, -33, -128, 0, -128, -128, -128, -10, -10, 
  48, -23, 23, -128, 23, -1, 51, -20, 34, -128, 
  39, -128, -7, -128, -128, -128, 39, -37, 30, -29, 
  31, -128, 29, -77, 30, -77, 35, -128, 4, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -128, -43, 
  29, -23, 11, -128, -23, -128, 38, -50, -1, -128, 
  34, -128, -128, -128, -128, -128, 19, -128, -128, -128, 
  34, -128, -6, -33, -128, -128, 35, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -50, 
  16, -6, -18, -128, -128, -128, 0, -77, -18, -128, 
  25, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -77, -128, -77, -128, -29, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  11, 9, -2, -128, -128, -128, -128, -128, -29, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -10, -128, -14, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  27, -20, 0, -128, -8, -128, -43, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 7, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -3, 
  49, -7, 64, 52, 68, -20, 32, -29, 2, -20, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -43, -128, -43, -128, -60, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, 32, 
  66, 60, 86, 70, 81, 4, 63, 15, 58, 37, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -23, -128, -26, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, 27, 
  56, 52, 82, 57, 68, 33, 67, 46, 77, 64, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, 11, 
  44, 54, 84, 53, 84, 58, 65, 32, 74, 60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, 4, 
  37, 62, 74, 33, 67, 14, 65, 36, 65, 44, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -23, -37, 
  46, 46, 74, 33, 49, -10, 62, 34, 71, 54, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -26, -77, 
  37, 19, 60, 29, 69, 4, 55, 30, 68, 29, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -43, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -7, 48, 
  64, 44, 68, 14, 58, 21, 65, 38, 67, 25, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -23, -128, -29, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, 30, 
  56, 50, 69, -8, 35, 4, 62, 16, 66, 15, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -33, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, 35, 
  66, 27, 37, -37, 44, 11, 67, 14, 63, 34, 
  -50, -26, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -77, 
  32, -10, 1, -128, 55, 14, 44, -8, 48, 0, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 19, 29, 
  48, -12, 30, -128, 5, 23, 51, 13, 55, 31, 
  -77, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 5, -18, 
  -12, -128, -37, -128, 40, 27, 59, -10, 43, -1, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, -29, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 21, -10, 
  20, -128, -37, 9, 52, -3, 27, -60, 20, -43, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -43, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -20, -128, 
  -37, -128, 20, -43, 45, 4, 15, -50, 30, -37, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -23, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -26, -128, 
  -128, -128, 0, -43, -1, -43, 0, -128, 2, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, 11, -16, -128, 
  -128, -128, -20, 17, 30, -128, 0, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 19, 19, -50, -128, 
  -128, -128, -20, -6, 34, -128, -1, -128, -26, -128, 
  -128, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -128, -128, 
  -128, -128, 22, -33, 9, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -6, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 0, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
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
  -128, -128, -7, -60, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
