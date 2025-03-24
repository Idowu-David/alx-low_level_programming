#include "main.h"

/**
 * create_array - creates an array of chars, and initialize it with
 * - a specific char.
 * @size: size of the array
 * @c: char
 * Return: a pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *mem;
	unsigned int i;

	if (size == 0)
		return (NULL);
	mem = malloc(sizeof(char) * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		mem[i] = c;
	return (mem);
}
