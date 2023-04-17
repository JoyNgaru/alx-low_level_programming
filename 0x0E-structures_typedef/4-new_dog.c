#include "dog.h"
#include <stdlib.h>
char *_strcpy(char *dest, char *src);
/**
 * new_dog - Initializes the details of a new dog
 * @name: Pointer to dog name
 * @age: dog age
 * @owner: Pointer to dog owner
 * Return: pointer to dog structure if true, else NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(*dog));
	if (dog == NULL || !(age))
	{
		return (NULL);
	}
	_strcpy(dog->name, name);
	dog->age = age;
	_strcpy(dog->owner, owner);

	return (dog);

	char *_strcpy(char *dest, char *src)
{
	int dog_info;

	for (dog_inf = 0; src[dog_info] != '\0'; dog_info++)
	{
		dest[dog_info] = src[dog_info];
	}

	dest[dog_info++] = '\0';

	return (dest);
}
