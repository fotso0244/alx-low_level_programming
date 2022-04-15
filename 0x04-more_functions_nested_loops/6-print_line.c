#include "main.h"
/**
 * print_line - prints charcter _ n times
 * @n: number of times
 */
void print_line(int n)
{
	int i = n;

	if (i <= 0)
		_putchar('\n');
	else
		while (i > 0)
		{
			_putchar('_');
			i--;
		}
}

