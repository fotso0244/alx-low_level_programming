#include <stddef.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at end of a list_t list
 * @head: a list_t node
 * @n: an integer
 *
 * Return: address of new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *p;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
		if (*head != NULL)
		{
			p = *head;
			while (p->next != NULL)
				p = p->next;
			p->next = new;
		}
		else
			*head = new;
	}
	return (*head);
}
