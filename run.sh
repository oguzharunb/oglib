#!/bin/bash

# Check if an argument is provided

config_file=config.json
lib_name=$(jq -r '.lib_name' "$config_file")
header_name=$(jq -r '.header_name' "$config_file")
prefix=$(jq -r '.prefix' "$config_file")

if [ ! -f "${header_name}" ]; then
    echo "Error: ${header_name} not found."
    echo "Please build the project with 'make'."
    exit 1
fi

if [ -z "$1" ]; then
    echo "Error: No argument provided. Please provide the base function name."
    echo "Example: ./run.sh ${prefix}memset"
    exit 1
fi

# Extract function name by removing 'og_' prefix
BASE_FUNCTION_NAME=$(echo "$1" | sed "s/^${prefix}//")

# Paths for original and modified files
MAIN_FILE_ORIG="./mains/${1}_main.c"
MAIN_FILE_MODIFIED="./mains/${BASE_FUNCTION_NAME}_main.c"

# Check if original main file exists
if [ ! -f "$MAIN_FILE_ORIG" ]; then
    echo "Error: Main file for $1 does not exist at $MAIN_FILE_ORIG"
    exit 1
fi

# Create the modified main by replacing 'og_{function_name}' with '{function_name}'
sed "s/$prefix$BASE_FUNCTION_NAME/$BASE_FUNCTION_NAME/g" "$MAIN_FILE_ORIG" > "$MAIN_FILE_MODIFIED"

# Compile the original function test
gcc -Wall -Werror -Wextra -o exec_orig "$MAIN_FILE_ORIG" ${lib_name} 
if [ $? -ne 0 ]; then
    echo "Error: Compilation of $1 failed."
    exit 1
fi

echo ------------------------
./exec_orig > output_orig.txt
echo "$prefix$BASE_FUNCTION_NAME's output "
cat output_orig.txt
echo ------------------------
# Compile the modified function test
gcc -Wall -Werror -Wextra -o exec_mod "$MAIN_FILE_MODIFIED" ${lib_name} 2> error_mod.txt
if [ $? -ne 0 ]; then
	if grep -q "implicit declaration" error_mod.txt; then
	echo "Error: There is no function named '${BASE_FUNCTION_NAME}' in the standard C library."
	else
		echo "Error: Compilation of $BASE_FUNCTION_NAME failed."
	fi
	exit 1
	rm -f error_mod.txt
fi
rm -f error_mod.txt

# Run both executables and save their outputs
./exec_mod > output_mod.txt
echo "$BASE_FUNCTION_NAME's output "
cat output_mod.txt
echo ------------------------

# Compare the outputs
diff output_orig.txt output_mod.txt > diff_result.txt

# Display the result of the comparison
if [ -s diff_result.txt ]; then
    echo "Outputs differ:"
    cat diff_result.txt
else
    echo "Outputs are identical."
fi

# Clean up the generated files
rm -f exec_orig exec_mod output_orig.txt output_mod.txt diff_result.txt "$MAIN_FILE_MODIFIED"

