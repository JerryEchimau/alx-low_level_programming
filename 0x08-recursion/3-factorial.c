#include "main.h"
/**
 * factorial - returns the factorial of a given number 'n'
 * @n: number to be calculated
 * Return: if n is negative, return -1, otherwise retur factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
