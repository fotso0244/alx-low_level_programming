#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - returns number of elements of a doubly linked list
 * @h: a doubly linked list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t nb = 0;

	if (h == NULL)
		return (nb);
	while (curr != NULL)
	{
		nb++;
		curr = curr->next;
	}
	return (nb);
}
