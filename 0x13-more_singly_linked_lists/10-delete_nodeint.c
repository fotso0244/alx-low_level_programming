#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes a node
 * @head: a listint_t list
 * @index: an index
 *
 * Return: 1 if success, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *c = *head, *prec;
	int i = 0;

	if (*head == NULL)
		return (-1);
	if (index != 0)
	{
		while (i < (int)index)
		{
			prec = c;
			c = c->next;
			i++;
		}
		prec->next = c->next;
		free(c);
		i = 1;
	}
	else
		{
			*head = (*head)->next;
			free(c);
			i = 1;
		}
	return (i);
}
