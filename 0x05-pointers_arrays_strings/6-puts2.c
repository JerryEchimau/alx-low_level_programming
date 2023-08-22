#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: pointer to the characters
 * Return: 0
 */
void puts2(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; c++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[c]);
		}
	}
	_putchar('\n');
}
