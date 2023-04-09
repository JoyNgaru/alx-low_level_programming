#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "main.h"
/**
 * main - function that outputs the sum of digits
 * @argc: argument counter
 * @argv: arguments being passed
 * Return: 0
 */
int main(int argc, char **argv)
{
	int digit1, digit2, sum = 0;
	char *symbol;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	if (*symbol)
	{
		printf("Error\n");
			return (1);
	}

	for ( digit1 = 1; argv[digit1]; digit1++)
	{
		digit2 = atoi(argv[digit1], &symbol, 10);
	}
		else
		{
			sum = sum +  n;
		}

	printf("%d\n", sum);

	return (0);
}
