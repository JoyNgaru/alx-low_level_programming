#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num;
	char *test;

	num = 1;
	test = (char *)&num;
	return ((int)test[0]);
}
