#include "main.h"
/**
 * _strlen - computes length of a string
 * @s: string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0, j = 0;

	while (s[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}
/**
 * leet - encodes a string using 1337
 * @s: string
 *
 * Return: pointer to a string
 */
char *leet(char *s)
{
	int i = 0, j = 0;
	char *str1 = "aAeEoOtTlL", *str2 = "4433007711";

	while (i <= _strlen(s) - 1)
	{
		while (j <= _strlen(str1) - 1)
		{
			if (*(str1 + j) != *(s + i))
				j++;
			else
			{
				*(s + i) = *(str2 + j);
				j = 0;
				break;
			}
		}
		j = 0;
		i++;
	}
	return (s);
}
