#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Give change
 * @argc: how many arguments passed
 * @argv: atual arguments that have been passed
 * Return: 0 if successful, else, 1
 */
int main(int argc, char *argv[])
{
	int num, j, change;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	change = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= cents[j])
		{
			change++;
			num -= cents[j];
		}
	}

	printf("%d\n", change);
	return (0);
}








