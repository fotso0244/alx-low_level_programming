#include <stdio.h>
/**
 * main - prints 50 fist fibonacci numbers beginning
 * fibonacci - computes fibonacci numbers
 * @n: number to calculate fibonacci
 *
 * Return: 0
 */
int fibonacci(int n)
{

	if (n == 1)
		return (1);
	else
		if (n == 0)
			return (0);
		else
			return (fibonacci(n - 1) + fibonacci(n -2));
}

int main(void)
{
	int i = 1;

	while (i <= 50)
	{
		printf("%d", fibonacci(i));
		if (i != 50)
			printf(", ");
		i++;
		printf("gfghfg");
	}
	return (0);
}
