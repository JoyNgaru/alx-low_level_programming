#include <stdio.h>
#include <stdlib.h>

/**
 * main - Alphabets in lower and upper case
 *
 * Return: 0
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	putchar(alphabet);

	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	putchar(alphabet);
	putchar('\n');

	return (0);


}
