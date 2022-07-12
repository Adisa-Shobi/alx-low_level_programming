#!/usr/bin/sh
gcc *.c -c -fPIC
gcc *.o -shared -o liball.so
