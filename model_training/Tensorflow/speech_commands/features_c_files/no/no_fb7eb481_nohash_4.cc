/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/fb7eb481_nohash_4.wav" \
 * --output_c_file="features_c_files/no/no_fb7eb481_nohash_4.cc" \
 */
#include "no_fb7eb481_nohash_4.h"


const int g_no_fb7eb481_nohash_4_width = 40;
const int g_no_fb7eb481_nohash_4_height = 49;
alignas(16) const signed char g_no_fb7eb481_nohash_4_data[] = {
  67, 37, 9, -37, -50, -50, -18, -26, -33, -26, 
  -33, -37, -18, -60, -128, -128, -128, -128, -128, -60, 
  -128, -50, -60, -128, -128, -128, -60, -60, -128, -60, 
  -60, -60, -128, -60, -50, -60, -50, -128, -60, -128, 
  63, -3, 12, -20, -26, -50, -60, -128, -128, -50, 
  -60, -29, -60, -128, -128, -60, -37, -60, -128, -128, 
  -128, -60, -60, -128, -128, -128, -128, -128, -128, -50, 
  -60, -50, -128, -60, -60, -50, -128, -128, -128, -128, 
  29, -2, -20, -77, -50, -77, -50, -77, -60, -128, 
  -60, -77, -60, -128, -128, -128, -60, -60, -128, -128, 
  -128, -77, -128, -50, -60, -128, -60, -37, -128, -128, 
  -128, -50, -128, -128, -60, -128, -128, -128, -128, -128, 
  52, -14, -20, -43, -12, -37, -50, -37, -37, -77, 
  -60, -128, -60, -50, -18, -29, -60, -128, -60, -77, 
  -60, -77, -128, -128, -128, -128, -128, -128, -50, -50, 
  -128, -77, -128, -77, -60, -77, -60, -77, -60, -77, 
  -1, 9, -4, -33, -50, -50, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -50, -128, -77, 
  -60, -128, -128, -77, -50, -128, -128, -128, -60, -128, 
  -60, -50, -50, -77, -60, -77, -50, -77, -60, -128, 
  -10, -50, -33, -128, -50, -60, -50, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -77, -60, -128, 
  -128, -128, -60, -128, -60, -37, -60, -128, -37, -50, 
  -50, -128, -128, -128, -50, -128, -60, -128, -128, -128, 
  -7, -37, -23, -60, -14, -26, -20, -77, -77, -77, 
  -37, -128, -37, -128, -128, -128, -128, -128, -128, -128, 
  -60, -77, -50, -77, -128, -128, -60, -77, -128, -128, 
  -77, -77, -50, -77, -77, -50, -77, -128, -60, -128, 
  5, -14, -43, -60, -43, -128, -128, -43, -50, -77, 
  -50, -128, -128, -128, -77, -128, -128, -128, -50, -128, 
  -128, -128, -37, -128, -128, -50, -77, -128, -77, -77, 
  -50, -128, -77, -77, -29, -77, -50, -43, -50, -128, 
  -128, -43, -18, -23, -43, -60, -128, -128, -128, -128, 
  -128, -128, -128, -128, -37, -128, -128, -128, -50, -128, 
  -128, -128, -77, -128, -77, -128, -128, -128, -128, -77, 
  -37, -77, -50, -128, -77, -77, -50, -128, -77, -128, 
  -29, -128, -26, -60, -23, -23, -23, -20, -29, -77, 
  -128, -128, -50, -128, -77, -128, -77, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -50, -128, -50, -128, 
  -77, -128, -77, -128, -128, -128, -37, -60, -77, -128, 
  -3, -60, 11, -26, 7, -43, -43, -77, -128, -128, 
  -128, -128, -128, -60, -128, -128, -50, -128, -128, -128, 
  -128, -128, -37, -60, -77, -128, -77, -128, -128, -128, 
  -128, -128, -77, -128, -77, -128, -77, -128, -128, -128, 
  120, 99, 115, 96, 110, 81, 93, 59, 50, 7, 
  28, 0, -128, -77, -50, -60, -50, -128, -128, -77, 
  -20, -77, -77, -43, -50, -128, -128, -128, -23, -37, 
  -77, -37, -37, -77, -50, -29, -43, -37, -37, -33, 
  119, 94, 117, 95, 114, 89, 98, 82, 100, 66, 
  59, 52, 40, 20, 41, 19, 27, 16, 5, 24, 
  42, 43, 67, 70, 55, -4, -29, -10, 19, -12, 
  0, -18, 15, 1, -10, 26, 24, 24, 34, 25, 
  111, 90, 115, 95, 116, 97, 117, 94, 109, 90, 
  96, 62, 46, 61, 91, 80, 97, 82, 92, 74, 
  92, 77, 98, 84, 79, 40, 54, 81, 103, 91, 
  105, 77, 46, 11, 17, 24, 40, 34, 43, 24, 
  105, 84, 103, 83, 116, 97, 120, 93, 114, 92, 
  109, 85, 90, 88, 110, 97, 118, 94, 112, 92, 
  109, 89, 113, 96, 110, 84, 102, 99, 122, 99, 
  117, 90, 92, 67, 74, 61, 76, 64, 75, 63, 
  101, 74, 98, 74, 101, 80, 109, 86, 105, 84, 
  109, 82, 102, 91, 111, 88, 108, 84, 108, 79, 
  96, 79, 104, 80, 105, 69, 99, 84, 106, 80, 
  102, 73, 97, 55, 63, 56, 90, 73, 75, 59, 
  91, 66, 88, 62, 93, 73, 93, 74, 102, 82, 
  104, 77, 94, 79, 107, 80, 89, 67, 96, 75, 
  94, 72, 97, 71, 92, 75, 98, 79, 99, 72, 
  96, 74, 90, 40, 40, 42, 82, 65, 65, 25, 
  89, 63, 85, 55, 89, 70, 96, 72, 98, 79, 
  100, 72, 98, 76, 103, 78, 91, 73, 91, 64, 
  86, 57, 86, 60, 81, 65, 82, 68, 90, 61, 
  85, 62, 91, 54, 64, 48, 70, 43, 69, 44, 
  87, 61, 80, 49, 80, 55, 92, 65, 92, 70, 
  97, 73, 99, 78, 103, 69, 80, 56, 80, 62, 
  85, 52, 78, 57, 89, 58, 80, 60, 80, 52, 
  85, 64, 75, 42, 62, 31, 78, 59, 55, 28, 
  85, 53, 75, 52, 79, 51, 86, 52, 85, 58, 
  94, 71, 92, 80, 93, 9, 65, 41, 76, 38, 
  79, 49, 59, 36, 78, 61, 76, 29, 62, 42, 
  77, 43, 59, 25, 39, -1, 64, 37, 58, 32, 
  80, 47, 73, 47, 74, 53, 82, 44, 71, 48, 
  80, 58, 95, 69, 80, -4, 39, 13, 60, 25, 
  64, 17, 51, 14, 69, 40, 74, 32, 62, 34, 
  69, 30, 62, 20, 49, 7, 53, 6, 49, 28, 
  74, 42, 67, 37, 70, 41, 77, 32, 72, 52, 
  78, 59, 92, 45, 52, -23, 44, 12, 48, 18, 
  69, 1, 45, -2, 60, 32, 60, -26, 37, 4, 
  56, 14, 56, 21, 50, 4, 47, -1, 49, 19, 
  69, 26, 60, 29, 64, 14, 62, 16, 65, 46, 
  78, 45, 81, 42, 61, -128, 19, -12, 52, -1, 
  56, -26, -4, -128, 52, 30, 46, -128, -37, -128, 
  32, -2, 35, -16, 48, -3, 35, -20, 39, 9, 
  65, 12, 57, 25, 63, 29, 62, 11, 66, 35, 
  74, 50, 79, 4, 38, -128, -12, -18, 39, -37, 
  39, -60, -43, -77, 52, 18, 46, -128, -128, -128, 
  20, -128, -10, -29, 48, -2, 9, -128, 41, 0, 
  59, 7, 55, 13, 58, 30, 67, 4, 60, 35, 
  74, 60, 47, -60, 1, -128, 0, -60, 19, -50, 
  35, -50, -128, -128, -14, -10, 40, -128, -128, -128, 
  -29, -128, -23, -29, 37, -26, 32, -20, 35, 0, 
  50, -50, 35, -60, 28, -8, 49, -37, 44, 9, 
  61, 40, 2, -128, -128, -128, -128, -128, -43, -128, 
  -8, -128, -128, -128, -128, -128, -37, -128, -128, -128, 
  -128, -128, -128, -128, -16, -128, -33, -128, -33, -128, 
  40, -50, 9, -128, 19, -77, 12, -128, 16, -33, 
  49, -37, -77, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -12, -128, -128, -128, -14, -128, 
  -14, -128, -18, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
