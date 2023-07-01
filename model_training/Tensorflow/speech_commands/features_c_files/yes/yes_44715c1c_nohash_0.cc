/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/44715c1c_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_44715c1c_nohash_0.cc" \
 */
#include "yes_44715c1c_nohash_0.h"


const int g_yes_44715c1c_nohash_0_width = 40;
const int g_yes_44715c1c_nohash_0_height = 49;
alignas(16) const signed char g_yes_44715c1c_nohash_0_data[] = {
  85, 89, 95, 79, 99, 84, 89, 85, 102, 87, 
  99, 90, 89, 84, 99, 77, 69, 72, 83, 71, 
  89, 72, 82, 68, 77, 67, 70, 54, 63, 50, 
  56, 53, 57, 55, 49, 45, 49, 47, 43, 7, 
  59, 54, 76, 47, 80, 56, 80, 72, 95, 77, 
  100, 69, 89, 72, 77, 56, 76, 69, 87, 67, 
  78, 65, 77, 59, 64, 50, 62, 56, 66, 49, 
  45, 47, 51, 26, 49, 34, 36, 36, 36, -4, 
  73, 58, 70, 50, 66, 47, 77, 51, 79, 55, 
  73, 46, 81, 49, 53, 63, 79, 52, 85, 58, 
  64, 52, 59, 50, 67, 52, 54, 39, 62, 45, 
  57, 39, 50, 35, 43, 30, 39, 31, 42, -7, 
  70, 42, 48, 48, 63, 49, 69, 43, 63, 51, 
  63, 18, 86, 60, 60, 64, 75, 51, 68, 34, 
  68, 40, 70, 54, 52, 39, 42, 16, 52, 19, 
  45, 40, 50, 17, 44, 12, 20, -6, 23, -2, 
  81, 49, 79, 49, 43, -14, 70, 46, 58, 35, 
  41, 49, 78, 43, 62, 24, 61, 34, 70, 54, 
  80, 16, 49, 39, 59, 19, 43, 33, 41, 21, 
  34, -18, 25, 0, 34, 20, 35, 6, 24, -8, 
  70, 44, 57, 19, 42, 54, 83, 40, 67, 0, 
  63, 37, 46, -18, 76, 49, 73, 39, 60, 42, 
  51, -23, 59, 27, 49, 4, 57, 4, 32, 1, 
  34, 1, 49, 2, 45, 19, 30, 19, 26, -33, 
  16, 11, 62, -26, 30, -6, 41, 17, 58, 4, 
  53, 41, 69, 46, 54, 49, 77, 40, 44, 16, 
  40, 7, 54, 34, 61, 31, 54, 16, 48, 28, 
  39, -37, 24, 10, 37, 20, 31, 14, 6, -23, 
  11, -128, 34, 40, 50, -16, 60, 5, 15, -37, 
  20, -14, 69, 49, 70, 58, 67, -77, 19, -3, 
  40, -60, 47, 15, 58, 35, 45, 13, 18, 34, 
  39, -37, 30, -23, 25, -4, 29, -29, 35, -26, 
  43, 24, 57, -23, 71, 45, 55, 52, 59, 17, 
  55, 11, 49, 13, 71, -4, 30, -1, 62, 30, 
  55, -16, 39, 36, 36, -20, 47, 17, 21, -26, 
  4, -20, 14, -14, 29, -10, 31, -2, 5, -16, 
  90, 56, 80, 59, 79, 62, 70, 15, 14, -3, 
  50, 19, 55, 36, 50, 8, 60, 4, 53, -10, 
  40, 22, 39, -18, 70, 59, 49, -26, 19, -14, 
  35, -6, 25, -33, 18, 7, 35, -16, 29, -14, 
  125, 101, 124, 104, 124, 91, 112, 91, 100, 58, 
  69, 37, 62, 19, 54, -33, 56, -4, 29, -23, 
  29, 9, 68, 84, 122, 101, 112, 74, 74, 74, 
  98, 49, 54, 14, 72, 59, 68, 48, 82, 60, 
  117, 93, 76, 88, 115, 91, 116, 88, 107, 92, 
  92, 40, 52, 34, 63, 22, 42, -4, 47, 5, 
  43, 29, 85, 82, 109, 88, 114, 84, 98, 97, 
  119, 85, 58, 45, 62, 45, 45, 42, 80, 57, 
  109, 86, 92, 76, 105, 80, 103, 86, 102, 90, 
  104, 80, 94, 50, 54, -77, 43, 7, 58, -18, 
  23, 5, 61, 72, 105, 81, 104, 82, 112, 91, 
  110, 70, 73, 65, 119, 99, 75, 83, 115, 82, 
  101, 79, 82, 67, 95, 66, 96, 70, 95, 74, 
  89, 44, 69, 59, 79, 20, 42, -18, 45, -60, 
  21, 33, 72, 57, 85, 60, 104, 73, 101, 76, 
  94, 35, 84, 76, 113, 89, 75, 72, 99, 75, 
  93, 67, 63, 66, 92, 59, 90, 64, 89, 64, 
  88, 49, 54, 53, 69, 18, 45, -23, 14, -128, 
  12, 36, 67, 0, 77, 60, 99, 74, 91, 55, 
  69, 11, 93, 77, 96, 67, 77, 73, 107, 90, 
  85, 55, 71, 65, 90, 59, 86, 52, 87, 55, 
  73, 53, 64, -7, 37, 9, 51, -33, 32, -2, 
  53, 25, 50, 35, 77, 75, 99, 63, 97, 57, 
  64, 21, 111, 89, 84, 36, 82, 71, 95, 71, 
  80, 50, 81, 68, 89, 51, 87, 51, 72, 42, 
  68, 44, 43, -8, 51, -43, 10, -60, 29, -77, 
  39, 42, 76, 44, 85, 79, 94, 78, 102, 54, 
  45, -26, 101, 83, 60, -128, 79, 67, 96, 75, 
  75, 36, 86, 77, 98, 66, 84, 45, 91, 53, 
  83, 57, 57, -3, 37, 13, 45, 16, 37, -14, 
  40, 44, 82, 74, 97, 68, 87, 82, 100, 55, 
  82, 65, 73, 55, 76, 50, 53, 14, 77, 59, 
  62, 0, 101, 82, 102, 83, 101, 70, 103, 70, 
  84, 62, 105, 87, 113, 95, 114, 93, 102, 85, 
  110, 98, 118, 97, 108, 70, 104, 94, 105, 68, 
  98, 96, 111, 59, 9, -128, 69, 50, 80, 69, 
  24, -128, 81, 38, 63, 82, 114, 87, 99, 64, 
  93, 61, 99, 81, 109, 88, 109, 92, 114, 90, 
  111, 90, 119, 90, 90, 52, 101, 81, 92, 64, 
  93, 94, 115, 83, -20, -128, 76, 17, 65, 49, 
  -6, -128, -128, -128, 7, -77, 99, 92, 94, 81, 
  107, 78, 97, 80, 93, 74, 98, 77, 101, 80, 
  106, 90, 110, 65, 70, 46, 89, 60, 77, 44, 
  79, 79, 100, 49, -128, -128, 40, -23, -50, -128, 
  5, -43, -128, -128, -3, -29, 56, 72, 96, 80, 
  118, 79, 103, 71, 104, 67, 95, 74, 93, 76, 
  105, 87, 100, 55, 70, 37, 79, 40, 70, 26, 
  71, 44, 80, 34, -128, -128, 30, -128, -128, -128, 
  -128, -77, -128, -128, 20, 26, -77, 44, 90, 65, 
  113, 92, 95, 50, 96, 62, 97, 68, 100, 71, 
  110, 73, 82, -4, 49, -10, 65, 21, 54, 6, 
  57, -18, 30, -128, -128, -128, 22, -128, -128, -128, 
  -128, -50, 5, -128, -50, 31, -128, 8, 96, 5, 
  98, 92, 85, 74, 84, 79, 93, 80, 99, 76, 
  89, 72, 72, -26, 55, 24, 60, -8, 52, -37, 
  41, -26, 1, -128, -128, -128, 17, -128, -128, -128, 
  -128, -128, -6, -128, -128, 20, -128, -18, 91, 13, 
  85, 84, 95, 88, 86, 78, 92, 81, 96, 79, 
  94, 27, 63, -12, 39, 4, 41, -128, 34, -128, 
  7, -128, -128, -128, -128, -128, 26, -128, -128, -128, 
  -128, -128, -128, -128, -128, -4, -128, -128, 68, -77, 
  82, 59, 107, 88, 98, 81, 96, 72, 104, 73, 
  78, -29, 41, -43, 40, -29, 9, -128, -60, -128, 
  -50, -128, -128, -77, -128, -128, 4, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -60, 65, 
  80, 44, 108, 55, 95, 45, 82, 56, 92, 72, 
  71, -18, 31, -77, 48, -14, 27, -128, -14, -128, 
  -60, -128, -128, 30, 39, -128, 4, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -33, -128, 48, 21, 
  62, 50, 78, 40, 83, 39, 81, 42, 79, 62, 
  56, -29, 16, -128, 32, -14, 32, -128, -29, -128, 
  -60, -128, -60, 48, 73, -128, -18, -128, -128, -128, 
  -128, -128, -20, -128, -128, -128, -128, -128, -128, 5, 
  37, -26, 56, -18, 54, -18, 54, 4, 46, -29, 
  44, -128, -77, -128, -128, -128, -37, -128, -128, -128, 
  -128, -128, -128, -128, 7, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, -60, 
  -29, -128, 14, -128, -6, -128, -33, -128, -20, -128, 
  16, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -37, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 11, -128, -128, -128, 88, 75, 87, 45, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 51, 32, 60, 24, 110, 85, 95, 73, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 23, -128, 27, 5, 90, 78, 78, 52, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 31, -77, 7, -7, 100, 65, 90, 67, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 5, -128, 76, 53, 70, 51, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -1, -128, -128, -128, 71, 40, 64, 54, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -33, -128, 57, 32, 55, 27, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 8, -128, 46, -16, 49, 11, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, 35, -4, 21, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 2, -128, -60, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, 29, 28, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -26, -128, 23, 50, 52, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 1, -128, 40, -37, 2, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};