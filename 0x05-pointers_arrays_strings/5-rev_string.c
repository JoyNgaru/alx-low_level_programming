#include "main.h"
/**
 * rev_string - Reverse a string
 * @s: string in question just like swapping
 * Return: 0
 */
void rev_string(char *s)
{
	int counter = 0, i, j;
	char c;

	while (s[counter] != '\0')
	{
		counter++;
	}
	j = counter - 1;
	for (i = 0; j >= 0 && i < j; j--, i++)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}
