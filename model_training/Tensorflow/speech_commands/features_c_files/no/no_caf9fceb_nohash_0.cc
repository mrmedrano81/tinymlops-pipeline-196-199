/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/caf9fceb_nohash_0.wav" \
 * --output_c_file="features_c_files/no/no_caf9fceb_nohash_0.cc" \
 */
#include "no_caf9fceb_nohash_0.h"


const int g_no_caf9fceb_nohash_0_width = 40;
const int g_no_caf9fceb_nohash_0_height = 49;
alignas(16) const signed char g_no_caf9fceb_nohash_0_data[] = {
  113, 96, 117, 96, 115, 98, 116, 93, 104, 93, 
  94, 76, 89, 83, 100, 89, 102, 90, 101, 83, 
  84, 85, 99, 85, 87, 79, 93, 82, 96, 82, 
  95, 84, 101, 88, 99, 80, 89, 81, 96, 80, 
  105, 73, 104, 82, 95, 72, 108, 85, 89, 67, 
  97, 78, 88, 82, 97, 71, 82, 63, 86, 75, 
  97, 66, 82, 69, 88, 77, 86, 64, 83, 69, 
  87, 76, 90, 74, 88, 78, 96, 73, 86, 62, 
  101, 64, 78, 64, 94, 75, 106, 86, 77, 56, 
  85, 56, 86, 51, 65, 60, 78, 62, 83, 57, 
  73, 71, 87, 57, 78, 60, 82, 71, 77, 69, 
  78, 60, 88, 59, 77, 59, 68, 65, 76, 55, 
  88, 66, 92, 60, 81, 68, 91, 64, 76, 39, 
  84, 54, 71, 46, 66, 54, 85, 41, 67, 59, 
  77, 37, 52, 47, 79, 70, 76, 57, 76, 49, 
  67, 50, 71, 57, 78, 52, 75, 42, 69, 40, 
  75, 61, 62, 29, 80, 39, 57, 9, 67, 52, 
  84, 63, 91, 65, 77, 44, 72, 46, 81, 55, 
  78, 37, 78, 56, 72, 44, 65, 34, 74, 24, 
  68, 32, 65, 24, 60, 44, 68, 46, 65, 38, 
  80, 46, 61, 46, 74, 56, 70, -2, 77, -10, 
  35, 36, 71, 54, 77, 46, 56, 10, 71, 39, 
  67, 26, 50, 42, 76, 49, 67, 14, 70, 29, 
  59, 7, 59, 35, 61, 37, 67, 27, 58, 50, 
  65, 51, 71, 27, 68, 63, 77, 32, 54, 36, 
  69, 56, 63, 31, 68, 9, 79, 11, 62, 40, 
  57, 11, 65, 43, 58, -43, 64, 39, 61, 30, 
  63, 7, 56, 10, 48, 7, 55, 15, 57, 18, 
  79, 35, 56, 23, 50, 20, 63, 33, 54, 28, 
  70, 42, 62, 24, 54, 4, 46, 25, 59, -77, 
  40, 36, 57, 27, 60, 17, 60, 13, 45, 18, 
  48, -16, 65, 39, 53, 22, 55, 35, 54, 9, 
  47, 5, 21, -20, 71, 60, 67, -2, 55, 14, 
  64, 48, 71, 23, 52, 10, 44, 10, 61, 48, 
  67, 38, 47, -77, 59, 15, 64, 11, 60, 12, 
  60, 13, 35, -77, 43, -7, 45, 14, 54, 21, 
  65, 35, 57, -43, 51, -7, 79, 62, 59, 27, 
  46, 33, 50, 13, 59, -1, 58, 30, 52, 9, 
  55, 25, 59, 28, 48, -33, 42, 21, 58, 5, 
  65, 30, 64, 28, 57, 9, 46, 6, 47, -2, 
  56, 1, -1, 4, 44, -60, 62, 37, 64, 15, 
  59, 36, 71, 18, 65, 16, 70, -50, 19, -26, 
  48, 8, 67, 1, 52, 19, 70, 28, 48, -6, 
  27, 13, 50, -7, 51, 20, 53, 17, 54, -50, 
  63, 9, 52, 49, 73, 44, 75, 35, 35, -8, 
  31, 11, 24, -60, 46, 21, 62, 5, 32, -14, 
  42, -60, 43, 12, 53, -6, 35, -26, 43, -43, 
  42, -16, 0, -12, 38, 28, 55, 15, 49, 2, 
  55, 48, 77, 0, 47, -128, 37, -14, 69, 4, 
  54, -23, 52, 24, 52, -128, 32, -18, 49, -20, 
  63, -1, 42, -128, 52, -43, 25, -43, 26, -37, 
  37, -23, 25, -23, 50, -23, 44, -2, 31, -43, 
  121, 99, 110, 85, 94, 58, 74, 29, 87, 67, 
  57, 47, 71, 54, 75, 38, 55, 44, 31, -18, 
  58, 38, 62, 45, 54, -16, -20, -60, 49, 57, 
  70, 40, 45, -50, 44, -29, 25, -50, 42, -16, 
  92, 78, 104, 78, 99, 72, 80, 61, 80, 54, 
  62, 47, 87, 68, 82, 38, 49, -2, 65, 35, 
  71, 63, 78, 68, 77, 7, 24, -33, 61, 54, 
  87, 77, 83, -23, 50, 2, 12, -50, 41, -26, 
  96, 77, 104, 74, 97, 35, 74, 48, 90, 67, 
  83, 49, 95, 75, 94, 62, 64, 59, 77, 54, 
  91, 77, 100, 83, 95, 40, 58, 47, 88, 77, 
  97, 83, 89, 42, 74, 40, 49, -1, 40, -8, 
  78, 59, 89, 54, 72, 42, 51, 9, 77, 30, 
  41, 42, 70, 48, 69, 22, 55, 30, 58, -20, 
  64, 40, 75, 53, 71, 19, 42, 0, 58, 28, 
  69, 55, 68, -4, 57, 36, 48, -29, 19, -50, 
  77, 69, 84, 44, 66, -18, 32, -7, 53, 23, 
  57, -37, 49, -37, -18, -77, 26, -60, 21, 5, 
  53, -10, 58, 6, 55, -128, 48, 4, 33, -43, 
  47, 16, 63, -4, 52, -6, 53, -60, 23, -23, 
  74, 57, 69, 35, 42, -33, 63, 18, 23, -128, 
  35, -128, 31, -50, 11, -77, 33, -43, 14, -29, 
  39, -26, 39, -33, -3, -128, -43, -77, 19, -128, 
  49, 49, 69, -16, 35, -50, 24, -18, 18, -37, 
  70, 45, 53, 35, 69, 34, 9, -16, 49, 15, 
  59, 23, 42, -128, 14, 12, 93, 90, 106, 63, 
  77, 18, 87, 74, 85, 83, 104, 80, 72, 7, 
  48, 36, 59, -16, 29, -26, 34, -29, 17, -26, 
  69, 31, 30, 48, 105, 85, 105, 73, 93, 69, 
  97, 74, 84, 31, 90, 75, 101, 81, 108, 89, 
  103, 63, 97, 82, 104, 79, 109, 89, 99, 84, 
  98, 44, 72, -16, 23, 37, 79, 44, 44, 27, 
  64, 16, 5, 40, 92, 79, 105, 76, 103, 74, 
  84, 72, 91, 59, 92, 76, 109, 89, 111, 78, 
  94, 77, 102, 72, 90, 60, 96, 82, 99, 74, 
  97, 4, 36, 56, 48, -77, 70, 57, 35, -43, 
  41, -23, 9, 13, 88, 69, 99, 76, 91, 70, 
  84, 65, 83, 53, 87, 62, 104, 82, 84, 57, 
  87, 67, 105, 64, 65, 21, 83, 69, 86, 54, 
  81, -33, 53, 59, 57, -77, 45, 37, 42, -60, 
  4, -77, 31, 20, 80, 58, 91, 70, 74, 59, 
  87, 47, 80, 64, 88, 84, 100, 63, 71, 57, 
  82, 69, 98, 53, 67, 45, 81, 63, 74, 50, 
  84, 5, 32, 56, 55, -128, 2, -29, 19, -37, 
  45, -60, -33, 34, 82, 72, 95, 55, 87, 63, 
  82, 62, 88, 70, 96, 83, 91, 38, 50, 27, 
  76, 73, 95, 26, 72, 49, 83, 63, 88, 55, 
  82, -1, 56, 56, 33, -43, -1, -2, 42, -16, 
  40, -23, 36, 40, 89, 50, 74, 58, 88, 57, 
  75, 55, 90, 70, 99, 84, 83, -128, 4, -77, 
  52, 57, 83, 8, 37, 1, 69, 54, 79, 5, 
  53, -128, 31, 32, 35, -77, -50, -128, 36, -18, 
  -29, -128, 69, 60, 80, 70, 77, -8, 71, 51, 
  78, 43, 79, 60, 92, 50, 24, -128, -128, -128, 
  49, 47, 69, -128, 1, -128, -7, -60, 50, -20, 
  37, -128, 28, 13, 29, -10, 5, -128, 1, -60, 
  -23, -128, 63, 45, 78, 50, 56, -18, 64, 23, 
  58, 0, 69, 67, 92, 1, -128, -128, -128, -128, 
  1, -14, 42, -128, -43, -128, 4, -37, 40, -60, 
  5, -128, 6, -128, 37, 4, 4, -128, -8, -77, 
  7, -128, 65, 40, 72, 25, -14, -33, 49, -8, 
  40, -8, 79, 63, 66, -128, -128, -128, -128, -128, 
  -128, -128, 0, -128, -26, -128, -60, -128, 34, -6, 
  15, -128, -43, -128, 46, 17, -33, -128, 1, -128, 
  23, -128, 67, 28, 62, -16, -128, -128, 22, -20, 
  54, 47, 75, 35, 14, -128, -128, -128, -128, -128, 
  -77, -128, -60, -128, -128, -128, -128, -128, 48, -26, 
  0, -128, 38, 45, 70, 22, 71, 69, 90, 60, 
  -3, -128, 57, 31, 40, -128, -128, -128, 24, -128, 
  63, 52, 63, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 20, -23, 
  -2, -128, -128, -128, -10, -60, -60, -128, -60, -128, 
  19, -128, 49, 51, 52, -128, -128, -128, 42, -26, 
  74, 55, 40, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 23, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -37, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, 47, 40, 34, -128, -128, -128, -16, -14, 
  72, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, -8, -20, -128, -128, -128, -128, -128, 
  37, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 39, -7, -1, -128, -128, -128, 40, 13, 
  26, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -37, -128, 
  -128, -128, 52, 25, 16, -128, -128, -128, 57, 2, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  -128, -128, -37, -128, -128, -128, -128, -128, -50, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -128, 24, -1, 
  -128, -128, -128, -128, -128, -128, -128, -128, -23, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -6, -128, 
  29, 25, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 9, -26, -8, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  43, 51, 56, -77, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 23, -12, 6, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  24, 17, 77, 47, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -4, -33, -1, -128, -6, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  -128, -128, 80, 75, 53, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -37, -128, -128, -128, 
  -128, -128, -128, -128, 21, 22, 37, -77, -18, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -2, -33, -29, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, 15, -18, 31, -128, -20, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -23, -128, -20, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};
