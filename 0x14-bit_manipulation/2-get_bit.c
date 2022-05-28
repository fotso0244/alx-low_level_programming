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
	unsigned int bit;
	int res;
	
	if (index <= 63)
		bit = 2 ^ index;
	else
		return (-1);
	if ((n & bit) >= 1)
		res = 1;
	else
		res = 0;
	return (res);
}
