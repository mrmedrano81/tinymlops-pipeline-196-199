import os

new_python_path = (os.environ.get("PYTHONPATH") or '') + ":models/research/slim"
os.environ["PYTHONPATH"] = new_python_path

print("PYTHONPATH env set!")