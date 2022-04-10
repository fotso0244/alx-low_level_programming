#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabet in lowercase in reverse
 *
 * Return: 0
 */
int main(void)
{
	char car;

	for (car = 'z'; car >= 'a'; car--)
	{
		putchar(car);
	}
	putchar('\n');
	return (0);
}
