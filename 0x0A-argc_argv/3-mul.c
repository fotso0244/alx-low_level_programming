#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies 2 numbers
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc - 1 == 2)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
