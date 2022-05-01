#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_recursion - revers a string
 * @s: string
 * @cpy: another string to store reverse
 * @k: index
 */
void rev_recursion(char *s, char cpy[1000], int k)
{
	if (*s)
	{
		rev_recursion(s + 1, cpy, k - 1);
		*(cpy + k) = *s;
	}
}
/**
 * is_palindrome - checks palindrome string
 * @s: string
 *
 * Return: 1 if yes, otherwise 0
 */
int is_palindrome(char *s)
{
	char cpy[1000];

	rev_recursion(s, cpy, strlen(s) - 1);
	cpy[strlen(s)] = '\0';
	if (strcmp(s, cpy) == 0)
		return (1);
	else
		return (0);
}
