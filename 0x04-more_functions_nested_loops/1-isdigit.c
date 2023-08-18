#include "main.h"
/**
 * _isdigit - checks for a digit (0 through 9)
 * Return: 1 if a digit and 0 if not
 */
int _isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return (1);
	return (0);
}
