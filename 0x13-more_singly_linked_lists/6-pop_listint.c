#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: a pointer to a pointer to the first node in the list
 *
 *Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	listint_t *delete_node;
	int data;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	delete_node = *head;
	*head = (*head)->next;
	free(delete_node);
	return (data);
}
