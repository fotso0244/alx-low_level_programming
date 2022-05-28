#include "main.h"
/**
 * flip_bits - returns number of bits to flip by converting n to m
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nb = 0;
	unsigned long int n_xor_m;

	n_xor_m = n ^ m;
	while (n_xor_m)
	{
		nb += n_xor_m & 1;
		n_xor_m >>= 1;
	}
	return (nb);
}
