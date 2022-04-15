#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: The character to be checked
 *
 * Return: 1 if uppercase, 0 otherwise
 */
int _islower(int c)
{
	int s;

	if ((c >= 65) && (c <= 90))
	{
		s = 1;
	}
	else
		s = 0;
	return (s);
}

