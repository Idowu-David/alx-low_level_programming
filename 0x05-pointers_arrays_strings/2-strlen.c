#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	while (s[i])
		i++;
	return (i);
}
