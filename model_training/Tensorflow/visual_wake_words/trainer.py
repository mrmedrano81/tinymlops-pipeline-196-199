import subprocess

# Clone the TensorFlow models repository
subprocess.run(["git", "clone", "https://github.com/tensorflow/models.git"])

# Install dependencies
subprocess.run(["pip", "install", "--upgrade", "pip"])
subprocess.run(["pip", "install", "contextlib2"])

# Run context.py
subprocess.run(["python3", "context.py"])

# Download the Dataset
download_cmd = [
    "python3",
    "models/research/slim/download_and_convert_data.py",
    "--logtostderr",
    "--dataset_name=visualwakewords",
    "--dataset_dir=person_detection_dataset",
    "--foreground_class_of_interest='person'",
    "--small_object_area_threshold=0.005"
]
subprocess.run(download_cmd)

# Model Training
train_cmd = [
    "python3",
    "models/research/slim/train_image_classifier.py",
    "--alsologtostderr",
    "--dataset_name=visualwakewords",
    "--dataset_dir=person_detection_dataset",
    "--dataset_split_name=train",
    "--train_image_size=96",
    "--use_grayscale=True",
    "--preprocessing_name=mobilenet_v1",
    "--model_name=mobilenet_v1_025",
    "--train_dir=person_detection_train",
    "--save_summaries_secs=300",
    "--learning_rate=0.045",
    "--label_smoothing=0.1",
    "--learning_rate_decay_factor=0.98",
    "--num_epochs_per_decay=2.5",
    "--moving_average_decay=0.9999",
    "--batch_size=96",
    "--max_number_of_steps=1000000"
]
subprocess.run(train_cmd)