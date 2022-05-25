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
	listint_t *c = NULL, *new, *prec;
	unsigned int i = 0;

	if (*head != NULL)
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
			prec->next = new;
			if (index != 0 && prec->next != NULL)
			{
				prec->next = new;
				new->next = c;
			}
			if (index == 0 && prec->next == NULL)
			{
				prec->next = new;
				new->next = NULL;
			}
			if (index == 0 && prec->next != NULL)
			{
				c = c->next;
				prec->next = new;
				new->next = c;
			}
		}
		else
			if (c == NULL)
				return (NULL);
	}
	return (c);
}
