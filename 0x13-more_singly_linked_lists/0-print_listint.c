#include "lists.h"
#include <stdio.h>

/**
 *print_listint - prints all the elements of a linked list
 *@h: points to the first node in a linked list
 *Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *new_node;
	size_t i = 0;

	new_node = h;
	while (new_node != NULL)
	{
		printf("%d\n", new_node->n);
		i++;
		new_node = new_node->next;
	}
	return (i);
}

