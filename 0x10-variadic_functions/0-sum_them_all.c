#include <stdarg.h>
/**
 * sum_them_all - sum all arguments
 * @n: number of arguments
 *
 * Return: a sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n != 0)
	{
		va_start(ap, n);
		for (i = 0; i <= n - 1; i++)
			sum += va_arg(ap, unsigned int);
	}
	return (sum);
}
