#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a linked list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *end;
	list_t *temp;
	unsigned int len = 0;

	len = strlen(str);

	end = *head;

	temp = malloc(sizeof(list_t));

	if (!temp)
	{
		return (NULL);
	}
	temp->str = strdup(str);
	temp->len = len;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = temp;

	return (temp);
}
