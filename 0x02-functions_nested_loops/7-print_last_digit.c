#include "main.h"
/**
 * print_last_digit - prints last digit of an integer
 * @n: The number to print last digit
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int s;

	if (n >= 0)
		s = n % 10;
	else
		if (n == INT_MIN)
			s = 8;
		else
			s = (n * (-1)) %  10;
	_putchar(s + '0');
	return (s);
}
