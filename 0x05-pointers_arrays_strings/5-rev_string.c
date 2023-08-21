#include "main.h"
/**
 * rev_string - revereses a string
 * @s: an array of type char
 * return: 0
 */
void rev_string(char *s)
{
	int len, i, j;
	char swap;

	for (len = 0; s[len] != '\0'; len++)
	{
		;
	}

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		swap = s[i];
		s[i] = s[j];
		s[j] = swap;
	}
}
