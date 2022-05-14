#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - performs simple operation
 * @argc: number of arguments
 * @argv: arguments list
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int (*f)(int, int) = get_op_func(argv[2]);

	if (argc - 1 ==  3)
	{
		if (get_op_func(argv[2]) != NULL)
			if ((f == op_div || f == op_mod) && atoi(argv[3]) == 0)
			{
				printf("Error\n");
				exit(100);
			}
			else
			{
				printf("%d\n", (*f)(atoi(argv[1]), atoi(argv[3])));
			}
		else
		{
			printf("Error\n");
			exit(99);
		}
	}
	else
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}

