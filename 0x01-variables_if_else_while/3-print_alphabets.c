#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints alphabet in lowercase and uppercase
 *
 * Return: 0
 */
int main(void)
{
	char car;

	for (car = 'a'; car <= 'z'; car++)
	{
		putchar(car);
	}

	for (car = 'A'; car <= 'Z'; car++)
	{
		putchar(car);
	}
	putchar('\n');
	return (0);
}
