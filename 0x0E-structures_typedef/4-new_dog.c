#include "dog.h"
#include <stdlib.h>
char *_strcpy(char *dest, char *src);
int _strlen(char *s)
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
/**
 * *_strcpy - copies the string source to destination
 * @dest: string to receive copied text
 * @src: string to be copied
 *
 * Return: the pointer to destion
 */


	char *_strcpy(char *dest, char *src)
{
	int dog_info;

	for (dog_info = 0; src[dog_info] != '\0'; dog_info++)
	{
		dest[dog_info] = src[dog_info];
	}

	dest[dog_info++] = '\0';

	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int dog_info;

	dog_info = 0;

	while (s[dog_info] != '\0')
	{
		dog_info++;
	}

	return (dog_info);
}

