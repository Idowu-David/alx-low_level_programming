#include "main.h"

/**
 * _strncat - concatenates two strings, uses at most n bytes from src
 * @dest: pointer to the second string
 * @src: pointer to the first string
 * Return: a pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';
	return (dest);
}
