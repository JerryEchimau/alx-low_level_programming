#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: pointer to a pointer to the head node
 * 
 * Return: data of the head node
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;
	*head = (*head)->next;
	free(temp);

	return (data);
}
