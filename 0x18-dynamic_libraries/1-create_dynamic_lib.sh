#!/bin/bash

# Compile all .c files into a dynamic library
gcc -Wall -Werror -Wextra -pedantic -shared -fPIC *.c -o liball.so

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Dynamic library liball.so created successfully."
else
    echo "Error: Compilation failed."
fi
