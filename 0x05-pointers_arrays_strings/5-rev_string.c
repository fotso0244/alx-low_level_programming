#include <string.h>
#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: string to print
 */
void rev_string(char *s)
{
	int i = strlen(s) - 1;

	for (i = 0; i <= strlen(s) -1; i++)
		_putchar(s[i]);
	_putchar('\n');
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
