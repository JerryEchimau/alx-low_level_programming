#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index of a linked list.
 * @head: A pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int i;

	/* Return -1 if the list is empty */
	if (*head == NULL)
		return (-1);

	temp = *head;

	/* If the node to be deleted is the first node */
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse the list to find the node at the desired index */
	for (i = 0; i < index && temp != NULL; i++)
	{
		prev = temp;
		temp = temp->next;
	}

	/* Return -1 if the index is beyond the length of the list */
	if (temp == NULL)
		return (-1);

	/* Remove the node at the specified index */
	prev->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = prev;
	free(temp);

	return (1);
}
