#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
 *  * free_list - frees a list_t list
 *   * @head: a list_t list
 *    */
void free_list(list_t *head)
{
	list_t *c;
	
	if (head != NULL)
	{
		while (head != NULL)
		{
			c = head;
			head = head->next;
			free(c->str);
			free(c);
		}
	}
}
