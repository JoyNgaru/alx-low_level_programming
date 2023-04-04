#include "main.h"
/**
 * print_diagsums - display sum of 2  diagonals of a square matrix
 * @a: pointer
 * @size: width*
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int num1, num2, total, sum1 = 0, sum2 = 0;

	for (num1 = 0; num1 < size; num1++)
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
