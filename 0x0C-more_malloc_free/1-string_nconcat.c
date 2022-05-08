#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * concat - concatenates one string null with another string
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to char
 */
char *concat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	char *res;

	if (s1 != NULL && s2 == NULL)
	{
		res = malloc(sizeof(char) * (strlen(s1) + 1));
		if (res != NULL)
			strcpy(res, s1);
	}
	if (s2 != NULL && s1 == NULL)
	{
		if (n <= (unsigned int)strlen(s2))
		{
			res = malloc(sizeof(char) * (n + 1));
			if (res != NULL)
				for (i = 0; i <= n - 1; i++)
					res[i] = s2[i];
		}
		else
		{
			res = malloc(sizeof(char) * (strlen(s2) + 1));
			if (res != NULL)
				strcpy(res, s2);
		}
	}
	if (s2 == NULL && s1 == NULL)
	{
		res = malloc(1);
		if (res != NULL)
			res = "";
	}
	return (res);
}
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
		if (n == 0)
		{
			res = malloc(sizeof(char) *(strlen(s1) + 1));
			if(res != NULL)
				strcpy(res, s1);
		}
		if (n <= (unsigned int)strlen(s2) && n != 0)
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
			if (n != 0)
				res = string_nconcat(s1, s2, (unsigned int)strlen(s2));
	}
	else
		res = concat(s1, s2, n);
	return (res);
}
