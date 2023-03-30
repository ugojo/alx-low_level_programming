#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	unsigned int count;

	if (h == NULL)
		return (0);

	list_t *prt = NULL;

	prt = h;

	while (prt != NULL)
		if (h->str == NULL)
			printf("[0] (nil)\n");
	printf("[%u] %s\n", h->len, h->str);
	prt = prt->next;
	count++;

	return (count);
}

