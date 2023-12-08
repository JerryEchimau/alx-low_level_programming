#include "lists.h"

/**
 * sum_dlistint - adds all data in a dlistint_t list
 * @head: pointer to the head of the list
 *
 * Return: sum of all the data in the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
