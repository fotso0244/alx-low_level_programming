#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all elements of a double linked list
 * @dlistint_t: a double linked list
 *
 * Return: number of elements
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	size_t nb = 0;

	if (h == NULL)
		return (nb);
	while (curr != NULL)
	{
		printf("%d\n", curr->n);
		nb++;
		curr = curr->next;
	}
	return (nb);
}
