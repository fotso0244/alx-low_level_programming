#include <stdio.h>
/**
 * print_diagsums - prints sums of 2 diagonals of a matrix
 * @a: matrix
 * @n: size of matrix
 */
void print_diagsums(int *a, int n)
{
	int i = 0, sum = 0;

	while (i <= (n * n) - 1)
	{
		sum += a[i];
		i += (n + 1);
	}
	printf("%d, ", sum);
	sum = 0;
	i = n - 1;
	while (i < (n * n) - 1)
	{
		sum += a[i];
		i += (n - 1);
	}
	printf("%d\n", sum);
}

