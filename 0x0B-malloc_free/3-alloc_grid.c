#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid - creates 2 dimensional array
 * @width: width of array
 * @height: height of array
 *
 * Return: a double pointer to int
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **res;

	if ((width <= 0) || (height <= 0))
		res = NULL;
	else
	{
		res = malloc(sizeof(int *) * height);
		if (res != NULL)
			for (i = 0; i <= height - 1; i++)
			{
				*(res + i) = malloc(sizeof(int) * width);
				if (*(res + i) != NULL)
				{
					for (j = 0; j <= width - 1; j++)
						*(*(res + i) + j) = 0;
				}
				else
				res = NULL;
			}
	}
	return (res);
}
