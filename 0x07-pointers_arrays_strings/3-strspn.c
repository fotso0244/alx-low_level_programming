#include <string.h>
/**
 * _strspn - gets length of a prefix substring
 * @s: string to scan
 * @accept: string containing character to match
 *
 * Return: length of initial substring
 */
int _strspn(char *s, char *accept)
{
	int i = 0, j = 0, match = 0;
	char res[100];

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				res[i] = s[i];
				if (s[i] != s[i - 1])
					match++;
				break;
			}
			j++;
		}
		if (match == (int)strlen(accept))
			break;
		j = 0;
		i++;
	}
	res[i + 1] = '\0';
	return((int)strlen(res));
}
