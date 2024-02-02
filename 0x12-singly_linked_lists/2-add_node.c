#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *add_node - add new node at the beginning of the linked list
 *@head: points to the first node in the linked list
 *@str: input string
 *
 *Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicate;
	int length;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	duplicate = strdup(str);/*duplicate the string*/
	if (duplicate == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (length = 0; str[length] != '\0'; length++)
		;
	new_node->str = duplicate;
	new_node->len = length;
	new_node->next = *head;/*next field of new_node points to current head*/
	*head = new_node;
	return (new_node);
}
