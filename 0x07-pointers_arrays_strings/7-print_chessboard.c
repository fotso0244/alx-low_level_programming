#include <string.h>
#include <stdio.h>
/**
 * print_chessboard - prints chessboard
 * @a: a board to print
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			printf("%c", a[i][j]);
			if (j == 7)
				printf("\n");
		}
	}
}
