#include <stddef.h>
#include <string.h>
/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: a character
 *
 * Return: pointer to first occurrence of a character
 */
char *_strchr(char *s, char c)
{
	int i = 0;
	char *res;

	while (i <= (int)strlen(s) - 1)
	{
		if (*(s + i) == c)
		{
			res = s + i;
			break;
		}
		i++;
	}
	if (i == (int)strlen(s))
		res = NULL;
	return (res);
}
