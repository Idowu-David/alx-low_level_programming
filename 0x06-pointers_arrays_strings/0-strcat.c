#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to the second string
 * @src: pointer to the first string
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
