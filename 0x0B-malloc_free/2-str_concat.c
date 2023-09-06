#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string to be concatenated
 * Return: pointer to a new space with contents of s1 and s2
 * Null if insufficient memory
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i, j;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1] != '\0'; len1++)
	{
		;
	}
	for (len2 = 0; s2[len2] != '\0'; len2++)
	{
		;
	}

	conc = malloc(((sizeof(*s1) * len1) + (sizeof(*s2) * len2)) + 1);
	if (conc == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		conc[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		conc[i + j] = s2[j];
	}
	conc[i + j] = '\0';
	return (conc);
}
