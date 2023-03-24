# suppress informational messages from TF
export TF_CPP_MIN_LOG_LEVEL=2 

python3.8 train.py --saved_model_path=trained_models/ds_cnn_40epocs.h5 \
       --epochs=40 --run_test_set=True --data_dir data
python3.8 quantize.py --saved_model_path=trained_models/ds_cnn_40epocs.h5 \
       --tfl_file_name=trained_models/ds_cnn_40epocs.tflite --data_dir data
python3.8 eval_quantized_model.py --tfl_file_name=trained_models/ds_cnn_40epocs.tflite --data_dir data

