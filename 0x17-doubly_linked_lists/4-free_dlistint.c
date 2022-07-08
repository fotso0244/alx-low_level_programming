#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dlistint - frees a doubly list
 * @head: a doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head, *prev = head;

	if (head != NULL)
	{
		while (curr->next != NULL)
		{
			curr = curr->next;
			free(prev);
			prev = curr;
		}
		head = NULL;
	}
}
