#!/bin/bash
gcc -fpic -c *.c && gcc -fpic -o liball.so *.o -shared
