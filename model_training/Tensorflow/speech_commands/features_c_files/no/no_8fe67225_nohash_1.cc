/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/8fe67225_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_8fe67225_nohash_1.cc" \
 */
#include "no_8fe67225_nohash_1.h"


const int g_no_8fe67225_nohash_1_width = 40;
const int g_no_8fe67225_nohash_1_height = 49;
alignas(16) const signed char g_no_8fe67225_nohash_1_data[] = {
  83, 75, 58, 35, 17, 30, 23, 45, 67, 56, 
  52, 37, 35, 51, 44, 30, 31, 30, 56, 48, 
  31, 30, 33, -2, 17, 11, 37, 32, 17, -7, 
  5, 7, 31, 34, 37, 17, 37, 46, 39, 23, 
  65, 46, 48, 41, 40, 35, 50, 58, 57, 59, 
  54, 35, 49, 44, 44, 40, 40, 37, 52, 28, 
  35, 25, 29, 20, 24, 14, 24, 9, 32, 24, 
  22, 23, 29, -12, 17, 21, 33, 9, 35, 24, 
  27, 19, 46, 34, 57, 36, 51, 29, 59, 46, 
  68, 23, 28, 27, 42, 27, 36, 2, 18, -33, 
  21, 14, 5, -20, 34, 25, 48, 17, 22, -4, 
  17, 27, 19, -6, 27, 28, 21, 2, 26, 9, 
  60, 54, 61, 52, 67, 47, 60, 42, 35, 32, 
  37, -3, 9, 39, 29, -43, -18, -16, 41, 20, 
  44, 21, 15, 17, 14, 16, 19, -33, -23, 1, 
  -4, -2, 28, 0, 17, 17, 7, 2, 10, -2, 
  77, 43, 42, 57, 93, 80, 65, 24, 47, 58, 
  64, 39, 34, 28, 23, 28, 5, -43, 24, -6, 
  36, 10, 21, 1, 21, 15, 11, -16, 10, -6, 
  4, -23, 24, 19, 19, -1, 28, 8, 20, 29, 
  -37, 14, 65, 49, 96, 79, 79, 35, 66, 50, 
  62, -43, 1, -6, 14, -18, -29, -4, 19, 11, 
  5, -2, 20, 1, 11, 28, 40, 12, 24, -8, 
  6, -16, 14, 25, 29, -18, 29, -10, 26, -14, 
  71, 62, 89, 83, 95, 62, 69, 40, 57, -1, 
  6, -37, 25, -8, 17, -4, 6, 10, 36, 10, 
  0, -33, 31, -2, 2, 26, 51, -6, 27, 2, 
  25, -6, 25, 9, 39, -20, 4, 2, 38, 4, 
  125, 102, 122, 97, 115, 84, 83, 64, 74, 5, 
  32, 7, 37, 39, 53, 53, 79, 61, 76, 59, 
  70, 62, 82, 49, 48, 80, 96, 55, 50, 35, 
  43, 36, 45, 49, 72, 41, 90, 82, 96, 94, 
  117, 100, 121, 96, 113, 96, 115, 85, 81, 49, 
  61, 59, 53, 10, 49, 40, 57, 54, 73, 40, 
  63, 56, 81, 70, 61, 70, 89, 54, 45, 24, 
  7, 33, 49, 35, 59, 46, 78, 56, 68, 30, 
  109, 89, 108, 85, 108, 89, 110, 88, 74, 71, 
  85, 68, 58, -50, 65, 63, 72, 60, 76, 29, 
  64, 68, 93, 77, 87, 76, 90, 24, -128, -128, 
  34, -10, 14, 25, 61, 44, 55, 24, 54, -77, 
  103, 80, 98, 78, 101, 76, 105, 79, 92, 74, 
  85, 46, 61, 22, 74, 51, 54, 17, 69, 42, 
  64, 60, 86, 57, 97, 77, 97, 57, 67, 34, 
  61, 28, 49, 41, 61, 44, 49, 10, 56, -60, 
  94, 66, 85, 65, 88, 53, 100, 69, 94, 75, 
  73, 32, 62, 40, 64, 44, 57, 44, 87, 71, 
  50, 47, 68, 40, 88, 73, 90, 65, 74, 47, 
  28, -43, 29, 29, 60, 43, 55, 19, 45, -77, 
  83, 36, 75, 51, 86, 44, 91, 50, 74, 26, 
  85, 64, 63, 42, 69, 42, 62, 42, 66, 40, 
  79, 49, 79, 58, 85, 58, 81, 60, 57, 30, 
  4, -128, 44, 0, 31, -20, 21, -77, 26, -128, 
  71, -29, 69, 49, 92, 45, 67, 52, 74, -16, 
  58, -6, 66, 48, 80, 53, 67, -18, -26, 15, 
  72, 56, 82, 58, 87, 47, 73, 58, 68, -1, 
  42, 13, 42, -8, 33, -33, 17, -128, 2, -128, 
  65, 4, 55, 52, 103, 81, 107, 93, 113, 76, 
  99, 75, 93, 65, 81, 68, 96, 91, 117, 95, 
  112, 81, 105, 92, 119, 90, 108, 97, 120, 92, 
  90, 50, 59, 29, 57, 12, 46, 5, 57, -16, 
  57, -128, 51, 50, 87, 77, 100, 80, 112, 88, 
  110, 78, 97, 85, 104, 78, 107, 90, 108, 87, 
  103, 77, 100, 80, 97, 63, 97, 80, 102, 72, 
  93, 62, 80, 52, 54, 24, 42, 11, 53, -1, 
  54, -128, 42, 27, 80, 66, 95, 79, 107, 85, 
  104, 75, 93, 76, 104, 92, 114, 82, 86, 66, 
  93, 66, 84, 60, 70, 10, 75, 55, 78, 63, 
  64, 60, 86, 51, 42, 16, 31, -7, 43, -60, 
  25, -128, 66, -33, 66, 42, 86, 74, 89, 35, 
  90, 76, 102, 76, 90, 71, 95, 32, 34, 12, 
  71, 50, 69, 63, 75, -128, 5, 15, 67, 67, 
  75, 63, 102, 82, 69, -33, 32, -14, 31, -128, 
  -14, -128, 58, -26, 67, 25, 76, 69, 97, 71, 
  90, 65, 83, 62, 89, 69, 94, 64, 54, 21, 
  75, 23, 75, 62, 60, -128, -20, -60, 58, 45, 
  70, 50, 76, 48, 52, -4, 33, -43, 30, -77, 
  -128, -128, 57, -128, 54, 24, 75, 57, 68, -8, 
  74, 48, 76, 47, 43, 44, 92, 55, 42, 8, 
  67, 26, 72, 29, 11, -128, 32, -77, 59, 32, 
  63, -6, 36, -50, 5, -128, -33, -128, -23, -128, 
  -128, -128, 55, -128, 64, 40, 77, 4, 40, -128, 
  48, -33, 55, 11, 25, -7, 70, 49, 62, 30, 
  62, -1, 75, 2, 15, -128, -128, -128, 38, -26, 
  25, -23, 37, -128, -3, -77, -14, -128, -33, -128, 
  -77, -128, 43, -128, 19, -1, 54, -128, 30, -128, 
  -128, -128, 28, -128, -128, -128, -60, -128, 51, -10, 
  56, -60, 62, -37, -128, -128, -128, -128, 24, -77, 
  -18, -50, 19, -128, -60, -128, -23, -128, -3, -128, 
  -77, -128, -128, -128, 58, 12, 4, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, 38, -26, 
  27, -128, 64, -128, -128, -128, -128, -128, 11, -128, 
  -128, -128, -77, -128, -60, -128, -50, -128, -43, -128, 
  27, -128, -50, -1, 28, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -43, -128, 
  -29, -128, 24, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -29, -128, -23, -128, 
  -3, -128, -12, -128, 6, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -37, -128, -60, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
  -128, -128, -128, -128, -128, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
