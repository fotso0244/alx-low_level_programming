#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * countwords - counts words
 * @str: a string
 *
 * Return: number of words
 */
int countwords(char *str)
{
	int res = 0, i = 0;

	while (str[i] != '\0')
	{
		if (str[i] <= 31)
			i++;
		else
			if (str[i] == 32 && i != 0 && str[i - 1] > 32)
			{
				res++;
				i++;
			}
			else
				i++;
	}
	if (i == (int)strlen(str) && str[i - 1] > 32)
		res++;
	return (res);
}
/**
 * countchar - counts character of a word
 * @s: word
 *
 * Return: number of characters
 */
int countchar(char *s)
{
	int res = 0, i = 0;

	while (s[i] > 32)
	{
		res++;
		i++;
	}
	return (res);
}
/**
 * strtow - splits a string in words
 * @str: string
 *
 * Return: double pointer to int
 */
char **strtow(char *str)
{
	int i, j = 0, k = 0;
	char **res;

	if (strcmp(str, " ") == 0 || str == NULL || strcmp(str, "") == 0)
		return (NULL);
	else
	{
		res = malloc(sizeof(char *) * (countwords(str)));
		if (res != NULL)
		{
			for (i = 0; i <= countwords(str) - 1; i++)
			{
				while (str[k] <= 32 && str[k] != '\0')
					k++;
				if (str[k] != '\0')
				{
					*(res + i) = malloc(sizeof(char) * (countchar(str + k) + 1));
					if (res != NULL)
					{
						for (j = 0; j <= countchar(str + k) - 1; j++)
							*(*(res + i) + j) = str[k + j];
						*(*(res + i) + j) = '\0';
						k += (j + 1);
						j = 0;
					}
					else
						res = NULL;
				}
			}
			*(res + i) = NULL;
		}
		else
			res = NULL;
	return (res);
	}
}
