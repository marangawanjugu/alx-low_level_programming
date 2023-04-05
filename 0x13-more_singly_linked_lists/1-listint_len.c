#include "lists.h"
#include <stdio.h>

/**
 *listint_len - returns the number of elements in a linked list
 *@h: points to the first node in a linked list
 *Return: number of elements in a linked list
 *
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *new_node;
	size_t x = 0;

	new_node = h;
	while (new_node != NULL)
	{
		new_node = new_node->next;
		x++;
	}
	return (x);
}

