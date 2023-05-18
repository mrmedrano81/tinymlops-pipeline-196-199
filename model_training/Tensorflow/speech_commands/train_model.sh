#modify train variable to false if there is already a trained model
train=true

if [ "$train" = true ]
then
python train.py \
--data_dir='dataset/' \
--wanted_words="off,on" \
--silence_percentage=25 \
--unknown_percentage=25 \
--preprocess='micro' \
--window_stride=20 \
--model_architecture='tiny_conv' \
--how_many_training_steps="12000,3000" \
--learning_rate="0.001,0.0001" \
--train_dir='train/' \
--summaries_dir='logs/' \
--verbosity='WARN' \
--eval_step_interval='1000' \
--save_step_interval='1000'

python freeze.py \
--wanted_words="off,on" \
--window_stride_ms=20 \
--preprocess='micro' \
--model_architecture='tiny_conv' \
--start_checkpoint='train/tiny_conv.ckpt-15000' \
--save_format=saved_model \
--output_file='models/saved_model'
fi

python custom_convert_tflite.py

xxd -i models/model.tflite > tiny_conv.cpp
sed -i 's/models_model_tflite/g_tiny_conv/g' tiny_conv.cpp