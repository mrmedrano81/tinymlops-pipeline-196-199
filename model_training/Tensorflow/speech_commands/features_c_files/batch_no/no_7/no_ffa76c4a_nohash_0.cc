/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/ffa76c4a_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_ffa76c4a_nohash_0.cc" \
 */
#include "no_ffa76c4a_nohash_0.h"


const int g_no_ffa76c4a_nohash_0_width = 40;
const int g_no_ffa76c4a_nohash_0_height = 49;
alignas(16) const signed char g_no_ffa76c4a_nohash_0_data[] = {
  47, 30, 9, -2, 17, 17, 35, 48, 52, 45, 
  79, 75, 81, 74, 76, 65, 77, 64, 56, 37, 
  23, 58, 58, 59, 67, 32, 51, 48, 9, 15, 
  -4, 11, 20, 11, 0, -2, 26, 20, 0, 7, 
  66, 51, 19, -4, 29, 46, 33, -16, 13, 6, 
  35, 59, 74, 55, 62, 62, 75, 70, 63, 60, 
  74, 66, 54, 55, 60, 25, 49, 52, 50, 44, 
  9, 11, 15, 4, 4, 0, 8, 13, 12, -29, 
  67, 36, 34, 45, 49, 23, 15, -29, -16, -4, 
  69, 74, 78, 52, 81, 68, 86, 64, 65, 60, 
  94, 79, 80, 42, 59, 40, 58, 48, 60, 49, 
  62, 37, 37, 37, 35, 5, 17, -6, 11, 2, 
  75, 57, 61, 32, 44, 48, 57, 41, 32, 25, 
  62, 51, 72, 41, 57, 21, 44, 35, 64, 42, 
  87, 72, 94, 44, 58, 60, 49, 42, 73, 50, 
  83, 75, 42, 14, 47, 17, 47, 0, 27, 18, 
  119, 97, 109, 95, 112, 80, 100, 78, 76, 42, 
  60, 41, 48, 25, 48, 38, 55, 11, 58, 46, 
  46, 24, 56, 35, 63, 66, 68, 39, 47, 24, 
  66, 28, 43, 28, 41, 16, 53, 19, 14, -20, 
  116, 86, 122, 99, 110, 97, 114, 95, 109, 87, 
  78, 49, 52, 42, 63, 45, 67, 68, 94, 80, 
  92, 74, 89, 62, 60, 38, 62, 29, 68, 33, 
  34, 4, 47, 47, 41, 34, 47, 17, 16, 6, 
  109, 80, 112, 86, 107, 85, 105, 89, 102, 71, 
  77, 34, 79, 63, 77, 47, 68, 83, 107, 90, 
  97, 77, 92, 74, 88, 50, 64, 71, 94, 63, 
  75, 48, 72, 47, 37, 9, 36, 19, 39, 30, 
  105, 74, 102, 79, 106, 82, 107, 87, 116, 93, 
  107, 59, 102, 90, 110, 80, 88, 93, 112, 85, 
  104, 66, 85, 74, 92, 85, 87, 77, 95, 79, 
  99, 76, 102, 75, 76, 61, 67, 54, 59, 31, 
  95, 72, 95, 64, 88, 60, 93, 80, 110, 89, 
  100, 80, 99, 80, 110, 93, 101, 70, 98, 76, 
  102, 64, 95, 73, 94, 67, 90, 52, 77, 69, 
  92, 74, 88, 57, 87, 62, 73, 35, 61, 46, 
  89, 63, 92, 74, 101, 68, 91, 54, 88, 67, 
  93, 81, 105, 85, 100, 59, 98, 69, 93, 60, 
  92, 64, 78, 50, 97, 59, 76, 63, 80, 54, 
  92, 65, 75, 51, 79, 50, 47, 43, 65, 37, 
  79, 57, 84, 74, 94, 65, 99, 43, 82, 63, 
  95, 60, 97, 75, 84, 55, 94, 69, 94, 71, 
  86, 55, 71, 38, 77, 52, 85, 53, 71, 27, 
  80, 41, 66, -3, 62, 29, 59, 34, 63, 29, 
  77, 54, 76, 66, 89, 85, 110, 70, 104, 59, 
  89, 87, 108, 90, 108, 67, 110, 90, 111, 84, 
  86, 52, 83, 68, 80, 82, 102, 27, 80, 69, 
  102, 84, 96, -4, 32, -3, 52, 24, 85, 71, 
  75, 52, 76, 69, 94, 78, 106, 70, 106, 79, 
  110, 86, 115, 77, 105, 84, 114, 74, 97, 70, 
  79, 57, 79, 54, 92, 78, 97, 68, 93, 75, 
  100, 76, 95, 19, 52, 26, 57, 39, 74, 59, 
  82, 55, 73, 64, 91, 63, 97, 50, 89, 69, 
  92, 81, 112, 69, 95, 85, 90, 46, 85, 47, 
  72, 20, 60, 55, 81, 60, 92, 67, 87, 74, 
  79, 64, 64, 23, 37, 15, 55, 33, 66, 42, 
  82, 55, 63, 52, 82, 52, 89, 58, 94, 66, 
  98, 72, 101, 69, 100, 89, 98, 30, 82, 33, 
  64, 0, 61, 48, 77, 58, 74, 69, 90, 67, 
  76, 64, 75, 11, 36, 10, 48, 39, 70, 34, 
  77, 49, 60, 41, 73, 49, 81, 44, 83, 54, 
  91, 67, 93, 74, 100, 82, 92, 20, 74, 28, 
  52, 8, 42, 11, 74, 37, 61, 68, 95, 59, 
  81, 46, 63, -14, 37, 2, 40, 53, 83, 32, 
  68, 36, 55, 33, 68, 45, 76, 29, 66, 49, 
  104, 72, 93, 68, 94, 44, 44, -128, 47, 30, 
  59, 35, 56, 5, 71, 58, 88, 49, 88, 49, 
  74, 32, 64, 0, 5, -16, 44, 33, 76, -7, 
  57, 7, 59, 31, 62, 33, 69, 40, 79, 43, 
  75, 65, 89, 64, 89, 28, 50, -14, 48, 4, 
  42, 4, 52, -37, 64, 49, 82, 34, 77, 54, 
  63, 26, 51, -16, 21, 5, 40, 27, 73, 1, 
  43, -37, 57, 20, 55, 24, 62, 29, 66, -77, 
  -3, 57, 81, 70, 90, -26, 38, -43, 30, -12, 
  30, -128, 21, -128, 45, 16, 77, 25, 77, 47, 
  52, 12, 59, -128, 17, -8, 33, 4, 64, -3, 
  -1, -128, 50, -26, 28, -43, 7, 65, 82, 32, 
  70, -77, 43, 60, 62, -16, 31, -128, -18, -128, 
  34, -128, 12, -128, -60, -18, 70, -6, 56, 47, 
  38, -37, 63, -12, 14, -29, 21, -23, 33, -26, 
  -128, -128, 42, -128, -10, -77, -43, 55, 38, 60, 
  80, -128, 47, 8, 74, -3, -6, -128, -23, -128, 
  -128, -128, -128, -128, -128, -128, 22, -128, 15, -50, 
  -10, -128, 24, -4, -60, -128, -60, -128, -77, -128, 
  -128, -128, 52, -128, 18, -128, 4, 34, 33, 56, 
  69, -18, 46, -29, 58, -50, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 20, -128, 2, -128, 
  -128, -128, 20, 41, -43, -128, -20, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, 15, -128, 27, 24, 
  54, -128, -29, -128, 44, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -60, -4, -128, -43, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -20, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -33, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};