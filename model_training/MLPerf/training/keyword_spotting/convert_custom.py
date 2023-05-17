import tensorflow as tf
import os
import numpy as np
import argparse

saved_model_path='./ds_cnn_s_quantized.tflite'

model = tf.keras.models.load_model(saved_model_path)

new_input_shape = (1, 49, 10, 1)

# Reshape the input tensor
new_input_tensor = tf.keras.layers.Reshape(target_shape=new_input_shape)(model.input)

# Create a new model with the new input tensor and the same weights as the old model
new_model = tf.keras.Model(inputs=new_input_tensor, outputs=model.output)

new_model.save('./ds_cnn_s_quantized_test.tflite')