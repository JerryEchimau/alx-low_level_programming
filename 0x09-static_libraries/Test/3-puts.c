#include "main.h"
/**
 * _puts - prints a given string, followed by a new line
 * @str: an array of type char
 * return: 0
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
