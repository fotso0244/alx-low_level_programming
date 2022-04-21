#include "main.h"
#include <string.h>
/**
 * puts_half - returns half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i = 0;

	if (strcmp(str, "") != 0)
	{
		while (i <= (int)(strlen(str) / 2) - 1)
		{
			i = i + 1;
			_putchar(str[i]);
		}
		if (strlen(str) % 2 != 0)
			_putchar(str[i + 1]);
	}
	_putchar('\n');
}


