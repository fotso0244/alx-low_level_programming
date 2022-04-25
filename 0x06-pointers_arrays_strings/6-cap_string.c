#include "main.h"
#include <string.h>
#include <stdbool.h>
/**
 * cap_string - capitalizes all words of a string
 * @s: string
 * 
 * Return: pointer to a string
 */
char *cap_string(char *s)
{
	char *k = ",;.!?\"(){} \n	";
	int n = 0, j = 0;
	bool sep = false, start = false;

	while (j <= (int)strlen(s) - 1)
	{
		while (n <= (int)strlen(k) - 1)
		{
			if (*(k + n) != *(s + j))
				n++;
			else
			{
				sep = 1;
				n = 0;
				break;
			}
		}
		if (!sep)
		{
			if (*(s + j) <= 122 && *(s + j) >= 97 && !start)
			{
				*(s + j) -= 32;
				n = 0;
				j++;
				start = 1;
			}
			else
			{
				j++;
				start = 1;
				n = 0;
			}
		}
		else
		{
			j++;
			start = 0;
			sep = 0;
			n = 0;
		}
	}
	return (s);
}
