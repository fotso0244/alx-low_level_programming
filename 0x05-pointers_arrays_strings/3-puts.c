#include "main.h"
#include <string.h>
/**
 * _puts - prints a tring with _putchar function
 * @str: string to print
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i <= (int)strlen(str) - 1; i++)
		_putchar(str[i]);
	_putchar('\n');
}
