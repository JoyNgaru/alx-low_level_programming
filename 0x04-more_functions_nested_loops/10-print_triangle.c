#include "main.h"

/**
 *  print_triangle - print out a triangle
  *@size: size of the triangle
 */

void print_triangle(int size)
{
	int height, length, base;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 1; height <= size; height++)
		{
			for (base = size - height; base >= 1; base--)
			{
				_putchar(' ');
			}
			for (length = 1; length <= height; length++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
