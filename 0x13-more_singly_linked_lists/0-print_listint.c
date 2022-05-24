#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_listint - prints all elements of a listint_t list
 * @h: a listint_t list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *p;
	size_t c = 0;

	if (h == NULL)
		return (0);
	p = h;
	while (p->next != NULL)
	{
		printf("%d\n", p->n);
		c++;
		p = p->next;
	}
	printf("%d\n", p->n);
	c++;
	return (c);
}
