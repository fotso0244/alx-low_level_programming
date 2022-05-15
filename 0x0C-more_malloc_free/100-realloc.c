#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * _realloc - resizes an old memory block
 * @ptr: pointer to old memory block
 * @old_size: old size of memory block
 * @new_size: new memory block size
 *
 * Return: pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *res;

	if (ptr != NULL && new_size != 0)
	{
		if (new_size != old_size)
		{
			free(ptr);
			res = malloc(new_size);
			return (res);
		}
		if (new_size == old_size)
			return (ptr);
	}
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		res = NULL;
	}
	else
		if (ptr == NULL && new_size != 0)
		{
			res = malloc(new_size);
		}
		else
		{
			res = malloc(2);
			if (res != NULL)
				strcpy(res, "");
		}
	return (res);
}
