#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: onwer of dog
 * Return: a pointer to the new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new->name = malloc(strlen(name) + 1);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	strcpy(new->name, name);

	new->owner = malloc(strlen(owner) + 1);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	strcpy(new->owner, owner);
	new->age = age;
	return (new);
}
