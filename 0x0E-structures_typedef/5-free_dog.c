#include "dog.h"

/**
 * free_dog - frees dog
 * @d: dog
 * Return: nothing, void
 */
void free_dog(dog_t *d)
{
	if (d->owner == NULL)
		return;
	if (d->name == NULL)
		return;
	free(d->owner);
	free(d->name);
	free(d);
}
