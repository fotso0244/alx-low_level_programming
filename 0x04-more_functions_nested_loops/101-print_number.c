#include "main.h"
/**
 * puiss - computes power 10
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
	return res;
}
/**
 * print_number - print an integer
 */
void print_number(int n)
{
	int a = n, b = 0, c = n;

	if (a < 0)
	{
		_putchar('-');
		a*=(-1);
	}

	while ((a / 10 >= 10) || (a / 10 < 10))
	{
		if (a / 10 >= 10)
		{
			b++;
			a /= 10;
		}

		if (a / 10 < 10)
		{
			if (a / 10 != 0)
				_putchar((a / 10) + '0');
			_putchar((a % 10) + '0');
			if (b == 0)
				break;
			if (b >= 1)
			{
				a = c % (puiss(10,b));
				c = a;
				b = 0;
			}
		}
	}
}
