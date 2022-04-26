#include <stdbool.h>
#include <string.h>
/**
 * ifsep - check separator
 * @k: array of separator
 * @c: character to check
 *
 * Return: boolean value
 */
bool ifsep(char *k, char c)
{
	int n = 0;
	bool sep = false;

	while (n <= (int)strlen(k) - 1)
	{
		if (*(k + n) != c)
			n++;
		else
		{
			sep = true;
			n = 0;
			break;
		}
	}
	return (sep);
}
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 *
 * Return: pointer to a string
 */
char *cap_string(char *s)
{
	char *k = ",;.!?\"(){} \n	";
	int j = 0;
	bool sep = false, start = false;

	while (j <= (int)strlen(s) - 1)
	{
		sep = ifsep(k, *(s + j));
		if (!sep)
		{
			if (*(s + j) <= 122 && *(s + j) >= 97 && !start)
			{
				*(s + j) -= 32;
				j++;
				start = 1;
			}
			else
			{
				j++;
				start = 1;
			}
		}
		else
		{
			j++;
			start = 0;
			sep = 0;
		}
	}
	return (s);
}
