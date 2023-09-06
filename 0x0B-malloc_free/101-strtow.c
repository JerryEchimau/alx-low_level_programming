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
	char **words;
	char *word;
	int i, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			count++;
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);
	i = 0;
	word = strtok(str, " ");
	while (word != NULL)
	{
		words[i++] = word;
		word = strtok(NULL, " ");
	}
	words[i] = NULL;
	return (words);
}
