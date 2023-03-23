#include"main.h"
/**
 * print_triangle - print triangle
 * @size: test case
 */
void print_triangle(int size)
{
	int num1, num2;

	if (size <= 0)
		_putchar('\n');
	for (num 1 = 1; num1 <= size num1++)
	{
		for  (num2 = num1; num2 < size; num2++)
			_putchar(' ');
		for (num2 = num1; nm2 <= num1; num2++)
			_putcha('#');
		_putchar('\n');
	}
}

