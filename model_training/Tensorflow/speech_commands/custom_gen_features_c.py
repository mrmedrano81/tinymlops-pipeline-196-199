# made by mrmedrano81

import time
import subprocess

# File paths
yes_file_list = "features_c_files/yes_test_list.txt"
no_file_list = "features_c_files/no_test_list.txt"
dataset_dir = "dataset"
features_dir = "features_c_files"

def create_h_file(word, filename):
    h_file_path = f"{features_dir}/{word}/{filename}"
    filename_no_h = "g_" + filename.replace(".h", "")
    h_file_content = [
        "#ifndef " + filename_no_h.upper() + "_\n",
        "#define " + filename_no_h.upper() + "_\n\n",
        "extern const int "+filename_no_h+"_width;\n",
        "extern const int "+filename_no_h+"_height;\n",
        "extern const signed char "+filename_no_h+"_data[];\n\n"
        "#endif  // "+filename_no_h.upper()+"_"]

    with open(h_file_path, "w") as h_file:
        h_file.writelines(h_file_content)

def replace_lines_in_c_file(file_path, search_string, replace_string, num_lines, include_header):
    with open(file_path, 'r') as file:
        lines = file.readlines()

    with open(file_path, 'w') as file:
        lines.insert(12, include_header)
        line_count = 0
        for line in lines:
            if line_count < num_lines and search_string in line:
                line = line.replace(search_string, replace_string)
            file.write(line)
            line_count += 1

def convert_and_store_features(word, file_list, line_number):
    with open(file_list, 'r') as file:

        lines = file.readlines()

        if line_number <= len(lines):

            x = lines[line_number - 1].strip()

            # Step 2: Append "dataset/" to the start of the line
            input_name = f"{dataset_dir}/{x}"


            word_backslash = word + "/"
            word_underscore = word + "_"
            y = f"{x.replace(word_backslash, word_underscore)}"

            # Step 3: Append "features_c_files/" to the line and replace ".wav" with ".cc"
            output_name = f"{features_dir}/{word}/{y.replace('.wav', '.cc')}"

            # Run the command in the terminal
            command = f"python3 wav_to_features.py \
                            --window_stride_ms=20 \
                            --preprocess=micro \
                            --quantize=1 \
                            --input_wav={input_name} \
                            --output_c_file={output_name}"
            
            subprocess.run(command, shell=True)

            # format files and make header
            word_g = "g_" + word_underscore
            include_header = "#include " + '"' + y.replace('.wav', '.h') + '"'

            replace_lines_in_c_file(output_name, 'g_', word_g, 30, include_header)
            create_h_file(word, y.replace('.wav', '.h'))
            

for i in range(1, 401):
    convert_and_store_features("yes", yes_file_list, i)
    convert_and_store_features("no", no_file_list, i)

    # Sleep for some time (adjust as needed)
    time.sleep(1)
