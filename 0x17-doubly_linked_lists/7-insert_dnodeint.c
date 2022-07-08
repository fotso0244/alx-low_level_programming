#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - adds a new element at index
 * @head: a doubly linked list
 * @idx: an index
 * @n: a data
 *
 * Return: address to new element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new, *curr = *head;
	unsigned int i = 0;

	new = malloc(sizeof(*new));
	if (new != NULL)
	{
		new->n = n;
		new->prev = NULL;
	}
	else
	{
		return (0);
	}
	if (*head == NULL || head == NULL)
	{
		new->next = NULL;
		*head = new;
		curr = *head;
		return (curr);
	}
	else
	{
		while (curr->next != NULL)
			if (i != idx - 1)
			{
				curr = curr->next;
				i++;
			}
			else
			{
				new->next = curr->next;
				curr->next = new;
				new->prev = curr;
				curr = new;
				return (curr);
			}
	}
	if (curr->next == NULL)
		curr = NULL;
	return (curr);
}
