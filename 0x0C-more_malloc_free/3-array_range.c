#include "main.h"
#include <stddef.h>
/**
 * array_range - creates an array of integer
 * @min: min integer
 * @max: max integer
 *
 * Return: pointer to array of integer
 */
int *array_range(int min, int max)
{
	int *res;
	
	if (min > max)
		return (NULL);
	else
	{
		res = malloc(sizeof(*res) * (max - min + 1));
		if (res != NULL)
		{
			res[0] = min;
			if (min != max)
				for (i = 1; i <= max - min + 1; i++)
					res[i] += 1;
		}
	}
	return (res);
}
