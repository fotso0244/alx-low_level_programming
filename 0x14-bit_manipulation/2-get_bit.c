#include "main.h"
#include <stdio.h>
/**
 * get_bit - gets value of bit at an index
 * @n: a number
 * @index: an index
 *
 * Return: value of bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << 63;
	unsigned int i;
	int res;

	for (i = 1; i <= 63 - index; i++)
		n <<= 1;
	if ((n & mask) >= 1)
		res = 1;
	else
		res = 0;
	return (res);
}
