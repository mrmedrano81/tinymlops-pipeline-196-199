/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/189cbabe_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_189cbabe_nohash_0.cc" \
 */
#include "yes_189cbabe_nohash_0.h"


const int g_yes_189cbabe_nohash_0_width = 40;
const int g_yes_189cbabe_nohash_0_height = 49;
alignas(16) const signed char g_yes_189cbabe_nohash_0_data[] = {
  -128, -18, -33, -60, -60, -60, -128, -60, -60, -37, 
  -60, -26, -60, -60, -60, -50, -60, -128, -60, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -50, -60, -128, -60, -128, -128, -128, -128, -128, 
  -128, -50, -60, -50, -128, -37, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -77, -60, -60, -60, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -50, -6, -29, -37, -23, -37, -37, -128, -128, 
  -37, -77, -60, -77, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -12, 31, 45, -1, 4, -77, -128, -50, -18, -77, 
  -128, -128, -50, -23, -26, -128, -60, -77, -60, -77, 
  -60, -77, -60, -77, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -33, -33, -37, -60, -128, -128, -60, -77, 
  -60, -128, -128, -77, -37, -77, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -77, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -60, -50, -128, -128, -77, -77, -128, 
  -128, -77, -77, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -50, -50, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -33, -128, -128, -128, -60, -128, -128, -128, 
  -60, -77, -77, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 6, -18, -128, -128, -77, -43, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -77, 8, -14, -50, -60, -29, -43, -77, -77, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -16, 62, 49, -10, -128, -128, -50, -128, -128, 
  -128, -128, -50, -128, -37, -60, -128, -128, -50, -77, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -3, -60, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -77, -60, 
  -29, -128, -128, -77, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  43, -50, -29, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -128, -77, -37, -60, 
  -29, -77, -50, -43, -50, -128, -128, -128, -77, -128, 
  -128, -128, -77, -128, -77, -128, -77, -128, -128, -128, 
  66, 41, 32, -50, 14, -23, -16, -77, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -33, 57, 76, 
  104, 89, 111, 94, 97, 78, 17, -128, -128, -128, 
  -128, -128, -77, -26, 10, -60, -50, -77, -77, -128, 
  124, 102, 122, 101, 121, 92, 104, 49, 70, 59, 
  42, 10, -29, -23, 32, -23, -3, -1, 42, 70, 
  100, 70, 89, 66, 90, 71, 86, 52, -8, -18, 
  -50, -33, 20, 75, 95, 52, 16, -4, 1, 31, 
  108, 74, 121, 101, 120, 101, 122, 95, 109, 82, 
  85, 79, 72, 34, -3, 27, 45, 49, 100, 92, 
  118, 90, 71, 63, 100, 87, 104, 84, 97, 70, 
  32, 16, 57, 87, 105, 86, 87, 74, 69, 72, 
  104, 75, 115, 85, 112, 99, 118, 99, 115, 96, 
  110, 90, 98, 89, 108, 84, 97, 91, 113, 96, 
  111, 85, 109, 76, 107, 91, 109, 93, 117, 90, 
  52, 63, 80, 81, 101, 79, 94, 87, 92, 71, 
  90, 73, 102, 66, 115, 97, 117, 94, 108, 90, 
  113, 90, 107, 92, 108, 92, 116, 89, 114, 95, 
  109, 84, 111, 94, 99, 70, 104, 64, 85, 71, 
  71, 77, 86, 80, 105, 80, 100, 74, 90, 45, 
  86, 69, 77, -16, 75, 47, 102, 91, 101, 75, 
  111, 90, 118, 93, 106, 78, 102, 94, 116, 80, 
  74, 72, 101, 75, 89, 49, 99, 62, 75, 63, 
  77, 56, 75, 65, 97, 79, 98, 75, 92, 58, 
  80, 71, 92, 50, 57, -26, 97, 82, 113, 88, 
  108, 79, 104, 85, 94, 71, 100, 88, 110, 71, 
  77, 67, 84, 80, 94, 57, 89, 50, 67, 37, 
  59, 60, 69, 22, 78, 69, 90, 46, 75, 44, 
  73, 62, 81, 19, 53, -77, 84, 59, 105, 79, 
  93, 70, 95, 70, 87, 62, 100, 72, 89, 53, 
  64, 54, 84, 66, 87, 55, 87, 36, 24, 4, 
  48, 31, 62, -1, 57, 39, 78, 55, 86, 40, 
  68, 61, 74, -20, 58, -77, 82, 56, 103, 67, 
  69, 53, 81, 53, 84, 71, 80, 60, 94, 50, 
  37, 10, 84, 44, 75, 60, 81, 50, 7, 14, 
  54, 36, 64, -60, 72, 51, 74, 50, 68, 34, 
  59, 60, 72, -16, 70, -128, 37, 18, 84, 32, 
  69, 64, 75, 15, 81, 21, 62, 13, 46, -60, 
  55, -128, 40, 35, 71, 15, 66, -16, -18, -23, 
  64, 54, 77, -128, 57, 38, 73, 18, 67, -4, 
  53, 44, 63, -26, 55, -128, 14, -128, 43, -14, 
  42, 4, 47, -128, 35, 1, 55, 14, 49, -60, 
  39, -33, 60, -128, 30, -128, 25, -128, -77, 15, 
  45, 27, 60, -128, 2, -26, 43, 7, 70, -50, 
  33, 44, 56, -37, 55, -128, -128, -128, -4, -128, 
  -37, -128, -128, -128, 37, 20, 59, -20, 44, -128, 
  -60, -128, -8, -128, 8, -128, -128, -128, -128, -26, 
  52, -128, 37, -128, -43, -50, 60, 22, 73, 15, 
  45, 27, 2, -128, 31, -128, -18, -128, -128, -128, 
  28, -128, -128, -128, -128, -128, 41, -128, -128, -128, 
  -128, -128, 12, -128, -128, -128, -128, -128, -77, -128, 
  47, 18, 61, -128, -18, -26, 59, -7, 55, -29, 
  -4, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, -77, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, 41, 23, 15, 35, 74, 32, 
  93, 85, 112, 71, 81, 58, 93, 63, 85, 54, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 2, -128, -128, -128, 
  -77, -128, -128, -128, -20, -37, 36, 48, 90, 68, 
  112, 95, 112, 82, 99, 69, 102, 82, 92, 85, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -20, 9, 55, 53, 92, 72, 
  103, 85, 102, 80, 93, 73, 103, 81, 97, 73, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 2, -50, -26, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, 35, 37, 65, 40, 
  87, 60, 101, 60, 91, 73, 98, 72, 99, 83, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -8, 39, 72, 39, 
  78, 58, 99, 69, 86, 65, 92, 66, 103, 75, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -14, 32, 71, 37, 
  70, 50, 75, 57, 66, 61, 81, 62, 99, 71, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -14, 28, 77, 60, 
  63, 49, 87, 69, 75, 56, 89, 61, 84, 60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 2, -128, 1, 21, 75, 53, 
  30, 65, 92, 55, 74, 39, 87, 48, 79, 60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -43, 56, 45, 
  39, 53, 88, 21, 72, 42, 82, 57, 75, 65, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -26, -26, -16, 56, 19, 
  59, 4, 62, 46, 70, 38, 65, 55, 69, 45, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -50, 7, -60, 26, -33, 
  79, 29, 70, 55, 74, 21, 81, 50, 70, 34, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -14, -6, 45, -23, 
  53, 33, 61, 32, 63, 9, 57, 0, 67, 48, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 11, 42, 64, -33, 
  60, 5, 59, -37, 57, -14, 28, -128, 47, 18, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -26, 55, -43, 
  68, 46, 59, -43, 33, 12, 39, -128, 46, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 2, -77, 16, -37, 
  64, -60, -20, -128, 50, -33, -18, -128, 30, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, 6, 46, -128, 
  72, 15, 36, -128, 27, -77, 4, -128, 10, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -20, 19, -60, 
  52, -128, -128, -128, -1, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -20, -128, 
  26, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
};
