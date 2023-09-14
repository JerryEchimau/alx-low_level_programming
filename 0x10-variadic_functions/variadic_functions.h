#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_char(va_list args);
void print_integer(va_list args);
void print_float(va_list args);
void print_string(va_list args);
void print_all(const char * const format, ...);

typedef struct checks_type
{
	char *type;
	void (*f)();
} checks_type;

#endif /* VARIADIC_FUNCTIONS */
