#include <string.h>
/**
 * rot13 - encodes a string using rot13
 * @s: string
 *
 * Return: pointer to a string
 */
char *rot13(char *s)
{
	int i, j = 0;
	char *str1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *str2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; i <= (int)strlen(s)-1; i++)
	{
		while (j <= (int)strlen(str1) -1)
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
