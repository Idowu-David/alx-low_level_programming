#include "main.h"

/**
 * _memcpy - copies memory area (n bytes) from src to dest
 * @dest: destination
 * @src: source
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n; j++, i++)
		dest[i] = src[j];
	return (dest);
}
