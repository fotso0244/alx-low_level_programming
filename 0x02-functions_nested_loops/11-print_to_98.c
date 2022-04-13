#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers between n and 98
 * @n: first number
 */
void print_to_98(int n)
{
	int i;
	for (i = n; i <=98; i++)
	{
		printf("%d, ", i);
	}
	printf("\n");
}
