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
 * _strncat - concantenates 2 strings
 * @dest: first string
 * @src: second string
 * @n: number of character from string src to concatenate
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int k = _strlen(dest) - 1, j;

	if ( n <= _strlen(src))
	{
		for (j = 0; j <= n - 1; j++)
		{
			*(dest + k) = *(src + j);
			k++;
		}
		*(dest + k) = '\0';
	}
	else
		for (j = 0; j <= _strlen(src) - 1; j++)
		{
			*(dest + k) = *(src + j);
			k++;
		}
	return (dest);
}
