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
	if (malloc(b) != NULL)
		return (malloc(b));
	else
		exit(98);
}
