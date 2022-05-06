#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of program
 * @ac: int
 * @av: double pointer
 *
 * Return: pointer to char
 */
char *argstostr(int ac, char **av)
{
	int i, sum = 0;
	char *res = "";

	if (ac == 0 || av == NULL)
		res = NULL;
	else
	{
		for (i = 0; i <= ac - 1; i++)
			sum += (int)strlen(*(av + i));
		res = malloc(sizeof(char) * (sum + ac));
		if (res != NULL)
		{
			for (i = 0; i <= ac - 1; i++)
			{
				strcat(res, *(av + i));
				strcat(res, "\n");
			}
		}
		else
			res = NULL;
	}
	return (res);
}
