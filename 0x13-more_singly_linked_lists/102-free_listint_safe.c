#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list and sets the head to NULL
 * @h: Pointer to the head of the linked list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t size;

	size = 0;
	current = *h;

	while (current != NULL)
	{
		size++;
		next = current->next;
		free(current);

		if (current < next)
		{
			*h = NULL;
			return (size);
		}

		current = next;
	}

	*h = NULL;
	return (size);
}
