#include "main.h"
/**
 * print_diagsums - display sums of a square matrix
 * @a: input number
 * @size: size of matrix
 * return: 0
 */
void print_diagsums(int *a, int size)

{
	int num1, num2, sum1, sum2;


	sum1 = 0;
	sum2 = 0;

	for (num1 = 0; num1 <= (size * size); num1 = num1 + size + 1)
		sum1 = sum1 + a[num1];

	for (num2 = size - 1; num2 <= (size * size) - size; num2 = num2 + size - 1)
		num2 = num2 + a[num2];
	printf("%d, %d\n", sum1, sum2);
}
