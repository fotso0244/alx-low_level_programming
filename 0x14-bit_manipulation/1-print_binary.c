#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: a number
 */
void print_binary(unsigned long int n)
{
	unsigned int mask = 1 << 31, nb, b = 0;

	for (nb = 1; nb <= 32; ++nb)
	{
		if ((n & mask) >= 1)
		{
			_putchar('1');
			b = 1;
		}
		else
			if ( b == 1 || nb == 32)
				_putchar('0');
		n <<= 1;
	}
	_putchar('\n');
}
