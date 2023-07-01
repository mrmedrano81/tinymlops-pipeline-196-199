/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/yes/5828dfa2_nohash_0.wav" \
 * --output_c_file="features_c_files/yes/yes_5828dfa2_nohash_0.cc" \
 */
#include "yes_5828dfa2_nohash_0.h"


const int g_yes_5828dfa2_nohash_0_width = 40;
const int g_yes_5828dfa2_nohash_0_height = 49;
alignas(16) const signed char g_yes_5828dfa2_nohash_0_data[] = {
  114, 92, 110, 95, 112, 96, 110, 85, 102, 92, 
  107, 89, 99, 80, 102, 92, 103, 90, 106, 88, 
  103, 88, 98, 85, 101, 87, 97, 78, 92, 78, 
  94, 89, 99, 79, 91, 84, 89, 83, 92, 80, 
  94, 74, 96, 81, 94, 53, 93, 87, 99, 77, 
  97, 79, 95, 77, 92, 72, 97, 74, 90, 72, 
  90, 78, 99, 75, 87, 81, 94, 75, 79, 65, 
  82, 63, 77, 73, 85, 69, 94, 78, 85, 65, 
  62, 53, 82, 32, 87, 71, 99, 78, 91, 57, 
  91, 70, 79, 60, 86, 61, 62, 55, 83, 57, 
  91, 63, 87, 65, 79, 50, 75, 57, 75, 42, 
  67, 55, 69, 44, 78, 54, 86, 57, 84, 57, 
  37, 54, 89, 40, 84, 48, 62, 72, 104, 73, 
  86, 60, 83, 63, 75, 34, 78, 60, 78, 59, 
  79, 45, 74, 49, 61, 53, 89, 39, 68, 51, 
  75, 43, 73, 64, 83, 48, 73, 49, 66, 42, 
  72, 53, 88, 62, 76, 39, 63, 36, 77, 52, 
  67, 23, 64, -2, 80, 60, 70, 29, 63, 49, 
  67, 53, 75, 44, 66, 36, 59, 49, 61, 44, 
  72, 30, 55, 52, 77, 52, 67, 21, 64, 39, 
  81, 44, 72, 21, 15, -2, 72, 30, 60, 49, 
  60, 17, 43, 34, 73, 47, 85, 52, 68, 31, 
  56, 32, 53, 2, 35, 11, 46, -50, 60, 32, 
  63, 4, 58, 20, 71, 41, 67, 11, 63, 34, 
  66, 59, 77, 37, 47, 27, 69, 65, 84, 54, 
  70, 39, 59, 62, 69, 46, 79, 44, 65, 42, 
  72, 25, 55, 52, 72, 13, 67, 84, 100, 29, 
  76, 47, 71, 57, 78, 49, 75, 66, 85, 42, 
  -18, -26, 29, -128, 55, -6, 65, 49, 82, 24, 
  65, 44, 59, -3, 69, 40, 79, 40, 55, 33, 
  71, 28, 35, -4, 72, 45, 54, -8, 44, 22, 
  47, 17, 53, 38, 45, 37, 65, 15, 50, 10, 
  69, -12, -16, 22, 70, -10, 69, 62, 80, 54, 
  80, 23, 47, 11, 34, 16, 70, 26, 67, 32, 
  52, 34, 63, 12, 61, 17, 59, -14, 46, 26, 
  55, -16, 49, 21, 62, 35, 57, 9, 55, -3, 
  73, 40, 67, 37, 56, -12, 21, -23, 37, -12, 
  26, -23, 35, 7, 67, 45, 61, -29, 55, 40, 
  53, -6, 58, -2, 40, 12, 48, -29, 44, 21, 
  54, 4, 50, -16, 32, 11, 42, -23, 50, 11, 
  30, -128, 32, -33, 7, 47, 67, -128, 9, -16, 
  47, -14, 29, -18, 39, -128, 59, 39, 54, -26, 
  38, 29, 58, -7, 48, -10, 47, -16, 52, 32, 
  44, 14, 59, 11, 52, 7, 58, 16, 48, 8, 
  56, -128, 49, -128, 30, 19, 57, -7, 65, 41, 
  62, 11, 49, -7, 59, -23, 41, 37, 64, 9, 
  49, -8, 52, 31, 58, 24, 42, -18, 21, -33, 
  37, 4, 34, -6, 42, -23, 44, -37, 28, -8, 
  62, -60, 38, -10, 40, -128, 52, 13, 38, 10, 
  56, 8, 57, 16, 60, -3, -18, -77, 4, -10, 
  52, -14, 23, -1, 19, -37, 22, -50, 49, 4, 
  47, 4, 42, -8, 39, -43, 53, -26, 24, -16, 
  55, -60, 58, 19, 27, -50, -33, -128, 17, -26, 
  33, -128, 45, 19, 30, -4, 50, 22, 34, -37, 
  28, 2, 28, 22, 57, 4, 40, -18, -6, -29, 
  37, -20, 33, -128, 40, -20, 44, -16, 34, -18, 
  14, -50, 56, 25, 52, -16, 42, -23, -128, -128, 
  14, 9, 49, -29, 32, -128, 54, -37, 61, 28, 
  21, -23, 29, -128, 47, -33, 29, -128, -8, -128, 
  35, 24, 44, -43, 33, 5, 41, -43, 16, -3, 
  31, -60, 29, -33, 7, -128, -33, -128, 47, -29, 
  15, -26, 62, -77, 24, -128, -33, -128, 32, -128, 
  21, -50, 15, -128, 32, -33, 31, -128, 16, -29, 
  22, -10, 9, -12, 29, -60, 4, -128, 49, -1, 
  47, 4, 40, 16, 44, 19, 64, 26, 73, 2, 
  44, 29, 60, -4, 31, 20, -4, -128, -29, -77, 
  10, -128, 27, -60, 34, -128, 37, -128, 29, -14, 
  40, -12, 8, -26, 18, -128, 20, -43, 17, -77, 
  28, 0, 36, 10, 50, -33, 34, -6, 47, 25, 
  45, -6, 30, -14, 44, -6, 4, -77, 52, -8, 
  30, -1, 20, -37, -4, -128, -77, -128, 19, -10, 
  15, -128, 40, -50, 28, -128, 12, -77, 7, -43, 
  40, -128, -29, -128, -18, -77, 6, -128, 14, -128, 
  -128, -128, 48, 40, 57, 6, 49, -128, 33, -128, 
  -20, -128, 49, -43, 22, -128, 22, -128, 17, -60, 
  2, -60, 8, -128, -1, -43, 4, -128, 15, -77, 
  50, 2, -4, -77, 32, -128, -33, -128, 34, 37, 
  56, 15, 23, -60, 25, -3, 33, -43, 14, -128, 
  -128, -128, 9, -128, -26, -33, 31, -60, -29, -23, 
  24, -2, 29, -16, 30, -128, -60, -60, 20, -77, 
  70, 56, 61, -128, 44, -37, 19, 37, 36, -77, 
  -128, -128, 26, -33, 19, -128, 30, -33, 0, -128, 
  37, -33, 36, -37, -14, -128, 21, -16, 46, -12, 
  30, -43, 7, -128, 16, -37, -4, -128, 11, -60, 
  23, 28, 47, 4, 59, -77, -50, -128, -128, -128, 
  29, -43, -26, -128, -37, -77, 2, -60, 5, -77, 
  -10, -60, 0, -23, 31, -18, 52, 10, 42, 19, 
  45, -128, -1, -77, 13, -77, -20, -128, 15, -60, 
  80, 72, 92, 60, 59, 42, 78, 31, 41, -43, 
  28, -37, 10, -50, 42, 4, 21, -14, 39, -8, 
  -8, -128, 4, -16, 40, 12, 63, 34, 42, 49, 
  44, -33, 26, -60, 24, -128, 23, -8, 4, -128, 
  71, 75, 82, 50, 80, 61, 73, -29, -7, -60, 
  55, -8, 40, -18, 39, -37, 34, -2, 25, -16, 
  57, 42, 73, 52, 78, 68, 78, 16, 17, -1, 
  26, -128, 15, -50, -2, -77, -18, -77, -33, -77, 
  52, 57, 74, 49, 85, 84, 98, 75, 87, 44, 
  47, -77, 37, 4, -128, -50, 13, -16, 50, 62, 
  97, 84, 91, 77, 109, 90, 99, 67, 70, 52, 
  58, -26, 7, -8, 34, -3, 32, 13, 36, -26, 
  66, 53, 59, 65, 92, 89, 108, 77, 74, 62, 
  53, 50, 67, 20, 52, -128, 46, 51, 89, 83, 
  108, 84, 94, 77, 104, 74, 83, 54, 68, 58, 
  67, -12, 42, -18, 27, -7, 4, -60, 1, -37, 
  50, 48, 67, 55, 87, 75, 98, 84, 87, 42, 
  59, 50, 68, 17, 47, 6, 83, 75, 100, 89, 
  98, 68, 92, 75, 95, 66, 87, 74, 91, 61, 
  59, -128, 49, 7, 11, -60, 8, -43, 37, 11, 
  58, 22, 40, 37, 80, 43, 90, 77, 94, 57, 
  79, 76, 88, 54, 70, 72, 93, 84, 107, 84, 
  87, 46, 88, 74, 96, 69, 93, 74, 97, 74, 
  86, -16, 36, -77, 20, -33, 25, -4, 41, 1, 
  60, 20, 56, 32, 72, 20, 81, 46, 98, 77, 
  98, 58, 87, 66, 75, 42, 77, 69, 94, 52, 
  69, 29, 76, 57, 89, 57, 79, 58, 91, 77, 
  92, 30, 29, -18, 24, -23, 24, -20, 18, -43, 
  49, 23, 52, 5, 66, -12, 84, 50, 89, 65, 
  82, 51, 82, 48, 79, -12, 75, 64, 83, 13, 
  39, -7, 46, -16, 55, 13, 44, -37, 62, 49, 
  77, 12, 39, -33, 14, -16, 26, -33, 6, -128, 
  45, -43, -4, -4, 27, -128, 27, 33, 62, -60, 
  49, -77, 9, 23, 62, 50, 53, -10, 12, -128, 
  -128, -128, -128, -128, -77, -128, -60, -128, -77, -128, 
  9, -43, 32, 12, 35, -60, 17, -37, 6, -77, 
  -128, -128, -128, -128, -128, -128, -128, -128, -60, -128, 
  28, -128, -128, -128, 25, -128, 34, -128, -77, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 13, -60, 13, -77, 37, -23, 8, -60, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -20, -77, -50, -128, -8, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -18, -12, 35, 21, 100, 85, 49, 9, 49, 43, 
  9, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  44, 35, 55, 74, 107, 86, 99, 80, 84, 74, 
  -77, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -18, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  57, 52, 108, 87, 109, 89, 103, 80, 102, 84, 
  -43, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -14, 20, 93, 77, 97, 78, 99, 76, 96, 74, 
  -26, -128, -60, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, 34, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -23, 
  25, 47, 93, 70, 84, 59, 87, 67, 88, 58, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -29, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -37, 
  36, 39, 89, 67, 85, 58, 75, 60, 89, 64, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -77, -128, 
  55, 66, 76, 55, 83, 40, 81, 68, 85, 65, 
  -50, -128, -50, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -50, -18, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -4, 
  65, 60, 83, 60, 79, 35, 79, 44, 71, 34, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -37, 
  63, 30, 64, 29, 65, 9, 63, 28, 64, 27, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -77, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  24, -8, 72, 39, 54, 26, 63, -16, 45, 5, 
  -60, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -2, -33, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -43, 19, 70, -29, 31, -128, 46, -60, 37, -128, 
  -12, -128, -37, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, 7, -128, -33, -77, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  0, -20, 52, -12, -37, -128, -50, -128, -128, -128, 
  -10, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -29, -128, -128, -128, -26, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -50, 29, -128, -128, -128, -128, -128, -128, -128, 
  -37, -128, -43, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -37, -128, -37, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -18, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -50, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -12, -128, -43, -128, -128, -128, -128, -128, -23, -128, 
  -128, -128, -128, -128, -128, -128, -50, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -26, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -7, -128, -33, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
};