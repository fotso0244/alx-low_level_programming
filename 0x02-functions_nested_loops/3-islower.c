#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	int s;

	if ((c >= 97) && (c <= 122))
	{
		s = 1;
	}
	else
		s = 0;
	return (s);
}

