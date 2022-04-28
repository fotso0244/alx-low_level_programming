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
	int i = 0, j = 0;

	while (i <= (size - 1))
	{
		printf("0000000%x: ", i);
		while (j <= i + 8)
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
		while (j <= i + 9)
		{
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
