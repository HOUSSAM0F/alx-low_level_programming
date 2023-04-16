#!/bin/bash

# compile each .c file into an object file
for file in *.c; do
gcc -c "$file" -o "${file%.c}.o"
done

# Create the static library
ar rcs liball.a *.o

# Remove the object files
rm *.o
