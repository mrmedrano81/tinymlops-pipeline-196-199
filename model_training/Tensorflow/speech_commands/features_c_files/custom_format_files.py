import os
import random
import shutil

def process_files(iteration, word):
    folder = f'batch_{word}/{word}_{iteration}'
    output_file = f'batch_{word}/{word}_{iteration}/FORMAT_{word}_conditions_{iteration}.txt'

    # Get the filenames of all .cc files in the folder
    filenames = [file[:-3] for file in os.listdir(folder) if file.endswith('.cc')]

    with open(output_file, 'w') as f:
        for i, filename in enumerate(filenames):
            # Modify the filename
            modified_filename = f'g_{filename}_data'

            # Generate the conditional feature block
            conditional_block = f'if (loop_number == {i})' + '{\n'
            conditional_block += f'  const int8_t* features_data_{i} = {modified_filename};\n'
            conditional_block += f'  for (size_t i = 0; i < model_input->bytes; ++i)' + '{\n'
            conditional_block += f'      model_input->data.int8[i] = features_data_{i}[i];\n'
            conditional_block += '  }\n'
            conditional_block += '}\n'

            f.write(conditional_block)

def select_random_files(source_folder, destination_folder, textfile, iteration):
    # Create the destination folder if it doesn't exist
    if not os.path.exists(destination_folder):
        os.makedirs(destination_folder)

    # Load the existing filenames from the textfile
    existing_files = set()
    if os.path.exists(textfile):
        with open(textfile, 'r') as f:
            existing_files = set(f.read().splitlines())

    # Select 10 random .cc files
    selected_files = []
    while len(selected_files) < 10:
        file = random.choice(os.listdir(source_folder))
        if file.endswith('.cc') and file not in existing_files:
            selected_files.append(file)
            existing_files.add(file)

    # Copy the selected files to the destination folder
    for file in selected_files:
        source_path = os.path.join(source_folder, file)
        destination_path = os.path.join(destination_folder, file)
        shutil.copy(source_path, destination_path)

    # Append the filenames to the textfile
    with open(textfile, 'a') as f:
        f.write('\n'.join(selected_files) + '\n')

    cmake_file_list = []
    for file in selected_files:
        cmake_file_list.append('${'+'CMAKE_CURRENT_SOURCE_DIR}'+f'/Testfiles/{destination_folder}/{file}')

    cmakelist_file = os.path.join(destination_folder, f'FORMAT_{source_folder}_cmakelist_{iteration}.txt')
    with open(cmakelist_file, 'a') as f:
        f.write('\n'.join(cmake_file_list) + '\n')
        
    # Create a header file list
    header_file_list = []
    for file in selected_files:
        corresponding_header = os.path.join(source_folder, file[:-3] + '.h')
        if os.path.exists(corresponding_header):
            header_destination = os.path.join(destination_folder, file[:-3] + '.h')
            shutil.copy(corresponding_header, header_destination)
            header_file_list.append(f'#include "{file[:-3]}.h"')

    # Create a text file with header file list
    header_file = os.path.join(destination_folder, f'FORMAT_{source_folder}_header{iteration}.txt')
    with open(header_file, 'w') as f:
        f.write('\n'.join(header_file_list))

# Define the source folder, destination folder, and textfile
no_textfile = 'no_filenames_checklist.txt'
yes_textfile = 'yes_filenames_checklist.txt'

# Run the loop 10 times
for iteration in range(0, 10):
    no_destination_folder = f'batch_no/no_{iteration}'
    yes_destination_folder = f'batch_yes/yes_{iteration}'

    # Call the function for each iteration
    select_random_files('no', no_destination_folder, no_textfile, iteration)
    select_random_files('yes', yes_destination_folder, yes_textfile, iteration)

for iteration in range(0,10):
    process_files(iteration, "yes")
    process_files(iteration, "no")
    
