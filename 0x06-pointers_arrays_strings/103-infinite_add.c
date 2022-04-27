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
	int i, j = 0, diff = (int)strlen(n1) -(int)strlen(n2);
	char n4[200];

	for (i = 0; i <= diff - 1; i++)
		*(n4 + i) = 48;
	*(n4 + i) = '\0';
	printf("%s\n", n4);
	for (i = diff; i <= (int)strlen(n1) - 1; i++)
	{
		n4[i] = (int) n2[j];
		j++;
	}
	*(n4 + i) = '\0';
	n2 = n4;
	return (n2);
}

/**
 * remov0 - removes unsigificatives 0
 * @s: number
 * @k: number of 0
 *
 * Return: pointer to char
 */
char *remov0(char *s, int k)
{
	int i, j = 0;
	char res[100];

	for (i = k; i <= (int)strlen(s) - 1; i++)
	{
		res[j] = s[i];
		j++;
	}
	res[j] = '\0';
	s = res;
	printf("%s\n", s);
	return (s);
}
/**
 * shift - shift string
 * @s: string
 *
 * Return: pointer to char
 */
char *shift(char *s)
{
	int i, k = 0;
	char res[100], *r;

	for (i = 0; i <= (int)strlen(s) - 2; i++)
		res[i] = s[i + 1];
	res[i] = '\0';
	s = res;
	if (s != 0)
	{
		k = 0;
		for (i = 0; i <= (int)strlen(s) - 1; i++)
			if (s[i] == 48)
				k++;
			else
				break;
		if (k != 0)
		{
			r = remov0(s, k);
			s = r;
		}
	}
	return (s);
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
		if (ret != 0 && i == 0 && k != size_r - 1)
		{
			res[0] = ret + 48;
			res[(int)strlen(n1) + 1] = '\0';
			r = res;
		}
		if (ret == 0 && i == 0 && k != size_r - 1)
		{
			res[(int)strlen(n1) + 1] = '\0';
			r = shift(res);
		}
	}
	return (r);
}
