/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="micro" \
 * --input_wav="dataset/no/82b99576_nohash_1.wav" \
 * --output_c_file="features_c_files/no/no_82b99576_nohash_1.cc" \
 */
#include "no_82b99576_nohash_1.h"


const int g_no_82b99576_nohash_1_width = 40;
const int g_no_82b99576_nohash_1_height = 49;
alignas(16) const signed char g_no_82b99576_nohash_1_data[] = {
  100, 79, 99, 89, 107, 82, 99, 84, 108, 97, 
  107, 91, 100, 97, 118, 83, 93, 83, 100, 88, 
  95, 83, 109, 92, 99, 87, 96, 82, 94, 73, 
  92, 87, 79, 72, 80, 65, 70, 68, 65, 34, 
  92, 79, 82, 73, 93, 70, 69, 62, 80, 86, 
  109, 68, 92, 62, 91, 73, 86, 76, 88, 73, 
  85, 71, 82, 72, 87, 68, 90, 67, 87, 72, 
  82, 65, 75, 68, 87, 64, 70, 60, 63, 25, 
  92, 26, 63, 37, 72, 65, 60, 58, 87, 48, 
  84, 54, 71, 32, 66, 68, 96, 82, 100, 59, 
  85, 55, 64, 46, 76, 60, 86, 73, 84, 58, 
  75, 50, 85, 69, 77, 44, 76, 61, 57, 30, 
  59, 56, 91, 55, 63, 30, 102, 92, 109, 83, 
  105, 80, 96, 57, 84, 70, 97, 39, 61, 60, 
  84, 62, 75, 49, 74, 57, 82, 62, 73, 65, 
  73, 46, 77, 46, 65, 40, 67, 45, 64, 19, 
  70, 77, 85, 67, 80, 60, 75, -60, -29, 4, 
  81, 62, 83, 42, 73, 50, 90, 36, 74, 63, 
  80, 45, 66, 41, 73, 19, 67, 52, 69, 48, 
  66, 42, 59, 36, 73, 55, 63, 35, 50, -14, 
  82, 36, 80, 50, 29, 11, 74, 14, -33, -29, 
  76, 30, 39, 58, 89, 43, 72, 37, 61, 21, 
  64, 26, 75, 27, 61, 33, 47, 19, 50, 4, 
  60, 16, 42, 9, 52, 39, 63, 4, 47, 23, 
  74, 57, 94, 54, 62, 40, 24, -128, 7, 19, 
  82, 39, 62, 45, 70, 34, 60, 8, 75, 61, 
  64, 32, 50, -60, 72, 50, 57, -1, 57, 19, 
  51, 5, 60, 24, 47, 15, 50, 17, 61, 43, 
  89, 72, 86, 48, 70, 62, 77, 26, 18, -8, 
  71, 19, 76, 56, 74, 27, 51, 45, 87, 49, 
  72, -12, 56, 19, 70, 29, -16, 11, 52, 23, 
  53, -8, 57, 19, 60, 30, 37, 15, 53, 1, 
  69, -29, 10, 35, 76, 65, 69, -128, 47, -128, 
  -26, -50, 69, 26, 53, 14, 45, -128, 65, 31, 
  15, 6, 48, -43, 34, -8, 39, -50, 19, 14, 
  48, 9, 61, 24, 40, 14, 59, 22, 55, 27, 
  79, 63, 54, -2, 60, 31, 52, -128, 43, -128, 
  -50, 0, 21, -128, -23, 30, 65, 19, 54, 40, 
  49, 32, 63, -16, 34, 4, 27, -128, 50, 11, 
  45, -4, 57, -50, 21, -16, 55, -18, 55, 32, 
  82, 50, 61, 34, 16, 34, 67, -128, 38, -128, 
  -128, 2, 62, -33, -8, 20, 42, 25, 35, 13, 
  19, -77, 55, -18, 59, 24, 47, 11, 55, 14, 
  45, -43, 27, -77, 29, 4, 51, 19, 32, -37, 
  89, 60, 71, 42, 37, -77, 27, -128, -26, -128, 
  -128, 14, 61, -77, -128, -128, 0, -18, -1, -29, 
  50, 1, 54, 25, 53, -20, 4, -23, 16, -60, 
  9, -128, 25, -20, 21, -14, 34, 5, 20, -60, 
  69, -6, 53, -77, -8, 4, 47, -128, -43, -128, 
  10, 52, 62, -128, -20, -7, 41, 30, 24, -50, 
  29, -18, 51, -23, 76, 48, 25, -6, 24, -12, 
  37, 0, 23, 4, 40, -12, 35, -37, 21, -128, 
  56, -128, 37, -128, 37, 30, 68, 47, 69, -128, 
  15, -60, 9, -128, -77, 29, 29, -12, 8, -43, 
  28, -60, 61, -26, 67, 42, 25, -26, 21, -50, 
  27, -18, 20, -10, 38, -6, 52, -12, 17, -77, 
  -2, -128, 41, -128, -77, -26, 33, -128, 13, -128, 
  37, 5, -29, -128, -43, -60, -3, -14, 42, -60, 
  11, -60, 48, -29, 30, -50, 39, -12, 28, -29, 
  18, -37, 31, -6, 26, -26, 45, -12, 25, -37, 
  -12, -128, -128, -128, 24, 26, 35, -128, -10, -128, 
  -43, 39, 64, -60, -33, 4, 29, 35, 48, -128, 
  -18, -2, 26, -77, 72, 49, 20, -37, 23, 4, 
  41, 15, 37, -33, 40, -60, -18, -16, 4, -77, 
  -77, -128, -128, -50, 59, 19, 58, 4, -1, -128, 
  4, 29, 53, -33, 12, -128, 35, 24, 53, -20, 
  -8, 60, 65, -60, 40, -8, 15, -77, -18, 15, 
  59, -4, 19, -50, 43, -26, 18, -50, -7, -128, 
  102, 86, 102, 92, 112, 84, 100, 74, 35, -77, 
  55, 49, 60, 36, 41, -128, 2, 32, 46, -16, 
  60, 77, 82, 47, 85, 50, 72, 1, 34, 4, 
  49, 15, 81, -23, -6, -43, 35, -60, 25, -77, 
  117, 94, 96, 90, 112, 72, 106, 77, 90, 63, 
  72, 55, 75, 46, 51, 49, 49, -128, -6, -37, 
  81, 55, 64, -77, 67, 42, 84, 33, 54, -29, 
  19, 14, 45, 21, -2, -50, -6, -29, 1, -43, 
  108, 77, 87, 74, 91, 63, 91, 49, 92, 42, 
  63, 33, 55, 36, 65, 35, 32, -7, 36, -50, 
  44, 16, -33, -4, -7, -77, 70, 16, 32, -50, 
  25, -128, 33, -128, 48, -26, 4, -50, 24, -8, 
  99, 68, 88, 61, 72, 69, 92, 52, 85, 1, 
  72, 46, 34, 8, 27, 9, 9, -2, 40, -128, 
  -26, -18, 41, 4, -128, -128, 15, -128, -1, -128, 
  37, -128, 39, -29, 6, -43, 15, -37, -1, -37, 
  93, 60, 92, 71, 88, 66, 95, 64, 90, 37, 
  74, -10, 28, -128, 52, 42, 28, 12, 44, 55, 
  65, -43, 34, -50, 47, 67, 95, 74, 88, 7, 
  26, 35, 75, 87, 108, 88, 116, 97, 115, 87, 
  84, 49, 95, 69, 84, 92, 114, 89, 112, 83, 
  108, 73, 89, 42, 63, 63, 69, 67, 97, 85, 
  94, 53, 80, 50, 79, 80, 105, 78, 92, 53, 
  2, -128, 74, 68, 88, 47, 62, 46, 80, 55, 
  75, 25, 95, 69, 85, 82, 99, 80, 107, 84, 
  105, 63, 92, 69, 80, 72, 100, 93, 114, 89, 
  89, -8, 45, -50, 52, 63, 104, 66, 72, 52, 
  61, 24, 77, 61, 84, 28, 54, 38, 60, 39, 
  67, -7, 85, 47, 76, 74, 87, 71, 89, 82, 
  99, 64, 92, 72, 90, 79, 107, 92, 109, 80, 
  83, -43, 55, -77, 22, 47, 79, 59, 85, 52, 
  57, -77, 22, 32, 79, 31, -29, -128, 2, 11, 
  65, -23, 75, 9, 75, 62, 73, 69, 84, 79, 
  90, 66, 88, 63, 88, 75, 107, 84, 100, 59, 
  84, -128, 14, 1, -1, 67, 86, 53, 84, 57, 
  37, -16, 35, -43, 36, -128, -128, -128, -128, -77, 
  63, -29, 78, 23, 78, 57, 67, 60, 72, 76, 
  89, 60, 81, 60, 82, 69, 102, 76, 97, 48, 
  77, -2, 69, 5, 53, 51, 80, 44, 63, 25, 
  37, -128, -37, -128, 35, -128, -128, -128, -128, -128, 
  65, -10, 70, -6, 75, 57, 69, 60, 75, 63, 
  76, 62, 82, 52, 82, 65, 99, 69, 90, 48, 
  73, 43, 71, 9, 58, 44, 70, 37, 70, 9, 
  50, 9, 42, -128, -128, -128, -128, -128, -128, -128, 
  52, -77, 62, -33, 71, 41, 55, 54, 67, 42, 
  53, 46, 63, 11, 68, 57, 96, 61, 83, 44, 
  70, 53, 73, 11, 59, 57, 73, -43, 47, 37, 
  71, 33, 73, -33, 52, -128, -128, -128, -128, -128, 
  58, -26, 60, -128, 54, -26, 7, 37, 50, 25, 
  37, 11, 73, 46, 62, 56, 90, 49, 76, 38, 
  72, 56, 73, 60, 75, 57, 59, -12, 59, -6, 
  59, 47, 79, 35, 74, -29, -128, -128, -128, -128, 
  54, -60, 51, -128, 49, -77, 0, 35, 51, -14, 
  14, 30, 60, 13, 65, 50, 82, 34, 63, 0, 
  62, 33, 69, 54, 90, 55, 48, -10, 57, 46, 
  74, 30, 70, -8, 40, -77, -128, -128, -128, -128, 
  45, -128, 54, -128, 43, -77, -29, -12, 20, -20, 
  7, -12, 56, -2, 49, 46, 77, 10, 8, -20, 
  63, 41, 63, 42, 84, 8, 16, -50, 58, 33, 
  75, 37, 75, 8, -4, -128, -128, -128, -128, -128, 
  44, -128, 51, -77, 35, -128, -128, -128, -29, -128, 
  -60, -128, 49, 4, 63, 59, 44, -128, -128, -128, 
  38, -128, 41, 7, 75, -128, -128, -128, 4, -37, 
  49, 9, 69, -8, -128, -128, -128, -128, -128, -128, 
  48, -29, 50, -60, 32, -43, -7, -128, -128, -128, 
  -128, -128, -3, -12, 72, -14, -43, -128, -128, -128, 
  -128, -128, -128, -128, 48, -128, -128, -128, -128, -128, 
  37, -128, 15, -128, -128, -128, -128, -128, -128, -128, 
  42, -50, 36, -128, 25, -26, 23, -128, -128, -128, 
  -128, -128, 9, -60, 32, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  44, -26, 18, -128, -3, -77, 7, -128, -128, -128, 
  -128, -128, -77, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -60, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  38, -50, -128, -128, -60, -128, -33, -128, -128, -128, 
  -128, -128, -128, -128, -50, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -77, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  35, -77, -128, -128, -128, -128, -77, -128, -128, -128, 
  -128, -128, 0, -33, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
  8, -128, -128, -128, -128, -128, -128, -128, -128, -128, 
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
  -128, -128, -128, -128, -128, -128, -128, -128, -128, -29, 
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
