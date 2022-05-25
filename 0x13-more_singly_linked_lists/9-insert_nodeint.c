#include <stddef.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
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
 * insert_nodeint_at_index - inserts a new node
 * @head: a listint_t list
 * @index: index of the new node
 * @n: data n of new node
 *
 * Return: the new listint_t list, otherwise NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *c, *new, *prec = NULL;
	unsigned int i = 0, length = listint_len(*head);

	if (head != NULL)
	{
		c = *head;
		while (i < index && c != NULL)
		{
			prec = c;
			c = c->next;
			i++;
		}
		new = malloc(sizeof(listint_t));
		if (new != NULL && c != NULL)
		{
			new->n = n;
			if (index != 0)
			{
				prec->next = new;
				new->next = c;
				prec = prec->next;
			}
			if (index == 0 && c->next == NULL)
			{
				c->next = new;
				new->next = NULL;
				prec = c->next;
			}
			if (index == 0 && c->next != NULL)
			{
				*head = new;
				new->next = c;
				prec = *head;
			}
		}
		else

			if (c == NULL && index == length)
				prec = add_nodeint_end(head, n);
			else
				return (NULL);
	}
	return (prec);
}
