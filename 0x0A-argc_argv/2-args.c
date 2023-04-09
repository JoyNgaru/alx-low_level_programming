#include <stdio.h>

/**
 * main - function to output the arguments it receives.
 * @argc: argument counter
 * @argv: arguments passed
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);

	return (0);
}
