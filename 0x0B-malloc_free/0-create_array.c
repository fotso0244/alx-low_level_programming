#include <stdlib.h>
/**
 * create_array - creates an array of char and initialize it
 * @size: size of array
 * @c: character for initialization
 *
 * Return: pointer to char
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *res;
	if (size == 0)
		res = NULL;
	else
	{
		res = malloc(sizeof(char) * size);
		for (i = 0; i <= size - 1; i++)
			res[i] = c;
		res[i + 1] = '\0';
	}
}
