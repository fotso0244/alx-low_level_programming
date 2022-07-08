#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_dlistint - computes sum of all elements from a doubly list
 * @head: a doubly linked list
 *
 * Return: sum of all elements
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	int i = 0;

	if (head != NULL)
	{
		while (curr != NULL)
		{
			i += curr->n;
			curr = curr->next;
		}
	}
	return (i);
}
