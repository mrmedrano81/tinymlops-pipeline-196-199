if [ -d "/app/model_training/Tensorflow/speech_commands/dataset" ]; 
then
    echo "[INFO] dataset path exists, skipping download..."
else
    echo "[INFO] Downloading speech commands v2 dataset..."
    wget -P dataset http://download.tensorflow.org/data/speech_commands_v0.02.tar.gz
    echo "[INFO] Extracting..."
    tar -xf dataset/speech_commands_v0.02.tar.gz -C dataset
    echo "[INFO] Extraction completed!"
fi

if [ -d "/app/model_training/Tensorflow/speech_commands/train" ];
then
    echo "[INFO] train path exists, skipping training..."
else
python train.py \
--data_dir='dataset/' \
--wanted_words="on,off" \
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
--wanted_words="on,off" \
--window_stride_ms=20 \
--preprocess='micro' \
--model_architecture='tiny_conv' \
--start_checkpoint='train/tiny_conv.ckpt-15000' \
--save_format=saved_model \
--output_file='models/saved_model'

python custom_convert_tflite.py

echo "[INFO] Converting tflite model to byte array tiny_conv.cpp..."
xxd -i models/model.tflite > tiny_conv.cpp
sed -i 's/models_model_tflite/g_tiny_conv/g' tiny_conv.cpp
echo "[INFO] Conversion complete"
fi



