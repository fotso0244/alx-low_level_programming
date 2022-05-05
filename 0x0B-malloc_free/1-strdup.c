#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * _strdup - returns pointer to new allocated space in memory
 * @str: a string
 *
 * Return: pointer to duplicate string
 */
char *_strdup(char *str)
{
	int i;
	char *res;

	if (str == NULL)
		res = NULL;
	else
	{
		res = malloc(sizeof(char) * strlen(str));
		if (res != NULL)
			for (i = 0; i <= (int)strlen(str) - 1; i++)
				res[i] = str[i];
		else
			res = NULL;
	}
	return (res);
}
