/**
 * is_prime_rec - recursive of is_prime_number
 * @k: int
 * @n: number
 *
 * Return: 1 is true, otherwise 0
 */
int is_prime_rec(int k, int n)
{
	if (n > 0)
	{
		if ((k == n) && (n > 1))
			return(1);
		if (n == 1)
			return (0);
		if (k + 1 < n)
		{
			if (n % (k + 1) == 0)
		       		return (0);
		}
	}
	else
		return (0);
	return (is_prime_rec(k + 1, n));
}
/**
 * is_prime_number - check prime number
 * @n: number
 *
 * Return: 1 is true, 0 otherwise
 */
int is_prime_number(int n)
{
	return (is_prime_rec(1, n));
}
