#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-'); /* Print a minus sign for negative numbers */
		n = -n;        /* Make the number positive */
	}

	if (n / 10 != 0)
		print_number(n / 10); /* Recursive call to print the digits */

	_putchar(n % 10 + '0'); /* Print the last digit as a character */
}

