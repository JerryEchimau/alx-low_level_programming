#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum all of its paramenters
 * @n: number of parameters
 * Return: sum, and 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum = sum + va_arg(args, int);

	va_end(args);

	return (sum);
}
