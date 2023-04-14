# suppress informational messages from TF
export TF_CPP_MIN_LOG_LEVEL=2 

python train.py --saved_model_path=trained_models/td_cnn.h5 \
       --epochs=30 --run_test_set=True --data_dir data --model_architecture=td_cnn --mlflow_run_name=td_cnn_1  --feature_type=td_samples
python quantize.py --saved_model_path=trained_models/td_cnn.h5 --tfl_file_name=trained_models/td_cnn.tflite --data_dir data --feature_type=td_samples
python eval_quantized_model.py --tfl_file_name=trained_models/td_cnn.tflite --data_dir data --target_set=test --feature_type=td_samples

