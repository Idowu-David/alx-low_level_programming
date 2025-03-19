#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area pointer to by s
 * - with a constant byte b
 * @s: string
 * @b: constant byte
 * @n: number of character to use
 * Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n && s[i] != '\0'; i++)
		s[i] = b;
	s[i] = '\0';

	return (s);
}
