#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
/**
 * initstr - initializes a string
 * @s: a string
 * @size: size of string
 */
void initstr(char *s, unsigned int size)
{
	unsigned int i;
	
	if (s != NULL)
		for (i = 0; i <= size - 1; i++)
			s[i] = '0';
}
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
 * emptystr - creates empty string
 *
 * Return: pointer to empty string
 */
char *emptystr()
{
	char *res;

	res = malloc(2);
	if (res != NULL)
	{
		strcpy(res, "");
		res[1] = '\0';
	}
	return (res);
}
/**
 * multiply - multiplies 2 string numbers
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to string
 */
char *multiply(char *s1, char *s2)
{
	int i_n1 = 0, i_n2 = 0, i, j, carry, n1, n2, sum;
	char *res, *str;

	res = malloc(strlen(s1) + strlen(s2));
	if (res != NULL)
	{
		initstr(res, (unsigned int)strlen(s1) + (unsigned int)strlen(s2));
		for (j = (int)strlen(s2) - 1; j >= 0; j--)
		{
			carry = 0;
			n1 = s2[j] - '0';
			i_n2 = 0;
			for (i = (int)strlen(s1) - 1; i >= 0; i--)
			{
				n2 = s1[i] - '0';
				sum = n1 * n2 + res[i_n1 + i_n2] - 48 + carry;
				carry = sum / 10;
				res[i_n1 + i_n2] = (sum % 10) + 48;
				i_n2++;
			}
			if (carry > 0)
				res[i_n1 + i_n2] = carry + '0';
			i_n1++;
		}
		i = (int)strlen(res) - 1;
		while (i >= 0 && res[i] == '0')
			i--;
		if (i == -1)
			return ("0");
		str = malloc(i + 2);
		if (str != NULL)
		{
			carry = i;
			for (j = 0; j <= i; j++)
				str[j] = res[carry--];
			str[j] = '\0';
			free(res);
		}
		else
			str = emptystr();
	}
	else
		str = emptystr();
	return (str);
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
		if (s[i] >= '0' && s[i] <= '9')
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
	char *res;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		exit(98);
	}
	if (chkzerostr(argv[1]) == 0 || chkzerostr(argv[2]) == 0)
	{
		printf("Error\n");
		exit(98);
	}
	res = multiply(argv[1], argv[2]);
	printstr(res);
	if (strcmp(res, "0") != 0)
		free(res);
	return (0);
}
