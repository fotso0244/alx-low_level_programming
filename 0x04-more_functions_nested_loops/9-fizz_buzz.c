#include "main.h"
/**
 * main - fizz buzz program
 */
int main(void)
{
	int i, j;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			_putchar('F');
			_putchar('i');
			_putchar('z');
			_putchar('z');
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		else
			if (i % 3 == 0)
			{
				_putchar('F');
				_putchar('i');
				_putchar('z');
				_putchar('z');
			}
			else
				if (i % 5 == 0)
				{

					_putchar('B');
					_putchar('u');
					_putchar('z');
					_putchar('z');
				}
	}
	return (0);
}

