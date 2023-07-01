/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/8fe67225_nohash_2.wav" \
 * --output_c_file="features_c_files/no/no_8fe67225_nohash_2.cc" \
 */
#include "no_8fe67225_nohash_2.h"


const int g_no_8fe67225_nohash_2_width = 40;
const int g_no_8fe67225_nohash_2_height = 49;
alignas(16) const signed char g_no_8fe67225_nohash_2_data[] = {
  45, 62, 62, 57, 54, 45, 52, 25, 64, 57, 
  62, 57, 26, 48, 50, 11, 20, -26, 17, 23, 
  23, 4, 0, 17, 26, 17, 17, -2, 0, 17, 
  37, 23, 33, 17, 14, 17, 33, 11, 14, 7, 
  50, 50, 50, 23, 25, 38, 47, 52, 50, 44, 
  42, 15, 55, 58, 81, 70, 66, 61, 77, 85, 
  91, 75, 105, 87, 74, 75, 88, 68, 89, 71, 
  72, 80, 87, 54, 62, 52, 74, 67, 65, 77, 
  84, 67, 59, 21, 39, 21, 19, 4, 46, 44, 
  57, 8, 62, 44, 92, 75, 82, 67, 84, 84, 
  99, 69, 90, 71, 66, 63, 84, 69, 79, 60, 
  75, 73, 92, 80, 76, 65, 90, 77, 99, 77, 
  102, 72, 96, 79, 92, 64, 59, 56, 64, 32, 
  46, 15, 11, 8, 14, 19, 44, 4, 64, -2, 
  9, -3, -2, -128, 38, 17, 45, -14, -1, 15, 
  44, 5, 52, 29, 47, 33, 46, 28, 54, -26, 
  124, 103, 124, 100, 120, 100, 116, 85, 75, 49, 
  70, 34, 31, -26, -20, -128, -18, -37, 28, -16, 
  44, -50, 5, -33, 4, 57, 72, 2, 19, -18, 
  23, -20, 19, -12, 31, 7, -1, -26, 14, -43, 
  116, 96, 114, 91, 115, 95, 113, 85, 77, 58, 
  74, 20, 27, 4, 19, -128, -18, -43, 14, -128, 
  -60, -37, 20, -7, 28, 20, 61, -16, -6, -18, 
  17, -128, 1, -26, 42, -1, 33, -10, 21, -20, 
  109, 88, 107, 80, 109, 87, 103, 60, 62, 49, 
  69, 47, 19, 12, 54, 44, 50, 12, 47, -77, 
  28, 22, -4, -50, 47, 47, 64, 2, 30, -37, 
  27, -128, 12, 17, 63, 34, 43, 15, 49, 17, 
  102, 77, 95, 77, 103, 74, 92, 78, 101, -1, 
  67, 53, 67, 27, 77, 62, 19, -8, 49, -128, 
  32, 55, 47, 15, 79, 71, 70, 4, -4, -60, 
  7, -128, -23, -128, 31, 0, 33, -29, 20, -50, 
  94, 62, 84, 70, 89, 41, 87, 75, 99, 52, 
  84, 75, 79, 6, 42, 30, 32, 61, 73, -50, 
  60, 60, 76, 56, 85, 69, 69, 5, 7, -128, 
  -16, -128, -60, -43, 42, -2, 19, -18, 35, -7, 
  81, 45, 75, 75, 101, 75, 110, 87, 101, 85, 
  105, 80, 76, 41, 67, 48, 72, 79, 94, 77, 
  97, 84, 107, 91, 114, 82, 89, 79, 102, 73, 
  70, 35, 56, 28, 62, 37, 54, 19, 52, 19, 
  76, 30, 68, 57, 102, 80, 107, 95, 117, 87, 
  109, 79, 102, 86, 103, 82, 105, 95, 117, 92, 
  111, 79, 107, 86, 112, 89, 116, 97, 119, 93, 
  94, 70, 87, 25, 54, 30, 54, 19, 52, 24, 
  51, -128, 54, 45, 79, 52, 100, 89, 108, 92, 
  107, 81, 105, 88, 102, 85, 105, 82, 111, 84, 
  101, 77, 91, 76, 108, 80, 105, 78, 99, 82, 
  99, 76, 101, 60, 48, -3, 44, 24, 60, 14, 
  54, -128, 45, 38, 70, 6, 78, 63, 79, 81, 
  101, 80, 97, 67, 94, 84, 107, 79, 84, 49, 
  80, 59, 91, 65, 86, 54, 91, 64, 88, 63, 
  89, 53, 77, 29, 29, -4, 33, -3, 29, -1, 
  52, -128, 24, 20, 54, 7, 55, -12, 92, 64, 
  92, 67, 88, 53, 90, 66, 101, 60, 75, 12, 
  66, 46, 77, 48, 56, 24, 73, 27, 64, 44, 
  74, 23, 59, 54, 47, -43, -1, -50, 11, -10, 
  48, -128, 6, 4, 48, 22, 65, 33, 85, 73, 
  90, 55, 73, 41, 57, 51, 71, -1, 34, 19, 
  66, 33, 75, 46, 70, 46, 65, 7, 57, 37, 
  49, 14, 51, 19, 31, -20, -4, -128, -7, -7, 
  42, -128, 35, -60, 51, 19, 67, 56, 87, 52, 
  62, -2, 38, -43, 69, 25, 73, 33, 56, 11, 
  53, 5, 65, 6, 44, -33, 38, -128, 1, -128, 
  44, 7, 48, -12, 47, -20, 7, -128, 2, -29, 
  25, -128, 42, -128, 59, 26, 72, 37, 74, 36, 
  -20, -29, 52, -128, 21, -33, 29, 19, 66, -77, 
  -20, -14, 51, 12, 41, -128, -43, -128, -128, -128, 
  17, -20, 47, -60, 15, -29, 9, -77, 2, -128, 
  -50, -128, 37, -128, 62, 33, 70, -128, -18, -128, 
  -60, -77, 26, -128, -128, -128, 5, -128, 33, 2, 
  47, -26, 55, 17, 4, -128, -128, -128, -128, -128, 
  -77, -60, 42, 9, 5, -43, 1, -128, -33, -128, 
  -128, -128, 48, -16, 63, 6, 57, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, 46, 32, 
  51, 1, 60, -20, -128, -128, -128, -128, -128, -128, 
  -128, 5, 57, -60, -33, -77, 0, -60, -18, -128, 
  -128, -128, 46, -37, 35, -128, 4, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -16, 16, 
  40, 27, 59, -128, -128, -128, -128, -128, -6, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -77, -128, 
  -128, -128, 51, -26, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -26, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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