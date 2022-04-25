#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * string_toupper - changes lowercase letters to uppercase
 * @s: string
 *
 * Return: pointer to string
 */
char *string_toupper(char *s)
{
	int j;

	for (j = 0; j <= (int)strlen(s) - 1; j++)
	{
		if (*(s + j) <= 122 && *(s + j) >= 97)
			*(s + j) -= 32;
	}
	return (s);
}
