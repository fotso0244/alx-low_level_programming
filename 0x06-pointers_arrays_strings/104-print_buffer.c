#include <ctype.h>
#include <stdio.h>
/**
 * print_buffer - print size bytes of buffer
 * @b: buffer
 * @size: number of bytes to print
 */
void print_buffer(char *b, int size)
{
	int i = 0, j = 0;

	while (i <= size - 1)
	{
		printf("0000000%x: ", i);
		while (j <= 8)
		{
			printf("%x%x ", b[j], b[j + 1]);
			j += 2;
		}
		j = 0;
		while (j <= 9)
		{
			if (isprint(b[j]) != 0)
				printf("%c", b[j]);
			else
				printf(".");
			j++;
		}
		printf("\n");
		i += 10;
		j = 0;
	}
}
