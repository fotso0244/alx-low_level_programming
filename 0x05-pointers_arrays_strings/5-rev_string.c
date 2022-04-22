#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string - prints a string in reverse
 * @s: string to print
 */
void rev_string(char *s)
{
	int j = strlen(s) - 1, i = 0;
	char cpstr[1000];

	while (i <= (int)strlen(s) - 1)
	{
		cpstr[i] = s[j];
		/*printf("%c", cpstr[i]);*/
		i++;
		j--;
	}
	strcpy(s, cpstr);
}
