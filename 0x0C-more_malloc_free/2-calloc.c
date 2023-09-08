#include "main.h"
#include <stdlib.h>
/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb: elements
 * @size: size of elements
 * Return: Null if it fails or nmemb and size is 0
 * pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < total_size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
