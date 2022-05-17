#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number of integers
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	if (n != 0)
	{
		va_start(ap, n);
		for (i = 0; i <= n - 1; i++)
		{
			s = va_arg(ap, char *);
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	else
		printf("\n");
}
