#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all elements of a `listint_t` list
 * @h: linked list head
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *c;
	size_t node_count;

	for (c = h, node_count = 0; c != NULL; node_count++, c = c->next)
		printf("%d\n", c->n);

	return (node_count);
}
