#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * min - returns minimum between 2 int
 * @a: first int
 * @b: second int
 *
 * Return: int
 */
int min (int a, int b)
{
	int res;

	if (a < b)
		res = a;
	else
		res = b;
	return (res);
}
/**
 * realloc - resizes an old memory block
 * @ptr: pointer to old memory block
 * @old_size: old size of memory block
 * @new_size: new memory block size
 *
 * Return: pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *res;
	/*int i;*/

	if (ptr != NULL && new_size != 0)
	{
		if (new_size == old_size)
			res = ptr;
		else
		{
			res = malloc(new_size);/*
			if (res != NULL)
			{
				for (i = 0; i <= min(new_size, old_size) - 1; i++)
					res[i] = *(ptr + i);
				free(ptr);
			}*/free(ptr);
		}
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
			res = NULL;
	return (res);
}
