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
	va_list args;
	unsigned int i = 0, j;
	char *separator = "";
	char *str_format = (char *)format;

	va_start(args, format);

	while (format && str_format[i])
	{
		j = 0;
		while (j < 4 && str_format[i] != "cifs"[j])
			j++;

		if (str_format[i] == '\0')
			break;

		printf("%s", separator);

		switch (str_format[i])
		{
			case 'c':
				print_char(args);
				break;
			case 'i':
				print_integer(args);
				break;
			case 'f':
				print_float(args);
				break;
			case 's':
				print_string(args);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}
