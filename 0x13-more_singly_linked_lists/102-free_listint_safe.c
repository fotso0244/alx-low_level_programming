#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_at_end_102 - adds a new node at end of a list_t list
 * @head: a list_t node
 * @n: an integer
 */
void add_nodeint_at_end_102(listint_t **head, const int n)
{
	listint_t *new, *p;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
		if (head != NULL && *head != NULL)
		{
			p = *head;
			while (p->next != NULL)
				p = p->next;
			p->next = new;
		}
		else
		{
			*head = new;
		}
	}
}
/**
 * find_node_102 - finds a node in a listint_t list
 * @node: a listint_t node
 * @list: a listint_t list
 *
 * Return: 1 if true, otherwise 0
 */
int find_node_102(const listint_t *node, listint_t *list)
{
	listint_t *c = list;
	int i = 0;

	while (c != NULL)
	{
		if (c->n != node->n)
			c = c->next;
		else
		{
			i = 1;
			break;
		}
	}
	return (i);
}
/**
 * free_listint_102 - frees a listint_t list
 * @head: a listint_t list
 */
void free_listint_102(listint_t *head)
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
/**
 * free_listint_safe - prints all elements of a listint_t list
 * @h: a listint_t list
 *
 * Return: number of nodes
 */
size_t free_listint_safe(listint_t **h)
{
	const listint_t *cur;
	listint_t *newL;
	size_t c = 0;

	if (h == NULL)
		return (0);
	cur = *h;
	newL = NULL;
	if (*h == NULL)
		return (0);
	if (*h == (*h)->next)
	{
		*h = NULL;
		free((void *)cur);
		return (c + 1);
	}
	while (!find_node_102(cur, newL))
	{
		*h = (*h)->next;
		add_nodeint_at_end_102(&newL, cur->n);
		free((void *)cur);
		cur = *h;
		c++;
		if (cur == NULL)
			break;
	}
	if (cur != NULL && find_node_102(cur, newL))
		*h = NULL;
	free_listint_102(newL);
	return (c);
}
