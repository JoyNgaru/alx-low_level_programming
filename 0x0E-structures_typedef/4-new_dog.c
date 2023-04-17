#include "dog.h"
#include <stdlib.h>
/**
 *new_dog- creates a new dog struct
 *@name: dog's name
 *@age: dog's age
 *@owner: dog's owner
 *Return: a new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int dog_det, age_det, owner_det;
	dog_t *dog_ptr;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (dog_det = 0; name[dog_det]; dog_det++)
		;
	dog_det++;
	dog->name = malloc(dog_det * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (owner_det = 0; owner_det < dog_det; owner_det++)
		dog->name[owner_det] = name[owner_det];
	dog->age = age;
	for (age_det = 0; owner[age_det]; age_det++)
		;
	age_det++;
	dog->owner = malloc(age_det * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (owner_det = 0; owner_det < age_det; owner_det++)
		dog->owner[owner_det] = owner[owner_det];
	return (dog);
}
