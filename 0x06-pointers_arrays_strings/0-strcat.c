#include "main.h"
#include <string.h>
/**
 * _strcat - concantenates 2 strings
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, k = strlen(dest), j;

	for (j = 0; j <= strlen(src) - 1; j++)
		{
			*(dest + k) = *(src + j);
			k++;
		}
	return (dest);
}

