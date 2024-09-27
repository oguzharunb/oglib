#!/bin/bash

# using: ./set_prototypes.sh header.h file1.c file2.c file3.c
# This script automatically extracts function prototypes from given C files
# and inserts them into the specified header file.
# The function types (void, int, etc.) are read from config.json.

# Read function types from config.json
config_file="config.json"
function_types=$(jq -r '.function_types | join("|")' "$config_file")

# Regex pattern for matching function prototypes only (functions have parentheses after their names)

header=$1
shift
# Extract lines, clean them up, and filter for function prototypes
prototypes=$(grep -hE "^\s*($function_types)\s+[^;]*\([^\)]*\)\s*\{?" "$@" | sed -E 's/^\s*//; s/\s*\{.*$/;/; s/$/;/')
echo $prototypes
# Replace //prototypes in the header file with the extracted prototypes
perl -pi -e 's|//prototypes|'"$prototypes"'|' "$header"

