#!/bin/bash

# Compile all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -c *.c

# Create a static library from the object files
ar -rc liball.a *.o

# Index the library
ranlib liball.a
