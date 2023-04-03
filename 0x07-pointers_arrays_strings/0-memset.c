#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: initial address
 * @b: content
 * @n: number of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int value = 0;

	for (; n > 0; value++)
	{
		s[value] = b;
		n--;
	}
	return (s);
}
