#include "main.h"
#include <stdlib.h>
/**
 * *array_range - creates an array of integers
 * description: orders from minimum to maximum
 * @min: minimum number
 * @max: max number
 * Return: pointer to the array, Null if malloc fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min;
		min++;
	}
	return (arr);
}
