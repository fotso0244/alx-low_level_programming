#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of triangle
 */
void print_diagonal(int n)
{
	int j, k, l = n;

	if (n <= 0)
		_putchar('\n');
	else
		for (j = 0; j <= n - 1; j++)
		{
			for (k = 1; k <= l - 1; k++)
				_putchar(' ');
			l--;
			for (k = 0; k <= j; k++)
				_putchar('#');
			_putchar('\n');
		}
}

