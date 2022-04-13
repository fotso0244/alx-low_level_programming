#include "main.h"
#include <stdio.h>
/**
 * print_sum_multiples - prints sum of multiples of 3 and 5
 * @n: integer to find multiples below
 *
 * Return: sum of multiples of 3 and 5
 */
void _start(void)
{
	int sum = 0, i;

	for (i = 1; i < 1024; i++)
		{
			if (((i % 3) == 0) || ((i % 5) == 0))
				sum = sum + i;
		}
		printf("%d", sum);
}
