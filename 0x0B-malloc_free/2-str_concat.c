#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * str_concat2 - concatenates 2 strings, 1 string is null
 * @s1: first string
 *
 * Return: pointer to char
 */
char *str_concat2(char *s1)
{
	int i;
	char *res;

	res = malloc(sizeof(char) * strlen(s1));
	if (res != NULL)
	{
		for (i = 0; i <= (int)strlen(s1) - 1; i++)
			res[i] = s1[i];
		res[i + 1] = '\0';
	}
	else
		res = NULL;
	return (res);
}
/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to char
 */
char *str_concat(char *s1, char *s2)
{
	int i, j = 0, size;
	char *res;

	if (s1 == NULL)
	{
		res = str_concat2(s2);
	}
	if (s2 == NULL)
	{
		res = str_concat2(s1);
	}
	if (s1 == NULL && s2 == NULL)
		res = "";
	if ((s1 != NULL) && (s2 != NULL))
	{
		res = malloc(sizeof(char) * (strlen(s1) + strlen(s2)));
		if (res != NULL)
		{
			for (i = 0; i <= (int)strlen(s1) - 1; i++)
				res[i] = s1[i];
			size = (int)strlen(s1) + (int)strlen(s2);
			for (i = (int)strlen(s1); i <= size - 1; i++)
			{
				res[i] = s2[j];
				j++;
			}
			res[i + 1] = '\0';
		}
		else
			res = NULL;
	}
	return (res);
}
