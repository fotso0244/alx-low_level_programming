#include "main.h"
#include <string.h>
/**
 * _strcpy - copy string
 * @dest: destination string
 * @src: source string
 *
 * Return: value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= (int)strlen(src) - 1; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
