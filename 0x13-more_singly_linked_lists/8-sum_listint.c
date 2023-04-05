#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *sum_listint - returns the sum of all the data (n) of a linked list
 *@head: pointer to the first node in a linked list
 *Return:the sum of all the data (n)
 *
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int total = 0;

	temp = head;
	for (; temp != NULL; temp = temp->next)
	{
		total = total + temp->n;
	}
	return (total);
}
