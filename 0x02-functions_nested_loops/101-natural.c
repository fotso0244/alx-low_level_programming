#include <stdio.h>
/**
 * main - prints sum of multiples of 3 and 5
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0, i;

	for (i = 1; i < 1024; i++)
	{
		if (((i % 3) == 0) || ((i % 5) == 0))
			sum = sum + i;
	}
	printf("%d", sum);
	return (0);
}
