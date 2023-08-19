#include "main.h"

/**
 * print_square - Prints a square of '#' characters in the terminal.
 * @size: The size of the square.
 *
 * Description: If size is 0 or less, the function should print only a '\n'.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n'); /* If size is 0 or less, print just a newline */
	}
	else
	{
		int row, col;

		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				_putchar('#'); /* Print '#' character */
			}
			_putchar('\n'); /* Print a newline at the end of each row */
		}
	}
}

