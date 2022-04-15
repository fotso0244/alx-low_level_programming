#include "main.h"
/**
 * print_square - prints charcter # n times
 * @n: number of times
 */
void print_square(int n)
{
	int j, k;

	if (n <= 0)
		_putchar('\n');
	else
		for (j = 0; j <= n - 1; j++)
		{
			for (k = 0; k <= n - 1; k++)
			{
				_putchar('#');
				if (k == n - 1)
					_putchar('\n');
			}
		}
}

