#include "dog.h"

/**
 * init_dog - function to set values of our dog
 * @d: pointer to struct that will be used to init
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to owner of the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
