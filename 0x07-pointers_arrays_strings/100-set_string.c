#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: a pointer to a pointer to a char
 * @to: a string to set the pointer to
 */
void set_string(char **s, char *to)
{
	*s = to;
}
