#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - returns number of  elements of a list_t list
 * @h: a list_t list
 *
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	const list_t *p;
	size_t c = 0;

	if (h == NULL)
		return (0);
	p = h;
	while (p->next != NULL)
	{
		c++;
		p = p->next;
	}
	c++;
	return (c);
}
