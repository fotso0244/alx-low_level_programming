#include <stddef.h>
#include "function_pointers.h"
#include <string.h>
/**
 * print_name - prints name
 * @name: name to print
 * @f: function to use
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		(*f)(name);
	if (name[(int)strlen(name) - 1] != '\n')
		_putchar('\n');
}
