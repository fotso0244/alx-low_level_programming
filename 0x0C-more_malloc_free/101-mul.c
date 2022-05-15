#include <stdlib.h>
#include "main.h"
#include <stdio.h>
#include <limits.h>
#include <string.h>
/**
 * printstr - prints a string using _putchar
 * @s: a string
 */
void printstr(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	printstr(s + 1);
}
/**
 * puiss10 - computes 10 power x
 * @power: power
 *
 * Return: an unsigned int
 */
unsigned int puiss10(unsigned int power)
{
	unsigned int i = 1, res = 1;

	while (i <= power)
	{
		res *= 10;
		i++;
	}
	return (res);
}
/**
 * tostring - converts positive number to string
 * @mul: positive number
 *
 * Return: a pointer to string
 */
char *tostring(unsigned int mul)
{
	unsigned int i = 1, div = mul, j, mod;
	char *s;

	while (mul / puiss10(i) != 0)
	{
		i++;
	}
	s = malloc(sizeof(*s) * (i + 1));
	if (s != NULL)
	{
		for (j = 0; j <= i - 1; j++)
		{
			mod = div % 10;
			s[j] = mod + 48;
			div /= 10;

		}
		s[j] = '\0';
	}
	return (s);
}
/**
 * revstr - reverses a string
 * @s: a string
 */
void revstr(char *s)
{
	int i, length, temp;

	length = strlen(s);
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
/**
 * chkzerostr - checks zero string
 * @str: string
 *
 * Return: 1 if true, otherwise 0
 */
unsigned int chkzerostr(char *s)
{
	unsigned int i = 0, res;

	while (s[i] != '\0')
	{
		if (s[i] == '0')
		{
			res = 1;
			i++;
		}
		else
			return (0);
	}
	return (res);
}
/**
 * main - multiplies 2 positive numbers
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	unsigned int mul;
	char *res;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		exit(98);
	}
	if (chkzerostr(argv[1]) == 0 && atoi(argv[1]) == 0)
	{
		printf("Error\n");
		exit(98);
	}
	if (chkzerostr(argv[2]) == 0 && atoi(argv[2]) == 0)
	{
		printf("Error\n");
		exit(98);
	}
	mul = (unsigned int)atoi(argv[1]) * (unsigned int)atoi(argv[2]);
	res = tostring(mul);
	revstr(res);
	printstr(res);
	free(res);/*
	free(argv[0]);
	free(argv[1]);
	free(argv[2]);*/
	free(argv);
	return (0);
}
