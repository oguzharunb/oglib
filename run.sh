#!/bin/bash

# Check if an argument is provided
if [ -z "$1" ]; then
    echo "Error: No argument provided. Please provide the base function name."
    echo "Example: ./run.sh og_memset"
    exit 1
fi

# Extract function name by removing 'og_' prefix
BASE_FUNCTION_NAME=$(echo "$1" | sed 's/^og_//')

# Paths for original and modified files
MAIN_FILE_ORIG="./mains/${1}_main.c"
MAIN_FILE_MODIFIED="./mains/${BASE_FUNCTION_NAME}_main.c"

# Check if original main file exists
if [ ! -f "$MAIN_FILE_ORIG" ]; then
    echo "Error: Main file for $1 does not exist at $MAIN_FILE_ORIG"
    exit 1
fi

# Create the modified main by replacing 'og_{function_name}' with '{function_name}'
sed "s/og_$BASE_FUNCTION_NAME/$BASE_FUNCTION_NAME/g" "$MAIN_FILE_ORIG" > "$MAIN_FILE_MODIFIED"

# Compile the original function test
gcc -Wall -Werror -Wextra -o exec_orig "$MAIN_FILE_ORIG" oglib.a
if [ $? -ne 0 ]; then
    echo "Error: Compilation of $1 failed."
    exit 1
fi

# Compile the modified function test
gcc -Wall -Werror -Wextra -o exec_mod "$MAIN_FILE_MODIFIED" oglib.a
if [ $? -ne 0 ]; then
    echo "Error: Compilation of $BASE_FUNCTION_NAME failed."
    exit 1
fi

# Run both executables and save their outputs
./exec_orig > output_orig.txt
echo ------------------------
echo "og_$BASE_FUNCTION_NAME's output "
cat output_orig.txt
echo ------------------------
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

