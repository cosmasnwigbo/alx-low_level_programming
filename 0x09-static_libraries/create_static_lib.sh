#!/bin/bash

# Compile each .c file into a .o file
for file in *.c; do
    gcc -c "$file"
done

# Create a static library (liball.a) from the .o files
ar rcs liball.a *.o

# Clean up: remove the .o files
rm *o
