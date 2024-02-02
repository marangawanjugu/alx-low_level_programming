#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 *add_node_end - add new node at the end of the linked list
 *@head: points to the first node in the linked list
 *@str: input string
 *
 *Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *duplicate;
	int length;
	list_t *new_node, *last_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	duplicate = strdup(str);/*duplicate the string*/
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (length = 0; str[length] != '\0'; length++)
	new_node->str = duplicate;
	new_node->len = length;
	new_node->next = NULL;/*set the next field of new_node to NULL*/
	if (*head == NULL)/*update the head point to point to the new_node*/
	{
		*head = new_node;
	}
	else
	{
		last_node = *head;
		while (last_node->next != 0)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (*head);
}
