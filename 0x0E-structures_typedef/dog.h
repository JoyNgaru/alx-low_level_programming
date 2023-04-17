#ifndef DOG_H
#define DOG_H

/**
 * struct dog - function of the dogs description
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's Owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/* The protypes*/
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
