#!/bin/bash

# Check if an argument is provided
if [ -z "$1" ]; then
	echo "Error: No argument provided. Please provide the base filename."
	echo "Example: run.sh og_memset"
	exit 1
fi

# Compile the files
gcc -Wall -Werror -Wextra "$1.c" "$1"_main.c -o "exec"

# Run the executable
./exec

# Remove the executable
rm ./exec

