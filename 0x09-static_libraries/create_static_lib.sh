#!/bin/bash
for f in *.c
do
	echo ${f/.c/.o}
	gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -c $(echo $f) -o $(echo ${f/.c/.o})
done
ar -rc liball.a $(echo *.o)
ranlib liball.a
