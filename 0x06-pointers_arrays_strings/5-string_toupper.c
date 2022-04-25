#include "main.h"
#include <string.h>
/**
 * string_toupper - changes lowercase letters to uppercase
 * @s: string
 *
 * Return: pointer to string
 */
char *string_toupper(int *s)
{
	int j;

	for (j = 0; j <= strlen(s) - 1; j++)
	{
		if (*(s + j) <= 122 && *(s + j) >= 97)
			*(s + j) += 32;
	}
	return (s);
}
