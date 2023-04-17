#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - look for the size of a string
 * @s: string to  check
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int dog_info;

	dog_info = 0;

	while (s[dog_info] != '\0')
	{
		dog_ifo++;
	}

	return (dog_info);
}

/**
 * *_strcpy - copy src info to dest
 * @dest: receives copied details
 * @src: string to be copied
 * Return: dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int dog_info, length = 0;

	while (src[length] != '\0')
	{
		length++;
	}

	for (dog_info = 0; dog_info < length; dog_info++)
	{
		dest[dog_info] = src[dog_info];
	}
	dest[dog_info] = '\0';

	return (dest);
}

/**
 * new_dog - function to make a new dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the do'g_owner 
 * Return: pointer to the new dog (Success), NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_length, owner_length;

	name_length = _strlen(name);
	ownerlength = _strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (namelength + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (owner_length + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
