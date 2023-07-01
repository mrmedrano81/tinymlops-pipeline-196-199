/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/e1469561_nohash_1.wav" \
 * --output_c_file="features_c_files/yes/yes_e1469561_nohash_1.cc" \
 */
#include "yes_e1469561_nohash_1.h"


const int g_yes_e1469561_nohash_1_width = 40;
const int g_yes_e1469561_nohash_1_height = 49;
alignas(16) const signed char g_yes_e1469561_nohash_1_data[] = {
  123, 102, 120, 102, 122, 100, 118, 98, 109, 87, 
  90, 70, 105, 90, 104, 85, 110, 87, 97, 85, 
  112, 95, 112, 97, 103, 89, 113, 90, 100, 91, 
  95, 79, 90, 80, 96, 84, 102, 90, 92, 82, 
  109, 89, 117, 88, 118, 93, 106, 74, 95, 86, 
  98, 84, 102, 74, 92, 84, 100, 81, 97, 79, 
  87, 77, 105, 72, 89, 74, 96, 77, 95, 73, 
  87, 74, 83, 69, 85, 58, 94, 77, 81, 64, 
  87, 82, 111, 84, 114, 89, 94, 41, 85, 59, 
  89, 62, 89, 77, 87, 72, 88, 81, 95, 69, 
  82, 74, 92, 49, 98, 71, 85, 64, 85, 67, 
  95, 60, 87, 68, 86, 63, 88, 68, 77, 42, 
  60, 35, 90, 78, 102, 73, 76, 45, 83, 66, 
  95, 74, 82, 69, 85, 82, 90, 71, 105, 70, 
  80, 46, 85, 50, 93, 60, 74, 59, 82, 47, 
  77, 63, 76, 60, 83, 56, 89, 57, 68, 55, 
  48, 4, 71, 55, 74, 35, 72, 39, 98, 67, 
  93, 76, 82, 56, 80, 74, 90, 69, 101, 75, 
  59, 6, 63, -1, 69, 50, 76, 46, 87, 43, 
  73, 44, 72, 55, 75, 58, 80, 53, 58, 53, 
  66, 63, 91, 16, 65, 24, 89, 63, 73, 60, 
  90, 53, 76, 34, 84, 80, 94, 55, 90, 73, 
  44, -128, 47, 9, 69, 49, 65, 37, 64, 25, 
  71, 34, 62, 15, 64, 39, 71, 44, 69, 48, 
  87, 73, 95, 53, 74, 30, 66, 39, 74, 49, 
  58, 14, 64, 42, 69, 43, 84, 67, 75, 59, 
  47, -6, 48, 42, 62, 36, 73, 21, 60, 40, 
  75, 15, 65, 31, 65, 24, 61, 34, 70, 35, 
  47, 19, 71, 23, 54, -60, 73, 32, 44, 11, 
  61, 17, 35, -77, 81, 20, 73, 55, 95, 77, 
  69, -37, 69, 65, 58, -3, 42, -20, 61, 8, 
  48, 20, 66, 44, 66, 44, 63, 37, 72, 25, 
  27, -128, 15, -128, -128, -128, 60, 46, 58, 41, 
  60, 26, 56, -14, 76, -29, 60, 42, 77, 45, 
  52, 19, 48, 60, 75, 35, 44, -37, 69, 37, 
  63, 32, 65, 32, 54, 31, 51, -18, 74, 31, 
  4, -128, -6, -128, -128, -128, 56, -10, 73, 65, 
  66, -7, 37, -128, 79, 13, 60, 21, 25, -128, 
  54, 8, 25, -18, 54, 12, 44, 35, 69, 30, 
  45, 24, 73, 47, 24, 9, 67, 21, 66, 30, 
  -128, -128, 38, -128, -128, -128, 40, 15, 84, 59, 
  61, -26, -60, -3, 59, -128, 39, 16, 14, -128, 
  60, -29, -50, -128, 17, 9, 55, 26, 48, -10, 
  32, -4, 65, 38, 49, 31, 62, 13, 64, 25, 
  15, 15, 67, -128, -128, -128, 12, 48, 97, 67, 
  80, 72, 85, 27, 51, -77, -77, -50, 34, -23, 
  47, -50, -12, -128, 9, -12, 29, -60, 42, 19, 
  37, -2, 66, 25, 35, -20, 61, 4, 65, 22, 
  -128, -128, 24, -128, -128, -128, 34, 61, 94, 61, 
  80, 47, 60, 9, 33, -128, -20, -128, 45, 0, 
  30, -128, -16, -128, -8, -128, -7, -128, 26, -128, 
  26, -18, 44, 14, 21, -43, 66, 17, 52, -37, 
  -50, -43, 42, -128, -128, -33, 81, 52, 81, -29, 
  95, 64, 53, -128, -77, -128, -14, -4, 51, -37, 
  58, -128, -33, -128, -77, -26, 2, -10, -6, -50, 
  30, -12, 62, -8, 27, -128, 57, 7, 52, -43, 
  24, -77, 36, -128, -128, -77, 59, -128, 19, 16, 
  87, 57, 52, 44, 44, -8, -12, -29, 40, -37, 
  50, -1, 11, -43, 17, -50, 16, -50, 27, -50, 
  33, -33, 15, -20, 24, -37, 55, 4, 33, -128, 
  -128, -128, -128, -128, -128, -128, -23, -128, 43, 49, 
  88, 34, 88, 57, 72, 51, 17, -128, -7, -43, 
  47, -128, -16, -37, 2, -10, 9, -128, -16, -128, 
  33, -26, -12, -10, 29, -128, 4, -128, 23, -128, 
  -43, -128, -128, -128, -128, -128, 51, 12, 65, 72, 
  89, -29, 94, 70, 78, 49, 49, -77, -29, -128, 
  15, -43, 4, -128, -26, -128, -37, -128, 13, -77, 
  24, -26, 9, -60, 18, -77, 12, -128, -6, -128, 
  -128, -128, -128, -128, -128, 24, 89, 39, 58, 65, 
  90, -77, 60, 36, 49, -128, 21, 1, 4, -128, 
  -29, 30, 43, -128, 24, -14, -10, -77, 10, -77, 
  16, -14, 9, -50, 5, -43, 37, -33, 12, -128, 
  -60, -128, -7, -128, -128, -77, 71, 12, 52, 34, 
  70, -50, 59, 39, 67, 52, 62, -128, -128, -128, 
  35, 41, 56, -77, 28, -20, 30, -33, 15, -128, 
  11, -50, -33, -128, 12, -29, 40, -60, -8, -29, 
  -128, -128, -128, -128, -128, -128, -77, -128, 19, -128, 
  21, -20, 59, 23, 21, 0, 41, -37, -128, -128, 
  28, 47, 37, -128, -7, -128, 10, -128, -10, -128, 
  -37, -128, -43, -128, -23, -128, 11, -128, 1, -33, 
  -128, -128, -128, -128, -128, -33, 54, -128, -6, -128, 
  0, -128, 69, 37, -37, -50, -8, -128, -128, -128, 
  5, 15, 40, -128, -20, -128, -12, -128, -20, -26, 
  5, -128, -2, -128, -50, -128, 11, -128, 17, -26, 
  -128, -128, -128, -128, -128, 21, 66, 9, -33, -60, 
  1, -77, 60, 31, -43, -128, -23, -128, -128, -128, 
  19, -33, 14, -128, 19, -128, -23, -77, 13, -128, 
  30, -29, 4, -128, -1, -128, 0, -128, -29, -128, 
  -128, -128, -128, -128, -128, 20, 65, -8, 0, -128, 
  -50, -128, 15, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -60, -128, -7, -77, -128, -128, -77, -128, 
  19, -128, 17, -128, 8, -128, 18, -77, -20, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -6, -128, -12, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -20, -77, -50, -128, -29, -128, 
  -77, -128, -3, -128, -33, -128, 24, -37, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -77, 
  -10, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 9, -128, -29, -50, -3, -128, 
  -7, -77, -6, -128, 35, -33, -37, -128, 43, 57, 
  -43, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -77, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  9, -128, -128, -128, -128, -128, -4, -128, -29, -128, 
  -18, -128, 6, -60, 24, -128, -12, -77, 62, 56, 
  40, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  51, -128, -128, -128, -128, -128, -33, -128, -14, -37, 
  -14, -29, -8, -128, 20, -128, 11, -50, 31, -37, 
  8, -128, -128, -128, -128, -33, -43, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -29, 
  60, -128, -128, -128, -128, -77, -16, -128, 5, -128, 
  8, -77, -37, -128, -26, -128, 6, -128, -50, -128, 
  109, 85, 102, 84, 90, 75, 54, -23, -77, -128, 
  -128, -128, -128, -128, -7, -128, -128, -128, -128, 37, 
  90, 70, 61, -16, 47, 42, 97, 83, 82, 53, 
  64, 22, 56, 8, 19, 39, 53, 14, 57, 22, 
  112, 98, 108, 97, 103, 62, 70, 59, 20, -29, 
  59, 72, 62, 22, 65, -29, 50, 49, 52, 54, 
  105, 92, 110, 90, 113, 92, 114, 98, 115, 94, 
  112, 84, 94, 68, 82, 83, 87, 56, 90, 75, 
  97, 85, 107, 85, 102, 48, 76, 73, 77, 46, 
  81, 80, 90, 64, 76, 68, 102, 87, 95, 76, 
  109, 93, 111, 90, 114, 95, 107, 92, 115, 88, 
  113, 94, 112, 84, 106, 85, 96, 80, 109, 89, 
  93, 66, 92, 78, 109, 88, 113, 79, 87, 72, 
  100, 89, 104, 80, 100, 84, 107, 82, 107, 91, 
  107, 86, 103, 86, 110, 87, 98, 75, 104, 77, 
  104, 86, 101, 87, 106, 80, 96, 83, 104, 79, 
  78, 47, 82, 67, 97, 88, 118, 92, 106, 51, 
  95, 86, 104, 86, 105, 88, 110, 86, 101, 86, 
  104, 56, 92, 68, 101, 76, 84, 54, 95, 80, 
  89, 76, 100, 79, 98, 69, 89, 61, 92, 64, 
  64, 19, 70, 20, 68, 84, 110, 86, 110, 88, 
  95, 73, 87, 68, 102, 77, 105, 87, 102, 68, 
  78, 46, 81, 74, 90, 38, 80, 19, 73, 59, 
  83, 49, 93, 70, 95, 72, 85, 69, 90, 64, 
  64, -6, 67, 34, 72, 72, 95, 77, 104, 79, 
  90, 59, 89, 68, 88, 53, 97, 77, 96, 79, 
  85, 38, 72, 60, 88, 52, 69, 16, 71, 50, 
  69, 37, 84, 71, 90, 54, 89, 59, 83, 52, 
  80, 29, 74, 38, 69, 56, 74, 49, 74, 50, 
  81, 49, 67, 56, 67, 35, 70, 14, 85, 65, 
  76, -50, 58, 6, 77, 54, 68, 32, 60, 45, 
  67, 48, 76, 38, 80, 46, 84, 44, 70, 46, 
  80, 29, 51, 14, 45, 11, 34, -128, 18, -128, 
  -26, -128, 42, 38, 80, -43, -128, -128, -128, -128, 
  -33, -128, -128, -128, -2, -77, 29, -128, 38, -128, 
  -60, -18, 41, -60, 37, -60, 15, -128, -6, -128, 
  52, -128, -128, -128, -128, -128, -128, -128, 13, -128, 
  -43, -128, 36, -128, 53, -128, -128, -128, -77, -128, 
  -128, -128, -10, -128, 7, -33, 55, 52, 98, 81, 
  86, 37, 83, 40, 71, 41, 48, 30, 70, 56, 
  -26, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  0, -128, 16, -128, 54, -128, -128, -128, 11, -60, 
  -128, -128, -128, -128, 36, -43, 66, 37, 85, 65, 
  90, 77, 94, 79, 102, 55, 87, 64, 89, 65, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 40, -128, -128, -128, -50, -128, 
  2, -128, -77, -128, 15, -37, 59, 2, 84, 69, 
  93, 72, 95, 72, 90, 65, 73, 60, 89, 72, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, -128, -128, -128, -128, -128, -10, -128, 
  -128, -128, -128, -128, -10, 14, 80, 27, 74, 60, 
  91, 74, 85, 47, 79, 53, 67, 47, 76, 56, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 26, -128, -128, -128, -128, -128, 43, -12, 
  -128, -128, -128, -16, 44, -18, 59, -6, 67, 34, 
  70, 53, 92, 41, 68, 17, 69, 59, 71, 41, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -37, -128, 50, -77, 69, 46, 
  63, 52, 74, 28, 62, 34, 67, 27, 71, 53, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -3, -128, -128, -128, -128, -128, 31, -60, 
  -37, -128, -18, -128, 24, -23, 47, 10, 51, -60, 
  51, 29, 52, -3, 25, 1, 53, 20, 70, 18, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, 12, 60, -6, -3, -128, -128, -128, 53, -20, 
  -33, -128, -77, -128, 31, -77, 22, 25, 61, -4, 
  44, 25, 57, -128, 16, 2, 44, -3, 54, 32, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -20, -4, 44, -43, -50, -128, 2, -128, 65, -6, 
  -128, -128, -128, -128, 12, 6, 49, 27, 34, -128, 
  -20, -128, -29, -128, 0, -128, -7, -128, -2, -43, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -128, 34, 14, 53, -128, -60, -26, 47, -128, 
  -77, -128, -37, -128, 48, 10, 57, -50, -77, -128, 
  -128, -128, -50, -128, -29, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 24, -23, 54, -128, -128, -10, 47, -128, 
  -128, -128, -128, -128, 56, 2, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -3, 59, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};