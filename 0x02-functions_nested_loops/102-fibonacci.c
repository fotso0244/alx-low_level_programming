#include <stdio.h>
/**
 * main - prints 50 fist fibonacci numbers beginning
 * 
 * fibonacci - computes fibonacci numbers
 * @n: number to calculate fibonacci
 *
 * Return: 0
 */
int fibonacci(int n)
{
	int res;

	if (n == 1)
		res = 1;
	else
		if (n == 0)
			res = 0;
		else
			res = fibonacci(n - 1) + fibonacci(n - 2);
	return (res);
}

int main(void)
{
	int i;

	for (i = 1; i <= 50; i++)
	{
		printf("%d", fibonacci(i));
		if (i != 50)
			printf(", ");
		printf("gfghfg");
	}
	return (0);
}
