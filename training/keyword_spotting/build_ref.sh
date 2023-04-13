# suppress informational messages from TF
export TF_CPP_MIN_LOG_LEVEL=2 

python train.py --saved_model_path=trained_models/ds_cnn_30e.h5 \
       --epochs=1 --run_test_set=True --data_dir data --model_architecture=ds_cnn
python quantize.py --saved_model_path=trained_models/ds_cnn_30e.h5 --tfl_file_name=trained_models/ds_cnn_30e.tflite --data_dir data
python eval_quantized_model.py --tfl_file_name=trained_models/ds_cnn_30e.tflite --data_dir data --target_set=test

