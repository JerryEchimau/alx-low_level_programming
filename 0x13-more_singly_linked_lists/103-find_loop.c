#include "lists.h"

/**
 * find_listint_loop - Find the start of a loop in a linked list (if exists)
 * @head: Pointer to the head of the linked list
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there's no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise, *hare;

	if (head == NULL)
		return (NULL);

	tortoise = hare = head;

	while (hare && hare->next)
	{
		tortoise = tortoise->next;       /* Move one step */
		hare = hare->next->next;        /* Move two steps */

		/* If they meet, there is a loop */
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}

			return (tortoise); /* Start of the loop */
		}
	}

	return (NULL); /* No loop found */
}
