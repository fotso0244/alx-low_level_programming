#include <ctype.h>
#include <stdio.h>
#include <string.h>
/**
 * printspace - prints spaces
 * @size: int
 * @i: int
 * @j: int
 */
void printspace(int size, int i, int j)
{
	int nbspace, k;

	if ((size % 10) % 2 == 0 && size > 10)
		if ((size % 10 != 0) && (i == (size / 10) * 10) && j == i)
		{
			nbspace = ((10 - (size % 10)) * 2) + ((10 - (size % 10)) / 2);
				for (k = 0; k <= nbspace - 1; k++)
					printf(" ");
		}

	if ((size % 10) % 2 != 0 && size > 10)
		if ((size % 10 != 0) && (i == (size / 10) * 10) && j == i)
		{
			nbspace = ((10 - (size % 10)) * 2) + ((10 - (size % 10)) / 2) + 1;
				for (k = 0; k <= nbspace - 1; k++)
					printf(" ");
		}
}
/**
 * print - print character
 * @c: character
 * @sta: int
 */
void print(char c, int sta)
{

	if (sta == 0)
	{
		if (isprint(c) != 0)
			printf("%x ", c);
		else
			printf("0%x ", c);
	}
	else
		if (isprint(c) != 0)
			printf("%x", c);
		else
			printf("0%x", c);
}
/**
 * print_buffer - print size bytes of buffer
 * @b: buffer
 * @size: number of bytes to print
 */
void print_buffer(char *b, int size)
{
	int i = 0, j = 0;

	if (size > 0)
		while (i <= (size - 1))
		{
			j = i;
			if (i <= 10)
				printf("0000000%x: ", i);
			else
			{
				printf("000000%x: ", i);
			}
			while ((j <= i + 8) && (j <= size - 2))
			{
				print(b[j], 1);
				print(b[j + 1], 0);
				j += 2;
			}
			if (size % 2 != 0 && j == size - 1 && (j - i) < 10 && size > 10)
				print(b[j], 1);
			j = i;
			while ((j <= i + 9) && (j <= size - 1))
			{
				printspace(size, i, j);
				if (isprint(b[j]) != 0)
					printf("%c", b[j]);
				else
					printf(".");
				j++;
			}
			printf("\n");
			i += 10;
		}
	else
		printf("\n");
}
