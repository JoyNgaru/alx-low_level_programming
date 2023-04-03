#include "main.h"
/**
 * _strstr - find the first appearance of needle
 * @needle: what we need to find
 * @haystack: where we need to find the needle
 * Return: location or null
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *dry = haystack;
		char *shiny = needle;


		while (*dry == *shiny && *shiny != '\0')
		{
			dry++;
			shiny++;
		}
		if (*shiny == '\0';)
			return (haystack);
	}
	return (0);
}

