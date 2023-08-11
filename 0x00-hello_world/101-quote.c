#include <stdio.h>
#include <string.h>
#include <unistd.h>
/**
 * main - writes a quote by Dora Korpar
 * Return: 1
 */
int main(void)
{
	char *s = "and that piece of art is useful\"
	- Dora Korpar, 2015-10-19\n";
	write (2, s, 59);
	return (1);
}
