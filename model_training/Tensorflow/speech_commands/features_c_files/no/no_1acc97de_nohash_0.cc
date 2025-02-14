/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/1acc97de_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_1acc97de_nohash_0.cc" \
 */
#include "no_1acc97de_nohash_0.h"


const int g_no_1acc97de_nohash_0_width = 40;
const int g_no_1acc97de_nohash_0_height = 49;
alignas(16) const signed char g_no_1acc97de_nohash_0_data[] = {
  60, 34, -4, -2, -18, -26, -18, 4, -4, -18, 
  -50, -26, 0, 11, -33, -50, -26, -18, -33, -26, 
  -10, -12, -10, 4, -50, -37, -50, -12, -10, -18, 
  -33, -37, -10, -37, -18, -12, -10, -26, -4, -7, 
  60, 42, 60, 44, 22, 16, 12, -37, -12, 9, 
  -60, -20, -12, -23, -18, -50, -50, -77, -128, -50, 
  -26, -37, -37, -50, -60, -37, -18, -50, -26, -29, 
  -12, -29, -12, -20, -12, -29, -18, -29, -12, -50, 
  64, 35, 30, 38, 29, -26, 15, -18, -29, -7, 
  -1, -50, -37, -26, -26, -29, -37, -77, -50, -50, 
  -50, -77, -128, -128, -50, -50, -60, -50, -20, -50, 
  -50, -29, -29, -16, -2, -23, 11, -23, -20, -43, 
  21, 32, 40, -37, 15, 16, -23, -20, 14, 15, 
  -2, -77, -37, -128, -29, -50, -128, -128, -37, -128, 
  -29, -43, -37, -33, -26, -50, -50, -33, -29, -33, 
  -14, -33, -20, -26, 2, -12, -8, -18, -7, -12, 
  65, 48, 2, -33, 11, -60, -50, -2, 9, -20, 
  -20, -77, -50, -60, -3, -12, -37, -12, -7, -43, 
  -37, -33, -29, -60, -29, -50, -128, -60, -29, -33, 
  -29, -77, -37, -33, 5, -37, -29, -43, -23, -20, 
  64, 48, 50, 26, 1, -77, -4, -50, -43, -12, 
  1, -77, -128, -128, -50, -128, -50, -77, -8, -43, 
  -37, -77, -37, -77, -20, -60, -37, -77, -37, -37, 
  -37, -77, -29, -50, -16, -37, -43, -29, -29, -50, 
  -77, -128, 7, 25, 20, -26, 4, -50, -23, -37, 
  -16, -128, -50, -60, -43, -60, -8, -77, -23, -43, 
  -37, -60, -37, -77, -77, -77, -20, -43, -50, -50, 
  -77, -128, -43, -50, -18, -37, -23, -50, -10, -60, 
  19, 12, 21, -128, -77, -37, -12, -33, 6, -128, 
  -50, -43, -77, -50, -128, -77, -16, -43, -50, -16, 
  -10, -60, -50, -60, -23, -60, -23, -60, -77, -60, 
  -43, -60, -23, -33, -60, -50, -23, -128, -23, -33, 
  -23, -77, 1, -128, -37, -37, -14, 9, -14, -77, 
  -33, -37, -77, -128, -10, -50, -128, -77, -77, -128, 
  -50, -77, -10, -50, -50, -29, -16, -77, -50, -128, 
  -50, -50, -12, -33, -60, -50, -26, -60, -12, -33, 
  41, 16, 11, -43, -60, -128, 4, -60, -26, -128, 
  -60, -77, -10, -77, -33, -128, -16, -50, -77, -128, 
  -77, -50, -6, -128, -33, -50, -43, -77, -18, -26, 
  -10, -60, -43, -43, -43, -43, -43, -50, -43, -77, 
  30, -60, 17, -4, 8, -128, -16, -50, -128, -128, 
  -33, -4, -12, -77, -43, -128, -43, -37, -18, -50, 
  -18, -60, -60, -128, -128, -77, -23, -128, -33, -128, 
  -60, -60, -26, -128, -128, -77, -33, -77, -26, -50, 
  -14, -128, -18, -128, -50, -128, -128, -128, -60, -50, 
  -26, -77, -77, -128, -77, -128, -43, -77, -77, -77, 
  -26, -43, -60, -77, -43, -77, -18, -60, -60, -128, 
  -77, -77, -43, -77, -33, -128, -43, -128, -29, -77, 
  -29, -128, -37, -77, 9, -50, -128, -128, -10, -77, 
  -26, -128, -26, -33, -33, -33, -60, -50, -18, -50, 
  -20, -77, -43, -60, -77, -43, -43, -128, -26, -60, 
  -33, -77, -20, -43, -29, -60, -29, -128, -60, -77, 
  120, 100, 122, 99, 117, 95, 105, 83, 78, 61, 
  10, -29, 9, 21, 43, -33, -43, -77, -8, -7, 
  50, 68, 91, 79, 40, -33, -26, -26, -8, -23, 
  1, -50, -10, -77, -37, -33, -10, -23, -1, -33, 
  119, 96, 111, 85, 106, 79, 106, 85, 87, 24, 
  55, 48, 29, 32, 54, 8, 46, 17, 20, 32, 
  67, 73, 91, 69, 55, 21, -8, -43, -20, -20, 
  14, -23, -23, -128, 2, 9, 27, 6, 34, 4, 
  117, 89, 108, 91, 114, 89, 112, 84, 103, 84, 
  93, 78, 81, 83, 100, 63, 39, 19, 69, 66, 
  99, 90, 115, 95, 93, 46, 16, 19, 47, 34, 
  18, 11, 29, 16, 49, 42, 53, 46, 53, 38, 
  108, 77, 107, 85, 104, 82, 101, 79, 97, 74, 
  92, 79, 89, 75, 93, 65, 82, 54, 87, 76, 
  97, 83, 108, 82, 82, 66, 45, 47, 60, 45, 
  39, 31, 48, 10, 60, 52, 67, 57, 65, 54, 
  97, 66, 93, 71, 101, 89, 113, 93, 115, 93, 
  112, 80, 96, 63, 109, 94, 104, 77, 85, 79, 
  98, 74, 97, 69, 92, 72, 88, 95, 116, 92, 
  65, 39, 57, 46, 75, 79, 85, 41, 62, 34, 
  85, 49, 87, 69, 100, 90, 117, 95, 118, 97, 
  116, 91, 108, 82, 108, 92, 114, 90, 104, 82, 
  99, 68, 88, 69, 99, 82, 103, 94, 115, 87, 
  80, 62, 63, 55, 75, 83, 102, 65, 84, 62, 
  75, 35, 74, 56, 90, 72, 106, 87, 111, 82, 
  102, 78, 102, 76, 103, 80, 100, 76, 93, 74, 
  99, 69, 82, 52, 96, 62, 86, 69, 95, 67, 
  76, 65, 60, 48, 58, 52, 82, 55, 80, 59, 
  74, 35, 76, 57, 90, 73, 99, 79, 102, 74, 
  92, 70, 93, 65, 94, 82, 99, 77, 93, 67, 
  90, 67, 80, 16, 81, 53, 73, 42, 79, 52, 
  68, 27, 60, 37, 54, 34, 74, 51, 86, 63, 
  72, 40, 77, 55, 86, 70, 90, 66, 86, 65, 
  87, 62, 87, 64, 89, 59, 83, 65, 85, 63, 
  91, 67, 82, 38, 81, 67, 84, 46, 82, 59, 
  60, 47, 56, 34, 57, 1, 65, 44, 75, 53, 
  67, 32, 70, 42, 82, 69, 91, 57, 80, 58, 
  76, 47, 82, 54, 73, 37, 74, 42, 79, 52, 
  82, 64, 82, 1, 75, 63, 80, 40, 78, 55, 
  67, 55, 56, 34, 48, -128, 37, 29, 64, 29, 
  65, 25, 70, 45, 83, 60, 89, 54, 70, 47, 
  74, 29, 60, 69, 83, 16, 48, 34, 66, 20, 
  68, 41, 72, 27, 70, 60, 85, 25, 61, 38, 
  53, 57, 67, 29, 57, -128, 58, 20, 58, 31, 
  55, -12, 59, 28, 77, 52, 80, 1, 57, 9, 
  62, 36, 87, 59, 57, -23, 40, -128, 17, -77, 
  36, 12, 63, -50, 52, 38, 84, -10, 60, 42, 
  54, 45, 70, 11, 50, -128, 48, 9, 40, 12, 
  39, 9, 60, 37, 78, 38, 59, -128, 36, -33, 
  52, 4, 81, 42, -128, -128, -128, -128, 9, -128, 
  14, -128, 40, -60, 37, -43, 61, -128, 7, -128, 
  -12, 25, 62, -20, 41, -128, 4, -43, 28, -8, 
  33, -43, 38, 23, 80, 54, 51, -128, 24, -128, 
  44, 31, 76, 14, -18, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, 26, -128, -50, -128, 
  -14, -50, 50, -18, 29, -128, -77, -128, 6, -128, 
  -29, -128, -50, -37, 59, -33, -128, -128, -128, -128, 
  -16, 0, 56, -50, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 26, -128, -12, -12, 
  1, -128, -50, -128, -33, -128, -128, -128, -128, -128, 
  27, -128, 50, 10, 64, -128, -128, -128, -60, -128, 
  49, 16, 24, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -18, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -37, -128, -128, -128, 4, -128, -128, -128, -128, -128, 
  9, -77, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
