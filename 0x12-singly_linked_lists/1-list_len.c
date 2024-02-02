#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *list_len - returns the number of elements in a linked list_t list
 *@h: pointer to the first node in the linked list
 *
 * Return: the number of elements in a linked list_t list
 *
 */
size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
