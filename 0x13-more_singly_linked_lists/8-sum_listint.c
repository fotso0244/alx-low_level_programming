#include <stddef.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * sum_listint - sums all the data (n) of a listint_t
 * @head: a listint_t list
 *
 * Return: sum of all the data (n) , otherwise 0
 */
int sum_listint(listint_t *head)
{
	listint_t *c;
	int i = 0;

	if (head != NULL)
	{
		c = head;
		while (c != NULL)
		{
			i += c->n;
			c = c->next;
		}
	}
	else
		return (0);
	return (i);
}
