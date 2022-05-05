#include <string.h>
char *result(int j, int i, char *s)
{
	char *res;

	if (j == (int)strlen(s))
		res = s + (i - j + 1);
	else
		res = NULL;
	return (res);
}
/**
 * _strstr - locates a substring
 * @haystack: string to scan
 * @needle: substring to search
 *
 * Return: pointer to first occurrence of substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k = 0;
	char *res;

	while (*(haystack + i) != '\0')
	{
		if (*(haystack + i) == *(needle + j))
		{
			k++;
			j++;
		}
		else
		{
			if (haystack[i] != haystack [i - 1])
			{
				k = 0;
				j = 0;
			}
			else
				if (k > 1)
				{
					k = 0;
					j = 0;
				}
		}
		if (k == (int)strlen(needle))
			break;
		i++;
	}
	return (result(k, i, needle));
}
