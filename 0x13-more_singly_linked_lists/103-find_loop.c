#include <stdio.h>
#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint_at_end_103 - adds a new node at end of a list_t list
 * @head: a list_t node
 * @n: an integer
 */
void add_nodeint_at_end_103(listint_t **head, const int n)
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
 * find_node_103 - finds a node in a listint_t list
 * @node: a listint_t node
 * @list: a listint_t list
 *
 * Return: 1 if true, otherwise 0
 */
int find_node_103(const listint_t *node, listint_t *list)
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
 * free_listint_103 - frees a listint_t list
 * @head: a listint_t list
 */
void free_listint_103(listint_t *head)
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
 * listint_len_with_loop - returns len of a listint_t list
 * @h: a listint_t list
 *
 * Return: number of nodes
 */
size_t listint_len_with_loop(const listint_t *h)
{
	const listint_t *cur;
	listint_t *newL;
	size_t c = 0;

	if (h == NULL)
		return (0);
	cur = h;
	newL = NULL;
	while (!find_node_103(cur, newL))
	{
		c++;
		add_nodeint_at_end_103(&newL, cur->n);
		cur = cur->next;
		if (cur == NULL)
			break;
	}
	free_listint_103(newL);
	return (c);
}
/**
 * find_listint_loop - finds a loop in a listint_t list
 * @head: a listint_t list
 *
 * Return: address to the node start of loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	int i = 0;
	listint_t *cur;

	cur = head;
	while (i < (int)listint_len_with_loop(head))
	{
		cur = cur->next;
		i++;
	}
	return (cur);
}
