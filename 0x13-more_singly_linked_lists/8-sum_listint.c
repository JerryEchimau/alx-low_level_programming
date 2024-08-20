#include "lists.h"

/**
 * sum_listint - returns sum of all data in listint list
 * @head: pointer to the head of the list
 * 
 * Return: sum of data (n)
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
