#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * delete_at_0- delete node at index 0
 * @head: a doubly list
 *
 * Return: 1 or -1
 */
int delete_at_0(dlistint_t **head)
{
	dlistint_t *curr = *head;

	if (curr->next != NULL)
	{
		*head = curr->next;
		free(curr);
		curr->prev = NULL;
		return (1);
	}
	if (curr->next == NULL && curr != NULL)
	{
		free(curr);
		*head = NULL;
	}
	return (1);
}
/**
 * delete_dnodeint_at_index - deletes an element at index
 * @head: a doubly linked list
 * @index: an index
 *
 * Return: 1 if success, otherwise -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head, *upcurr;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
		return (delete_at_0(head));
	while (curr->next != NULL)
		if (i != index - 1)
		{
			curr = curr->next;
			i++;
		}
		else
		{
			upcurr = curr->next;
			curr->next = upcurr->next;
			free(upcurr);
			return (1);
		}
	return (-1);
}
