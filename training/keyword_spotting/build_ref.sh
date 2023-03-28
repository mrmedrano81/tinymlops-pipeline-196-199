# suppress informational messages from TF
export TF_CPP_MIN_LOG_LEVEL=2 

python3.8 train.py --saved_model_path=trained_models/fc4_30e.h5 \
       --epochs=30 --run_test_set=True --data_dir data --model_architecture=fc4
python3.8 quantize.py --saved_model_path=trained_models/fc4_30e.h5 \
       --tfl_file_name=trained_models/fc4_30e.tflite --data_dir data
python3.8 eval_quantized_model.py --tfl_file_name=trained_models/fc4_30e.tflite --data_dir data --target_set=test

