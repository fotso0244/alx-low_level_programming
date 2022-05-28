#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * puiss2 - computes power 2
 * @i: power
 *
 * Return: 2 power i
 */
int puiss2(int i)
{
	int res = 1, j = 0;

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
unsigned int binary_to_uint(const char *b)
{
	int i = (int)strlen(b) - 1, res = 0, j = 0;

	while (i >= 0)
	{
		if (b != NULL && (b[i] == 48 || b[i] == 49))
		{
			res += ((b[j] - 48) * puiss2(i));
			i--;
			j++;
		}
		else
			return (0);
	}
	return ((unsigned int)res);
}
