#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * main - function to add two arguments
 * @argc: Total number of arguments passed
 * @argv: Arguments in the array
 * Return: 0 if success,else, 1
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int num;
	const char *num2;
	const char *symbol;

	for (num = 1; num < argc; num++)
	{
		num2 = argv[num];
		for (symbol = num2; *symbol != '\0'; symbol++)
		{
			if (!isdigit(*symbol))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(num2);
	}
	printf("%d\n", sum);
	return (0);
}
