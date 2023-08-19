#include "main.h"

/**
 * print_diagonal - Prints a diagonal line of backslashes in the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * Return: If n is 0 or less, the function should only print a '\n'.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n'); /* If n is 0 or less, print just a newline */
	}
	else
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			/* Print spaces to align the backslashes */
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}

			_putchar('\\'); /* Print a backslash */
			_putchar('\n'); /* Print a newline at the end of each line */
		}
	}
}

