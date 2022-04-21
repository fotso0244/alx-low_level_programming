#include <string.h>
#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: string to print
 */
void rev_string(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
