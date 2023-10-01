#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements of a `listint_t` list
 * @h: linked list head
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_count = 1;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
