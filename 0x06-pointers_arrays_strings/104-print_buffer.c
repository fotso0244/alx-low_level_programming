#include <ctype.h>
#include <stdio.h>
#include <string.h>
/**
 * print_buffer - print size bytes of buffer
 * @b: buffer
 * @size: number of bytes to print
 */
void print_buffer(char *b, int size)
{
	int i = 0, j = 0, nbspace, k;

	while (i < (size - 1))
	{
		printf("0000000%x: ", i);
		while ((j <= i + 8) && (j <= size - 2))
		{
			if (isprint(b[j]) != 0)
				printf("%x", b[j]);
			else
				printf("0%x", b[j]);
			if (isprint(b[j + 1]) != 0)
				printf("%x ", b[j + 1]);
			else
				printf("0%x ", b[j + 1]);
			j += 2;
		}
		j = i;
		while ((j <= i + 9) && (j <= size - 1))
		{
			if ((size % 10 != 0) && (i == (size / 10) * 10) && (j == (size / 10) * 10))
			{
				nbspace = ((10 - (size % 10)) * 2) + 2;
				for (k = 0; k <= nbspace - 1; k++)
					printf(" ");
			}
			if (isprint(b[j]) != 0)
				printf("%c", b[j]);
			else
				printf(".");
			j++;
		}
		printf("\n");
		i += 10;
		j = i;
	}
}
