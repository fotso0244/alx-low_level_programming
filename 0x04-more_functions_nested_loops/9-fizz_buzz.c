#include <stdio.h>
/**
 * main - print numbers between 1 and 100
 *
 * Replace multiples of 3 by fizz
 * Replace multiples of 5 by buzz
 * Replace multiples of 3 and 5 by FizzBuzz
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else
			if (i % 3 == 0)
			{
				printf("Fizz");
			}
			else
				if (i % 5 == 0)
				{

					printf("Buzz");
				}
				else
				{
					printf("%d", i);
				}
		if (i != 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}

