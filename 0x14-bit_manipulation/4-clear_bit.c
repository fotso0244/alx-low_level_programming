#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets value of bit to 0 at an index
 * @n: a number
 * @index: an index
 *
 * Return: 1 if success, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	int res;

	if (index <= 63)
	{
		mask = 1UL << index;
		*n = ((*n) & ~mask) | (0 << index);
		res = 1;
	}
	else
		return (-1);
	return (res);
}
