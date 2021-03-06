#include <stddef.h>
#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: integer array
 * @size: size of array
 * @cmp: function to compare values
 *
 * Return: index for the first element for which cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL)
	{
		if (size > 0)
			while (i <= size - 1)
			{
				if (!cmp(array[i]))
					i++;
				else
				{
					return (i);
				}
			}
		else
			return (-1);
		if (i == size)
			return (-1);
	}
	else
		return (-1);
	return (0);
}
