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
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = *head;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
	return (prev);
}
