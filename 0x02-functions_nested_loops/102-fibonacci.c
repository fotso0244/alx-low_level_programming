#include <stdio.h>
/**
 * fibonacci - computes 50 first fibonacci numbers
 * @n: fibonacci number
 *
 * Return: fibonacci(n)
 */
int fibonacci(int n)
{

	if (n <= 1)
		return (n);
	return (fibonacci(n - 1) + fibonacci(n - 2));
}
/**
 * main - computes fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 50; i++)
	{
		printf("%d", fibonacci(i));
		if (i != 50)
			printf(", ");
	}
	printf("\n");
	return (0);
}
