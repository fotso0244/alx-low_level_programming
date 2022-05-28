/**
 * get_endianness - checks endian machine
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *d = (char *)&i;
	int res;

	if (*d)
		res = 1;
	else
		res = 0;
	return (res);
}
