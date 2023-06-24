/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/97f4c236_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_97f4c236_nohash_3.cc" \
 */
#include "no_97f4c236_nohash_3.h"


const int g_no_97f4c236_nohash_3_width = 40;
const int g_no_97f4c236_nohash_3_height = 49;
alignas(16) const signed char g_no_97f4c236_nohash_3_data[] = {
  72, 83, 89, 70, 60, 64, 82, 57, 44, 50, 
  50, 20, 60, 68, 59, 54, 56, 47, 68, 53, 
  33, 11, 26, 23, 44, 45, 50, 44, 55, 25, 
  17, 17, 26, 30, 39, 39, 42, 17, 33, 25, 
  82, 69, 77, 57, 88, 80, 80, 50, 63, 31, 
  28, 24, 50, 47, 44, 34, 24, 26, 54, 34, 
  18, -6, 43, 19, 62, 52, 50, 52, 64, 16, 
  39, 40, 44, 34, 37, 24, 40, 44, 69, 68, 
  81, 58, 60, 57, 98, 79, 72, 27, 40, 29, 
  36, -2, 58, 22, 49, 35, 44, 42, 30, 19, 
  54, 59, 60, 57, 81, 79, 99, 88, 109, 97, 
  120, 101, 123, 101, 121, 99, 113, 94, 108, 89, 
  68, 66, 90, 67, 106, 85, 82, 49, 52, 4, 
  18, 25, 44, 32, 52, 31, 22, 35, 53, 74, 
  102, 85, 87, 83, 104, 88, 103, 77, 103, 78, 
  85, -128, 16, -77, -29, -128, 37, 12, 60, 5, 
  62, 56, 86, 79, 91, 69, 74, 48, 52, 49, 
  61, 34, 28, -12, 57, 44, 56, 65, 102, 93, 
  112, 88, 102, 77, 75, 65, 100, 85, 103, 68, 
  67, -77, 54, 4, 29, -50, 69, 73, 90, 58, 
  40, 1, 74, 65, 80, 52, 63, 45, 51, 53, 
  66, 44, 62, 34, 57, 32, 16, 25, 60, -128, 
  35, -3, 68, 21, 52, -8, 35, 44, 50, -77, 
  -23, -128, -128, -128, -128, -128, 4, -128, 15, -128, 
  51, -60, 51, -2, 61, -7, 35, 42, 35, -37, 
  17, 29, 37, 5, 1, -12, 55, 34, 17, -128, 
  50, 30, 33, -18, 38, -60, 39, -77, -10, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  61, 24, 44, -60, -50, -128, 59, 56, 32, -43, 
  9, -33, 15, 4, 11, -128, 27, -37, 10, -128, 
  -14, -128, -128, -128, 24, -128, 16, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  49, -37, 39, -128, -3, -128, 50, -18, 32, -50, 
  34, 12, 54, -4, -4, -23, 8, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  0, -128, 6, 5, 47, -60, 22, -60, 4, -43, 
  27, 11, 53, 7, -12, -128, -2, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  45, -128, -8, -128, -128, -128, -50, -128, 14, -128, 
  -23, 19, 34, -14, -3, -20, 43, -26, -16, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  79, 50, 37, -128, -128, -128, 18, -128, 37, -77, 
  2, -18, 7, -18, 57, 11, 20, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  6, -77, 43, -128, -60, 30, 83, 16, 20, -50, 
  20, 11, -1, -128, 25, 51, 45, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  77, 69, 81, 34, 40, 17, 58, -128, 29, 0, 
  44, -50, 9, -77, 27, -20, 5, -128, 18, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -50, -26, -128, -128, -128, 
  124, 103, 124, 95, 90, 63, 89, 58, 80, 38, 
  45, 27, 31, 6, 50, -128, 27, -3, 46, 38, 
  42, 34, 78, 47, -20, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 26, 54, 52, -128, -128, -128, 
  122, 102, 121, 91, 115, 99, 118, 83, 115, 91, 
  98, 87, 84, 62, 72, 34, 59, 65, 113, 95, 
  112, 89, 104, 79, 71, 56, 72, -16, -128, -128, 
  48, 19, -128, -50, 69, 67, 70, 34, 54, 47, 
  112, 88, 104, 51, 109, 88, 105, 80, 111, 81, 
  109, 84, 80, 82, 85, 34, 63, 50, 104, 74, 
  107, 80, 102, 70, 83, 74, 87, 50, -29, -128, 
  72, 67, 69, 62, 102, 84, 93, 20, 35, 35, 
  103, 77, 95, 61, 108, 83, 98, 88, 109, 78, 
  108, 85, 103, 87, 85, 28, 89, 72, 92, 57, 
  92, 77, 100, 71, 92, 81, 86, -18, -29, -50, 
  74, 56, 70, 70, 89, 61, 77, 17, 54, 29, 
  96, 68, 92, 86, 103, 74, 109, 93, 115, 97, 
  114, 94, 117, 90, 111, 96, 114, 94, 110, 75, 
  98, 89, 115, 92, 115, 89, 101, 86, 95, 67, 
  92, 67, 56, 65, 96, 65, 68, 21, 60, 59, 
  82, 52, 72, -10, 90, 65, 73, 97, 121, 89, 
  120, 97, 107, 93, 119, 100, 122, 98, 75, -2, 
  65, 43, 76, 66, 104, 89, 105, 71, 108, 97, 
  94, 72, 102, 81, 84, 39, 59, 49, 73, 55, 
  77, 40, 64, -128, 84, 54, 64, 87, 108, 72, 
  108, 83, 110, 85, 118, 93, 74, 27, 73, 26, 
  53, -1, 59, 45, 82, 58, 88, 56, 84, 49, 
  92, 46, 84, 75, 85, 12, 90, 80, 94, 70, 
  71, 21, 45, -50, 82, 43, 49, 80, 97, 58, 
  105, 70, 107, 74, 77, 33, 9, -128, 56, -29, 
  17, -20, 44, 14, 56, 0, 81, 51, 47, -60, 
  74, 1, 87, 56, 53, -3, 74, 53, 79, 51, 
  67, -10, -3, 25, 78, 21, 68, 79, 88, 78, 
  102, 50, 79, 16, 52, -128, -43, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 9, -128, -60, -128, 
  58, 24, 59, -23, -128, -128, 32, -12, 44, -16, 
  70, -16, -60, 52, 74, -43, 97, 73, 69, 60, 
  75, -128, 13, -128, 42, -128, -14, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  49, -2, 44, -128, -60, -128, 29, -60, 4, -128, 
  64, -77, -128, 44, 52, -128, 103, 61, 24, -1, 
  -8, -128, 5, -128, 32, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -8, -128, -50, -128, -12, -128, -18, -128, 
  57, -128, -128, -43, -14, -128, 87, 20, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  46, -128, -128, -128, -33, -128, 20, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  26, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
