#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints combinations of two two-digit numbers
 *
 * Return: 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 48; i <= 57; i++)
	{

		for (j = 48; j <= 57; j++)
		{

			for (k = 48; k <= 57; k++)
			{

				for (l = 48; l <= 57; l++)
				{
					if ((i <= k) && (j < l))
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						if ((i != 57) || (j != 56) || (k != 57) || (l != 57))
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
