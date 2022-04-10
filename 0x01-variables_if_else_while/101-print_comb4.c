#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints combinations of tree digits
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 57; i++)
	{

		for (j = 48; j <= 57; j++)
		{

			for (k = 48; k <= 57; k++)
			{
				if ((i < j) && (j < k))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if ((i != 55) || (j != 56) || (k != 57))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
