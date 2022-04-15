#include "main.h"
/**
 * more_numbers - print numbers between 0 and 14 ten times
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 48; j <= 57; j++)
		{
			_putchar(j);
		}
		for (j = 10; j <= 14; j++)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) +'0');
		}
		_putchar('\n');
	}
}
