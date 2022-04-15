#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int j, k, l = size;

	if (size <= 0)
		_putchar('\n');
	else
		for (j = 0; j <= size - 1; j++)
		{
			for (k = 1; k <= l - 1; k++)
				_putchar(' ');
			l--;
			for (k = 0; k <= j; k++)
				_putchar('#');
			_putchar('\n');
		}
}

