#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of our program into a string.
 * @ac: The number of arguments passed
 * @av: An array of pointers to the arguments.
 *
 * Return: NULL if ac is 0, av= NULL, or the function fails, else,  a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *new_string;
	int arg, content, count, length;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (content = 0; av[arg][content]; content++)
			length++;
	}
	

	new_string = malloc(sizeof(char) * length + 1);

	if (new_string == NULL)
		return (NULL);

	count = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (content = 0; av[arg][content]; content++)
			new_string[count++] = av[arg][content];

		new_string[count++] = '\n';
	}

	new_string[length] = '\0';

	return (new_string);
}
