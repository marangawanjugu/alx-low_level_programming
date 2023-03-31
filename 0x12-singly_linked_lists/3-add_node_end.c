#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 *add_node_end - adds a new node at the end of a list
 *@head: head of the linked list
 *@str: string to duplicate
 *Return: the address of the new element, or NULL if it failed
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *ptr;
	int i = 0;

	while (str[i] != '\0')
		i++;
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = new;
		return (new);
	}
}
