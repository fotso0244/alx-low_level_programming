#include <stddef.h>
/**
 * array_iterator - executes a function parameter on each element of an array
 * @array: an array
 * @size: size of array
 * @action: pointer to a function to use
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	while (i <= (int)size - 1)
	{
		(*action)(array[i]);
		i++;
	}
}
