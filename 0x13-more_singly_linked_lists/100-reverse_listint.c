#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * reverse_listint - reverses a listint_t list
 * @head: a listint_t list
 *
 * Return: a pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur = *head, *prev = NULL;

	if (head == NULL)
		return (NULL);
	while (cur->next != NULL)
	{
		*head = cur->next;
		cur->next = prev;
		prev = cur;
		cur = *head;
	}
	cur->next = prev;
	prev = cur;
	return (*head);
}
