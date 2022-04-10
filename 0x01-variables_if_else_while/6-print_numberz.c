#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints digits of base 10 using putchar
 *
 * Return: 0
 */
int main(void)
{
	int car;

	for (car = 48; car <= 57; car++)
	{
		putchar(car);
	}
	putchar('\n');
	return (0);
}
