#include "lists.h"

/**
 *list_len - length of list_t struct
 *@h: head of linked list
 *Return: the number of elements in a linked list_t list
 *
 */

size_t list_len(const list_t *h)
{
	const list_t *temp;
	size_t n;

	n = 0;
	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		n++;
	}
	return (n);
}
