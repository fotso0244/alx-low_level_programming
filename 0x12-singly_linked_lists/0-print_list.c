#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints all elements of a list_t list
 * @h: a list_t list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *p;
	size_t c = 0;

	p = h;
	while (p->next != NULL)
	{
		if (p->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", p->len, p->str);
		c++;
		p = p->next;
	}
	printf("[%u] %s\n", p->len, p->str);
	c++;
	return (c);
}
