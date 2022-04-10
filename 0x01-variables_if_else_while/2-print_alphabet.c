#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabet in lowercase
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
	putchar('\n');
	return (0);
}
