#include "main.h"
#include <string.h>
/**
 * _strcpy - copy string
 * @dest: destination string
 * @src: source string
 *
 * Return: value of dest
 */
void _strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= strlen(src) -1; i++)
		dest[i] = src[i];
	return (dest);
}	
