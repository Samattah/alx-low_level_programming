#include "main.h"

/**
 * _strlen - function to return length of a string
 * @s: string to return
 * Return: void
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
