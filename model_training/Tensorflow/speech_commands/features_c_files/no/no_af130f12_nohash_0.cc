/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/af130f12_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_af130f12_nohash_0.cc" \
 */
#include "no_af130f12_nohash_0.h"


const int g_no_af130f12_nohash_0_width = 40;
const int g_no_af130f12_nohash_0_height = 49;
alignas(16) const signed char g_no_af130f12_nohash_0_data[] = {
  117, 92, 110, 85, 88, 72, 79, 72, 79, 74, 
  66, 44, 42, 45, 42, 57, 52, 45, 50, 47, 
  45, 44, 45, 45, 69, 50, 39, 35, 47, 37, 
  44, 51, 60, 40, 40, 53, 64, 57, 58, 45, 
  95, 72, 97, 78, 85, 64, 65, 64, 72, 56, 
  67, 61, 55, 34, 36, 17, 30, 29, 34, 37, 
  42, 41, 56, 49, 52, 28, 51, 41, 47, 44, 
  51, 37, 45, 39, 47, 43, 55, 29, 47, 31, 
  96, 64, 75, 60, 84, 69, 65, 32, 27, 6, 
  72, 45, 42, 17, 57, 45, 54, 31, 53, 34, 
  30, 20, 54, 41, 45, 40, 45, 18, 47, 49, 
  54, 17, 50, 42, 37, 15, 51, 48, 53, 18, 
  85, 72, 65, 21, 65, 30, 73, 54, 59, 39, 
  67, 40, 42, 21, 45, 37, 45, -37, -10, -18, 
  37, 16, 35, 19, 29, 31, 37, 38, 57, 32, 
  48, 23, 37, 29, 49, 28, 37, 31, 40, 18, 
  54, 50, 70, 44, 74, 54, 47, 4, 51, 52, 
  75, 49, 34, 26, 29, 1, 65, 50, 39, 17, 
  47, 30, 42, -2, 36, 22, 53, -7, 15, -18, 
  15, 20, 45, 26, 35, 19, 34, 16, 41, 16, 
  32, 42, 80, 46, 69, -12, 62, -4, 53, 54, 
  62, 35, 46, -10, 49, 23, 58, 36, 52, 2, 
  35, 25, 38, -29, 11, -7, 36, 20, 37, 35, 
  40, -16, 46, 18, 37, -10, 35, 14, 35, -2, 
  67, 17, 70, 4, 50, 35, 52, 43, 52, 50, 
  66, 40, 40, 1, 50, -4, 13, 2, 25, -12, 
  44, -20, 34, -50, -3, 4, 59, 13, -2, -23, 
  4, 2, 5, 23, 44, 4, 42, -29, 38, 14, 
  104, 85, 76, 74, 95, 67, 71, -4, 61, 55, 
  74, 49, 45, 24, 24, -4, 36, -2, 36, -29, 
  30, 10, 35, -14, 37, 1, 52, 28, 29, -20, 
  34, 13, 24, 4, 33, -3, 38, -2, 43, 4, 
  110, 81, 106, 94, 104, 80, 104, 71, 94, 45, 
  76, 28, 52, 50, 59, -1, -16, -60, 7, 9, 
  54, -29, 4, 2, 47, 34, 69, 37, 40, -4, 
  19, 19, 31, -14, 44, 37, 45, -1, 29, 0, 
  103, 80, 94, 86, 108, 70, 105, 70, 94, 58, 
  72, 50, 88, 61, 80, 10, 40, 22, 17, -8, 
  45, 50, 57, 25, 29, -8, 54, 24, 7, -12, 
  52, 42, 60, -37, 40, 29, 31, -26, 42, 0, 
  98, 75, 82, 75, 102, 62, 101, 74, 90, 61, 
  9, -50, 79, 55, 72, 24, 52, 50, 31, -50, 
  31, -3, 17, -1, 47, 41, 66, 34, 49, 6, 
  23, 36, 46, 11, 60, 43, 32, -2, 35, -4, 
  95, 74, 72, 70, 100, 55, 95, 74, 87, 67, 
  46, 16, 77, 55, 81, 50, 49, 44, 46, -23, 
  34, -8, 32, 16, 60, 41, 73, 56, 62, 40, 
  37, 38, 42, -4, 54, 27, 29, 7, 36, -3, 
  88, 70, 87, 76, 112, 93, 104, 90, 93, 79, 
  99, 86, 94, 82, 91, 78, 92, 67, 91, 82, 
  111, 85, 94, 76, 99, 94, 115, 99, 119, 91, 
  94, 77, 93, 54, 84, 65, 81, 74, 93, 62, 
  79, 55, 22, 65, 96, 59, 109, 95, 105, 87, 
  95, 87, 102, 88, 100, 85, 103, 92, 114, 69, 
  79, 77, 101, 75, 102, 79, 97, 65, 105, 92, 
  104, 60, 84, 59, 82, 62, 70, 49, 87, 69, 
  70, 41, 52, 55, 84, 44, 104, 77, 105, 87, 
  107, 90, 107, 86, 107, 88, 117, 85, 102, 58, 
  86, 56, 90, 62, 83, 87, 100, 54, 91, 81, 
  100, 60, 77, 45, 71, 53, 68, -16, 62, 73, 
  63, 31, 49, 45, 76, 40, 90, 54, 102, 83, 
  106, 87, 101, 78, 112, 90, 116, 80, 89, 9, 
  37, 45, 70, 44, 75, 62, 84, 29, 81, 62, 
  94, 63, 85, 37, 64, 21, 43, -128, 51, 69, 
  60, 15, 60, 39, 67, 44, 87, 47, 104, 78, 
  100, 75, 96, 71, 109, 84, 104, 58, 84, 47, 
  76, 16, 68, 35, 60, 48, 66, 9, 55, 52, 
  78, 53, 67, 39, 62, 8, 17, -128, 38, 37, 
  57, 4, 68, 40, 65, 51, 84, 42, 100, 72, 
  93, 60, 99, 70, 104, 73, 88, 43, 71, 57, 
  65, 27, 64, 40, 74, 40, 77, 32, 68, 64, 
  82, 47, 65, 41, 47, -23, 27, -77, 28, 55, 
  49, -43, 78, 39, 56, 65, 80, 32, 99, 55, 
  97, 52, 100, 70, 97, 69, 82, 38, 59, 51, 
  65, 47, 68, 41, 71, 62, 88, 50, 84, 65, 
  95, 63, 81, 36, 63, 29, 35, -6, 57, 39, 
  45, -77, 76, 18, 29, 61, 72, 32, 93, 41, 
  89, 37, 95, 69, 90, 54, 59, -26, 45, 22, 
  60, 43, 69, 25, 56, 24, 72, 34, 75, 53, 
  70, 43, 70, 29, 55, 14, 28, -23, 52, -3, 
  36, -128, 77, 6, 6, 60, 65, 44, 86, -2, 
  77, 27, 85, 72, 84, 46, 22, -6, 37, -60, 
  55, 13, 62, 16, 55, 31, 76, 19, 67, 35, 
  75, 34, 65, -20, 53, 12, -4, -128, 53, -60, 
  5, -128, 80, -2, -10, 57, 52, 58, 82, -128, 
  62, 48, 84, 73, 72, 24, -20, -128, -14, -16, 
  47, 4, 34, -16, 36, 21, 55, -77, 56, 34, 
  49, -7, 44, -77, 56, 0, -18, -128, 18, -128, 
  6, -128, 82, -6, 21, 52, 34, 55, 53, -128, 
  38, 43, 87, 59, 32, -128, -128, -128, -60, -128, 
  -12, -77, 33, -50, 40, -128, 16, -128, 40, 11, 
  30, -16, 39, -128, 49, -29, -7, -128, -60, -33, 
  8, -128, 79, -77, 36, 34, 23, 39, -26, -128, 
  48, 20, 89, 33, -128, -128, -128, -128, -128, -128, 
  -12, -128, -50, -128, -18, -128, -128, -128, -10, -128, 
  -128, -128, -128, -128, 4, -128, -26, -128, -50, -23, 
  -8, -128, 80, -77, 52, 34, -16, -128, -128, -128, 
  53, -18, 57, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -12, -128, 
  -128, -128, -128, -128, -12, -128, -128, -128, -128, -128, 
  -50, -128, 77, -77, 62, 37, -128, -128, -128, -128, 
  60, -60, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, 67, -128, 69, 31, -60, -128, -128, -128, 
  50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -77, 54, -128, 61, -33, -128, -128, -128, -128, 
  16, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 31, -128, 44, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -10, -128, -20, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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