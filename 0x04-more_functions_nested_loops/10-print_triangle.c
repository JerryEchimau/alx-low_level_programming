#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 * Return: 0
 */
void print_triangle(int size)
{
	int r;
	int s;
	int t;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (r = 1; r <= size; r++)
	{
		for (s = size - r; s > 0; s--)
		{
			_putchar(' ');
		}
		for (t = 1; t <= r; t++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
