#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: size
 *
 * Return: pointer to void
 */
void *malloc_checked(unsigned int b)
{
	void *res;

	if (malloc(b) != NULL)
		res = malloc(b);
	else
		exit(98);
	return (res);
}
