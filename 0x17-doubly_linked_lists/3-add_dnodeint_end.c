#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of the list
 * @head: pointer to the pointer of the head of the list
 * @n: data to be added at the end
 *
 * Return: address of the new element, NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	/* allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* initialize new node at the end */
	new_node->n = n;
	new_node->next = NULL;

	/* set the previous pointer */
	if (*head == NULL) /* if the list is empty */
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else /* list is not empty */
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
	}

	return (new_node);
}
