#include "lists.h"
#include <stdlib.h>

/**
 *delete_nodeint_at_index - deletes the node at index of a linked list
 *@head: a double pointer to the first node in a linked list
 *@index:
 *
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *previous_node, *current_node;
	unsigned int counter;

	if (head == NULL)
		return (-1);
	current_node = *head;
	previous_node = NULL;
	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}
	counter = 0;
	while (current_node != NULL && counter < index)
	{
		previous_node = current_node;
		current_node = current_node->next;
		counter++;
	}
	if (current_node == NULL)
		return (-1);
	previous_node->next = current_node->next;
	free(current_node);
	return (1);
}
