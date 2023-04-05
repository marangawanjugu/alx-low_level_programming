#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *get_nodeint_at_index - returns the nth node of a linked list
 *@head: points to the first node
 *@index:index of the node
 *Return: the nth node of a linked list
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int cnt;

	current_node = head;
	while (current_node != NULL)
	{
		if (cnt == index)
		{
			cnt++;
		current_node = current_node->next;
		}
		else
			return (NULL);
	}
	return (current_node);
}
