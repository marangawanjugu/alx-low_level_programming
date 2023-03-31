#include "lists.h"
#include <stdio.h>

/**
 *print_list - prints all the elements of a list_t list
 *@h: pointer to first node in the linked list
 *Return: the number of nodes
 *
 */

size_t print_list(const list_t *h)
{
	unsigned int n;

	n = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
