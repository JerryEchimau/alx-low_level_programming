#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - returns a pointer to a newly allocated space
 * that contains a copy of the string given as parameter
 * @str: string to be duplicated
 * Return: a pointer to the duplicated string
 * NULL if insufficient memory was found
 */
char *_strdup(char *str)
{
	int length, copy;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	for (length = 0; str[length] != '\0'; length++)
	{
		;
	}
	duplicate = malloc(sizeof(duplicate) * (length + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (copy = 0; copy < length; copy++)
	{
		duplicate[copy] = str[copy];
	}
	duplicate[copy] = '\0';
	return (duplicate);
}
