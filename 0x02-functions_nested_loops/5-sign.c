#include "main.h"
/**
 * print_sign - prints sign of a number
 * @n: is a number to be checked
 *
 * Return: 1 if n gt 0, 0 if n==0, -1 if n lt 0
 */
int print_sign(int n)
{
	int s;

	if (n > 0)
	{
		_putchar('+');
		s = 1;
	}
	else
		if (n < 0)
		{
			_putchar('-');
			s = -1;
		}
		else
		{
			_putchar('0');
			s = 0;
		}
	return (s);
}
