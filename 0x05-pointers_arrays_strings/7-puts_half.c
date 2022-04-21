#include "main.h"
#include <string.h>
/**
 * puts_half - returns half of a string
 * @str: string
 */
void puts_half(char *str)
{
	int i = strlen(str) / 2;

	if (strcmp(str, "") != 0)
	{
		if (strlen(str) % 2 != 0)
			i = ((int)strlen(str) - 1) / 2;
		else
			i = (int)strlen(str) / 2;
		while (i <= (int)strlen(str) - 1)
		{
			_putchar(str[i]);
			i++;
		}
	}
	_putchar('\n');
}


