#include "main.h"
/**
 * puts_half - prints second half of a string
 * @str: pointer to the characters in the string
 * Return: 0
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		;
	}

	i++;
	for (i = i / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
