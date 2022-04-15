#include "main.h"
/**
 * print_fizz - fizz program
*/
void print_fizz(void)
{
	_putchar('F');
	_putchar('i');
	_putchar('z');
	_putchar('z');
}
/**
 * print_buzz - buzz program
 */
void print_buzz(void)
{
	_putchar('B');
	_putchar('u');
	_putchar('z');
	_putchar('z');
}
/**
 * print_fizz_buzz - fizz buzz program
 */
void print_fizz_buzz(void)
{
	print_fizz();
	print_buzz();
}
/**
 * main - print numbers between 1 and 100
 *
 * Replace multiples of 3 by fizz
 * Replace multiples of 5 by buzz
 * Replace multiples of 3 and 5 by FizzBuzz
 * Return: Always 0
 */
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

