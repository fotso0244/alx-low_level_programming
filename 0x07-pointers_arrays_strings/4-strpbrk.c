#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to scan
 * @accept: set of bytes
 *
 * Return: pointer to the byte in s that matches of the bytes in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;
	char *res;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				res = s + i;
				break;
			}
			j++;
		}
		if (accept[j] != '\0')
			break;
		j = 0;
		i++;
	}
	if (s[i] == '\0')
		res = NULL;
	return (res);
}
