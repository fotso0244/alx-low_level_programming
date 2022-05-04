#include <string.h>
#include <stddef.h>
/**
 * set_string - sets value of a pointer to char
 * @s: point to point
 * @to: pointer to char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
