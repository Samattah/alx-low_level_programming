#include "main.h"
#include <stdio.h>
/**
 * _abs - function to compute absolute value
 * @a: functio parameter
 * Return: a or -a
 */

int _abs(int a)
{
	if (a < 0)
		return (-a);
	else if (a > 0)
		return (a);
	return (0);
}
