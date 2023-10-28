#!/bin/bash

# Compile all .c files in the current directory and create object files
for source_file in *.c; do
    object_file="${source_file%.c}.o"
    gcc -c "$source_file" -o "$object_file"
done

# Create a static library from all the object files
ar rcs liball.a *.o

# Clean up: remove temporary object files
rm -f *.o

echo "Static library liball.a has been created."

