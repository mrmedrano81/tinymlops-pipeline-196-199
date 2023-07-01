/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/af7a8296_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_af7a8296_nohash_0.cc" \
 */
#include "no_af7a8296_nohash_0.h"


const int g_no_af7a8296_nohash_0_width = 40;
const int g_no_af7a8296_nohash_0_height = 49;
alignas(16) const signed char g_no_af7a8296_nohash_0_data[] = {
  107, 91, 109, 92, 100, 95, 118, 97, 109, 96, 
  115, 92, 106, 92, 104, 87, 110, 92, 100, 89, 
  102, 86, 92, 85, 94, 87, 101, 83, 75, 68, 
  86, 81, 94, 80, 78, 70, 74, 70, 75, 50, 
  94, 91, 109, 82, 107, 75, 90, 66, 91, 65, 
  89, 79, 97, 79, 105, 86, 89, 74, 89, 82, 
  98, 73, 83, 67, 90, 72, 85, 62, 79, 70, 
  83, 63, 77, 55, 70, 64, 74, 63, 69, 39, 
  49, 11, 62, 74, 100, 66, 80, 53, 55, 39, 
  79, 61, 90, 71, 96, 82, 90, 64, 91, 55, 
  78, 62, 87, 59, 81, 55, 75, 65, 80, 52, 
  79, 57, 57, 32, 59, 44, 58, 46, 65, 25, 
  94, 27, 75, 62, 89, 56, 54, 61, 87, 46, 
  59, 52, 90, 56, 65, 55, 99, 59, 81, 59, 
  73, 49, 78, 58, 75, 50, 67, 48, 74, 52, 
  64, 51, 74, 53, 70, 44, 51, 29, 59, 32, 
  70, 13, 79, 60, 82, 38, 67, 49, 91, 60, 
  72, 47, 77, 59, 80, 59, 78, 5, 81, 53, 
  72, 45, 72, 47, 67, 33, 72, 51, 76, 35, 
  54, 40, 51, 14, 60, 29, 56, 24, 49, 19, 
  95, 63, 62, 26, 73, 46, 69, 45, 68, 27, 
  64, 23, 54, 14, 65, 15, 57, 40, 71, 14, 
  54, 40, 70, 45, 49, 8, 51, 20, 65, 46, 
  62, 29, 57, 25, 57, 32, 55, 34, 57, 32, 
  79, -2, 60, 54, 77, 46, 70, 33, 48, 11, 
  74, 53, 52, -60, 64, 40, 85, 43, 53, 44, 
  67, 47, 76, 32, 57, 37, 70, 44, 52, 32, 
  57, 27, 57, 16, 55, -7, 47, 16, 38, -6, 
  75, 40, 52, 40, 77, 34, 70, 9, 71, 52, 
  64, 25, 60, -2, 49, 37, 61, 19, 55, -20, 
  42, 33, 69, -26, 59, 40, 69, 14, 53, 27, 
  64, 2, 25, 4, 53, 31, 50, 4, 32, 14, 
  83, 59, 78, 35, 63, 41, 42, -12, 44, 5, 
  43, -37, 66, 19, 64, 25, 62, 32, 42, 38, 
  55, 14, 34, 5, 57, 22, 43, 2, 51, 25, 
  40, -20, 27, 6, 41, -14, 34, 4, 54, -14, 
  60, 4, 75, 41, 52, 23, 65, 9, 45, 24, 
  70, 30, 57, -20, 60, 29, 40, -43, 65, 15, 
  52, 0, 63, 42, 63, 22, 49, -37, 58, 19, 
  34, 15, 46, 14, 44, -23, 42, 22, 55, -4, 
  48, -37, 64, -1, -43, -77, 50, 40, 60, 37, 
  65, -10, 29, 5, 33, 25, 65, -7, 49, 10, 
  35, -26, 44, -18, 57, 19, 24, -60, 34, 8, 
  40, -43, 35, -18, 38, 15, 39, -18, 16, -29, 
  55, 79, 113, 90, 96, 45, 34, 34, 74, 1, 
  17, -2, 47, -37, 56, -18, -1, 9, 43, -77, 
  60, -14, 62, 29, 57, -3, 4, -18, 47, 18, 
  35, -77, 39, -14, 38, -16, 19, -20, 31, -50, 
  99, 94, 108, 76, 93, 76, 90, 59, 61, -37, 
  41, 34, 45, -3, 64, -60, 44, 32, 35, -128, 
  26, -16, 43, -29, 17, -23, 49, -7, 40, 11, 
  51, 14, 29, -23, 28, -50, 27, -23, 39, 2, 
  98, 92, 115, 77, 65, 75, 109, 72, 45, -77, 
  47, -12, 55, 7, 29, -29, 12, 24, 47, 33, 
  45, -18, 57, 21, 60, 32, 51, -16, 21, -50, 
  44, -6, 32, -29, 29, -10, 42, -2, 35, 20, 
  90, 83, 110, 79, 32, 62, 105, 81, 41, 39, 
  61, -128, 53, 24, 36, -14, 35, 24, 41, 44, 
  59, 48, 70, 52, 87, 60, 77, 0, 17, -10, 
  44, 27, 29, -4, 35, -20, 36, -18, 38, 22, 
  80, 75, 105, 82, 102, 79, 103, 90, 105, 69, 
  83, 39, 74, 65, 77, 61, 77, 50, 67, 78, 
  109, 84, 74, 65, 96, 87, 110, 87, 106, 74, 
  99, 83, 86, 43, 39, 4, 39, 24, 59, 42, 
  75, 61, 89, 53, 54, 75, 117, 94, 95, 87, 
  112, 61, 96, 77, 69, 72, 70, 46, 76, 84, 
  97, 85, 105, 87, 112, 95, 115, 90, 117, 90, 
  105, 84, 107, 84, 77, 9, 58, -1, 74, 62, 
  84, 58, 79, 21, 38, 79, 89, 17, 90, 93, 
  107, 77, 110, 74, 103, 74, 94, 86, 106, 69, 
  108, 87, 96, 76, 104, 83, 95, 85, 102, 87, 
  105, 75, 103, 89, 109, 91, 110, 90, 107, 85, 
  77, 39, 59, -77, 39, 72, 79, -128, 105, 84, 
  84, 83, 103, 49, 106, 67, 109, 84, 112, 75, 
  91, 11, 79, 70, 100, 62, 89, 57, 84, 62, 
  85, 51, 88, 70, 102, 81, 104, 81, 99, 76, 
  75, 19, 32, -128, 75, 65, 64, -128, 113, 84, 
  82, 74, 84, 72, 101, 60, 104, 57, 86, 29, 
  57, 19, 74, 52, 88, 55, 77, 54, 82, 58, 
  54, 22, 71, 50, 69, 42, 72, 39, 74, 52, 
  77, 4, 6, -128, 85, 44, 5, 4, 107, 62, 
  67, 84, 83, 79, 90, 80, 97, 55, 82, 5, 
  37, -43, 5, -43, 57, 15, 73, 14, 62, 26, 
  37, -10, 61, -50, -50, -128, -128, -128, 65, 35, 
  79, 2, -20, -128, 93, 49, -18, 56, 99, 15, 
  79, 63, 56, 57, 74, 69, 35, 34, 44, -128, 
  -128, -128, 11, -128, -33, -128, 44, -33, 41, -14, 
  30, -37, 44, -128, -128, -128, -128, -128, 51, 7, 
  77, -23, -128, -128, 96, 50, -37, 36, 70, -128, 
  62, 24, 52, 21, 79, 55, -16, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, 27, -128, -7, -128, 
  -7, -128, -77, -128, -128, -128, -128, -128, 36, 0, 
  67, -128, -128, -128, 87, 29, -128, -14, 52, -128, 
  49, -60, 66, 45, -8, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  61, -128, -128, -128, 81, 12, -128, -37, 42, -128, 
  34, -128, 33, -77, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  60, -128, -128, -128, 68, -14, -128, -128, -128, -128, 
  -128, -128, 33, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  52, -128, -128, -128, 44, -128, -128, -128, -128, -128, 
  -128, -128, -4, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -14, -128, -128, -128, -26, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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