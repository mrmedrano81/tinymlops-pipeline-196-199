#!/usr/bin/env python

#---------------------------------------------------------------------------------------------------------------------#


#The following code has been modified from the original by integrating mlflow into the training process


#---------------------------------------------------------------------------------------------------------------------#

import matplotlib.pyplot as plt
import numpy as np
import os
import argparse
from tensorflow import keras

import keras_model as models
import get_dataset as kws_data
import kws_util

#model tracking
import mlflow

#---fix for td_cnn training issue----#
from tensorflow.compat.v1 import ConfigProto
from tensorflow.compat.v1 import InteractiveSession

config = ConfigProto()
config.gpu_options.allow_growth = True
session = InteractiveSession(config=config)
#------------------------------------#

num_classes = 12 # should probably draw this directly from the dataset.
# FLAGS = None

if __name__ == '__main__':

  #initialize mlflow tracking
  mlflow.tensorflow.autolog()
  mlflow.set_tracking_uri('https://dagshub.com/mrmedrano81/tinymlops-pipeline-196-199.mlflow')
  mlflow.set_experiment("KWS")

  #parse arguments
  Flags, unparsed = kws_util.parse_command()

  print('We will download data to {:}'.format(Flags.data_dir))
  print('We will train for {:} epochs'.format(Flags.epochs))

  ds_train, ds_test, ds_val = kws_data.get_training_data(Flags)
  print("Done getting data")

  # this is taken from the dataset web page.
  # there should be a better way than hard-coding this
  train_shuffle_buffer_size = 85511
  val_shuffle_buffer_size = 10102
  test_shuffle_buffer_size = 4890

  ds_train = ds_train.shuffle(train_shuffle_buffer_size)
  ds_val = ds_val.shuffle(val_shuffle_buffer_size)
  ds_test = ds_test.shuffle(test_shuffle_buffer_size)
  
  
  with mlflow.start_run(run_name=Flags.mlflow_run_name):

    #set model name for mlflow experiment
    mlflow.set_tag("model_name", Flags.model_architecture)

    if Flags.model_init_path is None:
      print("Starting with untrained model")
      model = models.get_model(args=Flags)
    else:
      print(f"Starting with pre-trained model from {Flags.model_init_path}")
      model = keras.models.load_model(Flags.model_init_path)

    model.summary()

    callbacks = kws_util.get_callbacks(args=Flags)
    train_hist = model.fit(ds_train, validation_data=ds_val, epochs=Flags.epochs, callbacks=callbacks)
    kws_util.plot_training(Flags.plot_dir,train_hist)

    model.save(Flags.saved_model_path)
    
    #log model for mlflow
    mlflow.tensorflow.log_model(model, "tensorflow model")

    if Flags.run_test_set:
      test_scores = model.evaluate(ds_test)

      #log metrics for mlflow
      mlflow.log_metric("test_loss", float(test_scores[0]))
      mlflow.log_metric("test_accuracy", float(test_scores[1]))
      print("Test loss:", test_scores[0])
      print("Test accuracy:", test_scores[1])