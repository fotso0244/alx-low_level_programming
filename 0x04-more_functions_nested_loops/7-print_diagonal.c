#include "main.h"
/**
 * print_diagonal - prints charcter \ n times
 * @n: number of times
 */
void print_line(int n)
{
	int j;

	if (n <= 0)
		_putchar('\n');
	else
		for (j = 0; j <= n - 1; j++)
		{
			_putchar('\');
			if (j == n - 1)
				_putchar('\n');
		}
}

