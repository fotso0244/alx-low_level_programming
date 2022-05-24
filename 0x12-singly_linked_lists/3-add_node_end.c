#include <stddef.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node_end - adds a new node at end of a list_t list
 * @head: a list_t node
 * @str: a string
 *
 * Return: address of new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *p;

	new = malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = (unsigned int)strlen(str);
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
