/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/8fe67225_nohash_4.wav" \
 * --output_c_file="features_c_files/no/no_8fe67225_nohash_4.cc" \
 */
#include "no_8fe67225_nohash_4.h"


const int g_no_8fe67225_nohash_4_width = 40;
const int g_no_8fe67225_nohash_4_height = 49;
alignas(16) const signed char g_no_8fe67225_nohash_4_data[] = {
  31, 58, 62, 44, 40, 41, 40, 32, 33, 63, 
  76, 20, 39, 53, 23, 4, 33, 20, 40, 11, 
  33, 23, -26, 28, 23, 11, 39, 46, 48, 41, 
  40, 20, 42, 34, 26, 32, 33, 23, 20, 15, 
  45, 16, 56, 47, 26, 24, 17, -12, 35, 48, 
  64, 35, 17, 29, 34, 27, 46, 38, 35, 29, 
  41, 21, 38, 15, 24, 14, 20, 2, 1, 14, 
  29, 28, 23, 11, 34, 5, 15, 41, 42, 22, 
  74, 23, 16, 32, 59, 53, 52, 25, 48, 58, 
  61, 20, 45, 42, 58, 45, 57, 38, 36, 24, 
  26, 1, 17, -10, 5, 11, 19, 4, 33, 13, 
  21, 4, 24, -12, 31, 1, 27, 29, 35, 6, 
  71, 68, 63, 47, 82, 68, 82, 45, 48, -23, 
  40, 40, 29, -12, -8, 21, 43, -26, 1, -16, 
  16, 16, 21, -1, 0, 33, 46, 25, 24, -29, 
  19, -16, 10, 11, 41, 34, 37, 9, 36, 21, 
  25, 37, 84, 60, 85, 82, 100, 73, 58, 25, 
  44, 22, 22, 9, 16, -3, 46, -4, 36, 13, 
  45, 31, 25, 9, 28, 29, 61, -26, 11, 8, 
  25, 14, 21, -2, 19, 2, 34, -10, 37, 17, 
  62, 49, 81, 78, 99, 56, 75, 55, 68, 46, 
  52, 17, 23, 25, 31, -3, 32, 26, 60, 16, 
  47, 48, 33, 6, 12, 45, 66, -29, 19, 32, 
  35, 29, 14, 13, 9, -50, 2, -12, 30, -6, 
  79, 69, 101, 84, 100, 69, 33, 10, 68, 42, 
  44, -8, 29, -18, 18, 39, 18, 7, 36, -8, 
  44, 25, 25, -23, 31, 54, 71, -4, -3, -29, 
  34, 25, 9, 34, 42, -4, 19, -23, -6, -26, 
  67, 55, 90, 88, 114, 89, 92, 49, 77, 57, 
  66, 38, 44, 25, 45, 38, 44, 29, 35, 30, 
  57, 46, 56, 9, 19, 54, 75, 13, 4, -3, 
  34, 15, 46, -18, 44, 17, 44, -1, 40, 19, 
  96, 62, 82, 60, 90, 84, 105, 82, 85, 65, 
  52, 44, 18, 19, 45, 30, 15, -14, 15, -14, 
  65, 57, 68, 40, 56, 50, 65, 11, 24, -12, 
  36, 36, 58, 4, 26, 15, 35, 19, 37, 9, 
  125, 102, 123, 90, 104, 80, 95, 64, 64, 26, 
  64, 47, 60, 7, 68, 45, 30, -77, -23, -2, 
  47, 24, 69, 23, 23, 58, 65, 29, 30, -8, 
  48, 23, 55, 23, 64, 30, 51, 26, 46, 43, 
  112, 99, 116, 93, 109, 90, 110, 82, 81, 40, 
  73, 61, 63, 49, 79, 72, 63, 63, 85, 90, 
  111, 88, 109, 92, 111, 92, 107, 85, 105, 72, 
  78, 69, 88, 79, 99, 79, 74, 56, 73, 58, 
  104, 87, 105, 79, 103, 83, 103, 82, 85, 62, 
  77, 11, 58, 40, 51, 53, 56, 24, 64, 70, 
  89, 48, 88, 62, 90, 67, 87, 74, 94, 79, 
  67, 54, 81, 72, 90, 69, 71, 50, 67, 50, 
  100, 80, 94, 66, 99, 76, 96, 75, 91, 68, 
  77, 38, 57, -10, 67, 53, 80, 44, 59, 17, 
  64, 61, 67, 6, 67, 35, 50, -3, 45, 20, 
  61, 23, 42, -8, 48, 37, 64, 37, 58, 31, 
  93, 67, 83, 62, 96, 65, 80, 49, 81, 65, 
  93, 64, 43, -33, 8, -10, 52, 47, 30, -128, 
  38, 46, 27, 22, 70, 29, 57, 55, 75, 20, 
  48, -60, 34, -33, 28, -29, 48, 12, 47, 25, 
  85, 49, 62, 57, 80, 7, 88, 72, 93, 67, 
  90, 50, 75, 40, 69, 50, 65, 48, 78, 60, 
  74, 58, 79, 70, 102, 85, 102, 87, 106, 67, 
  65, 16, 52, 23, 55, 2, 60, 45, 69, 32, 
  72, 2, 63, 51, 102, 80, 109, 92, 114, 89, 
  111, 57, 94, 79, 98, 45, 90, 98, 120, 90, 
  107, 80, 105, 88, 116, 92, 115, 99, 118, 94, 
  108, 76, 59, 12, 57, -43, 57, 49, 67, 39, 
  48, -128, 69, 52, 82, 60, 100, 88, 112, 90, 
  103, 83, 105, 86, 97, 87, 115, 90, 106, 79, 
  96, 74, 105, 83, 105, 71, 95, 74, 101, 75, 
  100, 72, 79, 42, 44, 28, 66, 37, 65, 49, 
  56, -128, 48, 30, 66, 43, 79, 56, 105, 87, 
  97, 82, 105, 88, 95, 78, 114, 78, 91, 59, 
  84, 64, 73, 28, 77, 55, 82, 54, 77, 59, 
  75, 62, 91, 45, 34, -37, 25, -16, 24, 5, 
  52, -128, 32, 16, 64, 44, 75, 11, 97, 77, 
  97, 75, 92, 65, 88, 86, 108, 49, 71, 44, 
  77, 48, 74, 21, 55, -7, 69, 15, 35, -77, 
  40, 0, 86, 49, 34, -37, 31, -37, 22, -26, 
  42, -128, 33, 5, 62, 27, 71, 22, 86, 50, 
  88, 2, 71, 44, 93, 63, 88, 27, 48, -2, 
  60, -10, 75, 15, 34, -43, 49, -77, 27, -60, 
  -23, -33, 66, 27, 14, -77, 30, -23, 40, -43, 
  -37, -128, 52, -128, 40, -20, 72, 50, 57, 32, 
  64, 16, 70, 13, 69, 31, 72, 39, 65, 18, 
  67, 43, 70, 29, 45, -128, 21, -128, -26, -20, 
  19, -128, 42, -77, -128, -128, -6, -128, 4, -128, 
  -128, -128, 54, -60, 68, 39, 71, 45, 70, -33, 
  52, 19, 32, -128, 29, 19, 61, 50, 74, 41, 
  70, 19, 73, 48, 32, -128, 49, -128, -37, -128, 
  -50, -128, 32, -43, -43, -128, 31, -29, 13, -77, 
  2, -128, 44, -6, 74, 56, 64, -33, -8, -128, 
  -4, -128, 40, -77, 19, -128, -16, 22, 63, -2, 
  47, -33, 74, 51, 8, -128, 36, -77, 17, -14, 
  -128, -128, 9, -77, -20, -128, 13, -18, 36, -50, 
  -60, -128, 47, -50, 65, 4, 51, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 52, -128, 
  8, -33, 70, 21, -128, -128, -7, -77, 29, -18, 
  -43, -128, -128, -128, -128, -128, -50, -128, -33, -128, 
  -128, -128, 31, -43, 57, 1, 29, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -16, -60, 
  25, -128, 19, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -29, -128, 
  -128, -128, -128, -128, -16, -128, -43, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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