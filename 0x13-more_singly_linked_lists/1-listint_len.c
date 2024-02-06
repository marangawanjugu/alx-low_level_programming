#include "lists.h"
#include <stdlib.h>

/**
 *listint_len - returns the number of elements in a linked listint_t list
 *@h: points to the first node in the linked list
 *
 * Return: returns the number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
