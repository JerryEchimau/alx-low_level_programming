#include "lists.h"

/**
 * print_listint_safe - Print a `listint_t` linked list including mem addresses
 * @head: head of linked list
 * Description: Go through the list only once.
 * Return: number of nodes in list. If fails, exit with status 98.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current;
	size_t count;
	int loop_detected = 0;

	current = head;
	count = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

		if (current <= current->next)
		{
			printf("-> [%p] %d\n", (void *)current->next, current->next->n);
			loop_detected = 1;
			break;
		}

		current = current->next;
	}

	if (loop_detected)
	{
		exit(98);
	}
	return (count);
}
