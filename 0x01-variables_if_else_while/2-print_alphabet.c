#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function only
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar (c);
	putchar ('\n');

	return (0);
}
