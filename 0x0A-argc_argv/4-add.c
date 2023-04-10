#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - Give change
 * @argc: how many arguments passed
 * @argv: atual arguments that have been passed
 * Return: 0 if successful, else, 1
 */

int main(int argc, char *argv[])
{
	int total_sum = 0;
	int num1;
	const char *num2;
	const char *symbol;

	for (num1 = 1; num1 < argc; num1++)
	{
		num2 = argv[num1];
		for (symbol = num2; *symbol != '\0'; symbol++)
		{
			if (!isdigit(*symbol))
			{
				printf("Error\n");
				return (1);
			}
		}
		total_sum += atoi(num2);
	}
	return (0);
}
