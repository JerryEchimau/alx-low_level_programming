#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: pointer to a binary string
 *
 * Return: the converted number
 * 	0 if there is an invalid char or b is null
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			result = (result * 2) + (*b - '0');
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (result);
}
