#include "main.h"
/**
 * _abs - prints absolute value of an integer
 * @n: an integer to process
 *
 * Return: absolute value
 */
int _abs(int n)
{
	int s;

	if (n >= 0)
		s = n;
	else
		if (n < 0)
			s = n * (-1);
	return (s);
}
