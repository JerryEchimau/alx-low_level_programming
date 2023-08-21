#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointerto a string
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		;
	return (i);
}
