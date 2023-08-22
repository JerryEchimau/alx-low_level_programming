#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point to generate a valid random password
 * Return: 0
 */
int main(void)
{
	int random;
	int c;
	int t;

	srand(time(NULL));
	for (c = 0, t = 2772; t > 122; c++)
	{
		random = (rand() % 125) + 1;
		printf("%c", random);
		t -= random;
	}
	printf("%c", t);

	return (0);
}
