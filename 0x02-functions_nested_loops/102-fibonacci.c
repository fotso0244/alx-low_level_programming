#include <stdio.h>
/**
 * fibonacci - computes 50 first fibonacci numbers
 * @n: fibonacci number
 *
 * Return: fibonacci(n)
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
