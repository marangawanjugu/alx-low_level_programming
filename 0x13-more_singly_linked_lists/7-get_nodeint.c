#include "lists.h"
#include <stdlib.h>

/**
 *get_nodeint_at_index - gets node at index
 *@head: pointer to the first node in the linked list
 *@index: index of the node, starting at 0
 *
 *Return: the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int counter;

	current_node = head;
	counter = 0;
	while (current_node != NULL && counter != index)
	{
		counter++;
		current_node = current_node->next;
	}
	if (counter == index)
	{
		return (current_node);
	}
	return (NULL);
}
