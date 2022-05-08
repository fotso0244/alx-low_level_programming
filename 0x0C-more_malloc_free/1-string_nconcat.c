#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - concatenates n characters of s2 with s1
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 *
 * Return: pointer to char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j = 0;
	char *res;

	if (s1 != NULL && s2 != NULL)
	{
		if (n <= (unsigned int)strlen(s2))
		{
			res = malloc(sizeof(char) * (strlen(s1) + n + 1));
			if (res != NULL)
			{
				for (i = 0; i <= (unsigned int)strlen(s1) - 1; i++)
					res[i] = s1[i];
				for (i = (unsigned int)strlen(s1); i <= (unsigned int)strlen(s1) + n; i++)
				{
					res[i] = s2[j];
					j++;
				}
				res[i] = '\0';
			}
		}
		else
			res = string_nconcat(s1, s2, (unsigned int)strlen(s2));
	}
	else
		if (s1 != NULL)
			res = s1;
		else
			res = s2;
	return (res);
}
