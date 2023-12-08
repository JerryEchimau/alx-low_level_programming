#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beggining of a dlistint_t list
 * @head: pointer to the pointer of the head of the list
 * @n: integer to be added
 *
 * Return: address of the new element, NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* allocate memory */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* initialize with the data */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/* previous node to point to new node */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* new head to point to new node */
	*head = new_node;

	return (new_node);
}
