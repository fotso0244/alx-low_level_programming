#include <string.h>
/**
 * leet - encodes a string using 1337
 * @s: string
 *
 * Return: pointer to a string
 */
char *leet(char *s)
{
	int i, j = 0;
	char *str1 = "aAeEoOtTlL";
	char *str2 = "4433007711";

	for (i = 0; i <= (int)strlen(s) - 1; i++)
	{
		while (j <= (int)strlen(str1) - 1)
		{
			if (*(str1 + j) != *(s + i))
				j++;
			else
			{
				*(s + i) = *(str2 + j);
				j = 0;
				break;
			}
		}
		j = 0;
	}
	return (s);
}
