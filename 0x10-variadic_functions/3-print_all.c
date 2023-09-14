#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_char - prints a char
 * @args: the va_list containing characters to be printed
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - prints an integer
 * @args: the va_list containing int to be printed
 */
void print_integer(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - prints a float
 * @args: va_list containing float to be printed
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - prints a string
 * @args: va_list containing strings to be printed
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		printf("nil");
	else
		printf("%s", str);
}

/**
 * print_all - prints anything
 * @format: list of type of arguments passed to the function
 * @...: arguments to be printed
 */
void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list args;
	char *separator;

	checks_type sto[] = {
		{ "c", print_char },
		{ "f", print_float },
		{ "s", print_string },
		{ "i", print_integer }
	};

	i = 0;
	separator = "";
	va_start(args, format);
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (sto[j].type[0] == format[i / 4])
		{
			printf("%s", separator);
			sto[j].f(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
