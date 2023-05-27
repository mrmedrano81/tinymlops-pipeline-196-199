python3 generate_streaming_test_wav.py \
--data_dir=dataset \
--wanted_words="yes,no" \
--background_dir=dataset/_background_noise_ \
--background_volume=0.1 \
--test_duration_seconds=600 \
--output_audio_file=streaming_test/streaming_test.wav \
--output_labels_file=streaming_test/streaming_test_labels.txt