#include "main.h"

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size of old memory
 * @new_size: size of new memory
 * Return: a pointer to the new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;
	char *chr, *chr2;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
		free(ptr);
	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	if (ptr == NULL)
		return (new);
	chr = (char *)ptr;
	chr2 = (char *)new;
	for (i = 0; i < (old_size < new_size ? old_size : new_size); i++)
		chr2[i] = chr[i];
	free(ptr);
	return (new);
}
