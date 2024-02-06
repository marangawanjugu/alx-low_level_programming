#include "lists.h"
#include <stdlib.h>

/**
 *sum_listint - sum of all the elements in the linked list
 *@head: points to the first node in a linked list
 *
 *Return: the sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
	listint_t *current_node;
	int sum;

	current_node = head;
	sum = 0;
	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}
	return (sum);
}
