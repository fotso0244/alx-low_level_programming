#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * calloc - allocates memory
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb != 0 && size != 0)
	{
		res = malloc(nmemb * size);
		if (res != NULL)
			memset(res, 0, nmemb * size);
	}
	return (res);
}
