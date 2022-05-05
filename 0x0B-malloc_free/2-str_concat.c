#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * str_concat: concatenates 2 strings
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
		res = s2;
	if (s2 == NULL)
		res = s1;
	if ((s1 != NULL) && (s2 != NULL))
	{
		res = malloc(sizeof(char) * (strlen(s1) + strlen(s2)));
		for (i = 0; i <= (int)strlen(s1) - 1; i++)
			res[i] = s1[i];
		size = (int)strlen(s1) + (int)strlen(s2);
		for (i = (int)strlen(s1); i <= size - 1; i++)
		{
			res[i] = s[j];
			j++;
		}
		res[i + 1] = '\0';
	}
	return (res);
}
