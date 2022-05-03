/**
 * _memset - fill n bytes
 * @s: memory area
 * @b: constant for use
 * @n: number of bytes to fill
 *
 * Return: pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *res;

	for (i = 0; i <= n - 1; i++)
	{
		*(s + i) = b;
	}
	res = s;
	return (res);
}
