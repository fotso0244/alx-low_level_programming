#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_dnodeint_at_index - gets a node from a doubly list
 * @head: a doubly linked list
 * @index: an index
 *
 * Return: address of a node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *curr = head;
	unsigned int i = 0;

	if (head != NULL)
	{
		while (curr != NULL)
		{
			if (i != index)
			{
				curr = curr->next;
				i++;
			}
			else
				return (curr);
		}
	}
	return (curr);
}
