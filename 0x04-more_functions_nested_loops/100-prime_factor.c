#include <stdio.h>
#include <math.h>

/**
 * main - Entry point for finding the largest prime factor
 *
 * Return: Always 0
 */
int main(void)
{
	long number = 612852475143;
	long largestPrime = -1;
	int factor = 2;

	while (number != 1)
	{
		if (number % factor == 0)
		{
			largestPrime = factor;
			number /= factor;
		}
		else
		{
			factor++;
		}
	}
	printf("%ld\n", largestPrime);
	return (0);
}
