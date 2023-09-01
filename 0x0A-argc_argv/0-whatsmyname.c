#include <stdio.h>
/**
 * main - prints its own name
 * @argc: arguments count
 * @argv: arguemnt vector as string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
