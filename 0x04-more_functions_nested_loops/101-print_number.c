#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n) {
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    int divisor = 1;
    int num = n;

    while (num / divisor > 9) {
        divisor *= 10;
    }

    while (divisor > 0) {
        int digit = (n / divisor) % 10;
        _putchar('0' + digit);
        divisor /= 10;
    }
}

