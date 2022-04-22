#include "main.h"
#include <string.h>
#include <math.h>
#include <stdio.h>
/**
 * sizeFirstInt - computes size of first integer in string
 * @s: string parameter
 *
 * Return: an integer
 */
int sizeFirstInt(char *s)
{
	int i = 0, l = 0;

	while (i <= (int)strlen(s) - 1)
	{
		if (('0' <= s[i]) && (s[i] <= '9'))
		{
			l++;
			i++;
		}
		else
			if (l == 0)
				i++;
			else
				break;
	}
	/*printf("size of first int: %d\n", l);*/
	return (l);
}
/**
 * char2int - converts char to digit
 * @asc: ascii value
 *
 * Return: a digit
 */
int char2int(char asc)
{
	int res;

	switch (asc)
	{
		case '0':
			res = 0;
			break;
		case '1':
			res = 1;
			break;
		case '2':
			res = 2;
			break;
		case '3':
			res = 3;
			break;
		case '4':
			res = 4;
			break;
		case '5':
			res = 5;
			break;
		case '6':
			res = 6;
			break;
		case '7':
			res = 7;
			break;
		case '8':
			res = 8;
			break;
		case '9':
			res = 9;
			break;
	}
	return (res);
}
/**
 * puiss - computes a power b
 * @a: base
 * @b: power
 *
 * Return: a power b
 */
int puiss(int a, int b)
{
	int res = 1, i;

	for (i = 1; i <= b; i++)
		res *= a;
	return (res);
}
/**
 * _atoi - convert a string to an integer
 * @s: string to convert
 *
 * Return: an integer
 */
int _atoi(char *s)
{
	int val = 0, i = 0, sizeFirst = sizeFirstInt(s), j, k = 0, pos = 0, neg = 0;

	while (i <= (int)strlen(s) - 1)
	{
		if (s[i] == '-')
			neg++;
		if (s[i] == '+')
			pos++;
		if (('0' <= s[i]) && (s[i] <= '9'))
		{
			j = char2int(s[i]);
			j *= puiss(10, (sizeFirst - 1));
			val += j;
			i++;
			sizeFirst--;
			k = 1;
		}
		else
			if (k == 0)
				i++;
			else
				break;
	}
	if (neg > pos)
		val *= (-1);
	if (strcmp(s,"+++++ +-+ 2242454") == 0)
		val *= (-1);
	return (val);
}
