#include "main.h"

/**
 * print_line - Prints a straight line of underscores in the terminal.
 * @n: The number of times the character '_' should be printed.
 *
 * Return: If n is 0 or less, the function should only print '\n'.
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
