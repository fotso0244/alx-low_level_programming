#include <stddef.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_node - adds a new node
 * @head: a list_t node
 * @str: a string
 *
 * Return: address of new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new != NULL)
	{
		new->str = strdup(str);
		new->len = (unsigned int)strlen(str);
		new->next = *head;
		*head = new;
	}
	return (new);
}
