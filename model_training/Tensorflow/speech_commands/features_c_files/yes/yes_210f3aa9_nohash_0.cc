/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/210f3aa9_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_210f3aa9_nohash_0.cc" \
 */
#include "yes_210f3aa9_nohash_0.h"


const int g_yes_210f3aa9_nohash_0_width = 40;
const int g_yes_210f3aa9_nohash_0_height = 49;
alignas(16) const signed char g_yes_210f3aa9_nohash_0_data[] = {
  111, 94, 98, 85, 103, 85, 99, 89, 100, 85, 
  93, 85, 95, 86, 104, 85, 105, 91, 92, 81, 
  80, 68, 76, 69, 77, 68, 68, 71, 67, 65, 
  67, 72, 72, 53, 56, 57, 50, 45, 48, 25, 
  80, 51, 71, 73, 96, 85, 95, 50, 80, 61, 
  83, 63, 67, 67, 84, 76, 93, 69, 86, 69, 
  78, 65, 84, 65, 65, 57, 64, 53, 58, 44, 
  75, 54, 55, 40, 56, 36, 47, 42, 55, 47, 
  92, 57, 84, 73, 78, 66, 97, 73, 70, 67, 
  84, 60, 87, 67, 82, 43, 83, 66, 72, 36, 
  72, 59, 67, 16, 53, 58, 49, 42, 52, 38, 
  60, 29, 35, 14, 38, 17, 47, 29, 37, -6, 
  93, 78, 77, 49, 82, 44, 74, 53, 82, 44, 
  76, 49, 80, 59, 80, 50, 58, 47, 70, 61, 
  57, 40, 71, 30, 52, 35, 54, 27, 50, 23, 
  41, -20, 9, 5, 33, 4, 21, 19, 28, -18, 
  66, 30, 54, 49, 77, 44, 59, 30, 67, 55, 
  60, 53, 67, 44, 67, 39, 59, 44, 59, 35, 
  64, 32, 59, 27, 39, 11, 45, -14, 59, 20, 
  40, -10, 40, 41, 35, 22, 46, 37, 37, 11, 
  59, 51, 62, -77, 57, 11, 40, 24, 65, 17, 
  62, 60, 87, 42, 76, 59, 69, 44, 59, 16, 
  67, 40, 59, 28, 40, -37, 47, 11, 34, -26, 
  15, -33, 20, 24, 37, 6, 35, 2, -2, -23, 
  70, 30, 51, 19, 43, -128, 19, 19, 44, 20, 
  44, 9, 53, 9, 24, 6, 55, 11, 58, 17, 
  58, 24, 63, 34, 48, 29, 45, 9, 43, 7, 
  31, -37, 14, -50, 15, 5, 34, 6, 18, -20, 
  61, 0, 59, -77, 19, -77, 31, -128, 28, -77, 
  51, -8, 43, 24, 70, 23, 19, -3, 48, 13, 
  43, 16, 32, -1, 52, -16, 19, -16, 44, -2, 
  5, -33, 25, -20, 16, -29, 9, -6, 34, -23, 
  45, -128, 45, -33, 17, -16, 48, -12, 34, -37, 
  46, -12, 25, -128, -50, -77, 40, -4, 52, -128, 
  52, -26, -4, -60, 30, -4, 40, -26, 25, -8, 
  21, -60, -10, -18, -8, -50, 17, -6, 25, -60, 
  54, -60, 62, 40, 60, -14, 25, -10, 52, 14, 
  64, -6, 36, -43, 40, 29, 50, -14, 51, -6, 
  48, 17, 48, -60, 16, -26, 11, -43, 20, -10, 
  13, -37, 9, -14, 20, -128, 11, -50, -8, -128, 
  47, -2, 38, -60, 39, -23, 51, 15, 59, 28, 
  32, 14, 60, -18, 55, 20, 48, -26, 21, -60, 
  23, -128, 17, 18, 30, -77, 17, -43, 14, -60, 
  7, -23, 4, -128, -8, -60, -8, -128, -3, -50, 
  55, 32, 62, -8, 22, 12, 47, -128, 17, -128, 
  51, 9, 29, -43, 29, -60, 47, -43, 43, -2, 
  44, -14, 7, -14, 37, 10, -3, -77, 10, -50, 
  1, -37, 11, -37, 17, -37, 6, -128, -12, -43, 
  -128, -128, 23, -128, -12, -20, 34, -128, 11, -23, 
  58, 23, 52, 13, 43, 22, 37, -10, 36, -26, 
  36, -7, 34, -33, 20, -43, -23, -50, -23, -33, 
  22, -128, 12, -12, -1, -77, -23, -128, -2, -77, 
  57, -43, 41, 14, 29, -128, -1, -60, 27, 27, 
  75, 32, 19, -10, 57, 14, 49, -4, 39, -8, 
  52, -33, 38, -26, 48, 13, 56, 19, 65, 45, 
  50, 42, 61, 24, 32, -43, -1, -12, 15, -29, 
  58, 9, 53, 44, 63, 25, 44, 30, 62, -33, 
  23, -20, 42, -12, 59, -10, 27, -128, 26, -23, 
  28, -29, 8, 15, 63, 21, 41, 25, 62, 57, 
  80, 65, 59, 19, 38, 4, 29, 4, 26, -16, 
  -77, -60, 64, 26, 49, -10, 39, -60, 26, -26, 
  47, -128, 37, -29, 11, -33, 8, -128, 45, -10, 
  36, -77, -4, -23, 49, 22, 27, -50, 31, 12, 
  65, 29, 45, -8, 12, -16, -7, -37, 2, 9, 
  117, 98, 113, 97, 120, 97, 97, 79, 82, 63, 
  57, 11, 42, -1, 32, -50, 22, -7, 39, -16, 
  54, 20, 70, 70, 97, 77, 90, 79, 92, 61, 
  76, 70, 72, 40, 43, -1, 20, 13, 75, 80, 
  113, 90, 91, 88, 116, 90, 90, 83, 79, 79, 
  92, 35, 65, -29, -77, -128, -18, -128, 25, -50, 
  23, 47, 87, 81, 104, 84, 111, 88, 98, 52, 
  65, 64, 86, 65, 48, -12, 29, 26, 83, 79, 
  101, 72, 79, 87, 105, 63, 116, 94, 107, 90, 
  97, 84, 79, 55, 65, 50, 39, -77, 36, 29, 
  65, 81, 111, 89, 106, 77, 104, 78, 87, 62, 
  78, 59, 77, 62, 70, 14, 37, 43, 82, 60, 
  84, 44, 96, 65, 70, 67, 117, 90, 116, 85, 
  113, 91, 102, 77, 94, 56, 74, 43, 83, 72, 
  108, 97, 115, 84, 90, 75, 101, 71, 89, 57, 
  78, 57, 78, 63, 72, 30, 34, 42, 89, 44, 
  69, -18, 99, 59, 52, 74, 94, 71, 116, 87, 
  114, 76, 110, 82, 94, 75, 81, 54, 92, 89, 
  111, 84, 97, 61, 87, 77, 99, 68, 87, 59, 
  88, 65, 82, 57, 71, 52, 59, 29, 61, 53, 
  43, -128, 89, 15, 51, 64, 65, 59, 77, 89, 
  108, 80, 97, 76, 100, 77, 99, 69, 108, 89, 
  92, 52, 70, 39, 78, 68, 87, 42, 74, 54, 
  67, 39, 70, 14, 66, 50, 44, -10, 54, 30, 
  46, -128, 85, 18, 46, 59, 69, 61, 86, 75, 
  94, 62, 83, 65, 91, 63, 86, 64, 98, 63, 
  69, -18, 30, -128, 63, 29, 67, 32, 62, 20, 
  52, -128, 53, -128, 50, 38, 54, 9, 44, -14, 
  60, -77, 65, -18, 14, 34, 60, 21, 68, 22, 
  69, 15, 67, 39, 65, -2, 62, 46, 75, -43, 
  34, -128, -128, -128, -77, -128, 0, -128, -20, -128, 
  -23, -128, 11, -128, 34, 4, 44, -128, -26, -128, 
  33, -16, -50, -128, -128, -128, -77, -128, -37, -128, 
  -128, -128, -20, -128, 45, -18, 37, -128, 44, -50, 
  10, -128, -128, -128, -128, -128, -16, -128, -128, -128, 
  11, 6, 53, -128, 25, 5, 58, -77, 12, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, 9, -128, -128, -128, 27, -128, 
  -128, -128, -128, -128, -128, -128, 4, -43, 2, -60, 
  54, 66, 95, 58, 107, 91, 112, 89, 102, 52, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -10, -128, -128, -128, -128, -128, -37, -128, 24, -43, 
  49, 61, 97, 54, 104, 85, 102, 84, 92, 72, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, -128, -128, -128, -128, -77, -128, 13, -60, 
  13, 37, 89, 70, 94, 82, 107, 84, 97, 64, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 17, -37, 
  47, 55, 87, 59, 93, 80, 100, 70, 89, 59, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -6, -128, 
  49, 35, 81, 58, 91, 67, 97, 63, 92, 73, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 20, 18, 
  29, -33, 56, 57, 99, 57, 69, 65, 92, 54, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -16, -29, 
  32, -12, 49, 42, 65, 32, 73, 52, 64, 19, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -77, 
  31, -3, 70, 44, 41, 37, 82, 17, 58, 25, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, 19, 64, -14, 63, 37, 80, 23, 56, 19, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -6, -43, 24, -43, 50, 29, 61, -18, 44, -6, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -3, 14, 56, -10, 52, 14, 54, -33, 43, -4, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -60, 
  32, -8, 50, 12, 28, -128, -14, -128, 15, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -23, -128, -128, -128, 
  38, -20, 6, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -33, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
