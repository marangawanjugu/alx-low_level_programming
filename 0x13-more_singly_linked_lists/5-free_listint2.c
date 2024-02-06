#include "lists.h"
#include <stdlib.h>

/**
 *free_listint2 - frees a listint_t list
 *@head: points to the first node in a linked list
 *
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *current_node, *next_node;

	if (head == NULL || *head == NULL)
		return;
	current_node = *head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
	*head = NULL;
}
