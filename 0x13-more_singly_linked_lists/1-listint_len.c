#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * listint_len - returns number of  elements of a listint_t list
 * @h: a listint_t list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *p;
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
