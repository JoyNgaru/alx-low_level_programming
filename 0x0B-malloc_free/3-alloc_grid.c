#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - a function that returns a pointer to a 2D array of ints.
 * @width: width of array
 * @height: height of array
 * Return: pointer to result
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int row, column;
	int length = width * height;


	if (length <= 0)
		return (NULL);

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (column = 0; column < height; column++)
	{
		array[column] = malloc(sizeof(int) * width);

		if (array[column] == NULL)
		{
			for (; column >= 0; column--)
				free(array[column]);

			free(array);
			return (NULL);
		}
	}

	for (column = 0; column < height; column++)
	{
		for (row = 0; row < width; row++)
			array[row][column] = 0;
	}

	return (array);
}
