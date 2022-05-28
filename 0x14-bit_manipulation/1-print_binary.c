#include "main.h"
#include <stdio.h>
/**
 * print_binary - prints binary representation of a number
 * @n: a number
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << 63;
	int nb, b = 0;

	for (nb = 1; nb <= 64; ++nb)
	{
		if ((n & mask) >= 1)
		{
			_putchar('1');
			b = 1;
		}
		else
			if (b == 1 || nb == 64)
				_putchar('0');
		n <<= 1;
	}
}
