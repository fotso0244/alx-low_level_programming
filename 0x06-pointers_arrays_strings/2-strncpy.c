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
 * _strncpy- copy n characters from a string
 * @dest: first string
 * @src: second string
 * @n: number of character from string src to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0, j;

	if (n <= _strlen(src))
	{
		for (j = 0; j <= n - 1; j++)
		{
			*(dest + k) = *(src + j);
			k++;
		}
	}
	else
		for (j = 0; j <= _strlen(src) - 1; j++)
		{
			*(dest + k) = *(src + j);
			k++;
		}
	return (dest);
}
