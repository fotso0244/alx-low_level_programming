#include "main.h"
#include <string.h>
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
 * _strcat - concantenates 2 strings
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int k = _strlen(dest), j;

	for (j = 0; j <= _strlen(src) - 1; j++)
	{
		*(dest + k) = *(src + j);
		k++;
	}
	k++;
	*(dest + k) = '\0';
	_putchar('\n');
	return (dest);
}
