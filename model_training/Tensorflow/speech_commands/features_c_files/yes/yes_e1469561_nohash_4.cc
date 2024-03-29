/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/e1469561_nohash_4.wav" \
 * --output_c_file="features_c_files/yes/yes_e1469561_nohash_4.cc" \
 */
#include "yes_e1469561_nohash_4.h"


const int g_yes_e1469561_nohash_4_width = 40;
const int g_yes_e1469561_nohash_4_height = 49;
alignas(16) const signed char g_yes_e1469561_nohash_4_data[] = {
  86, 81, 73, 62, 71, 83, 93, 76, 89, 67, 
  75, 67, 63, 72, 80, 83, 96, 82, 93, 83, 
  74, 37, 44, 52, 62, 69, 70, 48, 47, 53, 
  56, 57, 52, 37, 49, 30, 53, 47, 29, 35, 
  76, 61, 74, 69, 78, 63, 84, 65, 87, 76, 
  83, 76, 80, 80, 83, 75, 91, 77, 82, 52, 
  73, 63, 75, 75, 74, 32, 53, 26, 50, 39, 
  60, 46, 39, 32, 32, 36, 63, 54, 34, 20, 
  83, 86, 102, 58, 70, 57, 76, 64, 88, 68, 
  57, 57, 73, -6, 4, 25, 74, 31, 87, 48, 
  78, 73, 69, 66, 75, 62, 74, 44, 59, 35, 
  61, 54, 66, 62, 70, 67, 79, 69, 91, 77, 
  95, 64, 99, 74, 74, 67, 95, 65, 54, 14, 
  54, 49, 74, -16, 49, -33, 51, 54, 89, 52, 
  58, 75, 90, 57, 74, 57, 71, 51, 69, 37, 
  53, 53, 63, 22, 62, 44, 65, 53, 67, 50, 
  78, 68, 97, 69, 65, 75, 94, 44, 43, 24, 
  62, 2, 44, -23, 45, -37, 54, 45, 77, 54, 
  69, 71, 89, -2, 46, 19, 59, -4, 49, 37, 
  30, -23, 25, -4, 47, 1, 31, -23, 37, 4, 
  79, 51, 77, 15, 65, 53, 77, 37, 59, 53, 
  62, -50, 30, -23, 17, -23, 57, -77, 44, 42, 
  59, 45, 66, 19, 53, 4, 53, 18, 40, -29, 
  -4, -18, 14, -2, 4, -37, 27, -23, 11, -128, 
  70, 43, 50, 41, 79, 58, 71, 56, 59, 13, 
  74, -14, -6, 1, 55, 14, 84, 9, -12, 13, 
  31, -43, 24, -20, -18, -26, 51, 26, 29, 4, 
  1, -43, 13, -4, 16, -128, 37, -29, -3, -128, 
  57, -43, -128, 11, 83, 69, 78, 30, 54, 42, 
  56, -128, 14, 4, 73, 29, 79, 9, -4, 21, 
  47, -128, 4, -4, 52, 37, 61, 36, 40, -43, 
  33, -7, 18, 24, 37, -128, 26, -43, 6, -50, 
  71, 52, 63, 37, 82, 65, 84, 55, 56, 14, 
  40, -43, 39, -7, 48, 4, 44, -128, 0, 31, 
  68, 37, 79, 63, 82, 65, 90, 72, 75, 20, 
  19, -18, 35, 1, 24, -43, 7, -128, -8, -60, 
  124, 102, 123, 103, 124, 99, 109, 65, 100, 84, 
  97, 62, 79, 63, 78, 25, 57, 31, 65, 87, 
  119, 100, 120, 97, 122, 101, 117, 99, 118, 88, 
  100, 88, 97, 44, 55, 24, 40, 15, 47, 14, 
  111, 95, 117, 96, 119, 89, 116, 95, 111, 86, 
  107, 90, 112, 90, 101, 72, 93, 80, 105, 91, 
  117, 95, 118, 97, 120, 95, 116, 97, 119, 97, 
  120, 99, 120, 86, 79, 65, 82, 62, 77, 61, 
  103, 82, 106, 84, 112, 92, 120, 93, 113, 90, 
  108, 90, 111, 87, 113, 88, 109, 92, 117, 94, 
  115, 85, 104, 87, 111, 78, 101, 78, 100, 79, 
  99, 69, 97, 77, 73, 60, 70, 43, 72, 54, 
  88, 67, 94, 62, 91, 90, 116, 88, 105, 89, 
  109, 85, 106, 84, 105, 82, 105, 89, 113, 94, 
  105, 49, 88, 66, 89, 54, 85, 55, 87, 59, 
  82, 65, 94, 70, 76, 51, 74, 61, 74, 55, 
  84, 57, 89, 45, 80, 80, 106, 85, 110, 80, 
  101, 76, 104, 76, 100, 80, 104, 75, 109, 83, 
  88, 14, 76, 62, 91, 67, 87, 63, 93, 61, 
  92, 67, 94, 73, 89, 50, 72, 50, 80, 51, 
  84, 47, 82, 45, 79, 65, 89, 74, 102, 59, 
  95, 68, 85, 71, 86, 71, 87, 74, 98, 67, 
  67, -37, 54, 27, 78, 55, 80, 35, 85, 55, 
  79, 53, 87, 57, 59, 26, 51, 11, 60, 16, 
  81, 27, 64, 33, 66, 34, 57, 29, 69, 15, 
  68, 10, 69, 43, 67, -18, 50, 22, 60, -12, 
  -8, -128, -128, -128, 4, -77, 48, -128, 29, 52, 
  75, 29, 75, 11, 66, 34, 53, 19, 48, 14, 
  64, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -10, -128, 9, -128, 10, -128, 35, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 42, 49, 
  64, 32, 76, 74, 104, 76, 76, 59, 96, 58, 
  74, 30, 70, -60, -128, -128, -128, -128, -10, -128, 
  -2, -128, 28, -77, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 11, -128, 32, 65, 
  99, 77, 96, 81, 115, 94, 112, 89, 111, 92, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 37, -33, 68, 54, 
  88, 78, 102, 84, 109, 86, 109, 85, 105, 80, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -4, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -14, -128, 71, 64, 
  78, 67, 94, 72, 93, 75, 97, 73, 89, 72, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, 64, 40, 
  73, 35, 84, 60, 79, 55, 85, 49, 85, 64, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -77, 54, 31, 
  75, 44, 74, 50, 70, 58, 86, 49, 79, 31, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 45, 18, 
  61, 17, 49, 19, 67, 30, 59, 22, 66, 44, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 25, -77, 
  42, 11, 45, -33, 41, -29, 46, -18, 39, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -18, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -12, -50, 
  39, -128, -77, -128, 4, -77, 31, -33, 23, -50, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  32, -50, 2, -128, -77, -128, -128, -128, -43, -128, 
  -128, -128, -128, -128, -128, -128, 36, -128, 17, -77, 
  21, -128, -6, -128, 39, -128, 27, -128, -2, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -3, 
  0, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, 8, -128, 15, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -60, 
  -128, -128, -128, -128, -128, -128, -60, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
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
