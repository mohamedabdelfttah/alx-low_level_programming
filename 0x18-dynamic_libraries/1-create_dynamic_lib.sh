#!/bin/sh
gcc -Wall -pedantic -Werror -Wextra -srd=gnu89 -fPIC -c *c
gcc -shared -o liball.so *.o
