#!/bin/bash
for f in *.c
do
	oldstr=".c"
	newstr=".o"
	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 $(echo $f) -o $(echo $f | sed "s/$oldstr/$newstr")
done
ar -rc liball.a $(echo *.o)
ranlib liball.a
