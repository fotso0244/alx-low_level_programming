#include "main.h"
#include <string.h>
/**
 * puts2 - returns every other character
 * @str: string
 */
void puts2(char *str)
{
	int i = 0;

	if (strcmp(str, "") != 0)
	{
		_putchar(str[i]);
		while (i <= (int)strlen(str) - 3)
		{
			i = i + 2;
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}


