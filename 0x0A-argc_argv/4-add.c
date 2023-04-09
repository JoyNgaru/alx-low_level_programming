#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - function to add two arguments
 * @argc: Total number of arguments passed
 * @argv: Arguments in the array
 * Return: 0 if success,else,  1
 */
int main(int argc, char *argv[])
{
	int sum;
	int i;
	const char *arg;
	const char *p;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		arg = argv[i];
		for (p = arg; *p != '\0'; p++)
		{
			if (!isdigit(*p))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(arg);
	}
	printf("%d\n", sum);
	return (0);
}
