/**
 * swap_int - swaps values of two int pointers
 * @a: first pointer parameter
 * @b: second pointer parameter
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
