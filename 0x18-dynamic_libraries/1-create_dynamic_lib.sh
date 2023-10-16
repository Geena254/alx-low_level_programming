#!/bin/bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -IPIC -c *.c
gcc -shared -o liball.so *.o
export LD_LIBRRY_PATH=.:$LD_LIBRARY_PATH
