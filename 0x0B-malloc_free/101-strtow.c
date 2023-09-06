#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * **strtow - splits a string into words
 * @str: string to be split
 * Return: pointer to an array of string
 * or NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);
	char **words = malloc(sizeof(char *) * (1 + strlen(str)));

	if (words == NULL)
		return (NULL);
	int i = 0;
	char *word = strtok(str, " ");

	while (word != NULL)
	{
		words[i] = word;
		i++;
		word = strtok(NULL, " ");
	}
	words[i] = NULL;
	return (words);
}
