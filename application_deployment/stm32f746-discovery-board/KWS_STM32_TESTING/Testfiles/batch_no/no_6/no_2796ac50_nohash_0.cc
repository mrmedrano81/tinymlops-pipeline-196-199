/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/2796ac50_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_2796ac50_nohash_0.cc" \
 */
#include "no_2796ac50_nohash_0.h"


const int g_no_2796ac50_nohash_0_width = 40;
const int g_no_2796ac50_nohash_0_height = 49;
alignas(16) const signed char g_no_2796ac50_nohash_0_data[] = {
  94, 75, 84, 69, 72, 62, 50, 51, 74, 69, 
  75, 61, 81, 66, 64, 68, 72, 75, 65, 59, 
  74, 55, 37, 40, 55, 50, 64, 65, 57, 62, 
  60, 41, 57, 59, 63, 58, 57, 45, 47, 39, 
  93, 75, 83, 57, 62, 54, 71, 61, 56, 64, 
  74, 64, 75, 49, 42, 57, 71, 47, 57, 49, 
  54, 53, 57, 62, 56, 40, 60, 39, 57, 51, 
  62, 48, 51, 27, 57, 44, 49, 38, 44, 30, 
  81, 64, 66, 69, 80, 54, 72, 41, 59, 47, 
  56, 55, 62, 53, 68, 20, 50, 60, 70, 37, 
  62, 45, 45, 41, 40, 49, 62, 39, 62, 43, 
  53, 44, 50, 18, 47, 34, 47, 0, 25, -1, 
  62, -3, 73, 52, 51, 34, 49, 28, 44, 9, 
  49, 39, 58, 27, 66, 48, 64, 32, 57, 8, 
  62, 45, 56, 31, 39, 20, 60, 43, 50, 22, 
  47, 28, 49, 35, 49, 14, 20, 9, 34, 9, 
  48, -43, 45, 44, 50, 39, 71, 59, 72, 19, 
  29, -43, 56, 45, 58, 37, 35, 16, 48, 27, 
  29, 2, 59, 39, 32, 28, 49, 1, 44, 31, 
  51, 24, 46, 25, 12, 9, 25, 13, 42, -1, 
  62, 26, 70, 35, 72, 55, 50, 53, 42, -18, 
  55, 37, 62, 10, 45, -23, 31, -23, 31, 43, 
  47, -20, 56, 14, 40, -10, 19, 17, 46, -12, 
  40, 4, 35, 8, 44, 0, 38, 17, 34, 12, 
  63, 52, 32, -29, 59, -2, 22, 25, 54, -1, 
  60, -6, 26, 0, 28, 9, 19, 9, 52, -12, 
  19, -33, 36, -18, 19, -3, 27, -6, 39, 2, 
  22, 13, 44, -4, 27, 10, 27, 5, 30, -18, 
  63, -60, 47, 45, 72, 40, 53, -77, 26, -23, 
  0, 19, 52, -2, 29, -60, -14, -10, 38, -20, 
  24, 5, 10, -29, 43, -60, 24, -43, 31, -18, 
  -14, 11, 27, 5, 39, -10, 30, 0, 36, -8, 
  -77, -128, 39, -8, 44, 15, 32, 14, 60, -29, 
  19, -26, 47, 4, 32, -16, 25, -33, 24, 20, 
  47, 7, 57, 16, 35, -4, 24, -77, 26, -8, 
  49, 9, 39, -16, 21, -37, 23, -10, -1, -33, 
  28, 7, 54, -6, 55, 21, 56, 5, 7, -23, 
  23, -6, 21, -3, 24, -23, 55, -6, 38, -2, 
  42, -3, 19, -16, 45, 4, 34, 2, -14, -60, 
  6, -29, 25, -12, 4, -50, 11, -37, 25, -14, 
  28, -2, 43, -128, 40, 14, 48, 6, -1, -77, 
  -8, -43, 8, -3, 39, 14, 22, -26, 42, 9, 
  50, 13, 5, -60, 37, 9, 4, -60, 20, -60, 
  14, -26, 6, -50, 26, -8, 34, 2, 34, -16, 
  -20, -128, 39, 2, 1, -20, 42, -37, 47, -2, 
  1, -128, 1, -128, 40, -33, 35, -128, 19, 5, 
  26, -128, 20, -33, -12, -23, 5, -50, 17, -18, 
  12, -60, 20, -7, 27, -43, 7, -37, 17, -29, 
  -20, 4, 19, -50, -43, -128, 31, -18, 49, -4, 
  29, -16, -26, -77, 8, -14, 12, -77, 0, -128, 
  25, -18, 45, 8, 15, -37, -1, -43, -8, -77, 
  -26, -77, -10, -43, 32, -29, -6, -2, 31, -43, 
  52, -128, -43, -128, -128, -128, 18, 9, 27, -43, 
  -6, -26, 25, -77, 35, -7, 1, -128, 5, -77, 
  15, -20, 24, -16, 35, -2, 14, -6, -23, -50, 
  8, -128, -26, -77, 6, -20, 29, -8, 19, -77, 
  56, -2, 58, 14, 15, -77, 24, -128, 27, -18, 
  7, -37, 33, 0, 24, -7, 37, -43, 2, -77, 
  -128, -23, 22, -20, -2, -23, 32, -43, -20, -128, 
  6, -77, 9, -60, 2, -12, 20, -50, 8, -50, 
  28, -128, -60, -128, -43, -128, 20, -60, 30, 40, 
  45, -23, -2, -77, 31, -43, 49, 23, -33, -128, 
  9, -77, 21, -16, 21, -20, 24, -43, 26, -43, 
  14, -20, 17, -60, -1, -20, 30, 4, 13, -60, 
  61, 4, 18, -43, 28, 19, -10, -128, -8, -18, 
  11, -128, 11, -23, 17, -128, 14, -128, -29, -128, 
  -50, -50, 22, -50, -3, -60, -33, -43, 1, -37, 
  14, -26, 4, -60, -23, -128, 8, -128, 5, -77, 
  27, -60, -50, -60, 24, 4, 16, -50, 39, -33, 
  44, 20, 4, -16, 36, -29, 13, -29, 19, -43, 
  32, -50, -29, -128, 9, -16, 20, -60, -7, -77, 
  1, -29, 21, -18, 4, -128, -14, -128, 1, -128, 
  51, 6, 54, 15, 35, -128, 28, -60, -23, -128, 
  17, -16, 23, -60, 22, -14, -43, -50, 7, -77, 
  -1, -77, -43, -4, 9, -60, -4, -128, 5, -128, 
  -10, -26, 19, -77, -43, -37, -2, -50, 16, -43, 
  21, 7, 40, 2, 42, -10, -1, -128, 1, -60, 
  -2, -128, -6, 16, -3, -29, 1, -12, 28, 1, 
  -33, -77, 11, -128, 13, -37, 8, -128, -26, -37, 
  -2, -50, 14, -77, 1, -60, -3, -60, -8, -60, 
  -33, -128, 27, 4, 29, -10, 37, 14, -10, -128, 
  -1, -50, -12, -128, -6, -128, -16, -29, 17, -43, 
  -77, -128, -26, -128, 33, -26, -1, -128, -16, -33, 
  2, -43, -14, -77, -20, -128, 0, -77, -7, -128, 
  4, 13, 29, -128, -6, -128, 16, -60, -3, -37, 
  33, -37, 19, -23, -2, -50, 10, -128, -3, -128, 
  -14, -50, 42, -43, 4, -128, -2, -18, 0, -128, 
  -37, -60, 15, -128, -7, -50, -29, -128, -14, -60, 
  -50, -1, -16, -37, -60, -12, 11, -128, 28, 8, 
  7, -60, 14, -128, -128, -128, 1, -128, -37, -128, 
  -8, -128, 1, -50, -60, -128, -18, -26, 17, -50, 
  -26, -60, -37, -128, -10, -128, -26, -128, -26, -128, 
  8, -43, 22, -60, -10, -128, 17, -33, -23, -128, 
  2, -128, 2, -60, 19, -60, -6, -77, -60, -37, 
  20, -60, -128, -128, 12, -50, -23, -37, -77, -128, 
  4, -128, -14, -60, -2, -60, -29, -128, 9, -60, 
  14, 17, -60, -128, -128, -128, 21, -20, 12, 4, 
  15, -77, -12, -37, 26, -8, -2, -77, -16, -43, 
  -12, -128, 16, -43, 2, -77, -60, -128, -8, -128, 
  -26, -128, -7, -26, 10, -128, -77, -60, -14, -128, 
  26, -20, 24, -37, 11, -10, 38, -14, 26, -128, 
  -26, -77, 16, -20, -23, -128, 21, -128, -18, -26, 
  1, -60, -29, -77, -12, -43, -26, -50, -43, -128, 
  28, -77, 26, -2, 39, -50, -10, -128, -77, -128, 
  109, 90, 82, 51, 70, 4, -43, -128, -37, -26, 
  21, -29, -77, -60, 14, -77, -7, -29, 32, -43, 
  28, -77, -29, -26, 17, -60, -60, -77, -18, -128, 
  -16, -50, 49, 15, 52, -60, -77, -77, -16, -77, 
  119, 97, 109, 95, 114, 75, 106, 79, 92, 78, 
  77, 49, 64, 48, 61, 0, 32, 35, 72, 60, 
  66, 47, 78, 63, 86, 75, 66, 27, 57, 47, 
  -1, 45, 95, 78, 67, 24, 37, -33, -14, -26, 
  110, 86, 82, 82, 104, 71, 106, 79, 90, 69, 
  70, 59, 74, 55, 62, 12, -10, 52, 76, 60, 
  70, 67, 81, 70, 93, 84, 83, 47, 72, 66, 
  49, 49, 94, 72, 76, 35, 43, -33, 21, -18, 
  105, 83, 62, 72, 100, 65, 101, 82, 87, 77, 
  72, 57, 77, 74, 55, 22, 44, 54, 83, 75, 
  67, 64, 90, 65, 89, 73, 91, 56, 79, 71, 
  77, 27, 87, 71, 79, 48, 31, -7, 26, 31, 
  98, 75, 55, 63, 95, 65, 92, 75, 84, 74, 
  81, 40, 70, 69, 68, 7, 66, 60, 93, 77, 
  88, 70, 88, 64, 95, 70, 88, 59, 79, 57, 
  69, 46, 80, 49, 70, 33, 46, -6, 36, 47, 
  85, 64, 104, 87, 115, 99, 115, 96, 110, 92, 
  112, 94, 106, 84, 105, 93, 117, 97, 120, 103, 
  124, 98, 118, 100, 122, 99, 123, 102, 123, 99, 
  119, 77, 95, 69, 82, 73, 97, 71, 86, 63, 
  75, 51, 31, 75, 102, 66, 111, 95, 109, 90, 
  112, 89, 110, 85, 108, 91, 112, 89, 117, 84, 
  111, 89, 111, 90, 116, 81, 105, 91, 118, 93, 
  108, 92, 99, 68, 95, 51, 79, 69, 86, 60, 
  69, 39, 24, 64, 90, 50, 102, 81, 101, 87, 
  107, 85, 105, 82, 104, 86, 112, 91, 114, 56, 
  91, 75, 103, 81, 103, 68, 95, 75, 98, 78, 
  104, 85, 100, 80, 98, 71, 96, 41, 59, 46, 
  62, 25, 8, 55, 82, 34, 90, 61, 99, 83, 
  102, 77, 97, 77, 100, 80, 110, 79, 93, 40, 
  79, 63, 94, 70, 90, 52, 84, 40, 85, 75, 
  96, 75, 89, 70, 87, 62, 88, 42, 58, 25, 
  55, 1, 51, 50, 75, 11, 82, 39, 102, 77, 
  93, 76, 92, 67, 100, 76, 109, 73, 68, 16, 
  63, 47, 85, 60, 78, 38, 74, 6, 78, 69, 
  88, 66, 84, 54, 64, 52, 74, 37, 69, 29, 
  52, -12, 59, 44, 69, 8, 78, 28, 98, 71, 
  87, 69, 84, 57, 99, 74, 97, 45, 31, -20, 
  47, 31, 74, 53, 72, 23, 69, -16, 76, 59, 
  82, 59, 82, 34, 66, 47, 76, 32, 75, 32, 
  49, -26, 68, 41, 64, 25, 76, 14, 94, 62, 
  79, 61, 74, 51, 101, 69, 67, -50, 14, -128, 
  28, 5, 61, 53, 66, 14, 62, -23, 72, 44, 
  78, 52, 85, 27, 60, 35, 60, 49, 82, 2, 
  45, -43, 71, 37, 59, 40, 78, 19, 86, 45, 
  75, 56, 78, 57, 104, 70, 41, -128, -77, -128, 
  -3, -60, 47, 37, 53, -23, 15, -37, 69, 31, 
  68, 48, 84, 31, 62, 34, 43, 39, 71, -20, 
  39, -77, 65, 31, 57, 45, 80, 29, 74, 24, 
  72, 52, 82, 62, 90, 51, 17, -128, -128, -128, 
  -20, -128, 26, 5, 39, -37, 6, -43, 64, 19, 
  59, 46, 82, 27, 65, 38, 29, 42, 72, 1, 
  31, -128, 70, 29, 54, 58, 82, 29, 64, -20, 
  72, 44, 90, 62, 51, -128, -33, -128, -128, -128, 
  -128, -128, -23, -128, 2, -128, -14, -77, 61, 2, 
  47, 34, 74, 32, 56, 42, 31, 21, 64, -50, 
  27, -128, 78, 32, 52, 68, 82, 17, 50, -128, 
  74, 33, 97, 58, -16, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -18, -128, -77, -128, 52, -128, 
  9, -29, 53, -37, 29, 6, 23, -20, 44, -128, 
  22, -128, 86, 38, 48, 68, 75, -50, 30, -128, 
  77, 13, 31, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 9, -128, 
  -26, -128, 23, -128, 4, -6, -6, -60, 21, -50, 
  6, -128, 89, 33, 28, 50, 50, -128, 48, -128, 
  87, -43, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -33, -128, 
  -128, -128, 22, -128, 20, -43, -128, -77, 6, 6, 
  -7, -128, 91, 29, 0, -8, -77, -128, 57, -128, 
  17, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -8, -128, -128, -128, -23, -60, 
  -6, -128, 86, 11, -50, -128, -128, -4, 61, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -8, -128, 65, -128, -128, -128, -128, -128, -23, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  8, -128, 31, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 1, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
