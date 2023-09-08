#include "main.h"
#include <stdlib.h>
/**
 * isNumeric - checks if a string consists of digits
 * @str: string
 * Return: 0 if not a digit and 1 if all characters are digits
 */
int isNumeric(const char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/**
 * multiply - multiplies two numbers
 * @num1: first number
 * @num2: second number
 * Return: 0
 */
long multiply(long num1, long num2)
{
	return (num1 * num2);
}

/**
 * printNumber - print numbers using _putchar
 * @num: number to be printed
 */
void printNumbers(long num)
{
	char buffer[20];
	int length = 0, i;

	if (num == 0)
	{
		_putchar('0');
		return;
	}

	if (num < 0)
	{
		_putchar('-');
		num = -num;
	}
	while (num > 0)
	{
		buffer[length++] = (num % 10) + '0';
		num /= 10;
	}
	for (i = length - 1; i >= 0; i--)
		_putchar(buffer[i]);
}

/**
 * validateInput - validates the error messages
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful and 98 if error
 */
int validateInput(int argc, char *argv[])
{
	long num1, num2;

	/* checks that there are only two inputs */
	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	/* checks if num1 and num2 are digits */
	if (!isNumeric(argv[1]) || !isNumeric(argv[2]))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	/* convert command line arguments to long integers */
	num1 = atol(argv[1]);
	num2 = atol(argv[2]);
	/* check if num1 and num2 are positive numbers */
	if (num1 <= 0 || num2 <= 0)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (98);
	}
	return (0);
}

/**
 * main - takes in command line arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if successful and 98 if error
 */
int main(int argc, char *argv[])
{
	long result;
	long num1;
	long num2;

	if (validateInput(argc, argv) != 0)
		return (98);

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);

	/* final calculation and printing the results */
	result = multiply(num1, num2);
	printNumbers(result);
	_putchar('\n');

	return (0);
}
