#!/bin/bash

# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up the object files
rm *.o

