#include <string.h>
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

	if (strcmp(needle, "") != 0)
	{
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
	}
	else
		res = NULL;
	return (res);
}
