#include <string.h>
#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: string to print
 */
void rev_string(char *s)
{
	int i = strlen(s) - 1;
	char *revstr = " ";

	while (i >= 0)
	{
		*s = strcat(revstr,s[i]);
		i--;
	}
}
