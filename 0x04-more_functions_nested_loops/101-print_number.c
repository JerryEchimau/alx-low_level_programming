#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: number to be printed
 *
 */

void print_number(int n)
{
	int divisor = 1;

	/* handle zero */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* negative numbers */
	if (n < 0)
	{
		_putchar('-');
		n = (-n);
	}

	/* get the number of digits using divisor */
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	/* print each digit */
	while (divisor != 0)
	{
		_putchar((n / divisor) % 10 + '0');
		divisor /= 10;
	}
}
