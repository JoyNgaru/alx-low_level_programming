#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - prototype function to output dog info
 * @d: pointer to the dog's details
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{

	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	
	printf("The dog's name is: %s\n", d->name);
	printf("The dog's age is: %f\n", d->age);
	printf("The dog's owner is: %s\n", d->owner);
	}

}
