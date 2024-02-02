#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "_strlen.c"

/**
 *add_node - add new node at the beginning of the linked list
 *@head: points to the first node in the linked list
 *@str: input string
 *
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);/*duplicate the string*/
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen(new_node->str);
	new_node->next = *head;/*next field of new_node points to current head*/
	*head = new_node;
	return (new_node);
}
