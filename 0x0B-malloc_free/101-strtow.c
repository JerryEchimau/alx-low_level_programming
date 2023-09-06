#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * is_space - checks if a character is a space, tab, or newline character
 * @c: character to be checked
 * Return: 0
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - counts the number of words in the input string
 * @str: string to be counted
 * Return: count
 */
int count_words(char *str)
{
	int count = 0;
	int is_word = 0;

	while (*str != '\0')
	{
		if (is_space(*str))
		{
			is_word = 0;
		}
		else if (is_word == 0)
		{
			is_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}
/**
 * **strtow - splits a string into two
 * @str: string to be split
 * Retrun: NULL if failed, pointer to an array of strigs if no error
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
		return (NULL);

	int num_words = count_words(str);
	int i = 0;

	if (num_words == 0)
		return (NULL);
	char **words = (char **)malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
		return (NULL);

	while (*str != '\0')
	{
		if (is_space(*str))
		{
			str++;
		}
		else
		{
			int word_length = 0;
			char *word_start = str;

			while (*str != '\0' && !is_space(*str))
			{
				word_length++;
				str++;
			}
			words[i] = (char *)malloc((word_length + 1) * sizeof(char));
			if (words[i] == NULL)
			{
				for (int j = 0; j < i; j++)
				{
					free(words[j]);
				}
				free(words);
				return (NULL);
			}
			for (int j = 0; j < word_length; j++)
			{
				words[i][j] = word_start[j];
			}
			words[i][word_length] = '\0';
			i++;
		}
	}
	words[i] = NULL;
	return (words);
}
