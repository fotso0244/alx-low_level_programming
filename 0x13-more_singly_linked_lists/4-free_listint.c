#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_listint - frees a listint_t list
 * @head: a listint_t list
 */
void free_listint(listint_t *head)
{
	listint_t *c;

	if (head != NULL)
	{
		while (head != NULL)
		{
			c = head;
			head = head->next;
			free(c);
		}
	}
}
