import tensorflow as tf

model = tf.keras.models.load_model('trained_models/vww_96.h5')
converter = tf.lite.TFLiteConverter.from_keras_model(model)
tflite_model = converter.convert()
open("trained_models/vww_96.tflite", "wb").write(tflite_model)