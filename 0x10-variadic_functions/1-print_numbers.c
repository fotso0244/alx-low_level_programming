#include <stdarg.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_numbers - prints numbers
 * @separator: separator
 * @n: number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	if (n != 0)
	{
		va_start(ap, n);
		for (i = 0; i <= n - 1; i++)
		{
			printf("%d", va_arg(ap, int));
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}
		printf("\n");
	}
	else
		printf("");
}
