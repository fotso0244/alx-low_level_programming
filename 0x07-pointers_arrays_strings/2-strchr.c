#include <stddef.h>
#include <stdio.h>
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

	if (c != 0)
	{
		while (*(s + i) != '\0' || (s[i] == '\0' && s[i + 1] != '\0'))
		{
			if (*(s + i) == c)
			{
				res = s + i;
				break;
			}
			i++;
		}
		*(res + (int)strlen(res)) = '\0'
		if (*(s + i) == '\0' && s[i + 1] == '\0')
			res = NULL;
	}
	else
		res = NULL;
	return (res);
}
