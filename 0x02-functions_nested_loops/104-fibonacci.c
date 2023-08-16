#include <stdio.h>


/**
 * main - prints the first 98 fibonaci sequences
 * Return: 0
 */

int main(void)
{
	unsigned int a = 1;
	unsigned int b = 2;
	unsigned int c;

	printf("%u, %u", a, b);
	for (int i = 2; i < 98; i++)
	{
		c = a + b;
		printf(", %u", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
