#include <stddef.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node
 * @head: a listint_t list
 * @index: index of the node
 *
 * Return: the nth node , otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *c;
	unsigned int i = 0;

	if (head != NULL)
	{
		c = head;
		while (i < index && c != NULL)
		{
			c = c->next;
			i++;
		}
	}
	else
		return (NULL);
	return (c);
}
