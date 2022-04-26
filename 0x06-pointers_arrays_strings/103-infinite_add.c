#include <string.h>
#include <stdio.h>
/**
 * complete - complete numbers
 * @n1: first number
 * @n2: second number
 *
 * Return: pointer to string
 */
char *complete(char *n1, char *n2)
{
	int i, j = 0, diff;
	char n3[200];

	for (i = 0; i <= ((int)strlen(n1) - (int)strlen(n2)) - 1; i++)
		*(n3 + i) = 48;
	diff = (int)strlen(n1) - (int)strlen(n2);
	for (i = diff; i <= (int)strlen(n1) - 1; i++)
	{
		n3[i] = (int) n2[j];
		j++;
	}
	n2 = n3;
	return (n2);
}
/**
 * shift - shift string
 * @s: string
 *
 * Return: pointer to char
 */
char *shift(char *s)
{
	int i;
	char res[100];

	for (i = 0; i <= (int)strlen(s) - 1; i++)
		res[i] = s[i + 1];
	return (res);
}
/**
 * infinite_add - add 2 numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer
 * @size_r: size of buffer
 *
 * Return: pointer to a string
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, ret = 0, k = 0;
	char *n3, res[100];

	if (strlen(n1) > strlen(n2))
		n3 = complete(n1, n2);
	else
		if (strlen(n2) > strlen(n1))
			n3 = complete(n2, n1);
		else
			n3 = n2;
	for (i = (int)strlen(n1) - 1; i >= 0;  i--)
	{
		res[i + 1] = (((int)n1[i] + (int)n3[i] + ret - 96) % 10) + 48;
		ret = ((int)n1[i] + (int)n3[i] + ret - 96) / 10;
		k++;
		if (k == size_r - 1 && (i != 0 || ret != 0))
		{
			r = 0;
			break;
		}
		else
			if (ret != 0 && i == 0)
			{
				res[0] = ret + 48;
				r = res;
			}
			else
			{
				r = shift(res);
			}
	}
	return (r);
}
