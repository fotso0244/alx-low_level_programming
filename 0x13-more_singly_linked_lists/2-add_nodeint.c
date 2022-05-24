#include <stddef.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * add_nodeint - adds a new node
 * @head: a listint_t node
 * @n: an integer
 *
 * Return: address of new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = *head;
		*head = new;
	}
	return (new);
}
