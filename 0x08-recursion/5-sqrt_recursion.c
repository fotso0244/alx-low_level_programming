/**
 * sqrt_rec - computes sqrt of a number
 * @n: number
 * @k: int
 *
 * Return: sqrt of number
 */
int sqrt_rec(int k, int n)
{
	int next_k;

	if (n > 0)
	{
		next_k = (k + n / k) / 2;
		if (k * k <= n && (k + 1) * (k + 1) > n)
		{
			if (k * k == n)
				return (k);
			else
				return (-1);
		}
	}
	else
		return (-1);
	return (sqrt_rec(next_k, n));
}
/**
 * _sqrt_recursion - computes sqrt of number
 * @n: number
 *
 * Return: sqrt of number
 */
int _sqrt_recursion(int n)
{
	return (sqrt_rec(1, n));
}
