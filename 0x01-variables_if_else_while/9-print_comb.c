#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabet in lowercase
 *
 * Return: 0
 */
int main(void)
{
	int car;

	for (car = 48; car <= 57; car++)
	{
		putchar(car);
		if (car != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
