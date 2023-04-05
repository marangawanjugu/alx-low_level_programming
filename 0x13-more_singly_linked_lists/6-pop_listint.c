#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *pop_listint - deletes the head node of a linked list
 *@head:pointer to head pointer
 *Return: returns the head node’s data (n)
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int result;

	if (*head == NULL)
		return (0);
	temp = *head;
	result = temp->n;
	*head = temp->next;
	free(temp);
	return (result);
}
