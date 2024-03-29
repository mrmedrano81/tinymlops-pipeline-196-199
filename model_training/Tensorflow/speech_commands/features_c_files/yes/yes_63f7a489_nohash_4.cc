/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/63f7a489_nohash_4.wav" \
 * --output_c_file="features_c_files/yes/yes_63f7a489_nohash_4.cc" \
 */
#include "yes_63f7a489_nohash_4.h"


const int g_yes_63f7a489_nohash_4_width = 40;
const int g_yes_63f7a489_nohash_4_height = 49;
alignas(16) const signed char g_yes_63f7a489_nohash_4_data[] = {
  -128, -128, -128, -128, -128, -128, -33, -50, -33, -50, 
  -26, -26, -128, -128, -128, -128, -60, -128, -50, -50, 
  -128, -60, -18, -37, -18, -128, -128, -60, -50, -60, 
  -60, -50, -60, -37, -50, -60, -60, -50, -60, -128, 
  -128, -128, -128, -128, -128, -60, -60, -50, -18, -37, 
  -60, -128, -60, -37, -128, -20, -50, -128, -50, -60, 
  -60, -128, -128, -128, -26, -60, -128, -60, -50, -50, 
  -128, -50, -60, -50, -60, -50, -60, -50, -60, -128, 
  -128, -128, -128, -128, -128, -50, -60, -37, -12, -37, 
  -50, -50, -26, -29, -50, -37, -60, -60, -26, -128, 
  -128, -37, -60, -128, -60, -77, -60, -128, -50, -50, 
  -50, -77, -60, -50, -50, -77, -50, -37, -50, -37, 
  -128, -128, -128, -128, -60, -128, -50, -128, -37, -50, 
  -37, -77, -60, -77, -37, -43, -37, -37, -128, -128, 
  -60, -50, -60, -77, -60, -77, -50, -77, -50, -77, 
  -50, -50, -26, -128, -37, -50, -50, -29, -26, 15, 
  71, 79, 100, 94, 112, 91, 85, 51, 30, 5, 
  27, -23, -37, -50, -60, -128, -128, -50, -50, -50, 
  -1, 44, 63, 29, -29, -37, -60, -50, -29, 7, 
  79, 78, 72, 24, -37, 7, 24, -26, 65, 77, 
  90, 94, 112, 94, 115, 90, 115, 86, 72, 44, 
  58, 20, -14, 12, 11, -60, -14, -23, 20, 24, 
  92, 92, 111, 90, 91, 78, 91, 77, 89, 84, 
  109, 90, 104, 87, 65, 77, 94, 67, 93, 80, 
  93, 87, 108, 82, 109, 85, 109, 87, 80, 62, 
  52, 0, -8, -50, -37, -26, -3, -33, 16, 45, 
  94, 87, 108, 80, 99, 77, 96, 70, 81, 75, 
  85, 70, 92, 61, 96, 70, 90, 59, 82, 77, 
  90, 83, 110, 76, 109, 89, 100, 87, 107, 85, 
  104, 70, 46, -50, -29, -16, 12, 40, 56, 64, 
  89, 84, 111, 85, 106, 88, 109, 84, 95, 85, 
  87, 55, 88, 69, 98, 73, 100, 86, 94, 65, 
  72, 75, 107, 70, 106, 90, 102, 89, 99, 85, 
  112, 89, 55, 42, 42, 44, 58, 65, 89, 89, 
  108, 86, 104, 82, 107, 85, 109, 84, 107, 82, 
  85, 67, 82, 64, 97, 87, 111, 80, 100, 80, 
  57, 54, 95, 64, 108, 91, 105, 86, 97, 77, 
  105, 85, 73, 40, 66, 74, 95, 80, 102, 88, 
  115, 92, 111, 83, 105, 78, 94, 65, 93, 69, 
  97, 70, 64, 13, 79, 60, 89, 79, 96, 57, 
  75, 34, 84, 55, 108, 92, 112, 89, 106, 75, 
  97, 77, 101, 52, 90, 79, 100, 84, 99, 87, 
  114, 84, 81, 77, 111, 86, 82, 54, 89, 65, 
  93, 53, 89, 66, 81, 64, 84, 69, 89, 62, 
  78, 35, 70, 56, 89, 57, 109, 89, 109, 87, 
  107, 78, 94, 70, 87, 67, 95, 89, 115, 94, 
  105, 27, 79, 79, 99, 60, 87, 52, 72, 54, 
  90, 75, 87, 67, 87, 54, 72, 40, 74, 25, 
  50, 28, 62, 57, 68, 7, 106, 78, 111, 86, 
  102, 67, 89, 74, 96, 72, 102, 84, 111, 84, 
  82, 26, 82, 74, 90, 64, 60, 11, 22, 4, 
  71, 24, 62, 50, 75, 51, 68, 56, 83, -29, 
  60, -2, 10, 55, 41, -26, 65, 32, 90, 64, 
  85, 67, 77, 71, 89, 64, 93, 54, 95, 34, 
  53, -33, 52, 57, 90, 25, 58, -43, 41, 43, 
  93, 61, 68, 9, 70, 46, 85, 55, 95, 47, 
  -33, -128, -6, -128, -128, -128, 11, -128, -10, -128, 
  -37, -12, 75, 62, 46, -33, 25, -128, 46, -128, 
  -128, -128, -128, -128, -8, -128, -128, -128, 46, 47, 
  52, -128, 36, -128, 23, -77, 4, -128, 59, -10, 
  4, -128, -128, -128, -128, -128, -50, -128, -77, -128, 
  -128, -128, 35, 35, 58, 8, 37, -128, 43, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 42, 46, 
  67, 19, 74, 59, 80, 64, 82, 75, 95, 78, 
  -128, -128, -128, -128, -128, -128, -20, -128, -128, -128, 
  -128, -128, 69, 18, 48, -128, 18, -128, 0, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 50, -50, 
  44, -23, 72, 69, 93, 69, 93, 89, 111, 75, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -4, -128, 39, 29, 34, -128, -1, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 42, -6, 
  45, 5, 84, 74, 88, 71, 93, 81, 105, 79, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, 11, -128, -20, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -26, -77, 
  23, 12, 84, 58, 82, 42, 86, 64, 79, 63, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -60, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 22, -128, 
  12, -37, 71, 48, 63, 34, 83, 49, 71, 52, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -7, -77, 
  -50, -128, 65, 35, 64, 48, 66, 41, 67, 49, 
  -128, -128, -77, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -77, -3, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 1, -128, 
  -14, -29, 65, 16, 54, 18, 55, -16, 65, 29, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  15, -18, 72, 19, 47, 33, 68, 30, 57, 33, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -8, 58, 24, 59, -7, 66, -10, 54, -8, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -7, -128, 
  -4, -26, 47, 32, 67, -20, 55, 7, 54, -7, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 17, -20, 
  -128, -2, 52, 23, 50, -77, 45, -128, 17, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 6, -128, 
  -43, -128, 53, 11, 48, -128, -128, -128, -23, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -20, -128, 
  -128, -128, 35, -29, 27, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -128, -128, -128, 
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
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
