#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 * return: 0
 */
void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}

