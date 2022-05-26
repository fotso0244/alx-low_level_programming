#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_end - adds a new node at end of a list_t list
 * @head: a list_t node
 * @n: an integer
 */
void add_nodeint_at_end(listint_t **head, const int n)
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
 * find_node - finds a node in a listint_t list
 * @node: a listint_t node
 * @list: a listint_t list
 *
 * Return: 1 if true, otherwise 0
 */
int find_node(const listint_t *node, listint_t *list)
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
 * print_listint_safe - prints all elements of a listint_t list
 * @h: a listint_t list
 *
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *h)
{
	const listint_t *cur;
	listint_t *newL;
	size_t c = 0;

	if (h == NULL)
		return (0);
	cur = h;
	newL = NULL;
	while (!find_node(cur, newL))
	{
		printf("[%p] %d\n", (void *)cur, cur->n);
		add_nodeint_at_end(&newL, cur->n);
		c++;
		cur = cur->next;
		if (cur == NULL)
			break;
	}
	if (cur != NULL)
		printf("-> [%p] %d\n",(void *)cur, cur->n);
	c++;
	return (c);
}
