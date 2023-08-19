#include <stdio.h>

/**
 * main - Entry point for printing combinations of two two-digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int tens1, units1, tens2, units2;

	for (tens1 = 0; tens1 <= 9; tens1++)
	{
		for (units1 = 0; units1 <= 9; units1++)
		{
			for (tens2 = tens1; tens2 <= 9; tens2++)
			{
				for (units2 = (tens2 == tens1) ? units1 + 1 : 0; units2 <= 9; units2++)
				{
					putchar(tens1 + '0');
					putchar(units1 + '0');
					putchar(' ');
					putchar(tens2 + '0');
					putchar(units2 + '0');

					if (!(tens1 == 9 && units1 == 9 && tens2 == 9 && units2 == 9))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

