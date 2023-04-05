#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_listint2 - frees a listint_t list
 *@head: pointer to a head pointer
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
