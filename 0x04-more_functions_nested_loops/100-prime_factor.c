#include <stdio.h>
/**
 * main - prints largest factor
 *
 * Return: 0
 */
int main(void)
{
	const long int i = 612852475143;
	long int a = i, c = 2;

	while ((a % c != 0) && (a != 1))
		c++;
	while ((a % c == 0) && (a != 1))
	{
		a /= c;
		while ((a % c != 0) && (a != 1))
			c++;
	}
	printf("%ld\n", c);
	return (0);
}
