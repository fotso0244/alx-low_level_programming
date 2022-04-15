#include "main.h"
/**
 * main - fizz buzz program
 *
 * Return: Always 0
 */
void print_fizz(void)
{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
}
void print_buzz(void)
{
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
}
void print_fizz_buzz(void)
{
	print_fizz();
	print_buzz();
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			print_fizz_buzz();
		}
		else
			if (i % 3 == 0)
			{
				print_fizz();
			}
			else
				if (i % 5 == 0)
				{

					print_buzz();
				}
				else
				{
					if (i / 10 != 0)
						_putchar((i / 10) + '0');
					_putchar((i % 10) + '0');
				}
		if (i != 100)
			_putchar(' ');
	}
	_putchar('\n');
	return (0);
}

