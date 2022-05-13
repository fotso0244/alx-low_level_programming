#include "3-calc.h"
#include <string.h>
#include <stddef.h>
/**
 * get_op_func - returns appropriate function
 * @s: operator
 *
 * Return: pointer to operator function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) != 0)
			i++;
		else
			return (ops[i].f);
	}
	return (ops[i].f);
}
