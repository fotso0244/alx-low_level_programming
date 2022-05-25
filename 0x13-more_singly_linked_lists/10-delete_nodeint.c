#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
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
/**
 * delete_nodeint_at_index - deletes a node
 * @head: a listint_t list
 * @index: an index
 *
 * Return: 1 if success, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c = *head, *prec;
	int i = 0;

	if (*head == NULL || index >= listint_len(*head))
		return (-1);
	if (index != 0 && index <= listint_len(*head) - 1)
	{
		while (i < (int)index)
		{
			prec = c;
			c = c->next;
			i++;
		}
		prec->next = c->next;
		free(c);
		i = 1;
	}
	else
		if (index <= listint_len(*head) - 1)
		{
			*head = (*head)->next;
			free(c);
			i = 1;
		}
	return (i);
}
