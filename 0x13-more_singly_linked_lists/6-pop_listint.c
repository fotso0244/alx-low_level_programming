#include <stddef.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * pop_listint - deletes a head node
 * @head: a listint_t node
 *
 * Return: a head node's data , otherwise 0
 */
int pop_listint(listint_t **head)
{
	listint_t *c;
	int i;

	if (*head != NULL)
	{
		c = *head;
		*head = (*head)->next;
		i = c->n;
		free(c);
	}
	else
		return (0);
	return (i);
}
