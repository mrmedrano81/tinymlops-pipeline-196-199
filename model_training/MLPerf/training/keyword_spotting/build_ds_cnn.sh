# suppress informational messages from TF
export TF_CPP_MIN_LOG_LEVEL=2 

python train.py --saved_model_path=trained_models/ds_cnn_40dct.h5 \
       --epochs=30  \
       --run_test_set=True \
       --data_dir data \
       --model_architecture=ds_cnn \
       --mlflow_run_name=ds_cnn_40dct  \
       --feature_type=mfcc \
       --dct_coefficient_count 40

python quantize.py --saved_model_path=trained_models/ds_cnn_40dct.h5 \
       --tfl_file_name=trained_models/ds_cnn_40dct.tflite \
       --data_dir data \
       --dct_coefficient_count 40

python eval_quantized_model.py --tfl_file_name=trained_models/ds_cnn_40dct.tflite \
       --data_dir data \
       --target_set=test \
       --feature_type=mfcc \
       --dct_coefficient_count 40

