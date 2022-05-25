#include <stddef.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
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
	unsigned int i = 0;

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
			if (c == NULL)
				return (NULL);
	}
	return (prec);
}
