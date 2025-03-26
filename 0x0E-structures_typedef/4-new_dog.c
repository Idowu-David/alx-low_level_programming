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

	new->name = malloc(_strlen(name) + 1);
	if (new->name == NULL)
	{
		free(new);
		return (NULL);
	}
	_strcpy(new->name, name);

	new->owner = malloc(_strlen(owner) + 1);
	if (new->owner == NULL)
	{
		free(new->name);
		free(new);
		return (NULL);
	}
	_strcpy(new->owner, owner);
	new->age = age;
	return (new);
}

/**
 * _strlen - gets the length of a string
 * @s: string
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * _strcpy - copies a string
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the new string.
 */
char *_strcpy(char *s1, char *s2)
{
	int len = _strlen(s1);
	int i;

	s2 = malloc(sizeof(len));
	if (s2 == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		s2[i] = s1[i];
	s2[i] = '\0';
	return (s2);
}
