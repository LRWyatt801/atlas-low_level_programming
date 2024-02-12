#!/bin/bash

# compile files into .o files
gcc -c *.c

# create library
ar -rc liball.a *.o
