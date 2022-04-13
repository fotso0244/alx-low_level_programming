#include <stdio.h>
/**
 * main - prints 50 fist fibonacci numbers beginning by 1 and 2
 * fibonacci_start_1_2 - computes fibonacci numbers beginning by 1 and 2
 * @n: number to calculate fibonacci
 *
 * Return: 0
 */
int fibonacci_start_1_2(int n)
{
	int res, i;

	if (n >= 0)
	{
		if (n == 1)
			res = 1;
		else
			if (n == 0)
				res = 0;
			else
				res = fibonacci_start_1_2(n - 1) + fibonacci_start_1_2(n -2);
	}
	i = res / 10;
	while (i > 10)
		i = i / 10;
	if ((i == 1) || (i == 2))
		res = res;
	else
		res = 0;
	return (res);
}
int main(void)
{
	int i = 1;

	while (i <= 50)
	{
		if (fibonacci_start_1_2(i) != 0)
		{
			printf("%d", fibonacci_start_1_2(i));
			i++;
			if (i != 50)
			{
				printf(", ");
			}
		}
		else
			i++;
	}
	return (0);
}


