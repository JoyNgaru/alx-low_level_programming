#include "main.h"
/**
 * print_diagsums - display sums of a square matrix
 * @a: input number
 * @size: size of matrix
 * return: 0
 */
void print_diagsums(int *a, int size)
{
	int num1, num2, total, sum1, sum2;


	sum1 = 0;
	sum2 = 0;


	for (num1 = 0; num1 < size; num1++;)
	{
	total = (num1 * size) + num1;
	sum1 += *(a + total);
	}
	for (num2 = 0; num2 < size; num2++)
	{
		total = (num2 * size) + (size - 1 - num2);
		sum2 += *(a + total);
	}
	printf("%i, %i\n", sum1, sum2);
}
