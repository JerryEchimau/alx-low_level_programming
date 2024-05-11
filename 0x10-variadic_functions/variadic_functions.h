#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _printchar(va_list list);
void _printstr(va_list list);
void _printfloat(va_list list);
void _printint(va_list list);


/**
 * struct checker - checks the type of arguments passed
 * @type: type of argument
 * @f: pointer to the right function to print @type
*/
typedef struct checker
{
	char *type;
	void (*f)();
} checker;

#endif /* VARIADIC_FUNCTIONS_H */
