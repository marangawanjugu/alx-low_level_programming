#include "lists.h"
#include <stdlib.h>

/**
 *free_list - frees a list_t list
 *@head: points to the first node in a linked list
 *
 *
 */

void free_list(list_t *head)
{
	list_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head->str);
		free(head);
		head = next_node;
	}
}
