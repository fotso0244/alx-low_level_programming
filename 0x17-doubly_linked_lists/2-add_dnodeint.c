#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint - adds a new element at the beginning
 * @head: a doubly linked list
 * @n: value
 *
 * Return: address to new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr = *head;

	new = malloc(sizeof(*new));
	if (new != NULL)
	{
		new->n = n;
		new->prev = NULL;
	}
	else
	{
		while (curr != NULL)
		{
			curr = curr->next;
			free(*head);
			(*head) = curr;
		}
		return (NULL);
	}
	if (*head == NULL || head == NULL)
	{
		new->next = NULL;
		*head = new;
		curr = (*head);
		return (curr);
	}
	else
	{
		(*head) = new;
		new->next = curr;
		curr->prev = new;
		curr = (*head);
	}
	return (curr);
}
