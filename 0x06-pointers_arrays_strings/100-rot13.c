#include "main.h"
/**
 * *rot13 - encodes a string using rot 13
 * @s: source string
 * Return: string 's' rotated
 */
char *rot13(char *s)
{
	int i;

	char rot13_lower[] = "nopqrstuvwxyzabcdefghijklm";
	char rot13_upper[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))
		{
			s[i] = (s[i] - 65 > 25) ?
				rot13_lower[s[i] - 97] : rot13_upper[s[i] - 65];
		}
	}
	return (s);
}
