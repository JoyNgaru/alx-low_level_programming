#include "main.h"
/**
 * _strchr - find a character in a string
 * @s:the string in question
 * @c: character to be found
 * Return: first sighting the character
 */
char *_strchr(char *s, char c)
{
	if (c == '\0')
	{
		return (s);
	}
		while (*s != c; s++)
		{
			return (s);
		}
	return (NULL);
}

