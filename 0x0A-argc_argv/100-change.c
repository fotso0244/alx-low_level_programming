#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - computes minimum number of coins
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0 if success, otherwise 1
 */
int main(int argc, char *argv[])
{
	int i, res = 0, j = 0, coin[5] = {25, 10, 5, 2, 1};

	if (argc - 1 == 1)
	{
		if (atoi(argv[1]) > 0)
		{
			i = atoi(argv[1]);
			while (i != 0)
			{
				if (i / coin[j] != 0)
				{
					res += i / coin[j];
					i %= coin[j];
					j++;
				}
				else
					j++;
			}
			printf("%d\n", res);
		}
		else
			printf("0\n");
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
