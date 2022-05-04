#include <string.h>
/**
 * _strspn - gets length of a prefix substring
 * @s: string to scan
 * @accept: string containing character to match
 *
 * Return: length of initial substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, k;
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
			k = 0;
			j = 0;
		}
		if (k == (int)strlen(needle))
			break;
		i++;
	}
	if (k == (int)strlen(needle))
		res = haystack + (i - k + 1);
	else
		res = NULL;
	return (res);
}
