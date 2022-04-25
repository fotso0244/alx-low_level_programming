#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strlen - computes length of string
 * @s: string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i + 1);
}
/**
 * reverse_array - reverses elements of an array
 * @a: array
 * @n: size of array
 */
void reverse_array(int *a, int n)
{
	int k[n + 5], j, l = n - 1;

	for (j = 0; j <= n - 1; j++)
	{
		k[j] = a[l];
		l--;
	}
	for (j = 0; j <= n - 1; j++)
		a[j] = k[j];
	return;
}
