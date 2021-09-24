#!/bin/bash
#make object files
gcc -c *.c
#make the dinamic library
ld -o liball.so *.o -shared
#add path in LD_LIBRARY_PATH
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
#delete files object
rm *.o
