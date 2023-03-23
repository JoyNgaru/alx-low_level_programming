#include <stdio.h>
#include <math.h>
/**
 * main - prints the largest prime factor of 612852475143
 * Return: 0
 **/

int main(void)
{
	unsigned long int i, num = 612852475143;

	for (i = 3; i < sqrt(n); i = i + 2)
	{
		while ((num % i == 0) && (num != i))
			num = num / i;
	}
	printf("%lu\n", n);
	return (0);
}
