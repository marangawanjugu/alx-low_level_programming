#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_list - prints all the elements of a list_t list
 *@h: pointer to the first node in the linked list
 *
 * Return: the number of nodes in a linked list_t list
 *
 */
size_t print_list(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		counter++;
		h = h->next;
	}
	return (counter);
}
