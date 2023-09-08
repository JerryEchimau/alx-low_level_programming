#include "main.h"
#include <stdlib.h>
/**
 * *_realloc - reallocates a memory bloc
 * @ptr: pointer to the memory previously allocated through malloc(old_size)
 * @old_size: size of allocated memory for ptr
 * @new_size: new size of the new memory bloc
 * Return: new_ptr or NULL if error
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i;

	/* if ptr is NULL, treate it as equivalent to malloc(new_size) */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	/* if new size is 0, treat it as equivalent to free(ptr) */
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	/* allocate memory for the enew block */
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	/* copy the contents of the old block to the new block */
	old_ptr = ptr;
	for (i = 0; i < old_size && i < new_size; i++)
		new_ptr[i] = old_ptr[i];

	/* free the old block */
	free(ptr);

	return (new_ptr);
}
