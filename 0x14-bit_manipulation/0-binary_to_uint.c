#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puiss2 - computes power 2
 * @i: power
 *
 * Return: 2 power i
 */
unsigned int puiss2(unsigned int i)
{
	unsigned int res = 1, j = 0;

	while (j <= i - 1)
	{
		res *= 2;
		j++;
	}
	return (res);
}
/**
 * binary_to_uint - converts a binary to unsigned int
 * @b: a binary number
 *
 * Return: an unsigned int
 */
unsigned int binary_to_int(const char *b)
{
	unsigned int i = (unsigned int)strlen(b) - 1, res = 0;

	while (i >= 0)
	{
		res += ((unsigned int)b[i] - 48) * puiss2(i);
		i--;
	}
	return (res);
}
