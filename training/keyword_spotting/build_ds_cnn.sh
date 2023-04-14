# suppress informational messages from TF
export TF_CPP_MIN_LOG_LEVEL=2 

python train.py --saved_model_path=trained_models/ds_cnn.h5 \
       --epochs=30 --run_test_set=True --data_dir data --model_architecture=ds_cnn --mlflow_run_name=ds_cnn_1  --feature_type=mfcc
python quantize.py --saved_model_path=trained_models/ds_cnn.h5 --tfl_file_name=trained_models/ds_cnn.tflite --data_dir data --feature_type=mfcc
python eval_quantized_model.py --tfl_file_name=trained_models/ds_cnn.tflite --data_dir data --target_set=test --feature_type=mfcc

