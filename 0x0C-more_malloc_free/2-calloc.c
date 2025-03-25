#include "main.h"

/**
 * _calloc - allocates memory for an array, using `malloc`
 * @nmemb: size
 * @size: size
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int total, i;
	void *ptr;
	char *byte;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	byte = (char *)ptr;
	for (i = 0; i < total; i++)
		byte[i] = 0;
	return (ptr);
}
