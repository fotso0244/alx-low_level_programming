#include "main.h"
/**
 * print_diagonal - prints charcter \ n times
 * @n: number of times
 */
void print_diagonal(int n)
{
	int j, k;

	if (n <= 0)
		_putchar('\n');
	else
		for (j = 0; j <= n - 1; j++)
		{
			if (n != 1)
			{
				for (k = 1; k <= j; k++)
					_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
}

