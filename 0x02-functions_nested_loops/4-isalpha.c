#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: 1 if alphabetic character (lowercase or uppercase), 0 otherwise
 */
int _isalpha(int c)
{
	int s;

	if ((c >= 97) && (c <= 122))
	{
		s = 1;
	}
	else
		if ((c >= 65) && (c <= 90))
			s = 1;
		else
			s = 0;
	return (s);
}

