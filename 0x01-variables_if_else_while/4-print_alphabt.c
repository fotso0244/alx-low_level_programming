#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints alphabet in lowercase except q and e
 *
 * Return: 0
 */
int main(void)
{
	char car;

	for (car = 'a'; car <= 'z'; car++)
	{
		if ((car != 'q') && (car != 'e'))
			putchar(car);
	}
	putchar('\n');
	return (0);
}
