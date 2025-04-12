#include "main.h"

/**
 * _memcpy - copies memory area (n bytes) from src to dest
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (dest);
}
