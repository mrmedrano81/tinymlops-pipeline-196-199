/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/db24628d_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_db24628d_nohash_3.cc" \
 */
#include "no_db24628d_nohash_3.h"


const int g_no_db24628d_nohash_3_width = 40;
const int g_no_db24628d_nohash_3_height = 49;
alignas(16) const signed char g_no_db24628d_nohash_3_data[] = {
  68, 57, 79, 71, 59, 25, 29, 28, 26, 17, 
  29, 20, 5, -26, 26, 17, 17, 30, 17, 11, 
  5, 17, 0, 7, 17, -2, -10, -18, 9, -2, 
  -33, -37, -26, -37, -50, -50, -33, -26, -50, -128, 
  73, 58, 59, 46, 56, 9, -37, -12, -7, 4, 
  40, 35, 19, 13, 15, -23, -7, -7, 8, 8, 
  27, -1, 9, -16, -1, 11, -12, -29, -12, -29, 
  -50, -37, -26, -20, -18, -20, -37, -37, -50, -37, 
  55, -3, 49, 47, 57, 37, 2, 27, 20, -8, 
  38, 38, 10, -12, -3, -3, 11, 6, 6, -20, 
  -20, -43, -29, -33, -37, -33, -37, -43, -20, -50, 
  -37, -50, -18, -37, -37, -50, -26, -37, -37, -77, 
  39, 31, 42, 27, 56, 16, 22, 30, 42, 47, 
  32, -14, 38, 42, 9, -2, 25, -4, -23, -2, 
  13, -29, -3, 0, -8, -128, -29, -43, -37, -12, 
  -26, -33, -37, -77, -50, -43, -37, -128, -50, -77, 
  46, 39, 60, 8, 49, 34, 39, -33, 73, 67, 
  53, 7, 2, 32, 28, 6, 30, -26, 21, 2, 
  20, -60, 12, -7, -4, -20, -8, -33, -29, -14, 
  -14, -60, -77, -128, -50, -77, -50, -77, -37, -50, 
  58, 66, 75, 19, 47, 59, 81, 66, 97, 90, 
  105, 75, 73, 64, 46, 50, 69, 52, 39, 6, 
  13, 10, 25, -43, -1, 7, 35, -60, -29, -37, 
  -14, -77, -20, -77, -37, -128, -77, -60, -29, -77, 
  55, 65, 77, 11, 52, 77, 96, 63, 87, 78, 
  104, 84, 90, 67, 42, 12, 93, 79, 31, 19, 
  27, 29, 52, 10, 19, 17, 35, -23, -16, 9, 
  16, -43, -8, -20, -20, -77, -37, -128, -37, -26, 
  51, 47, 73, -20, 50, 71, 90, 74, 103, 86, 
  109, 87, 86, 58, 60, 52, 104, 87, 74, -8, 
  23, -6, 47, 38, 37, 39, 25, -23, 20, 37, 
  35, -10, 34, 33, -23, -60, -37, -20, -29, -60, 
  54, 58, 79, 50, 55, 16, 56, 74, 92, 39, 
  78, 49, 84, 48, 65, 55, 97, 74, 69, 20, 
  25, 11, 38, 27, 60, 56, 33, 8, 29, 49, 
  62, 7, 42, 47, -10, -77, -43, -37, -29, -128, 
  67, 17, 59, 37, 40, -6, 53, 9, 36, -10, 
  58, 19, 62, 42, 50, 40, 75, 53, 72, 11, 
  36, 58, 77, 37, 54, 34, 47, 38, 29, 62, 
  52, -7, 45, 27, -33, -77, -43, -37, -50, -60, 
  65, 45, 66, 50, 58, -50, -37, -43, 60, 9, 
  34, -6, 55, 0, 64, 65, 83, 60, 67, 26, 
  59, 46, 68, 0, 41, -6, 52, 24, 45, 57, 
  59, 31, 16, -26, -18, -50, -43, -50, -43, -77, 
  109, 80, 88, 58, 75, -6, 7, -77, -29, -128, 
  37, 22, -14, -128, 77, 64, 63, 34, 47, 15, 
  50, -3, 48, -18, 35, -6, 22, -37, 39, 41, 
  63, 21, 29, -60, 5, -50, -43, -60, -26, -128, 
  126, 103, 124, 100, 119, 88, 91, 15, -2, -60, 
  27, -29, 29, -60, 34, 23, 21, -128, 20, 54, 
  68, 54, 89, 78, 92, 23, 31, 5, 68, 29, 
  50, 19, 29, 0, 43, 44, 52, 35, 56, 51, 
  109, 66, 118, 98, 108, 93, 103, 75, 64, 24, 
  21, -37, 47, -60, 40, -37, 2, -128, 37, 52, 
  77, 86, 114, 92, 103, 48, 45, 59, 94, 67, 
  59, 29, 55, 24, 62, 55, 75, 57, 74, 67, 
  101, 70, 110, 86, 99, 80, 84, 71, 87, 50, 
  46, -18, 74, 25, 66, 35, -2, -128, 63, 55, 
  74, 69, 89, 69, 102, 65, 61, 59, 98, 72, 
  53, 16, 43, 36, 57, 57, 70, 55, 69, 53, 
  92, 62, 99, 74, 97, 83, 108, 74, 98, 70, 
  71, 34, 84, 66, 94, 85, 94, 77, 111, 95, 
  112, 85, 95, 55, 72, 82, 101, 84, 100, 75, 
  65, 52, 62, 45, 72, 50, 65, 44, 65, 54, 
  81, 78, 101, 67, 117, 94, 114, 91, 115, 84, 
  85, 78, 105, 80, 117, 100, 118, 91, 117, 87, 
  111, 82, 84, 75, 99, 83, 112, 84, 111, 84, 
  77, 55, 78, 69, 87, 64, 79, 72, 100, 85, 
  75, 49, 82, 44, 99, 66, 104, 85, 106, 71, 
  73, 79, 104, 87, 112, 84, 89, 16, 61, 40, 
  84, 53, 69, 39, 87, 66, 86, 74, 89, 55, 
  75, 34, 53, 80, 100, 61, 57, 28, 72, 64, 
  58, 55, 76, 14, 82, 37, 105, 80, 99, 42, 
  75, 71, 107, 94, 89, -26, 62, 32, 62, -26, 
  70, 33, 23, -26, 76, 65, 87, 78, 84, 0, 
  69, -33, 60, 60, 78, 35, 54, 7, 49, 34, 
  33, 48, 70, -1, 73, 39, 96, 72, 96, 47, 
  81, 51, 98, 49, 70, -29, 44, -2, 69, 45, 
  79, 54, 61, -77, 70, 68, 94, 86, 98, 35, 
  43, 13, 56, 19, 49, 6, 44, -14, 34, -128, 
  -16, 44, 59, -128, 45, 17, 78, 63, 85, -128, 
  71, 49, 78, -2, 44, -77, 49, -77, 24, -18, 
  62, 40, 57, -128, 68, 65, 88, 65, 79, 19, 
  50, 34, 65, 9, 38, -50, 35, 0, 35, -128, 
  -33, 34, 53, -128, 33, 24, 78, 56, 81, 69, 
  93, 24, 6, -128, -4, -128, -12, -128, -60, -128, 
  26, -4, 39, -8, 10, -23, 71, 40, 59, -33, 
  64, 37, 58, -128, 20, -14, 44, -6, 34, -128, 
  2, 45, 53, -128, 17, 12, 63, 41, 63, 64, 
  65, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, 4, -128, 4, -128, 
  7, -29, 37, -128, -60, -128, 8, -128, -26, -128, 
  -50, -50, 27, -128, 27, -128, -23, -128, 41, 11, 
  11, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -29, -20, 25, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -26, 10, -128, -77, -128, -20, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -12, -7, -3, -128, -128, -128, 6, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  23, -18, -1, -128, -128, -26, 6, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, -128, -16, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -23, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -128, -128, -77, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -8, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -43, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
