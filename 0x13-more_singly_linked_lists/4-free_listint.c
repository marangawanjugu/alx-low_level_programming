#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_listint -  frees a listint_t list
 *@head: pointer to first node of a linked list
 *
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(temp);
		temp = head;
	}
}
