#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: This struct describes a dog
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);



#endif
