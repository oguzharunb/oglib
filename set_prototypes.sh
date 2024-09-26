# using: ./set_prototypes.sh header.h file1.c file2.c file3.c
# this file is responsible to generate code.
# i dont want to enter each prototype to oglib.h one by one.
# script searches in given files and look for the lines that starts with void, int, char etc.
# Puts their prototype in the header (replaces //prototypes line with actual prototypes)

# put a line starts with //prototypes so script could work properly
function_types='^\(void\|int\|char\|size_t\)' 
prototypes=$(echo hello wrold) # | sed 's/$/;/') #filenames should be given as parameters
echo ${prototypes}
perl -pi -e 's|//prototypes|'"$prototypes"'|' $1 #header name should be given as parameter
