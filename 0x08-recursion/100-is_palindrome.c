#include "main.h"

int check_palindrome(char *s, int start, int end);
int _strlen(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (check_palindrome(s, 0, length - 1));
}

/**
 * _strlen - checks the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(s + 1));
	}
}

/**
 * check_palindrome - performs palindrom checks
 * @s: string ro be checked
 * @start: string index for checking
 * @end: ending f index for checking
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	else if (s[start] != s[end])
	{
		return (0);
	}
	else
	{
		return (check_palindrome(s, start + 1, end - 1));
	}
}
