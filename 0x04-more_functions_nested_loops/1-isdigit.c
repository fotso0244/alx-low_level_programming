#include "main.h"
/**
 * _isdigit - checks for uppercase character
 * @c: The character to be checked
 *
 * Return: 1 if digit, 0 otherwise
 */
int _isdigit(int c)
{
	int s;

	if ((c >= 48) && (c <= 57))
	{
		s = 1;
	}
	else
		s = 0;
	return (s);
}

