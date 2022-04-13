#include <stdio.h>
/**
 * main - prints 50 fist fibonacci numbers beginning by 1 and 2
 * fibonacci_start_1_2 - computes fibonacci numbers beginning by 1 and 2
 * fibonacci - computes fibonacci numbers
 * @n: number to calculate fibonacci
 *
 * Return: 0
 */
int fibonacci(int n)
{
	int res;

	if (n >= 0)
	{
		if (n == 1)
			res = 1;
		else
			if (n == 0)
				res = 0;
			else
				res = fibonacci(n - 1) + fibonacci(n -2);
	}
	return (res);
}
int fibonacci_start_1_2(int n)
{
	int i, res;
	i = n / 10;

	while (i >= 10)
	{
		i = i / 10;
	}
	if ((i == 1) || (i == 2))
		res = n;
	else
		res = 0;
	return (res);
}
int main(void)
{
	int i = 1, j = 1;

	while (i <= 50)
	{
		if (fibonacci_start_1_2(fibonacci(j)) != 0)
		{
			printf("%d", fibonacci_start_1_2(fibonacci(j)));
			j++;
			i++;
			if (i != 50)
			{
				printf(", ");
			}
		}
		else
			j++;
	}
	return (0);
}
