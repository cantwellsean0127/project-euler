#!/bin/bash

# Create a bin directory if it doesn't exist
mkdir -p $(pwd)/bin

# Compile for Linux
g++ $(pwd)/src/*.cpp -o $(pwd)/bin/linux.exe

# Compile for Windows
x86_64-w64-mingw32-g++ $(pwd)/src/*.cpp -o $(pwd)/bin/windows.exe

