#include "lists.h"
#include <stdlib.h>

/**
 *insert_nodeint_at_index - inserts a new node at a given position
 *@head: points to the first node of a linked list
 *@idx: index of the list where the new node should be added
 *@n:integer
 *
 *Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int i;

	if (*head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current_node = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (current_node == NULL || current_node->next == NULL)
		{
			free(new_node);
			return (NULL);
		}
		current_node = current_node->next;
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
