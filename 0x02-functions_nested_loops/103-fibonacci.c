#include <stdio.h>
/**
 * fibonacci - computes fibonacci numbers
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
 * main - computes sum of even-valued fibonacci numbers under 4000000
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0, j = 2;

	while (fibonacci(j) <= 4000000)
	{
		if ((fibonacci(j) % 2) == 0)
		{
			sum = sum + fibonacci(j);
			j++;
		}
	}
	printf("%d\n", sum);
	return (0);
}
