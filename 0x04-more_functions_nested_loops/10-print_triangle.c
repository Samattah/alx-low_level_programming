#include "main.h"

/**
 * print_triangle - Prints a triangle of '#' characters in the terminal.
 * @size: The size of the triangle.
 *
 * Description: If size is 0 or less, the function should print only a '\n'.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n'); /* If size is 0 or less, print just a newline */
	}
	else
	{
		int row, col;

		for (row = 1; row <= size; row++)
		{
			for (col = 1; col <= size - row; col++)
			{
				_putchar(' '); /* Print space for indentation */
			}
			for (col = 1; col <= row; col++)
			{
				_putchar('#'); /* Print '#' character */
			}
			_putchar('\n'); /* Print a newline at the end of each row */
		}
	}
}

