#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at an index of the list
 * @h: A pointer to a pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be added.
 * @n: The data to be added to the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newNode, *temp;
	unsigned int i;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;

	/* If the list is empty or the new node should be added at the beginning */
	if (*h == NULL || idx == 0)
	{
		newNode->prev = NULL;
		newNode->next = *h;
		if (*h != NULL)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}

	/* Traverse the list until reaching index or the end of the list */
	temp = *h;
	for (i = 0; i < idx - 1 && temp != NULL; i++)
		temp = temp->next;

	if (temp == NULL)
	{
		free(newNode);
		return (NULL);
	}

	/* Connect the new node to the list */
	newNode->prev = temp;
	newNode->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = newNode;
	temp->next = newNode;

	return (newNode);
}
