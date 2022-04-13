#include "main.h"
/**
 * jack_bauer - prints every minute of the day of jack bauer
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 24; i++)
	{
		_putchar((i / 10) + '0');
		_putchar((i % 10) + '0');
		_putchar(':');

		for (j = 0; j <= 59; j++)
		{
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
