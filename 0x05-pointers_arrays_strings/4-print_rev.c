#include "main.h"
/**
 * print_rev - prints strings in reverese
 * @s: an array of type char
 * Return: 0
 */
void print_rev(char *s)
{
	int tc; /* total characters in the string */
	int c; /* characters to be reverese */

	for (tc = 0; s[tc] != '\0'; tc++)
	{
		;
	}

	for (c = tc - 1; c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}

