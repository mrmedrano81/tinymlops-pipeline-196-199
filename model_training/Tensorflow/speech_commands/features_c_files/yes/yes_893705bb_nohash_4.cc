/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/893705bb_nohash_4.wav" \
 * --output_c_file="features_c_files/yes/yes_893705bb_nohash_4.cc" \
 */
#include "yes_893705bb_nohash_4.h"


const int g_yes_893705bb_nohash_4_width = 40;
const int g_yes_893705bb_nohash_4_height = 49;
alignas(16) const signed char g_yes_893705bb_nohash_4_data[] = {
  54, 57, 60, 44, 40, 37, 26, 42, 54, 44, 
  35, 32, 44, 30, 20, -7, 23, 11, 17, 7, 
  -10, -12, 0, -26, -60, -60, -26, -18, 0, -50, 
  -18, -18, -10, -26, -26, -26, -18, -26, -50, -60, 
  25, 49, 66, 35, 45, 29, 45, 65, 57, 27, 
  40, 31, 26, 9, 34, -29, 8, -6, 15, 8, 
  -18, -16, -1, -50, -18, -14, -50, -37, -26, -20, 
  -26, -29, -12, -20, -37, -29, -12, -37, -37, -60, 
  37, 20, 44, 24, 53, 42, 49, 29, 50, 42, 
  33, 0, 4, -6, 16, -33, -29, -33, -20, -77, 
  -26, 10, -14, -50, -26, -16, -12, -29, -29, -50, 
  -7, -50, -50, -10, -18, -29, -50, -77, -60, -128, 
  47, 1, 30, 34, 10, 8, 38, -14, 57, 31, 
  32, 12, 44, -33, 42, -12, -16, -8, 1, -20, 
  -2, -20, -20, -50, -50, 12, 7, -7, -2, -43, 
  -37, -33, -77, -77, -37, -33, -29, -43, -60, -128, 
  46, 33, 63, 49, 55, 49, 72, 59, 56, -29, 
  37, 35, 25, 24, 45, 15, 4, -37, 8, -2, 
  -29, -29, -4, 12, 2, 17, 23, -14, -20, -33, 
  -3, -20, 7, -26, -2, -20, -50, -77, -37, -77, 
  59, 34, 1, -128, 29, 9, -10, -3, 25, -6, 
  -7, -14, -7, -128, -23, -50, -43, -33, -18, -14, 
  -16, -37, -50, 11, -3, -77, -33, -18, -29, -60, 
  -29, -37, 32, 12, -23, -43, -20, -60, -50, -77, 
  16, 20, 24, -29, 23, 11, 9, -12, -18, -50, 
  -26, -128, -3, -77, -12, -77, -33, -77, -26, -29, 
  -23, -60, -10, -33, -43, -60, -23, -60, 8, -20, 
  -23, -18, 54, 32, -10, -37, -37, -60, -29, -128, 
  -77, -26, 24, -16, 15, -7, 10, -43, -60, -29, 
  12, -16, 23, -60, -8, -7, 36, -26, -26, -37, 
  -10, -33, -33, -12, -6, -77, -7, -16, 16, 4, 
  -23, 5, 63, 44, 25, -18, 44, 2, 1, -77, 
  40, -16, 14, 25, 42, -43, -6, -43, 34, -18, 
  -10, -60, -26, -77, -43, -60, 24, 27, 15, -37, 
  -12, -43, -18, -37, -18, -37, -7, 16, 50, 29, 
  10, 22, 71, 38, 34, 13, 51, 35, 4, -43, 
  74, 46, 59, 32, 51, -33, 26, 31, 49, -77, 
  -128, -128, -12, -60, -16, -60, -18, -33, -50, -128, 
  -18, -43, -20, -60, -33, -128, 11, -12, 45, 15, 
  9, -33, 49, -3, 19, 4, 11, -20, -23, -77, 
  62, 24, 67, 52, 55, -10, 51, 50, 66, -128, 
  -128, -128, -50, -50, -16, -128, -77, -128, -6, -33, 
  -77, -128, -26, -128, -60, -128, -77, -18, -6, -60, 
  -60, -128, 32, -8, -50, -60, -4, -50, -43, -128, 
  34, 28, 44, 21, 24, 2, 56, 42, 66, -50, 
  -29, -128, -60, -60, -77, -128, -8, -50, -23, -128, 
  -14, -77, -29, -128, -60, -128, -50, -128, -23, -128, 
  -37, 9, -60, -128, -50, -128, -60, -128, -77, -128, 
  16, -128, -128, -128, 29, 10, 40, 53, 70, -10, 
  2, -77, -37, -43, -8, -12, -33, -128, -33, -23, 
  -60, -50, -10, -60, -77, -128, -60, -128, -43, -128, 
  -23, 11, -128, -128, -128, -128, -128, -128, -60, -128, 
  -50, -77, 1, -128, -128, -37, 47, 60, 74, -50, 
  -29, -128, -43, -37, 2, -128, -20, -60, -128, -128, 
  -37, -128, -60, -128, -37, -128, 5, -128, -128, -128, 
  -12, 41, 7, -29, -18, -128, -33, -77, -77, -128, 
  -16, -128, -128, -128, -12, -60, 27, 8, 64, 40, 
  -3, -77, -37, -128, -128, -128, -128, -128, -60, -77, 
  -37, -128, -77, -128, -60, -50, 42, -128, -77, -128, 
  -12, 9, -77, -128, -43, -128, -128, -128, -77, -128, 
  48, -10, 19, -6, 17, -128, -60, -4, 37, -2, 
  -33, -128, -77, -60, -20, -60, -128, -128, -128, -50, 
  -29, -128, -50, -128, -60, -60, -16, -128, -77, -128, 
  -60, -128, -128, -128, -128, -128, -77, -128, -77, -128, 
  2, -77, -4, -77, -12, -128, -26, -14, 39, -128, 
  -43, -128, -128, -128, -37, -128, -128, -128, -43, -128, 
  -128, -128, -128, -128, -60, -128, -37, -128, -77, -128, 
  -50, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  35, -12, 1, -26, -10, -128, -128, -128, -128, -128, 
  -60, -50, -128, -128, -37, -128, -77, -128, -128, -128, 
  -60, -50, -37, -128, -50, -128, -77, -128, -128, -33, 
  -50, -128, -128, -128, -60, -128, -77, -128, -128, -128, 
  -128, -3, 29, -128, -77, -128, -50, -128, -128, -128, 
  1, -77, -33, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -50, -128, -37, -37, -128, -128, -128, -128, 
  -77, -128, -128, -128, -50, -77, -77, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -14, -128, -60, -128, -43, -128, -16, -50, -43, -128, 
  -128, -128, -8, -37, -29, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -77, -77, -43, -128, -77, -128, 
  -3, -77, -18, -128, -128, -128, -128, -128, -128, -128, 
  -29, -60, -60, -128, -128, -128, -128, -128, -43, -128, 
  -37, -128, -26, -43, -26, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -23, -77, 22, -37, -12, -50, -26, -128, -128, -60, 
  -128, -128, -128, -128, -43, -128, -43, -60, -50, -128, 
  -77, -128, -50, -128, -8, -128, -23, -128, -128, -33, 
  -43, -128, -128, -128, -43, -128, -77, -128, -128, -128, 
  5, -128, 10, -16, -10, -128, 15, -128, -128, -128, 
  -128, -128, -128, -128, -29, -43, -8, -128, -50, -128, 
  -26, -128, -43, -128, -20, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  54, 4, 34, 30, 48, -20, 9, -128, -29, 24, 
  7, -20, 9, -60, -50, -128, -29, -77, -128, -128, 
  -50, -128, -16, -43, -26, -60, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  125, 103, 120, 95, 112, 83, 59, -60, 17, 37, 
  69, 51, 47, 31, -10, -1, 15, 40, 6, -128, 
  -77, -29, 19, -33, 20, -43, -6, -60, -33, -77, 
  -128, -128, -50, -128, -1, 1, 14, -26, 23, 14, 
  117, 85, 113, 99, 114, 89, 106, 59, 72, 49, 
  84, 60, -1, -1, 34, 51, 67, 54, 47, 15, 
  21, -26, 17, -12, 9, -128, -128, -18, -77, -60, 
  4, -128, -18, -12, 11, 18, 23, 26, 47, 34, 
  102, 65, 107, 83, 92, 88, 106, 79, 94, 46, 
  66, 32, 32, 19, 27, 26, 74, 29, 15, -2, 
  17, -77, -4, -50, 4, -60, -128, -50, -37, -33, 
  14, -10, -23, -128, -7, -50, 31, 17, 37, 37, 
  83, 26, 97, 58, 77, 67, 85, 79, 78, 65, 
  69, 61, 56, 6, 60, 50, 58, -26, -14, -33, 
  -10, -29, -33, -128, -60, -33, -60, -128, -33, -77, 
  -10, -128, -77, -128, -1, -33, 5, -23, 22, -8, 
  36, 30, 83, -29, 55, 19, 64, -20, 53, 61, 
  99, 84, 93, 70, 84, 62, 62, -33, 29, -18, 
  -20, -77, -23, -50, -16, -50, -26, -37, 1, -16, 
  63, 88, 101, 71, 104, 87, 69, 86, 91, 24, 
  60, 11, 93, 62, 75, 48, 50, -128, 62, 67, 
  77, 61, 94, 70, 94, 82, 89, 42, 69, 53, 
  48, -3, 0, -33, 17, 46, 64, 35, 64, 75, 
  99, 68, 107, 90, 97, 78, 91, 69, 91, 64, 
  74, 42, 102, 80, 102, 85, 91, 59, 95, 85, 
  85, 45, 75, 58, 90, 73, 72, 78, 106, 92, 
  101, 56, 47, 16, 82, 88, 88, 55, 91, 49, 
  60, 45, 65, 19, 25, -16, 45, -33, 59, 47, 
  61, 39, 88, 47, 108, 87, 91, 42, 91, 65, 
  59, 4, 61, 47, 89, 64, 85, 75, 98, 79, 
  105, 69, 65, 87, 103, 74, 74, 22, 85, 48, 
  32, -128, -50, -128, -60, -128, 4, -128, 45, 32, 
  52, 38, 80, 37, 109, 86, 94, 68, 94, 67, 
  72, 17, 60, 26, 95, 69, 94, 72, 96, 81, 
  106, 46, 98, 92, 106, 58, 46, 81, 100, 65, 
  44, -128, -128, -128, -128, -128, 4, -128, 27, 6, 
  37, 29, 74, 33, 102, 77, 90, 73, 94, 66, 
  82, 31, 74, 59, 75, 57, 87, 67, 89, 69, 
  94, 45, 92, 67, 83, 4, 25, 58, 71, 8, 
  0, -128, -128, -128, -128, -128, -3, -128, -10, -14, 
  31, -6, 61, 7, 87, 55, 89, 70, 88, 57, 
  54, -77, 27, -1, 66, 39, 64, 14, 53, -128, 
  27, 59, 82, 1, -1, -128, -77, 0, 45, -77, 
  -128, -128, -128, -128, -128, -128, 2, -128, -43, -60, 
  17, -4, 54, -37, 70, 21, 84, 62, 89, 57, 
  72, -128, 43, -14, 31, 36, 75, 32, 49, -3, 
  43, 25, 48, 2, 9, -128, -26, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -6, -128, -4, -26, 
  -10, -12, 50, -77, 42, -128, 78, 48, 67, 7, 
  59, 10, 69, 54, 24, -50, 64, 13, -60, -128, 
  22, -23, 66, 25, 24, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -12, -18, 40, -128, 17, -128, 74, 36, 65, -8, 
  53, 61, 77, 34, -12, -60, 49, -128, -14, 10, 
  32, 19, 55, -77, 5, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -26, -29, 39, -128, -4, -128, 69, 35, 52, -60, 
  58, 19, 56, 2, -33, -128, -6, -128, -33, -50, 
  2, -20, 28, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -18, -128, 27, -128, -29, -128, 55, 19, 47, -29, 
  53, 20, 49, 27, 1, -128, -128, -128, -128, -128, 
  -29, -77, -7, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  11, -77, 32, -128, 20, -128, 52, -12, 38, -37, 
  52, -43, -60, -7, 40, -128, -77, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  14, -6, 39, -128, 32, -128, 19, -50, 29, -14, 
  61, -50, 30, -12, 9, -128, -77, -14, 48, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  23, -50, 29, -128, 42, 4, 1, -60, -128, -128, 
  21, -37, 21, -43, -50, -128, -16, -128, 31, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  34, -128, -23, -128, 9, -50, -77, -128, -128, -128, 
  -128, -128, -23, -128, -128, -128, 30, 9, 31, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  1, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -33, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -128, -128, -128, 
  52, 43, 69, 87, 108, 74, 99, 85, 102, 60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -4, 
  81, 70, 81, 73, 102, 87, 107, 83, 97, 70, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -33, 0, 7, 11, 
  88, 62, 80, 74, 83, 50, 84, 58, 85, 70, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, 33, -16, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 13, 19, 29, 19, 
  72, 48, 84, 61, 78, 67, 88, 66, 84, 68, 
};