#include "main.h"
/**
 * _strlen - function to return the length of a string
 * @s: string variable
 * Return: 0
 */
int _strlen(char *s)
{
	int counter;

	for (; *s++;)
		counter++;
	return (counter);
}
