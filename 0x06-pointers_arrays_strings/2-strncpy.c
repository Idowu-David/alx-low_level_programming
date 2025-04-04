#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: pointer to the second string
 * @src: pointer to the first string
 * @n: number of character to copy
 * Return: a pointer to the resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
