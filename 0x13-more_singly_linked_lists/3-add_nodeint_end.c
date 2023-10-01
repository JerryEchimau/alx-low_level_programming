#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the head of the list.
 * @n: The value to be added to the new node.
 *
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *current_node;

	/* allocating memory to the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* setting the values of the new node */
	new_node->n = n;
	new_node->next = NULL;

	/* making the node as head if the list is empty */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* finding the last node in the list */

	current_node = *head;
	while (current_node->next != NULL)
		current_node = current_node->next;

	/* last node to point to new node */
	current_node->next = new_node;

	return (new_node);
}
