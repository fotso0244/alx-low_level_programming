#include "main.h"
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
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if strings are same, different to 0 else
 */
int _strcmp(char *s1, char *s2)
{
	int k = 0, j;

	for (j = 0; j <= _strlen(s1) - 1; j++)
	{
		if (*(s1 + j) == *(s2 + j))
			continue;
		else
		{
			k = *(s1 + j) - *(s2 + j);
			break;
		}

	}
	return (k);
}
