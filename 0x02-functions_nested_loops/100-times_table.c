#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: number of times
 */
void print_times_table(int n)
{
	int i, j, k;

	if ((n <= 15) && (n > 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (((i * j) / 10) != 0)
					if (((i * j) / 10) >= 10)
					{
						_putchar(' ');
						k = (i * j) / 10;
						_putchar((k / 10) + '0');
						_putchar((k % 10) + '0');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(((i * j) / 10) + '0');
					}
				else
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				_putchar(((i * j) % 10) + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	}
		_putchar('\n');
	}
}
