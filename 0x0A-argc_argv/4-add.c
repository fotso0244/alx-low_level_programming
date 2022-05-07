#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 1, res = 0;

	if (argc != 1)
	{
		while (i <= argc - 1)
		{
			if (atoi(argv[i]) != 0)
			{
				res += atoi(argv[i]);
				i++;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
