#include "main.h"
/**
 * print_last0 - prints last 0
 */
void print_last0(int a)
{
	int i;

	for (i = 1; i <= a; i++)
		_putchar('0');
}
/**
 * puiss - power 10
 * @a: base
 * @b: power
 *
 * Return: a power b
 */
int puiss(int a, int b)
{
	int i, res = 1;

	for (i = 1; i <= b; i++)
		res *= a;
	return (res);
}
/**
 * print_number - print an integer
 * @n: number to print
 */
void print_number(int n)
{
	int a = n, b = 0, c = n, l, e = 0;

	if (a < 0)
	{
		_putchar('-');
		a *= (-1);
		c *= (-1);
	}
	while ((a / 10 >= 10) || (a / 10 < 10))
	{
		if (a / 10 >= 10)
		{
			b++;
			if (a % 10 != 0)
				e = b;
			a /= 10;
		}
		if (a / 10 < 10)
		{
			if (a / 10 != 0)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			if ((e > 0) && (e < b))
				for (l = 1; l <= b - e; l++)
					_putchar('0');
			if (b == 0)
				break;
			if (b >= 1)
			{
				a = c % (puiss(10, b));
				if (a == 0)
				{
					print_last0(b);
					break;
				}
				c = a;
				b = 0;
				e = 0;
			}
		}
	}
}
