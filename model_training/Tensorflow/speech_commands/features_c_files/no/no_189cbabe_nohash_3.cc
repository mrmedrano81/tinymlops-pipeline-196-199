/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/189cbabe_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_189cbabe_nohash_3.cc" \
 */
#include "no_189cbabe_nohash_3.h"


const int g_no_189cbabe_nohash_3_width = 40;
const int g_no_189cbabe_nohash_3_height = 49;
alignas(16) const signed char g_no_189cbabe_nohash_3_data[] = {
  14, 46, 54, 17, 0, -50, -128, -26, -128, -50, 
  -60, -60, -50, -128, -128, -128, -128, -60, -33, -128, 
  -60, -60, -128, -50, -50, 44, 72, 30, -50, -128, 
  -128, -128, -128, -128, -50, -37, -10, -12, -60, -128, 
  11, 29, 47, 7, -50, -37, -60, -128, -37, -20, 
  -128, -50, -50, -128, -128, -50, -37, -50, -50, -128, 
  -60, -60, -50, -37, -26, 4, 65, 60, 13, -60, 
  -128, -128, -60, -128, -60, -37, -12, -20, -50, -60, 
  88, 43, 13, -26, -50, -37, -26, -20, -18, -77, 
  -128, -128, -60, -50, -60, -128, -60, -50, -37, -60, 
  -128, -128, -128, -128, -128, -128, -60, -50, -14, -60, 
  -50, -50, -50, -60, -128, -50, -37, -128, -60, -77, 
  69, 24, -26, -128, -128, -50, -18, -33, -60, -128, 
  -60, -77, -128, -128, -60, -77, -128, -77, -128, -50, 
  -60, -50, -60, -77, -60, -128, -128, -128, -37, -77, 
  -60, -77, -50, -50, -128, -128, -77, -128, -128, -128, 
  -12, -128, -20, -128, -77, -128, -50, -128, -50, -33, 
  -128, -128, -60, -128, -128, -128, -128, -77, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  47, -60, -37, -7, 6, -128, -77, -77, -128, -128, 
  -60, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -23, -26, -50, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -77, -128, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, -128, -128, -77, -77, -128, -77, -128, 
  -128, -128, -128, -128, -77, -128, -77, -128, -77, -128, 
  -128, -128, -77, -77, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -43, -29, -77, -77, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -77, -128, -20, -33, 
  -29, -60, -29, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  119, 98, 120, 97, 109, 79, 77, 60, 46, 42, 
  17, -26, -20, -77, -14, -60, -50, -77, -23, 19, 
  30, -14, -20, -33, -50, -128, -128, -128, -50, -128, 
  -128, -128, -77, -128, -50, -60, -77, -77, -50, -77, 
  119, 102, 125, 101, 119, 98, 114, 82, 90, 52, 
  52, -128, -128, -128, -128, 0, -128, 4, 42, 29, 
  35, 5, 69, 67, 67, -14, -128, -6, 34, 25, 
  25, 32, 40, 4, 30, 43, 29, 38, 36, 32, 
  104, 94, 116, 90, 111, 88, 112, 91, 113, 89, 
  101, 78, 69, 49, 5, -7, -8, 20, 37, 42, 
  46, 61, 105, 94, 111, 68, 4, -16, -7, -128, 
  0, 14, 19, 31, 56, 40, 54, 34, 51, 53, 
  93, 83, 105, 75, 106, 77, 95, 79, 102, 74, 
  93, 73, 79, 59, 55, 34, 50, 41, 72, 66, 
  82, 72, 100, 82, 96, 66, 42, 22, 37, -12, 
  7, -14, 41, 57, 69, 43, 47, 28, 54, 31, 
  93, 80, 101, 71, 99, 80, 101, 76, 100, 84, 
  98, 67, 105, 80, 91, 85, 110, 96, 114, 92, 
  110, 91, 102, 69, 87, 79, 90, 78, 95, 74, 
  53, 37, 66, 67, 80, 61, 70, 61, 72, 57, 
  75, 63, 97, 77, 90, 63, 114, 95, 113, 94, 
  117, 90, 107, 95, 115, 94, 119, 99, 120, 98, 
  119, 97, 107, 81, 108, 98, 117, 87, 111, 85, 
  78, 59, 79, 89, 112, 87, 102, 75, 81, 65, 
  82, 59, 87, 60, 89, 67, 104, 80, 114, 87, 
  104, 84, 111, 89, 111, 87, 109, 86, 107, 79, 
  100, 76, 104, 67, 91, 76, 104, 75, 73, 49, 
  55, 76, 94, 78, 107, 88, 101, 74, 80, 62, 
  76, 51, 81, 50, 83, 57, 97, 80, 112, 84, 
  99, 85, 105, 83, 105, 82, 104, 70, 94, 67, 
  93, 58, 96, 64, 80, 72, 99, 64, 79, 32, 
  45, 66, 88, 75, 98, 74, 92, 72, 69, 46, 
  73, 40, 78, 46, 72, 49, 94, 71, 103, 78, 
  93, 69, 95, 72, 94, 78, 86, 48, 75, 55, 
  82, 54, 95, 68, 85, 72, 97, 55, 68, 32, 
  64, 68, 92, 66, 83, 58, 70, 40, 63, 54, 
  70, 18, 69, 32, 19, 36, 91, 67, 96, 69, 
  79, 62, 88, 65, 84, 70, 99, 61, 52, 26, 
  74, 50, 76, 53, 75, 63, 92, 14, 68, 64, 
  51, 30, 69, 50, 74, 48, 83, 63, 67, 20, 
  67, 13, 64, 18, 45, 40, 85, 59, 89, 55, 
  71, 47, 82, 55, 84, 65, 75, 16, 54, 35, 
  75, 32, 70, 53, 71, 51, 82, 49, 60, 46, 
  47, -14, 69, 24, 75, 44, 76, 58, 63, -6, 
  62, 2, 59, 6, 72, 49, 80, 51, 80, 44, 
  81, 37, 82, 58, 89, 65, 74, 9, 54, 29, 
  70, 31, 80, 49, 70, 53, 85, 52, 56, 41, 
  34, -128, 50, 42, 83, 52, 70, 59, 67, -8, 
  59, -50, 45, -29, 69, 49, 80, 42, 69, 25, 
  82, 25, 73, 47, 85, 63, 56, -128, 45, -2, 
  73, 35, 64, 29, 63, 45, 75, 29, 61, 42, 
  46, -7, 44, 38, 70, 30, 80, 62, 67, -16, 
  52, 0, 50, -12, 75, 42, 67, 20, 57, 19, 
  80, 43, 68, 42, 85, 56, 77, 2, 36, 4, 
  59, 0, 65, 17, 51, 32, 67, 19, 47, -2, 
  20, -43, 49, 34, 69, 43, 68, 41, 72, -23, 
  49, 21, 53, 4, 87, 49, 26, -37, 23, 9, 
  69, 11, 47, 33, 90, 72, 84, -29, 15, -33, 
  54, 40, 62, 34, 64, 34, 76, -8, 64, 50, 
  42, -128, 29, 32, 73, 45, 66, 43, 69, -37, 
  40, 19, 52, 18, 91, 54, 14, -43, 29, 29, 
  74, 11, -20, 8, 89, 64, 62, 11, 9, -37, 
  32, 4, 34, 4, 59, 4, 53, -128, 54, 39, 
  50, -128, 44, -37, 60, 30, 69, 37, 67, -16, 
  36, 2, 42, 15, 84, 47, 47, -77, 1, 0, 
  62, -128, -128, 26, 87, 53, 25, -128, -20, -128, 
  37, 24, 24, -128, 47, 12, 47, -128, 1, -128, 
  -6, -77, -16, -128, 25, -18, 55, 32, 63, -43, 
  29, 2, 40, -7, 74, 6, -128, -128, -128, -128, 
  42, -128, -12, 5, 69, 23, -23, -128, -128, -128, 
  36, 17, 17, -128, 24, -8, 46, -128, -128, -128, 
  -26, -128, -128, -128, -50, -128, 49, 13, 57, -43, 
  43, 14, 37, -20, 62, 4, -18, -128, -128, -128, 
  -12, -128, -26, -18, 49, -128, -128, -128, -128, -128, 
  27, -77, -60, -128, -128, -77, 38, -128, -128, -128, 
  -33, -128, -128, -128, -128, -128, 53, -50, 40, -26, 
  49, 28, 46, -50, 16, 51, 72, -128, -128, -128, 
  -60, -23, 55, 19, 9, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -16, -128, -60, -128, 
  -16, -128, -128, -128, -128, -128, 42, -60, 11, -50, 
  61, 27, 31, 42, 75, 59, 67, -128, -128, -128, 
  -128, -37, 57, 15, 7, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 24, -128, 2, -77, 
  61, 6, -18, 31, 62, 60, 66, -128, -128, -128, 
  -128, -50, 7, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -12, -128, -33, -128, 
  60, -33, -128, -26, 25, -128, -128, -128, -128, -128, 
  -128, -128, -1, -60, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  57, -60, -128, -128, -128, -77, -128, -128, -128, -128, 
  -128, -128, -29, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  19, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -77, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
