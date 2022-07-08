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
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	else
	{
		*head = new;
		new->next = curr;
	}
	return (*head);
}
