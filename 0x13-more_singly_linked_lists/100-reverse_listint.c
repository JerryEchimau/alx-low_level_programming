#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: a pointer to a pointer to the head of the list
 *
 * Details: no more than one loop
 * no malloc, free, or arrays
 * declare a mx of two functions
 *
 * Return: a pointer to the first node of the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ahead, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);

	behind = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = ahead;
	}

	(*head)->next = behind;

	return (*head);
}
