/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/e1469561_nohash_3.wav" \
 * --output_c_file="features_c_files/no/no_e1469561_nohash_3.cc" \
 */
#include "no_e1469561_nohash_3.h"


const int g_no_e1469561_nohash_3_width = 40;
const int g_no_e1469561_nohash_3_height = 49;
alignas(16) const signed char g_no_e1469561_nohash_3_data[] = {
  105, 90, 80, 81, 90, 95, 114, 85, 78, 60, 
  64, 48, 54, 53, 70, 48, 53, 42, 45, 44, 
  53, 45, 47, 37, 49, 58, 64, 50, 44, 30, 
  47, 20, 20, 39, 37, 30, 56, 57, 48, 17, 
  92, 77, 82, 73, 74, 82, 104, 76, 71, 54, 
  54, 46, 55, 70, 80, 44, 60, 28, 44, 40, 
  56, 52, 45, 4, 34, 45, 57, 44, 39, 27, 
  55, 19, 49, 19, 33, 12, 48, 49, 39, 24, 
  88, 55, 87, 50, 80, 57, 82, 54, 51, 62, 
  60, -3, 11, 60, 81, 17, 25, 29, 45, -7, 
  50, 16, 34, 21, 32, 46, 72, 33, 49, 16, 
  43, 12, 18, 13, 31, 17, 52, 45, 41, -6, 
  29, 39, 66, 49, 79, 35, 36, -7, 78, 67, 
  67, 18, 53, 52, 63, -10, 9, 27, 19, 16, 
  58, 25, 17, 7, 40, 37, 55, 36, 22, 4, 
  28, 30, 27, 19, 22, 8, 65, 52, 39, 19, 
  50, 49, 70, 4, 76, 11, 43, 15, 72, 60, 
  80, 34, 77, 69, 51, 47, 38, 17, 18, 10, 
  48, 9, 42, 9, 25, -20, 43, 16, 44, 24, 
  41, 22, 33, 21, 25, 17, 45, 21, 29, 19, 
  62, 39, 45, 5, 70, -1, 4, 59, 90, -2, 
  55, 35, 37, -8, 52, 64, 34, 19, 35, 14, 
  9, 19, 32, 5, 39, 4, 52, 9, 22, 1, 
  21, 17, 12, 24, 18, -14, 39, 18, 4, -14, 
  49, 5, 74, 0, 21, -128, -4, 29, 69, 38, 
  83, 52, 32, -128, 5, -6, 21, -60, 21, 29, 
  17, -14, 32, -1, 27, -6, 63, -3, 29, 17, 
  4, -6, 33, -7, 44, 13, 33, -6, 24, -2, 
  40, -77, 49, 46, 48, -50, 35, -128, 38, 56, 
  82, 48, 42, 25, 55, 54, 48, 20, 66, 39, 
  48, 42, 46, 46, 63, 37, 54, 58, 78, 70, 
  84, 83, 90, 65, 69, 43, 39, -4, 17, 23, 
  36, -50, 64, 41, 62, -77, 19, -18, 31, 8, 
  37, -43, 4, -77, 20, -20, 39, -2, 42, 12, 
  -23, -50, 15, -3, 32, -128, 42, -20, 26, 10, 
  54, 61, 89, 65, 75, 42, 53, 11, 28, -12, 
  56, -8, 45, 16, 18, -128, -128, -60, 9, -77, 
  9, -7, 26, -128, 4, -128, 4, -37, 4, -33, 
  19, -128, -50, -77, 25, -33, 32, -43, 14, -77, 
  -8, -128, 16, -77, 19, -18, 42, 13, 11, -60, 
  49, 33, 55, -128, 45, -37, 39, 2, -2, -128, 
  -37, -23, 5, -128, -7, -128, 8, -23, -77, -128, 
  -20, -128, -18, -77, 14, -128, 18, -128, 17, -128, 
  -20, -128, -50, -128, -33, -43, 32, 1, -14, -128, 
  29, -128, 52, -128, -50, -128, -43, -20, 13, -128, 
  -6, -128, -50, -128, -50, -33, 26, 0, 9, -16, 
  -18, -50, 5, -26, -16, -50, 22, -77, -14, -128, 
  -43, -128, -33, -128, -14, -50, 35, -2, 0, -77, 
  98, 77, 99, 55, 81, -16, -14, -43, -8, -77, 
  11, -60, 5, -128, 24, 34, 83, 57, 50, 2, 
  42, 5, 62, 64, 84, 57, 28, -128, -14, -26, 
  24, -60, -12, -26, -26, -43, 16, -77, 5, -29, 
  119, 102, 123, 100, 120, 84, 95, 51, 69, 60, 
  95, 74, 90, 72, 98, 94, 120, 93, 109, 83, 
  93, 83, 104, 95, 115, 94, 85, -12, 25, 1, 
  36, 31, 43, 23, 47, 13, 47, 15, 45, 35, 
  109, 91, 113, 89, 112, 79, 99, 67, 79, 70, 
  107, 84, 97, 85, 109, 82, 107, 84, 106, 82, 
  90, 80, 104, 88, 111, 90, 104, 72, 64, 63, 
  102, 83, 87, 39, 34, 21, 47, 15, 56, 49, 
  103, 77, 109, 77, 109, 91, 107, 96, 117, 85, 
  105, 94, 116, 96, 115, 91, 102, 87, 104, 82, 
  103, 90, 110, 69, 106, 89, 114, 88, 97, 87, 
  111, 85, 98, 55, 56, 44, 55, 29, 50, 35, 
  100, 72, 101, 74, 104, 85, 117, 95, 119, 95, 
  111, 94, 120, 97, 114, 78, 99, 69, 98, 72, 
  94, 60, 77, 28, 95, 75, 105, 86, 99, 69, 
  97, 76, 94, 58, 69, 58, 71, 50, 79, 61, 
  93, 62, 95, 64, 95, 75, 107, 82, 109, 89, 
  111, 90, 111, 69, 90, 49, 90, 42, 85, 44, 
  74, 38, 65, 47, 75, 57, 92, 73, 87, 59, 
  94, 74, 90, 63, 69, 44, 62, 39, 79, 58, 
  90, 54, 90, 58, 91, 66, 101, 75, 102, 85, 
  105, 82, 86, 39, 69, -1, 72, 7, 75, 36, 
  76, 6, 55, 55, 64, 32, 82, 70, 82, 48, 
  80, 65, 90, 65, 75, 43, 63, 30, 61, 61, 
  84, 50, 85, 53, 85, 61, 95, 69, 95, 79, 
  101, 73, 79, 20, 64, -3, 63, 11, 60, 14, 
  73, 16, 59, 37, 53, 10, 64, 64, 81, 14, 
  69, 50, 80, 45, 75, 28, 52, 24, 68, 55, 
  74, 43, 78, 48, 79, 57, 87, 60, 88, 70, 
  90, 63, 70, 4, 61, -14, 59, -4, 57, 4, 
  63, 24, 59, 31, 46, -2, 54, 55, 77, 18, 
  67, 53, 84, 50, 60, 24, 49, -18, 59, 44, 
  70, 42, 72, 38, 71, 50, 78, 55, 81, 60, 
  79, 44, 62, -4, 54, 13, 55, -3, 56, -14, 
  51, 0, 39, 17, 57, -16, 39, 27, 74, 19, 
  61, 36, 77, 31, 50, 7, 46, 11, 57, 25, 
  59, 29, 56, 31, 59, 43, 62, 54, 69, 8, 
  74, 26, 68, -12, 28, -16, 21, 6, 46, -10, 
  39, -77, 32, -50, 38, -128, 34, -1, 62, -37, 
  42, -10, 59, -26, 49, 21, 51, 6, 55, 4, 
  54, 9, 21, 23, 42, 13, 31, 35, 42, -3, 
  61, -3, 46, -128, -43, -128, 2, -128, 10, -128, 
  -12, -128, -128, -128, -128, -128, -128, -128, 14, -128, 
  -128, -128, 45, 34, 46, -128, -12, -128, 20, -128, 
  11, -128, -128, -128, -128, -128, -128, -128, -20, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -8, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -43, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -26, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -1, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -37, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -23, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -128, -128, -128, 
};
