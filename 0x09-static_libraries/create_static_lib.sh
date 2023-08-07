#!/bin/bash

# Compile all .c files into .o files
gcc -c *.c

# Create the static library liball.a from the compiled .o files
ar -rc liball.a *.o

# Index the static library for faster access
ranlib liball.a

# Clean up the temporary .o files
rm *.o

