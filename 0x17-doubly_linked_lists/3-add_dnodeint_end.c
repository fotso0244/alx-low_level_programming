#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * add_dnodeint_end - adds a new element at the end
 * @head: a doubly linked list
 * @n: value
 *
 * Return: address to new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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
		free(*head);
		return (0);
	}
	if (*head == NULL || head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	else
	{
		while (curr->next != NULL)
			curr = curr->next;
	}
	new->next = NULL;
	curr->next = new;
	new->prev = curr;
	curr = curr->next;
	return (curr);
}
