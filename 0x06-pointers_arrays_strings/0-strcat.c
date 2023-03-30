#include "main.h"
/**
 * _strcat - function to join two strings
 * function ensures while src and dest are not at the null byte
 * and equates src to dest to join them 
 * @src: string 1
 * @dest: sring 2
 * Return: pointer to the dest
 */
char *_strcat(char *dest, char *src);
{
	char *s = dest;
	while (*dest != '\0')
	{
		dest ++;
	}
	while (*src != '\0')
	{
		*dest=*src;
		src ++;
		*dest ++;
	}
	*dest= '\0';
	return (s);
}
