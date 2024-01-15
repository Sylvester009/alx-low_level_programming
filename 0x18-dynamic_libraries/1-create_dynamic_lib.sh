#!/bin/bash

#compile *.c files into .o files
gcc -c -fPIC *.c

#create liball.so from the object files
gcc -shared -o liball.so *.o

#remove object files
rm *.o
