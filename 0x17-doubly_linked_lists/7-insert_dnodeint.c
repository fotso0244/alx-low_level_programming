#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_in_empty - insert a new node in an empty doubly list
 * @head: an empty doubly list
 * @n: a data
 *
 * Return: address of new node
 */
dlistint_t *insert_in_empty(dlistint_t **head, int n)
{
	dlistint_t *new, *curr = *head;

	new = malloc(sizeof(*new));
	if (new != NULL)
	{
		new->n = n;
		new->prev = NULL;
	}
	else
		return (0);
	new->next = NULL;
	*head = new;
	curr = *head;
	return (curr);
}
/**
 * insert_dnodeint_at_index - adds a new element at index
 * @head: a doubly linked list
 * @idx: an index
 * @n: a data
 *
 * Return: address to new element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx,
int n)
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
		return (0);
	if (*head == NULL || head == NULL)
		return (insert_in_empty(head, n));
	if (idx == 0)
	{
		curr = add_dnodeint(head, (const int)n);
		return (curr);
	}
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
			new->next->prev = new;
			curr = new;
			return (curr);
		}
	return (NULL);
}
