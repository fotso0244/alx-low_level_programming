#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list
 * @head: a listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *c, *nex;

	if (head != NULL)
	{
		c = *head;
		nex = *head;
		*head = NULL;
		while (c != NULL)
		{
			nex = nex->next;
			free(c);
			c = nex;
		}
	}
}
