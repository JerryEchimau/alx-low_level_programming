#include "main.h"
/**
 * print_most_numbers - Prints numbers 0 through 9
 * Description: does not ptint 2 and 4
 * can only use _putchar twice
 */
void print_most_numbers(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		if (x != '2' && x != '4')
		{
			_putchar(x + '0');
		}
	}
	_putchar('\n');
}
