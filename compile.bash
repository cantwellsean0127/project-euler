#!/bin/bash

# Find all subdirectories and loop through them
for dir in *; do

    # Check if the directory contains a src directory
    if [[ -d ./$dir/src ]]; then

        # Create a bin directory if it doesn't exist
        mkdir -p ./$dir/bin

        # Compile for Linux
        g++ ./$dir/src/*.cpp -o ./$dir/bin/linux.exe

        # Compile for Windows
        x86_64-w64-mingw32-g++ ./$dir/src/*.cpp -o ./$dir/bin/windows.exe

    fi
done
