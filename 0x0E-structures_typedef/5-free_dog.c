#include "dog.h"

/**
 * free_dog - frees dog
 * @d: dog
 * Return: nothing, void
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
